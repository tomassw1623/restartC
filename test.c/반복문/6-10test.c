// 문제 10. 1~100 출력, 4는 출력하지 않기 (continue)
#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 10; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d", i);
  }
  return 0;
}