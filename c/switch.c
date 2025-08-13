#include <stdio.h>

void main(){
    int day;
    printf("enter a number to find its Day : ");
    scanf("%d",&day);

    switch(day){
        case 1:
            printf("Its Sunday \n");
            break;
        case 2:
            printf("Its Monday \n");
            break;
        case 3:
            printf("Its Tuesday \n");
            break;
        case 4:
            printf("Its Wednesday \n");
            break;
        case 5:
            printf("Its Thursday \n");
            break;
        case 6:
            printf("Its Friday \n");
            break;
        case 7:
            printf("Its Saturday \n");
            break;
        default:
            printf("You enter a wrong day \n");
    }
}