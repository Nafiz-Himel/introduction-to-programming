#include<stdio.h>
int main()
{
    int x =10; //declare and initialization 
    // int ar[]= {10,20,30,40}; //declare and initialization 
    // int ar[4] = {10,20}; //10 20 0 0 
    // int ar[4]; //8 0 83 0 
    int ar[4] = {0}; //0 0 0 0 
    for( int i=0;i<4;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
