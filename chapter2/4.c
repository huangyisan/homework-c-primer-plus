#include <stdio.h>

void main(void) {
    void jolly(void);
    void deny(void);

    jolly();
    jolly();
    jolly();

    deny();

}

void jolly(void) {
    printf("For he's a jolly good fellow!\n");
}

void deny(void) {
    printf("which nobody can deny!\n");
}
