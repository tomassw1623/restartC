#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

  iiiii
   iiii
    iii
     ii
      i

  → 위로 갈수록 i가 많고, 아래로 갈수록 i가 적습니다.
  → 대신 아래로 갈수록 왼쪽 공백이 늘어나서 오른쪽에 붙습니다.
*/

void print4(int n) {
    // i는 "이 줄에 찍을 i 개수"입니다. (n에서 1까지 줄어듦)
    for (int i = n; i >= 1; i--) {

        // 왼쪽 공백을 먼저 찍습니다.
        // 위쪽일수록 공백이 적고,
        // 아래쪽일수록 공백이 많습니다.
        //
        // n=5일 때
        // i=5 → 공백 0개
        // i=4 → 공백 1개
        // i=3 → 공백 2개 ...
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // 이제 i 글자를 i개 찍습니다.
        for (int j = 0; j < i; j++) {
            printf("i");
        }

        // 줄 바꿈
        printf("\n");
    }
}

int main(void) {
    // 오른쪽으로 붙은 거꾸로 계단
    print4(5);
    return 0;
}
