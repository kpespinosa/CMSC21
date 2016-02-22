/**
DESIGN
Signature: number -> number
Purpose: adds 2 to the number
Stub/s: 
int add2(int c){
    return 0;
}
*/

#include <stdio.h>
#include "minunit.h"

//FUNCTION DEFINITIONS
int add2(int c);

//START TESTS
int tests_run = 0;
static char* test_add2(){
    int c = add2(2);
    mu_assert("error, add2 to 2 is not 4", c==4);
    return 0;
}

static char* all_tests(){
    mu_run_test(test_add2);
    return 0;
}
//END TESTS

int main(){
    char* result = all_tests();
    if(result != 0){
        printf("%s\n", result);
    }else{
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);
    return result!=0;
}

//FUNCTIONS
int add2(int c){
    return c + 2;
}

