#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("*");
        }
        a=a-1;
        printf("\n");
    }
    return 0;
}