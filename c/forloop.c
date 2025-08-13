#include <stdio.h>
void main(){

    for (int i = 0; i < 20; i++)
    {
        printf("Hello world %d \n",i);
    }

    for (int i = 0; i < 20; i+=2)
    {
        printf("Hello world %d \n",i);
    }

    for (int i = 0; i < 20; i+=3)
    {
        printf("Hello world %d \n",i);
    }
    
}