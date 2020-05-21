#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b);
int temp;
void main (void){
 int x =5,y=6;
 clrscr();
  printf("\nbefore swap :\nx= %d\ny= %d",x,y);
 swap(&x,&y);
 printf("\nafter swap :\nx= %d\ny= %d",x,y);
  getch();
}
void swap(int*a,int*b) {

temp = *a;
*a= *b;
*b = temp;
}