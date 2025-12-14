#include <stdio.h>

void input_ints(int *arr, int n) {
    // [왜 포인터로 받나?]
    // 배열을 함수로 넘기면 "첫 칸 주소"가 넘어온다.
    // 그래서 int*로 받는다.

    for (int i = 0; i < n; i++) {
        // arr[i] 칸에 입력 저장
        scanf("%d", &arr[i]);
    }
}

int main(void) {
    int arr[5];

    printf("정수 5개 입력: ");
    input_ints(arr, 5); // arr = 첫 칸 주소

    printf("입력 완료\n");
    return 0;
}
