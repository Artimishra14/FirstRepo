#include<stdio.h>
int main(){
    // int n;
    // printf("enter the number:");
    // scanf("%d",&n);
    // int factorial=1;

    // for(int i=1;i<=n;i++){
    //     factorial=factorial*i;
    //      printf("\nthe factorial of %d is %d",i,factorial);
        
    // }
    
    int n;   // print  this series 1 -2 +3 -4 +5 -6 .......upto  n terms
    printf("enter the number:");
    scanf("%d",&n);
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",-(start));
        }
        else{
            printf("%d ",(start));
        }
        start++;
    }


   











    return 0;
}