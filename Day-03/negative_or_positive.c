#include<stdio.h>
#include<math.h>

int main() {

    printf("Enter a value: ");
    int num;
    scanf("%d", &num);
    if (num >= 0) 
    {
        printf("You entered a positive value\n");
    } else
    {
        printf("You entered a negative value\n");
    }
    return 0;
}