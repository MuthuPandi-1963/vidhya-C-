#include <stdio.h>
#include <math.h>
int mySqrt(int x){
    double max = pow(2,31);
    double min = pow(-2,31);

    if(max > x && min <=x){
        for(int i =0;i<=x;i++){
            double val = (double)i*(double)i;
            printf("%f" , val);
            if(max > val && min <= val){
                if(val == x) return i;
                else if(val > x) return i-1;
                else continue;
            }else{
                return x;
            }
        }
    }
    return x;


}


int main(){
    int x  = 2147483647;
    int ans  = mySqrt(x);
    printf("ans is  %f",ans);
    return 0;
}