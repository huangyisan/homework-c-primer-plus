#include <stdio.h>

void main(void) {
    float a;
    printf("enter a float value:");
    scanf("%f", &a);
    printf("the input float is %f\n", a);
    //%e单精度 %E双精度指数
    printf("the input zhishu is %e\n", a);
    //%a为p计数法
    printf("the input zhishu is %a\n", a);
}

