#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

  iiiiiiiii
   iiiiiii
    iiiii
     iii
      i

  → 5번 트리를 위아래로 뒤집은 모양입니다.
  → i 개수는 9, 7, 5, 3, 1로 줄어듭니다.
*/

void print6(int n) {
    // i는 "몇 번째 줄인가?" 대신
    // "이 줄에 찍을 별의 단계" 역할을 합니다.
    // n에서 1까지 줄어듭니다.
    for (int i = n; i >= 1; i--) {

        // stars : 이 줄에 찍을 i 개수
        //  i=5 → 2*5-1 = 9개
        //  i=4 → 7개
        //  i=3 → 5개 ...
        int stars = 2 * i - 1;

        // spaces : 왼쪽 공백
        // 위쪽 줄일수록 공백이 적고,
        // 아래 줄일수록 공백이 많습니다.
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
    // 높이 5짜리 역삼각형
    print6(5);
    return 0;
}
