#include <stdio.h>
#include <stdlib.h>

int main() {

    char *arr;
    arr = (char*)malloc(1024 * sizeof(char));
    scanf("%s",arr);

    int len = sizeof(arr)/sizeof(int);

    int freq[] = {0,0,0,0,0,0,0,0,0,0};

    int i=0;
    while(arr[i] != 0)
    {
        switch(arr[i])
        {
            case '0': freq[0] += 1;
                    break;

            case '1': freq[1] +=1;
                    break;

            case '2': freq[2] +=1;
                    break;

            case '3': freq[3] +=1;
                    break;

            case '4': freq[4] +=1;
                    break;

            case '5': freq[5] +=1;
                    break;

            case '6': freq[6] +=1;
                    break;

            case '7': freq[7] +=1;
                    break;

            case '8': freq[8] +=1;
                    break;

            case '9': freq[9] +=1;
                    break;

            default: break;
        }
        i++;


    }

    for(int i=0;i<10;i++)
        {
            printf("%d ",freq[i]);
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
