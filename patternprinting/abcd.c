#include<stdio.h>
int main(){
    int n;
    printf("enter number of row:");
    scanf("%d",&n);
    int a=65;
    for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
        printf("%c ",a);
        a++;
            
    }
    printf("\n");


    }

     printf("%d",a);
   
        
        
    
    return 0;
}