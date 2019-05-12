#include<stdio.h>   
int max(int a, int b);
void main() 
{ 
	int n,m;
	printf("Enter length of rod!\n");
	scanf("%d",&n);
	printf("Enter Size of array of length and prices!\n");
	scanf("%d",&m);
	printf("Enter Length array\n");
	int a[m+1],i,j,c[m+1][n+1];
	a[0]=0;
	for (int i = 1; i < m+1; ++i)
	{
		scanf("%d",&a[i]);
	}
	int b[m+1];
	printf("Enter Price array\n");
	b[0]=0;
	for (int i = 1; i < m+1; ++i)
	{
		scanf("%d",&b[i]);
	}


	for(i=0;i<m+1;++i)
	{
	    for(j=0;j<n+1;++j)
	    {
	        if(i==0 || j==0)
	           c[i][j]=0;
	        else
	        {
	        	if(a[i]<=j)
	          {
	          	c[i][j]=max(b[i]+c[i-1][j-a[i]],c[i-1][j] );
	          }
	        else 
	           {
	           	c[i][j]=c[i-1][j];
	        	}
	    }
	}
}
    printf("Max price Value that can be obtained is %d\n", c[m-1][j-1]); 
}

  
int max(int a, int b) 
{ return (a > b)? a : b;}
