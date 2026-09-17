#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int total_groups = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < total_groups; i++) {
        // Print the vertical stars for the current group
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }

        // Print an empty separating line between groups
        if (i < total_groups - 1) {
            printf("\n");
        }
    }

    return 0;
}