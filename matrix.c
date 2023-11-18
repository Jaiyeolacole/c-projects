#include <stdio.h>
#define N  4


int matrixaddition(){
	int matrixA[N];
	int matrixB[N];
	
	int i,j;
	
	printf("matrix A \n \n");
	
	 for( i = 0; i < 4; i++){
	 		printf(" \n Enter the input for index %d: ", i);
	 	scanf("%d", &matrixA[i]);
	 	
	 }
	 
	    	printf("matrix B \n \n");

	 	 for( j = 0; j < 4; j++){
	 	 		printf(" \n Enter the input for index %d: ", j);
	 	scanf("%d", &matrixB[j]);
	 	
	 }
	 
	 
	 printf("\n the elements of matrix A is:  \n ");
	  for( i = 0; i < 4; i++){
	  
	 	printf(" \n %d", matrixA[i]);
	 	
	 }
	 		
	 		printf(" \n \n ");
	 		
	 		printf("\n The elements of matrix B is: \n");
	 		
	 		 for( j = 0; j < 4; j++){
			  
			  	printf(" \n %d ", matrixB[j]);

       }
	 
	
	 
}





int main(){
	
	 matrixaddition();

}
