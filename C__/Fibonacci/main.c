#include <stdio.h>
#include <stdlib.h>


main() {
     int n,i,a,f1,f2;
    scanf("%d",&n);
   	
    f1 = 1;
    f2 = 1;
    printf("%d %d ",f1,f2);
    for (i=1; i<=n; i++)
	 {
	 	printf("%d ", f1+f2);
        a = f1;
        f1 = f2;
        f2 = a + f1;
        
    }
   
	return 0;
}
