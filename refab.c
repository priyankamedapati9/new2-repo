/***********factorial*****
#include<stdio.h>
int facto(int n);
void main(){
int f;
f=facto(5);
printf("%d",f);
}
int facto(int n){
if(n==1)
return 1;
else
return n*facto(n-1);
}*/

//fabinocci series

#include<stdio.h>
int fab(int);
void main()
{
int n,a=0,i;
printf("enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",fab(i));
printf("hello");}
printf("conn");
}
int fab(int a)
{
if(a<2)
{
return 1;
}
return(fab(a-1)+fab(a-2));
}
