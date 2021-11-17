#include<stdio.h>
int main(){
    unsigned int t;
    scanf("%u",&t);
    unsigned int s_rua,s_tho;
    s_rua=t;
    s_tho=0;
    if(t<15){
        s_tho=2*5;
    }
    else{ 
    s_tho +=t/15*10;
    }
    if(t%15<5){
    s_tho+=t%15*2;
    }
    else{
         s_tho +=10;
    }
    printf("\nRua chay duoc %u",s_rua);
    printf("\nTho chay duoc %u",s_tho);
    if(s_rua>s_tho)
    printf("\nRua thang cuoc");
    else if(s_rua < s_tho)
    printf("\nTho thang cuoc");
    else
    printf("\nTho va rua hoa");
    printf("Chu Dat da o day!\n");
}                                                         