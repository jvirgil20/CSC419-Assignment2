#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
#define ARRAY_SIZE 1000000
/*
    Static
    --
    declares large array statically using
    'static' keyword
*/
void declareStaticArr() {
    static int arr[ARRAY_SIZE];
}
/*
    Stack
    --
    declares large array on the stack
*/
void declareStackArr() {
    int arr[ARRAY_SIZE];
}
/*
    Heap
    --
    delcares large array on the heap by
    allocating (and deallocating) memory
*/
void declareHeapArr() {
    int* arr = malloc(ARRAY_SIZE * sizeof(int));
    free(arr);
}
/*
    MAIN
    --
    call each function at least 100000 times and
    output time required by each
*/
int main() {
    //
    int num = 100000;
    clock_t start, end;
    double staticTime, stackTime, heapTime;
    /*
        Static Time
    */
    start = clock();
    for (int i = 0; i < num; i++) declareStackArr();
    end = clock();
    staticTime = ((double)(end-start)) / CLOCKS_PER_SEC;
    /*
        Stack Time
    */
    start = clock();
    for (int i = 0; i < num; i++) declareStackArr();
    end = clock();
    stackTime = ((double)(end-start)) / CLOCKS_PER_SEC;
    /*
        Heap Time
    */
    start = clock();
    for (int i = 0; i < num; i++) declareHeapArr();
    end = clock();
    heapTime = ((double)(end-start)) / CLOCKS_PER_SEC;
    /*
        Print
        -- 
        prints the time for each
    */
    printf("Static array time: %f seconds \n", staticTime);
    printf("Stack array time:  %f seconds \n", stackTime);
    printf("Heap array time:   %f seconds \n", heapTime);
    //
    return 0;
}
