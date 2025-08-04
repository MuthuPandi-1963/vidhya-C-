#include <stdio.h>


void main(){

    int a = 10;

    // int* p = &a;

    int *p = &a;

    printf("%d \n",p);

    int num[] = {1,2,3,4,5,6};

    int* d = num;

    // printf("%d \n",*d);

    printf("num  memory address : %d , d memory address : %d \n",num,d);
    printf("num  value : %d , d value : %d \n",*num,*d);

    d++;
    printf("num  memory address : %d , d memory address : %d \n",num,d);
    printf("num  value : %d , d value : %d \n",*num,*d);
    d++;
    printf("num  memory address : %d , d memory address : %d \n",num,d);
    printf("num  value : %d , d value : %d \n",*num,*d);
    d++;
    printf("num  memory address : %d , d memory address : %d \n",num,d);
    printf("num  value : %d , d value : %d \n",*num,*d);
}