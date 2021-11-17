#include <stdio.h>
#include <math.h>
 void phanTichSoNguyen(int n) {
    int i = 2;
    int dem = 0;
    int a[100];
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[dem++] = i;
        } else {
            i++;
        }
    }
    if (dem == 0) {
        a[dem++] = n;
    }
    for (i = 0; i < dem - 1; i++) {
        printf("%d x ", a[i]);
    }
   
    printf("%d", a[dem - 1]);
}
 
int main() {
    int t;
    scanf("%d",&t);
    while (t--!=0){
    int n, i;
    scanf("%d", &n);
     printf("%d = ",n);
    phanTichSoNguyen(n);
    printf("\n");
    } 
}