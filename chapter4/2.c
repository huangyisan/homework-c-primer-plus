#include <stdio.h>

void main(void) {
    char first_name[30];
    char second_name[30];
    int len;
    printf("nput first name:\n");
    scanf("%s",first_name);
    printf("input second name:\n");
    scanf("%s",second_name);
    len = strlen(first_name)+strlen(second_name);

    printf("\"%s,%s\"\n", first_name,second_name);

    printf("\"%20s,%20s\"\n", first_name,second_name);

    printf("\"%-20s,%-20s\"\n", first_name,second_name);

    printf("\"%*s,%*s\"\n", len+3,first_name,len+3,second_name);
}
