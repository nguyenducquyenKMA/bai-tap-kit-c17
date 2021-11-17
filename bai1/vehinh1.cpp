#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--!=0)
    {
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)    {
        for(int k = 1 ; k <= n; k++){
            if(i == n || k == n || i == 1 || k == 1  ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        }
    }
}
 