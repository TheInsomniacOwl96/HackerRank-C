// Reverse an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

   int len = sizeof(arr)/sizeof(int);
   for(i=len-1;i>=0;i--)
   {
       printf("%d ",arr[i]);
   }

}
