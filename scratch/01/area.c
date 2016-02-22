/**
DESIGN
Signature: number -> number
Purpose: given length of one side of square, produce the area of the square
*/

#include <stdio.h>
#include "minunit.h"

int area(int a);

int area(int a){
    return a*a;
}

//START TESTS
int tests_run = 0;
static char* test_area(){
    int c = area(2);
    mu_assert("error, area with len 2 is not 4", c==4);
    return 0;
}

static char* all_tests(){
    mu_run_test(test_area);
    return 0;
}
//END TESTS

int main()
{
    char* result = all_tests();
    if(result != 0){
        printf("%s\n", result);
    }else{
        printf("ALL TESTS PASSED.\n");
    }
    printf("Tests run:%d\n", tests_run);
    return result != 0;
}
