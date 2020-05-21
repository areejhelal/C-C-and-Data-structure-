#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
char name[20];
int id;
};
struct Employee e[3];
void main(void)
{
int k,n;
int m=3;
char y[20];
int i,j,sorted=0;
struct Employee temp;
clrscr();
//scanning array of structures

 for(k=0;k<3;k++)
 {
  printf("\nEnter id for employee no %d: ",k+1);
  scanf("%d",&e[k].id);
  printf("\nEnter name for employee no %d: ",k+1);
  scanf("%s",&e[k].name);

 }


 //bubble sorting
for(i=0;(i<=m-1)&&(!sorted);i++)
{
sorted=1;
for(j=m-1;j>i;j--)
{
if(e[j].id<e[j-1].id)
{
 temp=e[j];
 e[j]=e[j-1];
 e[j-1]=temp;
sorted =0;
}
}
}
//printing array of structures

 for(k=0;k<3;k++)
 {
  printf("\n id for employee no %d: ",k+1);
  printf("%d",e[k].id);
   printf("\n name for employee no %s: ",k+1);
  printf("%s",e[k].name);
 }


getch();
 }
