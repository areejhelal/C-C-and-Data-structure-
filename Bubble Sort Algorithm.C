#include<stdio.h>
#include<conio.h>

void bubble(int arr[],int m) ;
void main(void)
{
 int arr[5];
 int n;
 int m=5,k=0;
 clrscr();

 for(k=0;k<5;k++)
 {
 printf("\nEnter element %d : ",k);
 scanf("%d",&arr[k]);
 }
 bubble(arr,m);
 k=0;
  for(k=0;k<5;k++)
 {
 printf("\nelement %d : %d ",k,arr[k]);
 }
 getch();
}


//bubble sorting
void bubble(int*arr,int m)
{
int i,j,sorted=0,temp;
for(i=0;(i<=m-1)&&(!sorted);i++)
{
sorted=1;
for(j=m-1;j>i;j--)
{
if(arr[j]<arr[j-1])
{
 temp=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=temp;
sorted =0;
}
}
}
}