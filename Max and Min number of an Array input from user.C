#include<stdio.h>
#include<conio.h>
void main(void)
{
int i,j , arr[5],max=0,min=0;
clrscr();
for( i=0;i<5;i++)
{
printf("\nEnter element %d:",i+1);
scanf("%d",&arr[i]);

}

for( j=0;j<5;j++)
{
 if(arr[j]>max){
 max=arr[j];
 }

}
printf("Max number is %d",max);
min = arr[0];
for( j=0;j<5;j++)
{
 if(arr[j]<min){
 min=arr[j];
 }

}
printf("\nMin number is %d",min);
getch();
}