#include "factorial.h"

int factorial(int n){
    int fact = 1;
    if(n > 1) fact = n * factorial(n-1);
    return fact;
}
