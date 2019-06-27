/*
Print concentric rectangular pattern in a 2d matrix

https://www.geeksforgeeks.org/print-concentric-rectangular-pattern-in-a-2d-matrix/
*/

#include <stdio.h>

void pattern(int n);

int main()
{

    int n;
    scanf("%d", &n);
    pattern(n);
      // Complete the code to print the pattern.
    return 0;
}

void pattern(int n)
{
    int s = 2*n-1;

    // upper part
    for(int i=0;i<(s/2)+1;i++)
    {
        int m = n;

        // decreasing part
        for(int j=0;j<i;j++)
        {
            printf("%d ",m);
            m--;
        }

        //constant part
        for(int k=0;k<s-2*i;k++)
        {
            printf("%d ",n-i);
        }

        //increasing part
        m=n-i+1;
        for(int l=0;l<i;l++)
        {
            printf("%d ",m);
            m++;
        }

        printf("\n");
    }


    //lower part
    for(int i=(s/2)-1;i>=0;i--)
    {
        int m = n;

        // decreasing part
        for(int j=0;j<i;j++)
        {
            printf("%d ",m);
            m--;
        }

        //constant part
        for(int k=0;k<s-2*i;k++)
        {
            printf("%d ",n-i);
        }

        //increasing part
        m=n-i+1;
        for(int l=0;l<i;l++)
        {
            printf("%d ",m);
            m++;
        }

        printf("\n");
    }
}
