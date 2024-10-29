#include <iostream>
#include <stdlib.h>

/* A pointer is an address variable that points to a memory address*/

int main() {

    // stack pointer
    int x = 20;
    int *xPtr = &x;
    /*
    
    & is the address of operator, returns address of x in the case above
    this example creates a pointer to the address of x which is located in the stack memory
    
    a pointer can be used to create and access data in heap memory as well

    */

    // heap pointer
    int *heapInt;
    heapInt = new int[5];
    heapInt[1] = 4;
    // c way
    // heapInt = (int *)malloc(5*sizeof(int));
    


    return 0 ;
}