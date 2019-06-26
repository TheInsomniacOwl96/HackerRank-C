/*
Task
You have to print the character,ch, in the first line.
Then print s in next line. In the last line print the sentence,sen .
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const int MAX_LEN = 50;
int main()
{
    char ch;
    char s[20];
    char sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s",sen);
    return 0;
}
