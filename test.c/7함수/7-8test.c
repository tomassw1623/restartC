// 문제 8. 문자열 길이: mystrlen(char str[])
#include <stdio.h>

// 문자열의 길이를 직접 세는 함수
int mystrlen(char str[]) {
  int len = 0; // 글자 개수를 셀 변수

  // 문자열 끝에는 반드시 '\0'이 있음
  while (str[len] != '\0') {
      len++; // 한 글자씩 세기
  }
  return len; // 길이 반환
}

int main(void) {
  char s[] = "hello"; // 문자열 hello
  int l = mystrlen(s); // 길이는 5
  printf("%d\n", l);
  return 0;
}
