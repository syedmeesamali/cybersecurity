#include<stdio.h>
void SetToZero(short **);         //Double pointers
int main()
{
    short a[3] = {15, 28, 35};
    short b[2] = {18, 29};
    short *t[2] = {a, b};   //Array of addresses of arrays
    printf("Current array a = %d, %d, %d\n", a[0], a[1], a[2]);
    printf("Current array b = %d, %d\n", b[0], b[1]);
    SetToZero(t);
    printf("New array a = %d, %d, %d\n", a[0], a[1], a[2]);
    printf("New array b = %d, %d\n", b[0], b[1]);
    return 0;
}

//Make elements of the array zero
void SetToZero(short **val)
{
    printf("-------------------\n");
    *(*val) = 0;            //First element of first array t[0][0]
    val[0][0] = 1;
    *(*(val)+1) = 0;        //Pointer arithmetic - second element of first array t[0][1]
    *(val[0] + 1) = 2;
    *(*(val)+2) = 0;        //3rd element of first array t[0][2]

    *(*(val+1)) = 0;        //t[1][0]
    *(*(val+1)+1) = 0;      //t[1][1]
} //End of make array elements zero function
