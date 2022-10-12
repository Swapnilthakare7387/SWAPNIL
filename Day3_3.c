#include<stdio.h>

int main( )
{
    int num = 10 ; // variable decln + init 
    //int num = 10 ; // NOT OK ( init can be done only once ) 
    printf("number = %d\n",num); // 10   
    
    num = 50; // assignment 
    printf("number = %d\n",num); // 50 

    num = 60; // assignment 
    printf("number = %d\n",num); // 60 

    // assignment can be done multiple number of times 
    // assignment ==> variable - name = value 
    return 0; 
}
/*
        int num = 10; // variable decln + init 
        num = 50; //assignment( it can be done multiple times )  


        int num;// variable declaration  
        num = 10; //assignment  

*/