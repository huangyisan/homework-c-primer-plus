#include <stdio.h>

void main(void) {
    void br(void);
    void ic(void);

    br();
    printf(",\t");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
}

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}
