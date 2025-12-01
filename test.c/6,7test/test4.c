// 문제 4. 배열 최댓값: maxArray(int arr[], int size)
#include <stdio.h>

int maxArray(int arr[], int size) {
    int max = arr[0];                   // 처음엔 첫 번째 값을 가장 큰 값으로 설정
    for (int i = 1; i < size; i++) {    // 두 번째 값부터 비교
        if (arr[i] > max)               // max를 그 값으로 바꿈
            max = arr[i];
    }
    return max;                         // 최종 가장 큰 값 반환
}

int main(void) {
    int a[5] = {3, 10, 7, 2, 9};
    int m = maxArray(a, 5);             // 최댓값 찾기
    printf("%d\n", m);
    return 0;
}
