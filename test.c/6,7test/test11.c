#include <stdio.h>

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                printf(" ");
            } else {
                printf("i");
            }
        }
        printf("\n");
    }
}


int main(void) {
    printStars(5);
    return 0;
}
