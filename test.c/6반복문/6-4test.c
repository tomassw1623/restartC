// 문제 4. 구구단 5둔 출력(for)
#include <stdio.h>

int main(void){
  int dan = 5;
  for (int i = 1; i < 9; i++){
    printf("%d x %d = %d\n", dan, 1, dan *i);
  }
  return 0;
}