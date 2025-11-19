// 문제 2. 1부터 100까지의 짝수만 출력(for)
#include <stdio.h>

int main(void){
  for (int i = 1; i <= 100; i++){
    if (i % 2 ==0) {
      printf("%d", i);
    }
  }
  return 0;

}