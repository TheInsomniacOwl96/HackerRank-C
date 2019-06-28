// Recursion function

#include <stdio.h>

//Complete the following function.
int temp;

int find_nth_term(int n, int a, int b, int c) {

    if(n != 0)
    {
        temp = a+b+c;
        find_nth_term(n-1,b,c,temp);
    }else {
        printf("%d ",temp);
    }
  //Write your code here.
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    find_nth_term(n-3, a, b, c);
    return 0;
}
