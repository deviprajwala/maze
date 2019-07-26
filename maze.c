//maze 
#include<stdio.h>
#include<stdlib.h>

void main()
{
  int a[25][25],i,j,n,x,y,m,b[25];
  printf("Enter the value of n\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
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
    
  }
  
}
