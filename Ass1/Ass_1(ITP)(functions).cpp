//To right/left rotate an array - using functions
//Creator: Group-15		Date: 18/01/2022
#include<stdio.h>

// n-number of times the array is rotated, x-size of array, ar-array declared in the program
//Function for right rotation
void Rrot(int n,int x,int ar[])
{
	int i,j,t;
	for(i=1;i<=n;i++)  
		{
			t=ar[x-1];
			for(j=x-1;j>0;j--)
		    ar[j]=ar[j-1];
			ar[j]=t;
		}	
};


//Function for left rotation
void Lrot(int n,int x,int ar[])
{
	int i,j,t;
	for(i=1;i<=n;i++)
		{
			t=ar[0];
			for(j=0;j<x-1;j++)
			ar[j]=ar[j+1];
			ar[x-1]=t;
		}
};


//Main function
int main()
{
	int x,ar[1000],n,i,j,t;
	char c;
	
	//INPUT PROCESS
	printf("Enter size of the array:");
	scanf("%d",&x);
	printf("\nEnter elements of the array-\n");
	for(i=0;i<x;i++)
	scanf("%d",&ar[i]);
	printf("\nEnter number of times the array need to be rotated:");
	scanf("%d",&n);
	fflush(stdin);   //To clear buffer memory
	printf("\nEnter 'r/R' to right rotate the array.\nEnter 'l/L' to left rotate the array.\n");
	scanf("%c",&c);
	
	
	//ALGORITHM TO ROTATE
	if(c=='r'||c=='R') //Right rotation
	{
		Rrot(n,x,ar);   //Calling the function
		
	}
	else if(c=='l'||c=='L')  //Left rotation
	{
		Lrot(n,x,ar);   //Calling the function
	}
	else
	printf("\nWrong input");
	
	
	//OUTPUT PROCESS
	printf("\n\nRotated array-\n");
	for(i=0;i<x;i++)
	printf("%d\t",ar[i]);
	
	return 0;
}
 


