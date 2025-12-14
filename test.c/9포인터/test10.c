#include <stdio.h>

int main(void) {
    // [하는 일]
    // "포인터 타입이 다르면 대입하면 안 된다"를 안전하게 보여준다.

    int a = 10;
    int *p = &a;

    // double* pd = p;  // ❌ 위험: int 주소를 double로 해석하면 데이터가 깨질 수 있다.

    double d = 3.14;
    double *pd = &d;   // ✅ double 변수의 주소는 double*로 받는다.

    printf("*p=%d\n", *p);
    printf("*pd=%.2f\n", *pd);

    return 0;
}
