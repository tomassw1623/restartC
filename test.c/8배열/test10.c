#include <stdio.h>

int main(void) {
    // [하는 일]
    // 정수 8개를 입력받고, 찾을 값(key)이 있으면 그 위치(인덱스)를 출력한다.
    // 없으면 -1 출력.

    int arr[8];
    int i;
    int key;
    int found = -1; // 못 찾으면 -1로 남겨두는 게 관례(찾으면 바꿔줌)

    printf("정수 8개 입력: ");
    for (i = 0; i < 8; i++) scanf("%d", &arr[i]);

    printf("찾을 값 입력: ");
    scanf("%d", &key);

    for (i = 0; i < 8; i++) {
        if (arr[i] == key) {
            found = i;
            break; // 찾았으면 더 볼 필요 없음
        }
    }

    printf("%d\n", found);
    return 0;
}
