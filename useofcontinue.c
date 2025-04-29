#include<stdio.h>
int main(){
    // print odd number from 1 to 100
    // for(int i=1;i<=100;i++){
    //     if(i%2==0){
    //         continue;// continue means skip yaha vo skip ho jaega jo 2 se divisible hoga aur odd no print ho jaega
    //     }
    //     printf("%d ",i);
    // }

    int n;// print even number upto n 
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            continue;
        }
        printf("%d ",i);
        
    }












    return 0;
}