#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

      i
     iii
    iiiii
   iiiiiii
  iiiiiiiii

  → 가운데 정렬된 삼각형(트리)입니다.
  → 위에서부터 i 개수가 1, 3, 5, 7, 9 ... 이렇게 홀수로 늘어납니다.
*/

void print5(int n) {
    // i는 "몇 번째 줄인가?"를 나타냅니다. (1 ~ n)
    for (int i = 1; i <= n; i++) {

        // stars : 이 줄에 찍을 i의 개수
        // 공식: 2 * i - 1
        //  i=1 → 1개
        //  i=2 → 3개
        //  i=3 → 5개 ...
        int stars = 2 * i - 1;

        // spaces : 왼쪽에 찍을 공백 개수
        // 줄이 위에 있을수록 공백이 많고,
        // 아래로 내려갈수록 공백이 줄어듭니다.
        int spaces = n - i;

        // 왼쪽 공백 찍기
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // i 글자를 stars 개수만큼 찍기
        for (int j = 0; j < stars; j++) {
            printf("i");
        }

        // 줄 바꿈
        printf("\n");
    }
}

int main(void) {
    // 높이 5짜리 트리 모양
    print5(5);
    return 0;
}
