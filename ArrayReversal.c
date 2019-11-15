#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    for(i=0; i<num; i++) 
    {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    int *arrTmp;
    arrTmp = (int*) malloc(num * sizeof(int));
    for(i=0; i<num; i++)        /* Copy origin array to temp array */
    {
        arrTmp[i] = arr[i];
    }

    for(i=0; i<num; i++)        /* Array Reversal*/
    {
        arr[i] = arrTmp[num-(i+1)];
    }

    for(i=0; i<num; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}
