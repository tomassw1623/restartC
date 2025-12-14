#include <stdio.h>

int find_max(const int *arr, int n) {
    // 첫 값을 기준으로 시작해야 모든 입력에서 안전하다.
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

int main(void) {
    int arr[6];

    printf("정수 6개 입력: ");
    for (int i = 0; i < 6; i++) scanf("%d", &arr[i]);

    printf("max=%d\n", find_max(arr, 6));
    return 0;
}
