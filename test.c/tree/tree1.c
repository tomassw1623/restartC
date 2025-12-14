#include <stdio.h>

void print1(int n) {
    for (int i = 1; i <= n; i++) {

        // j는 "이 줄에서 몇 개의 i를 찍었는가?"를 세는 역할입니다.
        // j < i 라는 뜻은
        //   1줄일 때는 i 1개
        //   2줄일 때는 i 2개
        //   3줄일 때는 i 3개 ... 이런 식입니다.
        for (int j = 0; j < i; j++) {
            printf("i");   // i 글자 한 개 출력
        }

        // 한 줄이 끝났으니 줄을 바꿉니다.
        printf("\n");
    }
}

int main(void) {
    // 5줄짜리 계단 모양을 그립니다.
    print1(5);
    return 0;   // 프로그램 끝
}
