#include<stdio.h>
int main(){
    double n,S;
    do{

         scanf("%lf\n",&n);

         S+=n;
     
    }while(n!=0);
       printf("%.3lf\n",S);
    
}