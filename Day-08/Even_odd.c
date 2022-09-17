#include<stdio.h>

int checkEvenOdd (int num) {
    return(num % 2 == 0);
}

int main () {
    int num;
    printf("\n\n Checking if the number is even or odd\n");
    printf("--------------------------------------------\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("--------------------------------------------\n");

    // Checking condition in function:
    if (checkEvenOdd(num)) {
        printf("The entered number is even.\n\n");
    }else {
        printf("The entered number is odd\n\n");
    }

    return 0;
}