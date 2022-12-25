#include<stdio.h>
int main(){
    int sum = 0;
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i = 1;i <= n; i++){
        if( i % 2 == 0){
            sum=sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}