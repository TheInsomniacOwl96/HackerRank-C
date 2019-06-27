/*
Task
Given set s ={1,2,3,4...n}, find:

-the maximum value of a&b which is less than a given integer k, where  and  (where ) are two integers from set .

-the maximum value of a|b which is less than a given integer k, where  and  (where ) are two integers from set .

-the maximum value of a^b which is less than a given integer k, where  and  (where ) are two integers from set .

*/



#include <stdio.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {

    int andRes;
    int orRes;
    int xorRes;
    int constraintAND = 0;
    int constraintOR = 0;
    int constraintXOR = 0;

  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          andRes = i&j;
          if(andRes > constraintAND && andRes < 4)
          {
              constraintAND = andRes;
          }

          orRes = i|j;
          if(orRes > constraintOR && orRes < 4)
          {
              constraintOR = orRes;
          }

          xorRes = i^j;
          if(xorRes > constraintXOR && xorRes < 4)
          {
              constraintXOR = xorRes;
          }
      }
  }

  printf("%d \n",constraintAND);
  printf("%d \n",constraintOR);
  printf("%d \n",constraintXOR);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
