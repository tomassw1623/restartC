// 문제 10. 1~100 출력, 4는 출력하지 않기 (continue)
#include <stdio.h>

int main(void) {
  // for (int i = 1; i <= 10; i++) {
  //   if (i != 4) { //i가 4가 아닐때만 동작
  //     printf("%d", i);
  //   }

  for (int i = 0; i < 10; i=i+2){
    printf("%d", i);
  }
  return 0;
}