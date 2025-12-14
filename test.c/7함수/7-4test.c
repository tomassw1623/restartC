// 문제 4. 절댓값: absolute(int x)
#include <stdio.h>

// 입력된 숫자의 절댓값을 계산하는 함수
int absolute(int x) {
  // 만약 x가 0보다 작으면 -x를 리턴
  if (x < 0)
    return -x; // 음수였으니 양수로 바꿔서 돌려줌
  else
    return x;  // 양수면 그대로 돌려줌
}

int main(void) {
  printf("%d\n", absolute(5));   // 5
  printf("%d\n", absolute(-7));  // -7의 절댓값 → 7
  return 0;
}
