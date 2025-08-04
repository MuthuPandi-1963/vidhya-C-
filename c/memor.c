#include <stdio.h>

#include <stdlib.h>

int sum(int* num ,int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans + num[i];
        // ans+=num[i];
    }
    
    return ans;
}

int* getUserinput(int n){

    printf("n is %d \n",n);
    int* num = (int*) malloc(n*sizeof(int));
    // int num[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter a nummber to store in %d index :",i);
        scanf("%d",&num[i]);
    }
    return num;

}
void  main(){
    int n;
    printf("Enter a no of elements : ");
    scanf("%d",&n);
    int* num = getUserinput(n);
    printf("n in main function : %d \n",n);
    int res = sum(num,n);
    printf("res = %d",res);
    free(num);
}