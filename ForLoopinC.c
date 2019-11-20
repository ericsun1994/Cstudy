// https://www.hackerrank.com/challenges/for-loop-in-c/problem

/*
 *  Task
 *  For each integer  in the interval  (given as input) :
 *  If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
 *  Else if  and it is an even number, then print "even".
 *  Else if  and it is an odd number, then print "odd".
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char *strings[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight", "nine", "even", "odd"};
    
    scanf("%d\n%d", &a, &b);
    int labels_index;
    
    for (int i=a; i<=b; i++) 
    {
        if (i <= 9) 
        printf ("%s\n", strings[i-1]);
        else 
        printf ("%s\n", strings[9+(i%2)]);
    }
    return 0;
}

