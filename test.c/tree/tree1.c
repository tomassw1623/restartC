#include <stdio.h>

/*
  이 프로그램은 이런 모양을 출력합니다.

  i
  ii
  iii
  iiii
  iiiii

  → 아랫줄로 내려갈수록 'i' 글자가 하나씩 늘어나는 계단 모양입니다.
*/

// n : 몇 줄을 그릴지 정하는 숫자
void print1(int n) {
    // i는 "몇 번째 줄인가?"를 나타냅니다.
/*************  ✨ Windsurf Command ⭐  *************/
/**
 @brief Main function to test print1 function
 *
 * This function prints the first five lines of the
 * following pattern:
 * i
 * ii
 * iii
 * iiii
 * iiiii
 * and then returns.
 * @return 0 on success
 */
/*******  f9b2bb99-ca27-4606-a957-86ae62b1ec64  *******/    // i = 1이면 첫 번째 줄, i = 2면 두 번째 줄 ...
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
