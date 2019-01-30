https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char s[][10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for (int i=a; i<=b; i++){
          if (i<=9){
              printf("%s", s[i]);
          } else if (i%2==0){
              printf ("even");
          } else {
              printf("odd");
          }
          printf("\n");
      }
      

    return 0;
}

