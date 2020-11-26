#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i;
	int n;
	printf ("n ");
	scanf ("%d",&n);
	
	for ( i=1; i<=n; i++)
	{
		if (i%20==0) printf("\n");
		printf ("%d ",i);
	
	}
	return 0;
}
