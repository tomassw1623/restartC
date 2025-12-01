// 문제 10. 메뉴 반복 프로그램 (함수 + 반복문)
#include <stdio.h>

// 1번 선택 시 실행되는 함수
void sayHello(void) {
    printf("안녕하세요!\n");
}

// 2번 선택 시 두 숫자를 입력받아 더하는 함수
int addTwoNumbers(void) {
    int a, b;
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &a, &b);     // 두 숫자 입력 받기
    return a + b;               // 두 숫자를 더한 값 반환
}

int main(void) {
    int choice;                 // 메뉴 번호 저장

    while (1) {                 // 무한 반복해서 메뉴 계속 보여줌
        printf("\n===== 메뉴 =====\n");
        printf("1. 인사하기\n");
        printf("2. 숫자 두 개 더하기\n");
        printf("0. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);   // 사용자 입력

        if (choice == 1) {
            sayHello();         // 인사 출력
        } else if (choice == 2) {
            int result = addTwoNumbers();
            printf("결과: %d\n", result);
        } else if (choice == 0) {
            printf("프로그램을 종료합니다.\n");
            break;              // while문 빠져 나가기
        } else {
            printf("잘못된 선택입니다.\n");
        }
    }

    return 0;
}
