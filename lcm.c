#include<stdio.h>
int main()
{
int n1,n2,minmultiple;
printf("enter two positive integers:");
scanf("%d %d",&n1,&n2);
minmultiple=(n1>n2)?n1:n2;
while(1)
{
if(minmultiple%n1==0&&minmultiple%n2==0)
{
printf("the lcm of %d and %d is %d.",n1,n2,minmultiple);
break;
}
++minmultiple;
}
return 0;
}
