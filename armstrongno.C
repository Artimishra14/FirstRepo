#include<stdio.h>
#include<math.h>
int main(){
    // long num;
    // scanf("%ld",&num);
    for(int i=1; i <= 1000 ; i++){
        int j=i;
        int count=0;
        while(j != 0){    // This while loop is for counting digits
            j = j / 10;
            count++;
        }
        j=i;
        int sum=0,last_digit;
        while(j != 0){
            last_digit = j %10;
            sum = sum + pow(last_digit,count);
            j = j /10;
        }
        if (sum == i){
            printf("%d\n",i);
        }
    }
}