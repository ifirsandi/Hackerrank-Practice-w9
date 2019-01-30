https://www.hackerrank.com/challenges/acm-icpc-team/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int n,m;
    scanf("%d %d\n", &n, &m);
    char ar[n][m];
    int count2=0;
    int countmax=0;
    for (int i=0; i<n+1 ; i++){
        for (int j=0; j<m+1; j++){
            char abc;
            scanf("%c", &abc);
            ar[i][j]=abc;
        }
    }
    int max;
    for (int i=0; i<n ; i++){
        for (int j=i+1; j<n; j++){
            max=m;
            for (int k=0; k<m; k++){
                if (ar[i][k]=='0' && ar[j][k]=='0'){
                    max--;
                }
            }
            if (max>count2){
                count2=max;
                countmax=1;
            } else if (max==count2){
                countmax++;
            }
        }
    }
    printf("%d\n%d", count2, countmax);
    

    return 0;
}

