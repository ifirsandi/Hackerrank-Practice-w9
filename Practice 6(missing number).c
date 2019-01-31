https://www.hackerrank.com/challenges/missing-numbers/problem


#include <stdio.h>
#include <stdlib.h>




int main()
{
    int n;
    scanf("%d", &n);
    int ar[10000];
    int br[10000];
    for (int i=0; i<10000; i++){
        ar[i]=0;
        br[i]=0;
    }
    int max=0;
    int min=10000;
    int a;
    for (int i=0; i<n; i++){
        scanf("%d", &a);
        ar[a]++;
    }
    int m;
    scanf("%d", &m);
    for (int i=0; i<m; i++){
        scanf("%d", &a);
        br[a]++;
        if (a>max){
            max=a;
        }
        if (a<min){
            min =a;
        }
    }
    for (int i=min; i<=max; i++){
        if (br[i]>ar[i]){
            printf("%d ", i);
        }
    }


    return 0;
}




