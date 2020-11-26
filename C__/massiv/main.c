#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void FillArray(int*,int);
void PrintArray(int*,int); 
void SortArray(int*,int);
int main(int argc, char *argv[]) 
{
	int *m,n,tmp;
	printf("n? ");
	scanf("%d",&n);
	srand (time(NULL));
	if(!(m=malloc(n*sizeof(int))))
	{
		printf("bad memory");
		return 1;
	}
	
	FillArray(m,n);
	PrintArray(m,n);
	SortArray(m,n);
	PrintArray(m,n);
	free(m);
	return 0;
}


void FillArray(int *m, int n)
{
	int i;
	for(i=0;i<n;i++)
	
	  m[i]=rand()%10;
	 
}

void PrintArray(int *m, int n)
{
int i;
 	printf("[");
 	for(i=0;i<n-1;i++) printf("%d, ",m[i]);
 	printf("%d]\n",m[i]);
	
}

void SortArray(int *m,int n)
{	
	int tmp,i;
	tmp=m[n-1];	
		for(i=n-1;i>0;i--)
				{
					m[i]=m[i-1];
				
				}
	m[0]=tmp;

}
