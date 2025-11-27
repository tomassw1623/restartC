// 문제 4. 배열 최댓값: maxArray(int arr[], int size)
#include <stdio.h>

int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(void) {
    int a[5] = {3, 10, 7, 2, 9};
    int m = maxArray(a, 5);
    printf("%d\n", m);
    return 0;
}
