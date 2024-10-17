#include<stdio.h>

int prime(int n);// function declaration 
int main(){
    int n;
    int ans;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n==1 || n==0){
        printf("%d is neither prime nor composite.",n);
    }
    ans=prime(n);
    if(ans==1){
        printf("%d is a prime number",n);
    }//if block
    else{
        printf("%d is not a prime number",n);
    }//else block
    return 0;
}
int prime(int n){
    int i,flag=1;
    for(i=2;i<n;i++){
      if(n%i==0){
        flag=0;
        break;
      }//if block
    }//for loop
    return flag;
}//prime function