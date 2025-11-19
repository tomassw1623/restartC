// 문제 5. 1부터 50까지의 합(while)
#include <stdio.h>

int main(void) {
  int i = 1;
  int sum = 0;

  while (i <= 50){
    sum +=i;
    i++;
  }

  printf("합: %d\n", sum);
  return 0;
}