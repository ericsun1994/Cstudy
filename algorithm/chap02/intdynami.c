#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    x = calloc(1, sizeof(int));
    if(x == NULL)
    {
        puts("메모리할당에 실패하였습니다.\n");
    }
    else{
        *x = 57;
        printf("*x = %d\n", *x);
        free(x);
    }

    return 0;
}
