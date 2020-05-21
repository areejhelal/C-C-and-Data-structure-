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
int i,n;
char y[20];
int f1=0,f2=0;
clrscr();
//scanning array of structures

 for(i=0;i<3;i++)
 {
  printf("\nEnter id for employee no %d: ",i+1);
  scanf("%d",&e[i].id);
  printf("\nEnter name for employee no %d: ",i+1);
  scanf("%s",&e[i].name);

 }


//searching by id
printf("\nEnter id you want to search for: ");
scanf("%d",&n);
 for(i=0;i<3;i++)
 {
 if(e[i].id==n)
 {
  printf("\nid you searched for is for employee no %d ",i+1);
  f1=1;
 }

 }
   if(f1==0)
  {
  printf("\nid doesnt exist");
  }

 //searching by name
 printf("\nEnter name you want to search for: ");
scanf("%s",&y);
i=0;
 for(i=0;i<3;i++)
 {
 if(strcmp(e[i].name,y)==0)
 {
  printf("\nname you searched for is for employee no %d ",i+1);
  f2=1;
 }

 }
   if(f2==0)
  {
  printf("\nName doesnt exist");
  }
  getch();
}