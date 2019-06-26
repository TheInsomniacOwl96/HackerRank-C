#include <stdio.h>

int sum_of_digits(int n);

int main() {

    int n;
    scanf("%d", &n);
    int sum = sum_of_digits(n);
    printf("%d",sum);
    return 0;
}

int sum_of_digits(int n)
{
    int num;
    int sum;
    int temp;
    num = n;
    int i=0;

    while(i<5)
    {
    temp = num%10;
    num = num/10;
    sum = sum+temp;
    i++;
    }

    return sum;
}
