#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
 
    int sum;
    int i1, i2, i3, i4, i5 = 0;

    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
 
    i1 = n/10000;
    //printf("%d\n", i1);
    i2 = (n -i1*10000)/1000;
    //printf("%d\n", i2);
    i3 = (n -i1*10000 -i2*1000)/100;
    //printf("%d\n", i3);
    i4 = (n  -i1*10000 -i2*1000 -i3*100)/10;
    //printf("%d\n", i4);
    i5 = (n  -i1*10000 -i2*1000 -i3*100 -i2*10)%10;
    //printf("%d\n", i5);

    sum = i1+i2+i3+i4+i5;    

    printf("%d", sum);

    return 0;
}

