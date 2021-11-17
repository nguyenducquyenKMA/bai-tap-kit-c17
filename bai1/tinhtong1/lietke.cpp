#include<stdio.h>
int main(){
    int a,b;
    do{
        scanf("%d %d",&a,&b);
    }while(a<-1000 && b>1000);
    for(int i=a ; i<=b;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}