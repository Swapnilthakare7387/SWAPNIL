#include<stdio.h>

int main( )
{
    int number;// var declaration 
    int roll = 123; // var declaration + init    

    double basic_salary = 2000.00 , total_salary = 1000.00;  
    // can declare multiple variables in single line 
    /*
            double basic_salary = 2000.00; 
            double total_salary = 1000.00; 
    */
    char ch = 'A' ; //  var declaration + init    

    // Variables and datatypes 

    printf("Variables and datatypes.\n");  
    number = 12; // Assignment 

    printf("number --> %d\n",number);  
    //      number --> 12

    printf("%lf %lf \n",basic_salary,total_salary); 

    printf("%d %lf  %lf \n",number,basic_salary,total_salary); 
    
    printf("%c",ch); 
    return 0; 
}


/*
    int num1 = 10; 
    int num2 = 20; 
    int num3 = 30; 
    int num1 = 10 , num2 = 20 , num3 = 30 ; 

*/