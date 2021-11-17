#include<stdio.h>
int main(){
    int n;
    double gt=1;
    scanf("%d",&n);
    double S=0,A;
    for(int i=1;i<=2*n;i++){
        gt*=i;
        if(i%2==0){
            A+=-1.0/i;
        }
        if(i%2!=0){
            A+=1.0/i;
        }
        S+=A;
    }
    printf("%.13lf",S);
}