https://www.hackerrank.com/challenges/countingsort1/problem

#include <stdio.h>
#include <stdlib.h>




int main()
{
    int n;
    scanf("%d", &n);
    int num[100];
    for (int i=0; i<100; i++){
        num[i]=0;
    }
    int a;
    for (int i=0; i<n; i++){
        scanf("%d", &a);
        num[a]++;
    }
    for (int i=0; i<100; i++){
        printf("%d ", num[i]);
    }

    return 0;
}


