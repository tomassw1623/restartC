#include <stdio.h>

void min_max(const int *arr, int n, int *minOut, int *maxOut) {
    // 결과가 2개라서 return 1개로 부족하다.
    // 그래서 주소(minOut, maxOut)를 받아서 그곳에 결과를 써준다.

    int mn = arr[0];
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }

    *minOut = mn; // "밖(main)"에 결과 전달
    *maxOut = mx;
}

int main(void) {
    int arr[5];
    int mn, mx;

    printf("정수 5개 입력: ");
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    min_max(arr, 5, &mn, &mx);

    printf("min=%d max=%d\n", mn, mx);
    return 0;
}
