#include <stdio.h>

int main(void) {
    // [하는 일]
    // 정수 5개를 입력받아 오름차순으로 정렬(버블 정렬)하고 출력한다.

    int arr[5];
    int i, j, temp;

    printf("정수 5개 입력: ");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);

    // 버블 정렬:
    // 옆에 있는 두 값을 비교해서 큰 값을 오른쪽으로 보내는 방식
    for (i = 0; i < 4; i++) {              // 총 4번 턴(5개면 n-1번)
        for (j = 0; j < 4 - i; j++) {      // 뒤쪽은 정렬 완료되어 범위가 줄어든다
            if (arr[j] > arr[j + 1]) {
                // 서로 바꾸기(swap)
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("정렬 결과: ");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
