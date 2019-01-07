#include <stdio.h>

void main(void) {
    double water_count;
    unsigned int kua;
    double weight;
    weight = 3.0e-23;
    kua = 950;

    printf("please input kuatuo: ");
    scanf("%lf",&weight);
    //使用指数的方式表示%e
    printf("the count of water is %e", water_count*kua/weight);

}

