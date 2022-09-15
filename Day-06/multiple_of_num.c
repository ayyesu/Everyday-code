#include<stdio.h>

void main () {
    int i, j;
    //Taking input from a user
    printf("Enter the number to find it's multiple: \n");
    scanf("%d", &i);
    for (j=1;j<=12;j++)
    {
        printf("%d X %d = %d\n", i, j, i*j);
    }
}