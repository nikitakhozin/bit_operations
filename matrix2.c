#include <stdio.h>
#define N 7

int main()
{   
    int i = -1, a[N],reverse[N];
    while (i<N){
        a[i] = i+1;
        printf("%d ",a[i]);
        i+=1;
        
    }

    for(int j = N-1; j>=0;j--){
        reverse[N-j] = a[j];
        printf("%d ", reverse[N-j]);
    }
}
