#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    
    int i=0, sum=0;
    while(i<n)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
        i++;
    }
    free(arr);
    printf("%d",sum);
    
    return 0;
}

