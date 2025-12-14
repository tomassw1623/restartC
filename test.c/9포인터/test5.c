#include <stdio.h>

int main(void) {
    // [하는 일]
    // 포인터를 사용해 배열에 입력을 저장하고 출력한다.

    int arr[4];
    int *p = arr; // arr = &arr[0] 와 같은 느낌 (첫 칸 주소)

    printf("정수 4개 입력: ");
    for (int i = 0; i < 4; i++) {
        // p+i는 i번째 칸의 주소
        scanf("%d", p + i);
    }

    for (int i = 0; i < 4; i++) {
        // *(p+i)는 i번째 칸의 값
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
