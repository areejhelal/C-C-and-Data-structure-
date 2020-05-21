#include<stdio.h>
#include<conio.h>
void sequentialSearch(int arr[],int n);
 int flag=0;
void main(void)
{
 int arr[15];
 int n;
 int i =0;
 clrscr();

 for(i=0;i<15;i++)
 {
 printf("\nEnter element %d : ",i);
 scanf("%d",&arr[i]);
 }
 printf("\nEnter the number you want to search for pls:");
 scanf("%d",&n);
 sequentialSearch(arr, n);
 getch();
}
void sequentialSearch(int arr[],int n)
{
   int i =0;
   for(i=0;i<15;i++)
 {
	if(arr[i]==n)
	{
	  printf("\nThe number : %d is element %d in the array ",n,i);
	  flag=1;
	}

 }
	 if(flag==0)
	printf("number doesnt exist in the array!");
}
