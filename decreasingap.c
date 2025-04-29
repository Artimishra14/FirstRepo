#include<stdio.h>
int main(){// display this ap 100,50,25....n terms
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%.2f ",a);
        a=a*1/2;
    }












    return 0;
}