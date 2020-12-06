#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    printf("choose the operation you want to perform:\n");
    printf("1.reading a string\n");
    printf("2.length of a string\n");
    printf("3.copy a string\n");
    printf("4.comparing two strings\n");
    printf("5.concat a string\n");
    printf("enter your choice:\n");
    scanf("%d",&a);
    select(a);

    return 0;
}
