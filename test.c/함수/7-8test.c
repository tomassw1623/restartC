// 문제 8. 문자열 길이: mystrlen(char str[])
#include <stdio.h>

int mystrlen(char str[]) {
  int len = 0;
  while (str[len] != '\0') {
      len++;
  }
  return len;
}

int main(void) {
  char s[] = "hello";
  int l = mystrlen(s);
  printf("%d\n", l);
  return 0;
}