// 문제 5. 원의 넓이: circleArea(double r)
#include <stdio.h>

// 반지름 r을 받아서 원의 넓이를 계산하는 함수
double circleArea(double r) {
  // 원의 넓이 공식: π * r * r (π 대신 3.14 사용)
  return 3.14 * r * r;
}

int main(void) {
  // 반지름 2.0인 원의 넓이 계산
  double area = circleArea(2.0);

  // 소수 둘째 자리까지 출력
  printf("%.2f\n", area);

  return 0;
}
