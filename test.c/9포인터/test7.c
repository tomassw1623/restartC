#include <stdio.h>

int main(void) {
    // [하는 일]
    // 포인터를 이용해 배열 합을 계산한다.

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *(p + i); // i번째 값을 꺼내서 더함
    }

    printf("sum=%d\n", sum);
    return 0;
}
