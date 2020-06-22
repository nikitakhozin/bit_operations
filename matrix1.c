#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 15

int main()
{
    for(int i=1;i<N+1;i++){
        printf("%d ",i);
        if (i%(int)sqrt(N)==0){
            printf("\n");
        }
    }
    
}
