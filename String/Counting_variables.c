#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,capital,small,vowel,consonant,digit,word,other;
    printf("Enter a string: ");
    gets(str);
    i=capital=small=vowel=consonant=digit=word=other=0;

    while((ch=str[i])!='\0')
    {
        if(ch>='A' && ch<='Z')
            capital++;
        else if(ch>='a' && ch<='z')
            small++;
        else if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' || 
        ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else 
            other++;
        i++;
    }
    word++;
    printf("Number of capital letters: %d\n",capital);
    printf("Number of small letters: %d\n",small);
    printf("Number of vowels: %d\n",vowel);
    printf("Number of consonants: %d\n",consonant);
    printf("Number of digit: %d\n",digit);
    printf("Number of words: %d\n",word);
    printf("Number of other things: %d\n",other);
    return 0;
}