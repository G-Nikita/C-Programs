#include<stdio.h>
#include<conio.h>
int main()
{
    char word[10];
    int count=0,j=0,sum=0;
    printf("\n enter any word\n");
    gets(word);
    while(word[j]!='\0')
    {
        switch(word[j])
        {
        case 'a' :
            {


            count++;

            break;
            }

        case 'e ':
            {
            count++;

            break;
            }

        case 'i ':
            {
            count++;

            break;
            }

        case 'o' :
            {


            count++;

            break;
            }

        case 'u' :
            {


            count++;

            break;
            }

        }
         sum=sum +count;

        j++;
    }
    printf("\n %d is the number of vowels in that word\n",sum);
    getch();
}
