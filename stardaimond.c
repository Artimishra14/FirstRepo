#include<stdio.h>
int main(){
    printf("enter the number of row:");// code for rhombus
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        
        
        printf("\n");
    }
    


















    return 0;
}