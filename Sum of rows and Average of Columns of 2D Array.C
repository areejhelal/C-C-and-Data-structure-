#include<stdio.h>
#include<conio.h>
void main(void)
{
int i,j , arr[4][4], sum=0,avg=0;
clrscr();
for( i=0;i<3;i++)
{
for(j=0;j<3;j++){
printf("\nEnter element [%d][%d]:",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}


 //sum of rows
  for(i=0;i<4;i++)
 {
 for(j=0;j<3;j++)
 {
   sum+=arr[i][j];
   }
   arr[i][3]=sum;
   sum=0;
  }


  //avg of cols
 for(j=0;j<4;j++)
 {
 for(i=0;i<3;i++)
 {
   sum+=arr[i][j];
   avg=sum/3;
   }
   arr[3][j]=avg;
   sum=0;
   avg=0;
  }




printf("\narray elements:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++){

printf("\t%d",arr[i][j]);
if(j==3)
printf("\n");


}
 }
getch();
}