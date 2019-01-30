https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0; 
  int or=0; 
  int xor=0;
  for (int a=1; a<n; a++){
      for (int b=a+1; b<=n; b++){
          int x = a&b;
          int y = a|b;
          int z = a^b;
          //printf("(%d,%d) -> %d %d %d \n", a, b, x, y, z);
          if ((x > and) && (x < k)){
              and=a&b;
          }
          if ((y > or) && (y < k)){
              or = a|b;
          }
          if ((z > xor)&& (z < k)){
              xor=a^b;
          }
      }
  }
  printf("%d\n%d\n%d", and, or, xor);
  return;
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
