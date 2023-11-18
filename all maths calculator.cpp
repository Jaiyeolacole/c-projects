#include <stdio.h>
#include <math.h>
#include <string.h>

// Function prototypes
int kelvinConverter();
int checkeven();
int exponent();
int Myconvert();
int hour5();
int compareNum();
int checkingArray();
int sumsequence();
//int lettersample();
int Dowhile();
int summingintegers();
//int nestedloop();
int stoke();
double trigonometryfunction();
int Matrix();
int checkprime();
int leapyear();
int EvenOdd();
char getUsername(); // Renamed and updated prototype

int main() {
    printf("%s\n%s\n", __TIME__, __DATE__);
    printf("\nWelcome to UnoLux Bright Lab.\n\n");

    int num;

    printf("To call kelvin-celsius converter function, please press 1:\n");
    printf("To call checkeven function, please press 2:\n");
    printf("To call exponent function, please press 3:\n");
    printf("To call Myconvert function, please press 4:\n");
    printf("To call hour5 function, please press 5:\n");
    printf("To call compareNum function, please press 6:\n");
    printf("To call checkingArray function, please press 7:\n");
    printf("To call sumsequence function, please press 8:\n");
    printf("To call stoke's function, please press 9:\n");
    printf("To call trigonometry function, please press 10:\n");
    printf("To call checkprime function, please press 11:\n");
    printf("To call EvenOdd function, please press 12:\n");
    printf("To call Dowhile function, please press 13:\n");
    printf("To call leap year function, please press 14:\n");
    printf("To call Matrix function, please press 15:\n");
    printf("To terminate, please press 0:\n");

    scanf("%d", &num);

    switch (num) {
        case 1:
            kelvinConverter();
            break;
        case 2:
            checkeven();
            break;
        case 3:
            exponent();
            break;
        case 4:
            Myconvert();
            break;
        case 5:
            hour5();
            break;
        case 6:
            compareNum();
            break;
        case 7:
            checkingArray();
            break;
        case 8:
            sumsequence();
            break;
        case 9:
            stoke();
            break;
        case 10:
            trigonometryfunction();
            break;
        case 11:
            checkprime();
            break;
        case 12:
            EvenOdd();
            break;
        case 13:
            Dowhile();
            break;
        case 14:
            leapyear();
            break;
        case 15:
            Matrix();
            break;
        case 0:
            printf("HEY, WHAT ARE YOU LOOKING FOR?\n");
    }

    // Uncomment the line below if you want to call the getUsername function
    // getUsername();

    return 0;
}

// Rest of your functions (kelvinConverter, checkeven, etc.)

// Function to get the name of the user
char getUsername() {
    char name[50]; // Increase the buffer size if necessary

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
}



////conversion of temperature in degree celsius to kelvin
int kelvinConverter() {
 int lower, upper, step;
 printf("Enter the lower value \n");
 scanf("%d", &lower);
 
 printf("Enter the upper value \n");
 scanf("%d", &upper);
 
 printf("Enter the step value: \n");
 scanf("%d", &step);
 
 int temp, kelvin;
 temp = lower;
 while ( temp <= upper){ 
 kelvin = 273 + temp;
 printf( "%d %d \n", temp,	 kelvin );
 temp = temp + step;
  }
 }
 
 
int checkeven() {
	int num;
	printf("Enter an integer: ");
	scanf("%f, &num");
	if(num % 2 == 0)
	printf("%f is even", num);
	else
	printf("%f is odd", num);
	return num;
}


// checking functions
 exponent() {
	float num;
	printf("Enter a number: \n");
	scanf("%f", &num);
	printf("the number you entered is: %f \n", num);
	return num;
}
// converting letters to numbers
 int Myconvert() {
 	char z1[5], z2[5];
 printf(" \n Enter the value of z1: \n ");
 scanf(" %s", z1);
 
 printf("\n Enter the value of z2: \n ");
 scanf(" %s", z2);
 
printf("%d \n", z1);
printf("%d \n", z2);
return 0;
 }
 
 
 
// using get() and put() function
 int hour5() {
	int myName;
	printf("please type in one character: \n");
	myName = getchar();
	printf("The value inserted is %X", myName);
	return 0;
}

//TO compare two numbers.
 int compareNum() {
 	int A, B;
 	
 	printf("Enter the value of A:\n");
 	scanf("%d",&A);
 	printf("the value of A is %d \n", A);
 	
 	printf("Enter the value of B:");
 	scanf("%d", &B);
 	printf("the value of B is %d\n", B);
 	
 	if(A > B)
 	printf("the value of A is greater than B \n");
 	
 	else if(A < B)
 	printf("the value of B is greater than A \n");
 	
 	else
 	printf(" A and B are equal");
 	
 	return A;
 }
 
 
// int Array[]={12, 32, 30, 34, 45};
 
// checking for the biggest number in my array.
int checkingArray() {
	
     int myArray[] = {12, 32, 30, 34, 45};
        int max = 0; int i;
           for( i = 0; i < 5; i++){
          	if(myArray[i] > max){
		max = myArray[i];
	}	
}
           printf(" The biggest value of my array is %d", max);
               return max;
}
           // sum of sequece until negative number is added.
            int sumsequence(){
             int result = 0;
        printf("This function add your inputs until you input a negative number. \n");
             while(1){
            	int num;
               	printf("Enter a number: ");
	           scanf("%d", &num);
        	if(num < 0){break;
          	}	
           	result = result + num; 	
        }
 printf(" The total is %d", result);
 return result;
}


//playing with letters

int lettersample() {
	char c;
	c = ' ';
	printf(" You can enter enter any letter but not letter x. \n Input x to terminate \n");
	while(c != 'x'){
		printf("enter your letter: \n");
		scanf("%c", &c);
		printf("The letter you enter is %c \n", c);
	}
	 printf(" goodbye user, you have violated the rule.");
	 return c;
}


// checking Do while loop
int Dowhile(){
	int y;
	y = 0;
	do{
	printf("The number %d has %X has it hexadecimal value and %o has its octadecimal value \n", y,y,y);
	y++;
	} 
	while(y <= 50);
}


// checking for loop
int summingintegers(){
	int sum, i;
	sum = 0;
	i = 0;
  do{
  	sum = sum + i;
  	printf("The sum of %d to 1 is %d \n", i, sum);
  	i++;
  }
	while(i <= 1000);
}


//checking nested loop
 int nestedloop() {
 
 int i, j;
 
 for (i=1; i<=3; i++) {
 
 printf("The start of iteration %d of the outer loop.\n", i);
 
 for (j=1; j<=4; j++)
 
 printf("Iteration %d of the inner loop.\n", j);
 
 printf("The end of iteration %d of the outer loop.\n", i);
 
 }
}


// calculating stoke's law
int stoke() {
	float r, v, q, F;
	
	printf("You have succesfully called the stoke function \n");
	
	printf("Please input the value of radius r:\n");
	scanf("%f",&r);
	
	printf("Please input the value of v:\n");
	scanf("%f",&v);
	
	printf("Please input the value of q:\n");
	scanf("%f",&q);
	
	if(r <= 0 || v <= 0 || q <= 0){
		
		printf("Error: Any of these parameters can not be zero or negative. \n");
		return 0;
	}
		else { 	
		F = (6 * M_PI * r * v * q);
		printf("F, viscous drag force is %f Newtons.\n", F);
	return F;
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


int Matrix(){
	int myvalue[4] = { };
	
	    printf("Enter value of row1 column 1 \n");
	scanf("%d", &myvalue[0]);
	
		printf("Enter value of row1 column2 \n");
	scanf("%d", &myvalue[1]);
	
		printf("Enter value of row2 column1 \n");
	scanf("%d", &myvalue[2]);
	
		printf("Enter value of row2 column2 \n");
	scanf("%d", &myvalue[3]);
	
	
	int A, B, result;
	 A = myvalue[0] * myvalue[3];
	 B = myvalue[2] * myvalue[1];
	 result = A - B;
	 
	 printf("The determinant of this matrix is %d", result);
	return result; 
}

// A function that checks if a number is prime number.

int checkprime(){
	printf("\t \t Welcome Dear user! you have succesfully called the prime checker function \n \n");
	
	printf(" \t \t Please enter the number you wish to check: ");
	int num;
	scanf("%d", &num);
	
	if(num <= 1){
		printf(" \t \t Oops! prime number cannot be negative or zero \n \n");
		return 0;
	}    
    
   else if(!(num % 2 == 0) && !(num % 3 == 0) && !(num % 5 == 0)){
  	printf(" \t \t the number %d is a prime number \n \n", num);
  	return num;
  }
  else{printf(" \t \t The number %d is not a prime number \n", num);
  return 0;
  }
  
  }
//  **************************************************** 
// A FUNCTION THAT CHECKS FOR LEAP YEAR 

int leapyear(){
	printf(" \t  \t \tYOU HAVE SUCCESSFULLY CALL THE LEAP YEAR CHECKER \n \n");
	printf(" \t   \t \t Enter the year: ");
	int year;
	scanf("%d", &year);
	
	if((year <= 1000) || (year > 2099)){
printf(" \t \t  \t I do not have the record of the year less than or equal to 1000 or greater than 2099 \n \n");	
return 0;
	}
	else if(year % 4 == 0){
		printf(" \t \t  \t The year %d is a leap year, HURRAY!!! \n \n ", year);
		return year;
	}
	else{ 
	printf(" \t \t  \t  The year %d is not a leap year \n \n", year);
	return 0;
	}
	
	printf(" \n ");
}


// **********************************************************************
// sum of even and odd in a range of number

int EvenOdd(){
	printf(" \t \t \t Welcome dear user. \n \n");
	int min, max;
	printf(" \t \t \t Enter the mininum number: ");
	scanf("%d", &min);
		printf(" \t \t \t \n \n");

	
	printf(" \t \t \t Enter the maximum number: ");
	scanf("%d", &max);
	
	printf(" \n \n ");
	
    printf("\t \t \t this function computes the sum of even & odd numbers between %d and %d \n \n", min, max);
    int i, j, sum, sum1;
    sum = 0; 
	sum1 = 0;
    
//    this is for even numbers

    for ( i = min; i <= max; i++)
    if(i % 2 == 0){
    	sum = sum + i;
    	printf(" \t \t \t %d \n", i);
	}
	   	printf(" \t \t \t The sum of all even numbers from %d to %d is %d \n",min, max, sum);

         
         printf("\n");
       
//	   this is for odd numbers
	     
         for ( j = min; j <= max; j++)
         if(j % 2 != 0){
         	sum1 = sum1 + j;
         	  printf("\t \t \t %d \n ", j);
			   	 }
			   	 		   	 
		printf(" \t \t \t The sum of all odd numbers from %d to %d is  %d \n",min, max, sum1);
         
    return 0;
   }
   
   // *************************************************************************
   //this function gets the name of the user.
   
  char username(){
   	char name[10];
   	
   	printf("Enter your name:");
   	scanf("%s", name);
   	
   	printf("Hell0 %d \n", strlen(name));
   	
   	return 0;
   	
   	
   }


 
