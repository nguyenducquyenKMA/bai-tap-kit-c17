#include<stdio.h>
int tim(int a,int b){
      if (a == 0 || b == 0)
             return a + b;
        while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a; 
    }
int main(){
    int t;
    scanf("%d",&t);
    while(t--!=0){
        unsigned int a,b;
        scanf("%d%d",&a,&b);
        printf("(    %d,     %d) =     %d\n",a,b,tim(a,b));
}
}