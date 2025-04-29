#include<stdio.h>
int main(){                            //1
    int n;                             //1 2
    printf("enter number :");          //1 2 3
    scanf("%d",&n);                    // 1 2 3 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        
        }
        printf("\n");
    }






    return 0;
}