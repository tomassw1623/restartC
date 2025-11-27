// 문제 10. 메뉴 반복 프로그램 (함수 + 반복문)
#include <stdio.h>

void sayHello(void) {
    printf("안녕하세요!\n");
}

int addTwoNumbers(void) {
    int a, b;
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main(void) {
    int choice;

    while (1) {
        printf("\n===== 메뉴 =====\n");
        printf("1. 인사하기\n");
        printf("2. 숫자 두 개 더하기\n");
        printf("0. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        if (choice == 1) {
            sayHello();
        } else if (choice == 2) {
            int result = addTwoNumbers();
            printf("결과: %d\n", result);
        } else if (choice == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        } else {
            printf("잘못된 선택입니다.\n");
        }
    }

    return 0;
}
