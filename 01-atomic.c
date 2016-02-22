#include <stdio.h>
#include <limits.h>
#include <float.h>

int add(int a, int b);

int main(){
//integers and floats
	// int a = 1, b = -1;

	// int c = 123455;
	// printf("%d == 123456\n", a + c);
	// printf("%d == 123454\n", b + c);


	// int c = INT_MAX;//	2^31+1
	// printf("%d\n", c);

	// printf("%d == INT_MAX + 1\n", c + 1);
	// printf("%d == %d\n", c + 1, INT_MIN);

	// int d = INT_MIN;//	2^31+1
	// printf("%d\n", d);
	// printf("%d == INT_MIN - 1\n", d - 1);		
	// printf("%d == %d\n", d - 1, INT_MAX);

	// printf("%d\n", INT_MAX + 1);
	// printf("%d\n", INT_MIN - 1);
	// printf("%d\n", INT_MIN - INT_MAX);
	// printf("%d\n", INT_MAX - INT_MIN);
	// printf("%d\n", INT_MAX + INT_MIN);


	// int a = 3, b = 4;
	// printf("%d\n", a / b);	//integer division

	// float a = 3, b = 4;	
	// printf("%f\n", a / b);		

	// int a = 3, b = 4;
	// int a = 3, b = 14;

	// printf("%d\n", a % b); //3 / 4 = 0 r 3, 6 / 2 = 3 r 0, 8 / 4 = 2 r 0
	// float a = 1.0/3;

	// printf("%lu\n", sizeof(int));
	// printf("%lu\n", sizeof(float));
	// printf("%f\n", FLT_MAX-10.0);
	// printf("%f\n", FLT_MIN);
	// printf("%16.17f\n", (1.0/3)+12345678901234567);

//modulo
	// int a = 3, b = 14;
	// printf("%d\n", b % a); //14 / 3 = 4 r 2


//characters
	// char a = 'a';

	// printf("%c\n", a);//print the character
	// printf("%d\n", a);//print integer value of char

	// char a = '\0';

	// printf("%d\n", a);
	// printf("%c\n", 0);
	// char b = 'a' + 25;
	// printf("%c\n", b);

	// char c = 'Z' - 25;
	// printf("%c\n", c);

	// char d = '0' + 0;//'0' is 48
	// printf("%c\n", d);	
	// printf("%d\n", d);	

	// char a = 'aa'//should only be one character

//boolean: nonzero value is true, zero is false.
	// if(0)
	// 	printf("true\n");
	// else
	// 	printf("false\n");


	// if(1)
	// 	printf("true\n");
	// else
	// 	printf("false\n");

	// if(-1)
	// 	printf("true\n");
	// else
	// 	printf("false\n");

	// if('a')
	// 	printf("true\n");
	// else
	// 	printf("false\n");

	// if('\0')
	// 	printf("true\n");
	// else
	// 	printf("false\n");

//boolean expressions
	// printf("%d\n", 9 < 8);
	// printf("%d\n", 9 < 8 || 9 > 8);
	// printf("%d\n", 9 > 8 || 9 < 8); //short circuit


	// int i = 1, j = 2;
	// printf("%d\n", i < j || j++ );//1
	// printf("%d\n", j);//2
	// printf("%d\n", i > j || j++ );//1
	// printf("%d\n", j);//3

	// printf("%d\n", i < j && j++ );//1
	// printf("%d\n", j);//3
	// printf("%d\n", i > j && j++ );//0
	// printf("%d\n", j);//3


//operations
	// int x = 5 - 4  / 2;
	// int x = (5 - 4)  / 2;
	// printf("%d\n", x);
	// int i = 2, j = 3, k = 4;

	// int a = ((i < j) && ((k < j) || ((i + j) < k)));
	// printf("%d\n", a);

	//T/F: This expression is true if majority ar true
	// int a = ((i < j) && ((k < j) || ((i + j) < k)));
	/**
	i 	j 	k 	a
	0	0	0	-
	0	0	1	-
	0	1	0	-
	0	1	1	1 && (0 || (1 < 1)) = 1 && (0 || 0) = 0
	1	0	0	-
	1	0	1	
	1	1	0	
	1	1	1	
	*/

//LOOPS
	/**
	while: satisfy a condition, not necessarily looping thru a collection
	do while: executes at least once at all times
	for: iterate thru a collection, constant step-size
	*/

	// int a[] =  {1,2,3,4};
	// for (int i = 0; i < 4; ++i)
	// {
	// 	/* code */
	// }

	// int b = 4;
	// while(b != 0){
	// 	//randomize values of b;
	// }


	// do{
	// 	//randomize values here
	// }while(b != 0);

//arrays
	// int a[3];//declaration
	// a[0] = 1;
	// a[1] = 2;

	// int b[] = {1,2};

	// //array index out of bounds exception
	// int c = b[-1];
	// int d = b[2];

	// char a[] = {'a','b','c'};
	// printf("%s\n", a);
	// int i;
	// for (i = 0; a[i] != '\0'; ++i)
	// {	
	// 	printf("%c\n",a[i] );
	// }

	// printf("%c\n", a[2]);
	

	// char b[] = "hello";//has an extra '\0'
	// printf("%c\n", b[5]);
	// int i;
	// for (i = 0; b[i] != '\0'; ++i)
	// {	
	// 	printf("%c\n",b[i] );
	// }

//functions
	// int a = add(1,2);//arguments
	// printf("%d\n", a);

	// return 0;

}


int add(int a, int b){//signature
	return a + b;
}