#include <stdio.h>

int main(void) {
    // [하는 일]
    // a 배열의 내용을 b 배열로 복사한다.

    int a[4] = {1, 2, 3, 4};
    int b[4];

    for (int i = 0; i < 4; i++) {
        b[i] = a[i]; // 같은 인덱스로 복사하면 된다.
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
