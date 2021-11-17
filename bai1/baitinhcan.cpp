#include<stdio.h>
#include<math.h>
int main(){
    float x;
    float can_x;
    scanf("%f",&x);
    if(x<0){
    can_x=sqrt(-x);
    }else{
        can_x=sqrt(x);
    }
    printf("%.4f",can_x);
}