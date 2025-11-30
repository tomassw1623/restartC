#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

      i
     ii
    iii
   iiii
  iiiii

  → 왼쪽에 빈칸(공백)이 있고, 오른쪽에 i가 계단처럼 쌓입니다.
*/

void print2(int n) {
    // i는 "몇 번째 줄인가?"입니다. (1줄~n줄)
    for (int i = 1; i <= n; i++) {

        // 먼저 "공백"을 찍습니다.
        // 맨 위 줄일수록 공백이 많고,
        // 아래 줄로 갈수록 공백이 줄어듭니다.
        //
        // 예) n=5일 때
        //  1줄: 공백 4개, i 1개
        //  2줄: 공백 3개, i 2개
        for (int j = 0; j < n - i; j++) {
            printf(" ");   // 빈칸 한 칸 출력
        }

        // 이제 i 글자를 찍습니다.
        // 현재 줄 번호(i)만큼 찍습니다.
        for (int j = 0; j < i; j++) {
            printf("i");
        }

        // 한 줄이 끝났으니 줄 바꿈
        printf("\n");
    }
}

int main(void) {
    // 5줄짜리 오른쪽 계단 모양
    print2(5);
    return 0;
}
