#include<stdio.h>

int main()
{
    
long i,k;
    
scanf("%d%d",&i,&k);
    
i=i ^ k;
    
k=i ^ k;
    
i=i ^ k;
    
printf("%d %d ",i,k);

}