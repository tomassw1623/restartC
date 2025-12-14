#include <stdio.h>

int sum_array(const int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum; // 결과 1개는 return으로
}

double avg_array(const int *arr, int n) {
    // 평균은 소수점이 필요할 수 있으니 double
    return (double)sum_array(arr, n) / n;
}

int main(void) {
    int arr[5];

    printf("정수 5개 입력: ");
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    printf("합=%d 평균=%.2f\n", sum_array(arr, 5), avg_array(arr, 5));
    return 0;
}
