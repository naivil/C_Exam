#include <stdio.h>
#include <string.h>
int main()
{
    char vowels=0;
    int count=0;
    char str[20], c;
    printf("Enter a string: ");
    scanf("%s",&str);
    while(str[count] != '\0') 
    {
          c = str[count];
          if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'
          || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
          vowels++;
          printf("%c", c);
     }
     count++;
   }
   printf("\n");
   printf("number of vowel is: %hu \n", vowels);

    return 0;
}