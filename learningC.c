#include <stdio.h>
const char FILE_1[] = "unolux.txt";

int main(){
    
     
    int count = 0;
     FILE *myfile;
     
     int ch;
     
     myfile = fopen(FILE_1, "r");
     if(myfile == NULL){
     	printf("cannot open %s \n", FILE_1);
	 }
	 
	 while(1){
	 	ch = fgetc(myfile);
	 	if(ch == EOF){
	 		break;
	 		count++;
	 		
		 }
	 }
	 printf("Number of character in %s is %d", FILE_1, count);
	 
	 fclose(myfile);
     
	
	return 0;
}
