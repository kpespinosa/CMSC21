/* file minunit_example.c */
 
 #include <stdio.h>
 #include "minunit.h"
 
int square(int a);
 int tests_run = 0;
 
 int foo = 7;
 int bar = 5;
 
 static char * test_foo() {
     mu_assert("error, foo != 7", foo == 7);
     return 0;
 }
 
 static char * test_bar() {
     mu_assert("error, bar != 5", bar == 5);
     return 0;
 }

static char * test_square(){
    int a = square(5);
    mu_assert("error, square of 5 is 25",a ==25);
        return 0;
}

int square(int a){
    return a*a*a;
}
 
 static char * all_tests() {
     mu_run_test(test_foo);
     mu_run_test(test_bar);
     mu_run_test(test_square);
     return 0;
 }
 
 int main(int argc, char **argv) {
     char *result = all_tests();
     if (result != 0) {
         printf("%s\n", result);
     }
     else {
         printf("ALL TESTS PASSED\n");
     }
     printf("Tests run: %d\n", tests_run);
 
     return result != 0;
 }