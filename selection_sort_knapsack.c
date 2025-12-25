#include <stdio.h>

struct Item {
    int weight;
    int costPrice;
    float profit;
    float profitByWeight;
};

int main() {
    int n, M, SP;
    FILE *input, *output;
    input = fopen("input.txt", "r");
    output = fopen("sorted_items.txt", "w");

    if (input == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    fscanf(input, "n %d", &n);
    fscanf(input, "\nM %d", &M);
    fscanf(input, "\nSP %d", &SP);

    struct Item items[n];
    printf("Reading %d items...\n", n);

    // Read item weights and cost prices
    for (int i = 0; i < n; i++) {
        fscanf(input, "%d %d", &items[i].weight, &items[i].costPrice);
        items[i].profit = SP - items[i].costPrice;
        items[i].profitByWeight = items[i].profit / items[i].weight;
    }

    fclose(input);

    // Selection Sort based on profit/weight (descending)
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (items[j].profitByWeight > items[maxIndex].profitByWeight) {
                maxIndex = j;
            }
        }
        // Swap
        struct Item temp = items[i];
        items[i] = items[maxIndex];
        items[maxIndex] = temp;
    }

    // Print sorted data to file
    fprintf(output, "Sorted Items (by Profit/Weight):\n");
    fprintf(output, "Weight\tCostPrice\tProfit\tProfit/Weight\n");
    for (int i = 0; i < n; i++) {
        fprintf(output, "%d\t%d\t\t%.2f\t%.2f\n", 
                items[i].weight, items[i].costPrice, 
                items[i].profit, items[i].profitByWeight);
    }

    fclose(output);

    printf("Sorted data written to sorted_items.txt\n");
    return 0;
}
