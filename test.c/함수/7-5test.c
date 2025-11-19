// 문제 5. 원의 넓이: circleArea(double r)
#include <stdio.h>

double circleArea(double r) {
  return 3.14 * r * r;
}

int main(void) {
  double area = circleArea(2.0);
  printf("%.2f\n", area);
  return 0;
}