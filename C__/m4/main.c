#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    int mas[SIZE];
    int i,s,x,max,min,math=0;
    
    printf("x ");
    scanf("%d",&x);
    
    for (i = 0; i < SIZE; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
    s+=mas[i];
	}
        printf("s = %d  \n", s-1);
 
 
    for (i = 0; i < SIZE; i++)
    {
		
    	if (mas[i]==x)
    		math++;
    				
	}
	printf("x = %d\n", math);
	
	
	min = max = mas[0];
	for(i = 0; i<SIZE; ++i)
{
 if(mas[i] > max) max = mas[i];
 if(mas[i] < min) min = mas[i];
}
printf("max=%d \n min=%d",max,min);

    return 0;
}
