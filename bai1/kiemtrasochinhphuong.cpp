#include<stdio.h>

int soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return 1;
        }
        ++i;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--!=0){
        int n;
        scanf("%d",&n);
        if(soCP(n))
        printf("%d : YES\n",n);
        else
        printf("%d : NO\n",n);
    }
}