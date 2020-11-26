#include <stdio.h>
#include <stdlib.h>


#define SIZE 10

void FastSortRecursive(int *m, int size) 
{
    
    int i = 0;
    int j = size - 1;

     int mid = m[size / 2];

    do {
        
        while(m[i] < mid) {
            i++;
        }
       
        while(m[j] > mid) {
            j--;
        }

        if (i <= j) {
            int tmp = m[i];
            m[i] = m[j];
            m[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);

    if(j > 0) {
       
        FastSortRecursive(m,j+1);
       
    }
    if (i < size) {
        
        FastSortRecursive(&m[i], size-i);
        
    }
}


int main(int argc, char *argv[]) 
{	
	int m[SIZE],i;
	
	for (i = 0; i<SIZE; i++)
    m[i] = rand() %10;
    
    for (i = 0; i<SIZE; i++)
    printf("%d ", m[i]);
  	printf("\n");
  
  	FastSortRecursive(m,SIZE); 
            
  	for (i = 0; i<SIZE; i++)
    printf("%d ", m[i]);
  	printf("\n");
  
	return 0;
}
