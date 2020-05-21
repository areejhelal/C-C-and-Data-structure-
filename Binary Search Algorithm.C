#include<stdio.h>
#include<conio.h>
int binarySearch(int arr[],int n);
 int flag=0;
void main(void)
{
 int arr[15];
 int n;
 int result,i=0;
 clrscr();
  printf("\npls Enter Sorted Array");
 for(i=0;i<15;i++)
 {
 printf("\nEnter element %d : ",i);
 scanf("%d",&arr[i]);
 }
 printf("\nEnter the number you want to search for pls:");
 scanf("%d",&n);
 result= binarySearch(arr, n);
 printf("\nthe number you search for is in element : %d",result);
 getch();
}
int binarySearch(int arr[],int n)
{

 int hi ,lo,mid;
 lo=0;
 hi = 14;

	while(hi>=lo)
	{
	  mid = (hi+lo)/2;
		if(arr[mid]==n)
		{
		return mid;
		}
		else if(arr[mid]>n)
		{
		hi=mid-1;
		}
		else
		{
		lo=mid+1;
		}

	}
	return -1;
}
