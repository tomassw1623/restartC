// 문제 6. 1~100 중 3의 배수만 더한 합
#include <stdio.h>

int main(void) {
  int sum = 0;

  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      sum +=i;
    }
  }

  printf("합: %d\n", sum);
  return 0;
}