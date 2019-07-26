//maze 
#include<stdio.h>
#include<stdlib.h>


int n=3,item,d1,d2,a[25][25];
void movement(int x,int y,int item);
void movement2(int d2,int x);
void movement3(int d2,int x,int item,int y);

void movement(int x,int y,int item)
{
  item=a[x][y];
  int d1,d2;
  d1=n-x;
  d2=n-y;
  
  switch(d1)

  {
  case 0://if(d1=0)
          {
             movement2(d2,x);
          }
  case 2://if(d1=n-1)
          {
              movement2(d2,x);
          }
  case 1://if(d1=n-2)
          {
             movement3(d2,x,a[x][y],y);
          }
  }
}

void movement2(int d2,int x)
{
  if(d2==n-1)
    {
      if(x==1)
      {
      printf("move towards east or north\n");
      }
      else if(x==n)
      {
      printf("move towards east or south\n");
      }
    exit(0);
    }
   else if(d2==0)
    {
      if(x==1)
      {
      printf("move towards west or north\n");
      }
      else if(x==n)
      {
      printf("move towards west or south\n");
      }
     exit(0);
    }
    else 
    {
      if(x==1)
      {
      printf("move towards north\n");
      }
      else if(x==n)
      {
      printf("move towards south\n");
      }
     exit(0);
    }    
}

void movement3(int d2,int x,int item,int y)
{
   a[x][y]=item;
   if( a[x-1][y]!=0)
   {
      printf("move towards north\n");
      movement(x-1,y,a[x-1][y]);
   }
   else if( a[x+1][y]!=0)
   {
      printf("move towards south\n");
      movement(x+1,y,a[x+1][y]);
   }
    else if( a[x][y-1]!=0)
   {
      printf("move towards east\n");
      movement(x,y-1,a[x][y-1]);
   }
    else if( a[x][y+1]!=0)
   {
      printf("move towards west\n");
      movement(x,y+1,a[x][y+1]);
   }
   else
   {
      printf("No possible moves\n");
      exit(0);
   }
 
}

void main()
{
  int i,j,n=3,x,y;
  
  //printf("Enter the value of n\n");
  //scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=1;i<=3;i++)
  {
   for(j=1;j<=3;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }

  printf("The maze is\n");
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
     printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("The position with 0 is explosive\n");

  printf("Enter the position in which you are present\n");
  scanf("%d %d",&x,&y);
  printf("Your position is %d\n",a[x][y]);
  

 // printf("Number of bomb in maze\n");
  //scanf("%d",&m);
  //for(i=1;i<=m;i++)
  //{ 
  //printf("Enter the position in which bomb is present\n");
  //scanf("%d %d",&x,&y);
  //printf("The element in which bomb is present is %d\n",a[x][y]);
    //}
  
movement(x,y,a[x][y]);
}
