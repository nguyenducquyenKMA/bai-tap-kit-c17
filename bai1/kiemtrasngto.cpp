#include<stdio.h>
#include<math.h>
int soNguyenTo(int n)
{
    if (n < 2)    
        return 0;

    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--!=0){
        int n;
        scanf("%d",&n);
        if(soNguyenTo(n))
        printf("%d : YES\n",n);
        else
        printf("%d : NO\n",n);
    }
}