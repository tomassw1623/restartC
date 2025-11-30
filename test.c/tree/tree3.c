#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

  iiiii
  iiii
  iii
  ii
  i

  → 위에는 i가 5개, 그 다음 줄은 4개, 그다음은 3개...
  → 점점 줄어드는 계단 모양입니다.
*/

void print3(int n) {
    // i는 "이 줄에 찍을 i 개수"입니다.
    // n에서 1까지 줄어듭니다.
    for (int i = n; i >= 1; i--) {

        // i개만큼 i 글자를 찍습니다.
        for (int j = 0; j < i; j++) {
            printf("i");
        }

        // 줄이 끝났으니 줄 바꿈
        printf("\n");
    }
}

int main(void) {
    // 5에서 1까지 줄어드는 계단 모양
    print3(5);
    return 0;
}
