void memoryManagement() {
    /*
     Unlike Java and python, C is not "garbage collected"
     Programmers must manage memory.

     Memory on the stack
     - Local variables declared within a function are placed on the stack
     - The space they use is automatically freed when the function returns

     Memory on the Heap
     - Non-local variables or arrays with an unknown size (at time of compile)
        should be placed on the heap
    - This memory need to be allocated and freed manually

    Memory management functions are defined in <stdlib.h>

    Allocating Memory
    -----------------

    Memory is allocated through use of the malloc function, which returns a void pointer
        void* ptr = malloc(bytes);
    To allocate an array of a particular size on the heap, we need to get that size first.
        int* ptr = (int*) malloc(10*sizeof(int));

    Allocated memory is contiguous, so can be treated as an array
        Contiguous, adjective
            Sharing a common border
            Next or together in sequence
    Failing to free allocated memory can lead to memory leaks

    Freeing Memory
    --------------

    Memory is freed through use of the free function, which takes a pointer
        free(ptr);
    Trying to free a null pointer will cause a segfault
    Trying to free a pointer that wasn't returned by malloc will also cause a segfault
     */
}