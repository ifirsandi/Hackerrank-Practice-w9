https://www.hackerrank.com/challenges/weighted-uniform-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s=(char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    //char - 96;
    int n=strlen(s);
    int q;
    scanf("%d", &q);
    int queries[q];
    for (int i=0; i<q; i++){
        scanf("%d", &queries[i]);
    }
    int a=0;
    int k=0;
    int temp=k;
    for (int i=0; i<n; i++){
        if (i>0 && s[i]==s[i-1]){
            a=a+s[i]-96;
        } else {
            a=s[i]-96;
        }
        while (a!=queries[k] && k<q){
            k++;
        }
        if (k<q){
            for (int j=temp; j<k; j++){
                printf("No\n");
            }
            printf("Yes\n");
            temp=k+1;
        } else {
            k=temp;
        }
    }
    if (temp<q){
        for (int i=temp; i<q; i++){
            printf("No\n");
        }
    }
    

    return 0;
}


