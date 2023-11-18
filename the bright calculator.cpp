#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadratic();
void series_sequence();
void nth_term_ap();
void sum_of_ap();
void algebraicfunctions();
void sum_of_nth_term_gp();
void close();
void nth_term_of_gp();
void sum_to_infinity();
void fordelay();
void coordinate_geometry();
void distance_btw_2_point();
void trigonometry();
void trig_ratio();


int main() {
    start:
    int choice;
    
    printf("\n\t\t\tWelcome to BrightLab: Home of Mathematics Solutions\n\n");
    
    printf("1. Algebraic Functions \n \n2. Trigonometry\n \n3. Coordinate Geometry\n \n4. Plane Geometry\n \n5. Exit \n \n \t Enter your choice: ");
    scanf("%d", &choice);
    
    system("cls");
    
    switch (choice) {
        case 1:
            algebraicfunctions();
        break;
        case 2:
        	trigonometry();
        break;
        
        case 3:
        	coordinate_geometry();
        break;
            
        case 5:
            close();
        break;
            	
        default:
            goto start;
    }
    
    return 0;
}
void close(){
	printf("This program is developed jaiyeola emmanuel.");
}

//for delay
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

// this function stores all the algebraic function

void algebraicfunctions() {
    int function;
    
    printf("\n \n 1. Quadratic\n \n 2. Arithmetic and Geometric Progression \n \n \t To return to the main menu, press 0 \nEnter your choice: ");
    scanf("%d", &function);
    
    system("cls");
    
    switch (function) {
        start:
        case 1:
            quadratic();
            break;
            
        case 2:
            series_sequence();
            break;
            
        case 0:
        	main();
        	break;
        	
        default:
            printf("Please enter a valid number");
            goto start;
    }
}

void coordinate_geometry(){
	int choice;
	start:
		
	printf("\n \n 1. Distance between two points \n \n 2. Coordinates of Mid-Point \n \n 3. Gradient of a line \n \n 4. main menu \n \n \t Enter your choice: ");
	
	scanf("%d", &choice);
	
	system("cls");
	
	switch(choice){
		
		case 1:
			distance_btw_2_point();
		break;
		
	    case 4:
	        main();
	    break;
		
     	default:
		   goto start;
	    break;
	}
	
}

// this function finds the roots of quadratic equation

void quadratic() {
	start:
	system("cls");
	
    float x, y;
    float a, b, c;
    float D;
    
	printf("\n \t This function finds the roots of quadratic equation \n");
	
    printf("Enter the value of a: ");
    scanf("%f", &a);
    
    printf("Enter the value of b: ");
    scanf("%f", &b);
    
    printf("Enter the value of c: ");
    scanf("%f", &c);
    
    if (a != 0) {
        D = (pow(b, 2) - 4 * a * c);
        
        if (D >= 0) {
            x = (-b + sqrt(D)) / (2 * a);
            y = (-b - sqrt(D)) / (2 * a);
            printf("The roots of the equation you entered are %.2f and %.2f\n\n", x, y);
            
            decide:
            printf("Enter 1 to perform the operation again and 0 to return to the main menu: ");
            int choice;
            scanf("%d", &choice);
            
            if (choice == 1) {
                system("cls");
                goto start;
            } else if (choice == 0) {
                system("cls");
                algebraicfunctions();
            } else {
                goto decide;
            }
        } else {
            printf("The equation has complex roots\n");
            goto start;
        }
    } else {
        printf("The value of 'a' can't be 0\n");
        goto start;
    }
}

//this function stores the all the parameters of AP and GP

void series_sequence() {
	system("cls");
    start:
    
    int choice;
    
    printf("\n 1. nth term of AP \n 2. Sum of AP \n 3. nth term of GP \n 4. Sum of GP \n 5. Sum to Infinity \n 6. Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    system("cls");
    
    switch (choice) {
        case 1:
            nth_term_ap();
            break;
            
        case 2:
            sum_of_ap();
            break;
            
        case 3:
        	nth_term_of_gp();
           	break;
           	
        case 4: 
           	sum_of_nth_term_gp();
           	break;
           	
        case 5:
        	sum_to_infinity();
        	break;

        case 6:
            algebraicfunctions();
            break;
            
        default:
            goto start;
            break;
    }
}

//this function calculates the nth term of AP

void nth_term_ap() {
	start:
    system("cls");
    
    int n;
    float a, d, T;
    
    printf("\t \n This function finds nth term of an AP \n");
    
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    
    printf("\nEnter the value of a: ");
    scanf("%f", &a);
    
    printf("\nEnter the value of d: ");
    scanf("%f", &d);
    if( n <= 0){
       printf("n cannot be 0");
       fordelay(100000000);
	   goto start;
	   }
     else{
	   T = a + (n - 1) * d;
       printf("The %dth term is %f\n", n, T);
      }
       printf("Enter 1 to perform the operation again and 0 to go back to the main menu: ");
    
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        goto start;
    } else if (choice == 0) {
        series_sequence();
    } else {
        goto start;
    }
}

// this function calculates the sum of AP

void sum_of_ap() {
	start:
    system("cls");
    
    int n;
    float sum, a, d;
    
    printf("\n \t This function finds the sum of an AP \n");
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the value of a: ");
    scanf("%f", &a);
    
    printf("Enter the value of d: ");
    scanf("%f", &d);
    if(n <= 0){
    	printf("n cannot be 0");
    	fordelay(10000000);
    	goto start;
	}
	else{
		
	
      sum = (n / 2.0) * (a + (n - 1) * d);
       printf("The sum of %dth term is %.2f\n", n, sum);
     }
    decide:
      printf("Press 1 to perform the operation again or 0 to return to the main menu: ");
     int num;
     scanf("%d", &num);
    
    if (num == 1) {
        goto start;
    } else if (num == 0) {
        series_sequence();
    } else {
        goto decide;
    }
}

// this function calculates the sum of nth term of gp

void sum_of_nth_term_gp(){
	start:
	system("cls");
	
	int n;
	float sum, r, a;
	printf("\n \t This function finds the sum of nth term of GP \n");
		
	printf(" \n Enter the value of n: ");
	scanf("%d", &n);
	

	printf("\n enter the value of r: ");
	scanf("%f", &r);
	
	printf("\n enter the value of a: ");
	scanf("%f", &a);
	
	if((n <= 0)){
		printf("error: n can not be less than or equal 0");
	}
	else if((n > 0 ) & (a > 1)){
		sum = (a * ( pow(r, n) - 1)) / (r - 1);
		printf("the sum of %dth is %f",n,sum);
	}
	else{
		sum = (a * (1 - (pow(r, n)))) / (1 - r);
		printf("the sum of %dth is %f",n,sum);
	}
	int ch;
	printf("\t press 0 to perform operation again and 1 to go main menu: ");
	scanf("%d", &ch);
	
	if(ch == 0){
		goto start;
	}
	else if(ch == 1){
		main();
	}
	else{
		printf("invalid input");
		goto start;
	}
}

// this function calculates the nth term of GP
void nth_term_of_gp(){
	start:
	system("cls");
	
	int n,ch;
	float a,r, T;
	
	printf("\n \t This function find the nth term of GP \n");
	
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	
	printf("\n Enter the value of a: ");
	scanf("%f",&a);
	
	printf("\n Enter the value of r: ");
	scanf("%f",&r);
	
	if(n <= 0){
		printf("\n N cannot be zero. ");
		goto start;
	}
	else{
		
	T = a * (pow(r, (n - 1)));
	
	printf("\n The %dth of the GP is %.2f", n,T); 
	}
	
	
	printf("\n \t Enter 1 to perform operation again and 0 to go to main menu.");
	scanf("%d", &ch);
	
	if(ch == 1){
		goto start;
	}
	else if(ch == 0){
		series_sequence();
	}
	else{
		printf("\n Invalid input");
		goto start;
	}	
}

// this function finds the sum to infinity
void sum_to_infinity(){
	start:
	system("cls");
	
	int ch;
	float a,sum,r;
	
	printf("\n \t This function calculates the sum to infinity of GP ");
	
	printf("\n Enter the value of a: ");
	scanf("%f", &a);
	
	printf("\n Enter the value of r: ");
	scanf("%f", &r);
	
	if(a == 0){
		printf("\n sum to infinity is not defined");
		here:
		printf("\n enter 1 to perform again or 0 to go to main menu");
		scanf("%d", &ch);
		
		if(ch == 1){
			goto start;
		}
		else if(ch == 0){
			series_sequence();
		}
		else{
			printf("\n invalid input");
			goto here;
		}
	}
	else {
	 sum = a / (1 - r);
	printf("\n Sum to infinty is %f", sum);
	
	choose:
	printf("\n \t Enter 1 to perform operation again or 0 to perform operation again.");
	scanf("%d", &ch);
	if(ch == 1){
		goto start;
	}
	else if(ch == 0){
		series_sequence();
	}
	else{
		printf("\n Invalid Input");
		goto choose;
	}
  }
}
/* let us dive into the world of geometry */
// This function find the distance between two points

void distance_btw_2_point(){
	start:
		system("cls");
		
	int x1,x2,y1,y2, ch;
	float d;
    
	printf("\n Enter the value of x1: ");
    scanf("%d", &x1);
    
     printf("\n Enter the value of x2: ");
    scanf("%d", &x2);
    
     printf("\n Enter the value of y1: ");
    scanf("%d", &y1);
    
     printf("\n Enter the value of y2: ");
    scanf("%d", &y2);
    
    d = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("\n \n The distance between the point given is %.1f", d);
    
    decide:	
    printf("\n \n \t press 1 to perform operation again and 0 to go to main menu ");
    scanf("%d",&ch);
    
    if(ch == 1){
    	goto start;
	}
    else if(ch == 0){
    	main();
	}
	else{
		printf("Invalid input");
		fordelay(10000000);
		goto decide;
  } 
}

// welcome to the realm of trigonometry
void trigonometry(){
	
	start:
	system("cls");
		
		printf("\n\n 1. trigonometric function: ");
		
		 int choice;
		 scanf("%d",&choice);
		 
		 switch(choice){
		 	
		 	case 1:
		 		trig_ratio();
		 	break;
		 	
		 	default:
		 		printf("invalid input");
		 		fordelay(1000000);
		 	goto start;
		 	break;
		 		
		 }
}

void trig_ratio(){
	system("cls");
	start:
		
	float num, rad;
	
	printf("\n \n \t This function find the sine, cosine and tangent of a number");
	
	
	int choice;
	printf("\n \n 1. sine \n\n 2. cos \n\n 3. tan \n \n \t Enter your choice");
	scanf("%d",&choice);
	
	if(choice == 1){
		system("cls");
		
		printf("\n \n Enter number: ");
	    scanf("%f",&num);
		
		rad = (num * M_PI ) / 180;
		printf("\n sine of %d is %f", num,sin(rad));
		
		z:
		int x;
		printf("\n \n \t Enter 1 to perform operation again and 0 to go to main menu\n \n \t Enter choice: ");
		scanf("%d",&x);
		
		if(x == 1){
			goto start;
		}
		else if(x == 0){
			system("cls");

			main();
		}
		else{
			printf("\n invalid input");
			goto z;
		}
	}
	else if(choice == 2){
		system("cls");

		printf("\n \n Enter number: ");
	    scanf("%f",&num);
		
		rad = (num * M_PI ) / 180;
		printf("cos of %d is %f", num, cos(rad));
		
		y:
		int x;
		printf("\n \n enter 1 to perform operation again and 0 to go to main menu\n \n \t Enter choice: ");
		scanf("%d",&x);
		
		if(x == 1){
			goto start;
		}
		else if(x == 0){
			system("cls");

			main();
		}
		else{
			printf("\n invalid input");
			goto y;
		}
		
	}
	else if(choice == 3){
		system("cls");
        a:
        	
   		printf("\n \n Enter number: ");
	    scanf("%f",&num);
	    
	    if(num == 90 || num == 270){
	    	printf("\n \n value is not defined");
	    	goto a;
		}
		else{
		
		rad = (num * M_PI ) / 180;
		printf("tan of %d is %f", num, tan(rad));
		
			decide:
		int x;
		printf("\n \n enter 1 to perform operation again and 0 to go to main menu\n \n \t Enter choice: ");
		scanf("%d",&x);
		
		if(x == 1){
			goto start;
		}
		else if(x == 0){
			system("cls");

			main();
		}
		else{
			printf("\n invalid input");
			goto decide;
		}
	}
}
	else{
		printf("error! please enter a valud argument");
		goto start;
	}
	
}

