#include<stdio.h>

int main()
{
    

int n,m,i,rem;

scanf("%d%d",&n,&m);

for(i=n;i<=m;++i)

{

rem=i%2;

if(rem==0)

printf("%d ",i);

}

}