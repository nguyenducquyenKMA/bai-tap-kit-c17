#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i = 1; i <= n; i++){
        for(int k = 1 ; k <= m; k++){
            if(i == 1 || k == 1 || i == n || k == m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}