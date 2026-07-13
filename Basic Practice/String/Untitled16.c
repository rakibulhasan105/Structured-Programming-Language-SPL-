// vowel  , consonant count
#include<stdio.h>
int  main ()
{
    char str[30],ch;
    int i=0,vowel=0,consonant=0,digit=0,others=0,word=0;
    printf("Enter the string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u'
                || ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' )
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            consonant++;
        else if(ch>='0'&& ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            others++;

        i++;
    }
    printf(" vowel = %d\n",vowel);
    printf(" consonant = %d\n",consonant);
    printf(" digit = %d\n",digit);
    printf(" word = %d\n",word+1);
    printf(" others = %d\n",others);
    return 0;
}

