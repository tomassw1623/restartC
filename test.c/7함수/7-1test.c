// 문제 1. void printNumber(int n)
// printf를 사용하기 위해 필요한 헤더파일
#include <stdio.h>

// 숫자 하나를 화면에 출력하는 함수
void printNumber(int n) {
  // %d는 정수를 출력한다는 뜻, n의 값을 출력함
  printf("%d\n", n);
}

int main(void) {
  // printNumber 함수에 7을 보내서 '7'이 출력되도록 함
  printNumber(7);
  return 0; // 프로그램 종료
}
