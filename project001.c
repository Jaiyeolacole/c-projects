#include <stdio.h>
#include <math.h>

double trigonometryfunction();
double multiplicationtable();

main(){
//welcome();
//poiseulleFunction();
//summingintegers();
//convertdecimal();
 multiplicationtable();
//trigonometryfunction();
return 0;
}

welcome(){
	char userName;
	printf("Hi, Please enter your name: ");
	scanf("%c \n", &userName);
	printf("Happy to meet you engineer %c \n", userName);
}

poiseulleFunction(){
	float p1, p2, R, V, L;
	printf("Hi User! you have succesfully called the poiseulles function. \n \n");
	
	printf("please enter the value of initial pressure P1 \n");
	scanf("%f", &p1);
	
	printf("please enter the value of final pressure P2 \n \n");
	scanf("%f", &p2);
	
	printf("please enter the value of radius of material R \n \n");
	scanf("%f", &R);
	
	printf("please enter the value of coeffiecient of viscosity V \n \n");
	scanf("%f", &V );
	
	printf("please enter the value of lenght of material L\n  \n");
	scanf("%f", &L);
	
	float A, B, volume;
	A = (p1 - p2) * M_PI * (R*R*R*R);
	B = 8 * V * L;
	volume = A/B;
	printf("volume flowrate is %f \n \n", volume);
	return volume;
}

// converting decimal to hexa and octa decimal
int convertdecimal(){
	int y;
	y = 0;
	do{
	printf("The number %d has %X has it hexadecimal value and %o has its octadecimal value \n \n", y,y,y);
	y++;
	} 
	while(y <= 10);
}

// sum of n terms of integers
int summingintegers(){
	int sum, i;
	sum = 0;
	i = 0;
  do{
  	sum = sum + i;
  	printf("The sum of %d to 1 is %d \n \n", i, sum);
  	i++;
  }
	while(i <= 10);
}


// multiplication table
double multiplicationtable(){
	double x, y;
	printf("Enter the number to be multiplied: ");
	scanf("%lf", &x);
	
	printf("Enter the stop:");
	scanf("%lf", &y);
	
	double i;
	for(i = 1; i <= y; i++){
		double result;
		result = x * i;
		printf(" %.2lf X %.2lf is %.2lf \n", x, i, result);
	}
	
}

double trigonometryfunction(){
	double x, y;
	
	printf("Enter value: \n");
	scanf("%lf", &x);
		
   y = x * M_PI / 180;

   printf("The value of %.5lf in radian is %.5lf \n", x , y);
   double s,c,t;
   
   s = sin(y);
   c = cos(y);
   t = tan(y);
   
   printf("the sin value of %.1lf is %.5lf \n",x, s);	
   printf("the cos value of %.1lf is %.5lf \n",x, c);
   printf("the tan value of %.1lf is %.5lf \n",x, t);	
	

   return y; 
}
