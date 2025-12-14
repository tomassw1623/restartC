#include <stdio.h>

void print_ints(const int *arr, int n) {
    // const를 붙이는 이유:
    // 출력만 할 건데 실수로 값을 바꾸는 걸 막는다(안전장치).

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[5] = {5, 4, 3, 2, 1};
    print_ints(arr, 5);
    return 0;
}
