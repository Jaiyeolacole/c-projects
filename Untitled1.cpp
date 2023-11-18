#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	   int f1,f2,f3;
//	    system("color 17");
	    
	     printf("\n \n this function integrates fibonacci sequence");
	      printf("\n Enter the value of the first number: ");
	      scanf("%d",&f1);
	     
	     f1 = f2;
	     f3 = 0;
	     
	     if( f3 < 20){
	     	
	     	int n;
	     	
	     	for(n = 0; n < 10; n++){
			 	   	
	   	 f3 = f1 + f2;
	   	
	     f2 = f3;
	     f2 = f1;
	   
	     }
	      printf(" %d", f3);

	   }
	  
	
	return (0);
}
