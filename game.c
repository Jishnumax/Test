/*Write a game program as follows
i) Read the size of the square matrix N*N
ii) Display a square matrix (blank) of N*N
iii) Allow the player to insert data into the matrix as displayed (you should have a chance to the user to confirm the entry and to alter the previous entries,if desired.)
iv) After completion of all the entries from the player ,count the score as follows:
Score=0(zero) if it is not a magic square.Otherwise the score=P*10,where P is the number of alteration of entries.

The player's performance will be judged by the minimum score achieved other than zero.*/
#include<stdio.h>
void main()
{
 int n,arr[10][10],i,j,p=1,sum_r[20]={0},sum_c[20]={0},sum_d1=0,sum_d2=0,f=0;
 int r,c,nval,score[3]={},ch=0,k,flag;
 printf("Enter the size of square matrix:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
     printf("___ ");
	 printf("\n");
 }
 //2 player
for(k=1;k<3;k++)
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
 sum_r[i]=sum_r[i]+arr[i][j];
}
//sum of columns
for(i=0;i<n;i++)
{ 
 for(j=0;j<n;j++)
 sum_c[i]=sum_c[i]+arr[j][i];
}
//sum of diagonals
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 if(i==j)
 sum_d1=sum_d1+arr[i][j];
}
//sum of diagonal2 
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 if((i+j)==(n-1))
 sum_d2=sum_d2+arr[i][j];
}
//Comparison
for(i=0;i<n;i++)
{ 
  if(sum_r[i]==sum_r[i+1] && sum_d1==sum_d2 && sum_c[i]==sum_c[i+1])
  {
   if(sum_r[i]==sum_c[i] && sum_r[i]==sum_d1)
    f=1;
}
}
if(f==1)
 {
 score[k]=p*10;
 //printf("\n Magic Square. Score=%d",score);
 }
else
 {
score[k]=0;
//printf("\nNot Magic Square. Score=%d",score);
 }
}
for(k=1;k<3;k++)
{
 if(score[k]!=0)
 {
  if(score[k]<score[k+1])
  flag=1;
  else
  flag=2;
   }
  else
  printf("\nPlayer %d failed",k);
  }
  if(flag==1)
  printf("\nPlayer 1 won");
  else if(flag==2)
  printf("\nPlayer 2 won");
  /*need to make changes. Multiplayer functionality not working as expected*/
}


	
 


