#include<stdio.h>
int main(){
    float a,b,c;
    float Tb=0;
    do{
    scanf("%f%f%f",&a,&b,&c);
    }while(a<0,b<0,c<0,a>10,b>10,c>10);
    Tb = a*0.1+b*0.2+c*0.7;
    if(Tb<4.0)
    printf("%.2f F",Tb);
    if(Tb<4.8 && Tb>=4.0)
    printf("%.2f D",Tb);
    if(Tb<5.5 && Tb>=4.8)
    printf("%.2f D+",Tb);
    if(Tb<=5.5 && Tb<6.3)
    printf("%.2f C",Tb);
    if(Tb<7.0 && Tb>=6.3)
    printf("%.2f C+",Tb);
    if(Tb<7.8 && Tb>=7.0)
    printf("%.2f B",Tb);
    if(Tb<8.5 && Tb>=7.8)
    printf("%.2f B+",Tb);
    if(Tb<9.0 && Tb>=8.5)
    printf("%.2f A",Tb);
    if(Tb>=9.0)
    printf("%.2f A+",Tb);
    

}