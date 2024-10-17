#include <stdio.h>

int add(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n;
    int ans;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    printf("The sum of first %d numbers is %d",n,add(n));
    return 0;
}
