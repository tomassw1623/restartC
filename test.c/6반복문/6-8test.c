// 문제 8. * while문으로 5개의 를 3줄 출력
#include <stdio.h>

int main(void) {
  int row = 0;

  while (row < 3) {
    int col = 0;
    while (col < 5) {
      printf("*");
      col++;
    }
    printf("\n");
    row++;
  }

  return 0;
}