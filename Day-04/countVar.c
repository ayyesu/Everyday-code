#include<stdio.h>
#include<string.h>

int main() {

 char str[100], ch;
 int i, count;
 count = 0;
// Taking string from the user
 printf("\nEnter your word: ");
 fgets(str, sizeof(str), stdin);

//Determining the character to count
printf("\nEnter the variable you want me to count: ");
scanf("%c", &ch);

//Counting the number of character in the string
for(i=0; i <= strlen(str); i++)
{
    if (str[i] == ch) {
        count++;
    }
}
    printf("The number of times '%c' occured = %d\n", ch, count );
    return 0;
}