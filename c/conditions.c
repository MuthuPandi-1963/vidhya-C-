#include <stdio.h>
int main(){
    int amount ;
    int milk = 15;
    printf("enter your amount : ");
    scanf("%d",&amount);

    if(milk <= amount){
        printf("You can buy a milk \n");
        // amount = amount - milk;
    }else{
        printf("you can't buy a milk \n");
    }

    int mark;
    printf("enter your mark : ");
    scanf("%d",&mark);

    if(mark > 400 && mark <= 500){
        printf("A grade");
    }else if(mark > 300 && mark <= 400){
        printf("B grade");
    }else if(mark > 200 && mark <= 300){
        printf("C grade");
    }else{
        printf("D Grade");
    }
    return 0;
}