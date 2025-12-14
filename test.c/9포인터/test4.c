#include <stdio.h>

int main(void) {
    // [하는 일]
    // 배열에서 포인터 연산이 어떻게 되는지 확인한다.

    int arr[3] = {10, 20, 30};

    // arr은 "첫 칸의 주소"처럼 동작한다.
    // arr[1] == *(arr + 1)
    printf("arr[1]=%d\n", arr[1]);
    printf("*(arr+1)=%d\n", *(arr + 1));

    return 0;
}
