#include <stdio.h>

int main(void) {
    // [하는 일]
    // 배열을 포인터로 순회하면서 출력한다(함수 없이).

    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;          // 첫 칸 주소
    int *end = arr + 5;    // "마지막 다음 칸" 주소 (끝 표시)

    // p가 end에 도달할 때까지 한 칸씩 이동
    while (p < end) {
        printf("%d ", *p); // 현재 칸 값 출력
        p++;               // 다음 칸으로 이동
    }
    printf("\n");

    return 0;
}
