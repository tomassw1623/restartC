#include <stdio.h>

void swap(int *x, int *y) {
    // [핵심]
    // 함수 밖(main)의 값을 바꾸려면 "주소"를 받아야 한다.
    // x, y는 값이 아니라 주소를 받는다.
    int temp = *x; // x가 가리키는 값
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 10, b = 20;

    // &a, &b는 각각 a, b의 주소
    swap(&a, &b);

    printf("a=%d b=%d\n", a, b);
    return 0;
}
