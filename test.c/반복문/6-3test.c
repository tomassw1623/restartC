// 문제 3. 0이 입력될 때까지 숫자를 받는 do-while문
#include <stdio.h>

int main(void){
  int n;

  do{
    printf("숫자를 입력하세요 (0 입력 시 종료): ");
    scanf("%d", &n);
  }while (n != 0);

  printf("프로그램 종료\n");
  return 0;
}