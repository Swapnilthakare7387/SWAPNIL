#include <stdio.h>

int main()
{
    int num = 10;
    char ch = 'A';
    double dvar = 12.33;

    // sizeof( ) ==> operator  ==> bytes
    // sizeof ==> 1, 4 , 8 , 2  ==> %d 

    printf("sizeof(int) = %d \n",sizeof(num)); //4 byte 
    printf("sizeof(char) = %d \n",sizeof(ch));// 1 byte 
    printf("sizeof(double) = %d \n",sizeof(dvar)); // 8 byte  


    return 0;
}