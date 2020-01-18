#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
    #pragma omp parallel
    printf("Hello Friends ! \n");
    return 0;
}
