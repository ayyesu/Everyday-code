#include<stdio.h>

int main () {
      int firstNum;
      int secondNum;
      printf("Enter first number\n");
      scanf("%d", &firstNum);
      printf("Enter second number\n");
      scanf("%d", &secondNum);
      if (firstNum == secondNum)
      {
      printf("The numbers are equal\n");
      }else {
      printf("The numbers are not equal\n");
      }
   return 0;
}