#include<stdio.h>
#include<conio.h>

void selesort(int arr[][10]) ;

void main(void)
{
 int arr[5][10];
 int n;
 int k=0;
 clrscr();

 for(k=0;k<5;k++)
 {
 printf("\nEnter element %d : ",k);
 gets(arr[k]);
 }
 selesort(arr);
 k=0;
  for(k=0;k<5;k++)
 {
 puts(arr[k]); 
 }
 getch();
}

//selection sort
void selesort(int arr[][10])
{
int i,j,temp;
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
{
if(strcmp(arr[j],arr[i])<0)
{
  strcpy(temp,arr[j]);
  strcpy(arr[j],arr[i]);
  strcpy(arr[i],temp);

}
}

}

}
