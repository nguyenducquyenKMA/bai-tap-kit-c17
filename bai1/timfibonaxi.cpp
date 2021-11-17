#include<stdio.h>
int F(int n)
{
	if(n==1 || n==2)
    return 1;
    else
    return F(n-1)+F(n-2);
	
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--!=0){
       unsigned int n;
       do{
           scanf("%d",&n);
       }while(n>1000);
       printf("%d\n",F(n));
    }
}
