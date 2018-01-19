#include <stdio.h>
int main()
{
    char d;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%d",&d);

    isLowercaseVowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');

       isUppercaseVowel = (d == 'A' || d== 'E' || d== 'I' || d =='0' ||d== 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", d;
    else
        printf("%c is a consonant.", d;
    return 0;
}

