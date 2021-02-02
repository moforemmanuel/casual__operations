#include <stdio.h>
#include <stdlib.h>

int bubblesort(int a[],int n);

int merge(int a1[],int a2[],int n1,int n2);

int i,j,k,n1,n2,n3,a1[10],a2[10],a3[10],temp;

int main()
{

printf("Enter a1 size : \n");
scanf("%d",&n1);	

printf("Enter a1 list : \n");
for(i=0;i<n1;i++)
scanf("%d",&a1[i]);

bubblesort(a1,n1);

printf("Enter a2 size : \n");
scanf("%d",&n2);	

printf("Enter a2 list : \n");
for(i=0;i<n2;i++)
scanf("%d",&a2[i]);

bubblesort(a2,n2);

merge(a1,a2,n1,n2);
	
	
}


int bubblesort(int a[],int n)
{
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("List is ascending order is : \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}

int merge(int a1[],int a2[], int n1, int n2)
{
	i=0;j=0;k=0;
	n3=n1+n2;
	
	while((i<n1)&&(j<n2))
	{
		if(a1[i]<a2[j])
			a3[k++]=a1[i++];
		else
			a3[k++]=a2[i++];
	}

while(i<n1)
{
	a3[k++]=a1[i++];
	}
	
while(j<n2)
{
	a3[k++]=a2[j++];
	}	
	
	printf("Merged array is : \n");
	for(i=0;i<n3;i++)
	printf("%d ",a3[i]);
	printf("\n");
	
}





















