#include<stdio.h>
int main()
{
    char *strp[100];
    int i,vowel,consonant;
    printf("\n enter any string");
    scanf("%s",strp);
    for(i=0;*(strp[1])!=0;i++)
    {
        if(*(strp[i])=='a'||*(strp[i])=='e'||*(strp[i])=='i'||*(strp[i])=='o'||*(strp[i])=='u')
        {
            vowel=vowel+1;
        }
        else
        {
            consonant=consonant+1;
        }
    }
    printf("\n %d is no of vowels and %d is no of consonants\n",vowel,consonant);
    return 0;
}
