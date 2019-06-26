/*
Task

Given a positive integer denoting n, do the following:

If ,1<=n<=9 then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If ,n>9 print Greater than 9.

*/

#include <stdio.h>

int main()
{
    int n;
    char *words[] = {"one","two","three","four","five","six","seven","eight","nine"};

    scanf("%d",&n);

    if(1<=n && n<=9)
    {
       int i = n -1;
       printf("%s", words[i]);
    } else
    {
        printf("Greater than 9");

        return 0;
    }
}
