#include<stdio.h>
int main(){
    char kytu;
    scanf("%c",&kytu);
    if(kytu>=97 && kytu<=122){
        printf("%c",kytu-32);
    }
}