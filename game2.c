#include<stio.h>
struct player
{
 int p=1;
 int sum_r[20]={0};
 int sum_c[20]={0};
 int sum_d1,sum_d2;
 int score;
 }p[2];
 void main()
 {
  int n,arr[10][10],i,j,k,f=0;
  printf("Enter the size of square matrix:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
     printf("___ ");
	 printf("\n");
 }
 
 
 for(k=1;k<=2;k++)
{
 
 printf("\nPlayer %d",k);
 printf("\nEnter the elements\n");
 for(i=0;i<n;i++)
 { 
   for(j=0;j<n;j++) 
   scanf("%d",&arr[i][j]);
  }
 printf("The square matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
       printf("_%d_   ",arr[i][j]);
	   printf("\n");
    }
 //Alteration

 do
 {
 printf("Do you want to make any changes? yes=1 no=0  ");
 scanf("%d",&ch);
  if(ch==1)
{
 printf("Enter position of element to change (r,c): ");
 scanf("%d %d",&r,&c);
 printf("Enter the new value:");
 scanf("%d",&nval);
 arr[r][c]=nval;
 p++;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  
  printf("%d ",arr[i][j]);
  printf("\n");
}
}
 while(ch==1);


//sum of rows
for(i=0;i<n;i++)
{ 
 for(j=0;j<n;j++)
 sum_r[k][i]=sum_r[k][i]+arr[i][j];
}
//sum of columns
for(i=0;i<n;i++)
{ 
 for(j=0;j<n;j++)
 sum_c[k][i]=sum_c[k][i]+arr[j][i];
}
//sum of diagonal1
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 if(i==j)
 sum_d1[k]=sum_d1[k]+arr[i][j];
}
//sum of diagonal2 
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 if((i+j)==(n-1))
 sum_d2[k]=sum_d2[k]+arr[i][j];
}
//Comparison
for(i=0;i<n;i++)
{ 
  if(sum_r[k][i]==sum_r[k][i+1] && sum_d1[k]==sum_d2[k] && sum_c[k][i]==sum_c[k][i+1])
  {
   if(sum_r[k][i]==sum_c[k][i] && sum_r[k][i]==sum_d1[k])
    f[k]=1;
  }
}
