#include <stdio.h>

int find_index(const int *arr, int n, int key) {
    // key를 찾으면 그 위치(인덱스)를 돌려준다.
    // 못 찾으면 -1을 돌려준다.

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main(void) {
    int arr[8];
    int key;

    printf("정수 8개 입력: ");
    for (int i = 0; i < 8; i++) scanf("%d", &arr[i]);

    printf("찾을 값 입력: ");
    scanf("%d", &key);

    printf("%d\n", find_index(arr, 8, key));
    return 0;
}
