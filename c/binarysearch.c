#include <stdio.h>
#include <malloc.h>
int* getUserInput();
int binarySearch(int* num, int n , int target){
    int left =0 ,right = n-1, mid;
    while(left <= right){
        mid = (left+right)/2;
        if(num[mid]==target) return mid;
        else if(num[mid] <target) left = mid+1;
        else if(num[mid] > target) right = mid-1;
    }
    // printf("element not found \n");
    return -1;
}
void main(){
    // int num[] = {1,2,3,4,5,6,7,8};
    int* num = getUserInput();
    int n = sizeof(num)/sizeof(num[0]);
    int target = 10;
    int ans = binarySearch(num,n,target);
    printf("ans is %d \n", ans);

    free(num);
}

int* getUserInput(){
    int  n;
    printf("Enter the no of elements to Store :");
    scanf("%d",&n);
    // int num[n];
    int* arr = (int*) (malloc(n*sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number of %d index : ",i);
        scanf("%d",&arr[i]);
    }
    return arr;
    
}