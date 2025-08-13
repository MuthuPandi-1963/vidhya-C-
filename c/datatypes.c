#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10;
    
    char ch ='A';
    char name[]="Hello";
    printf("%d , %c , %s \n",a,ch,name);
    printf("%c",name[4]);
    bool isActive = true;
    
    int num[] = {10,11,12,13,14,15};
    printf("%d \n",num[0]);
    printf("%d \n",num[1]);
    printf("%d \n",num[2]);
    printf("%d \n",num[3]);
    printf("%d \n",num[4]);
    return 0;
}