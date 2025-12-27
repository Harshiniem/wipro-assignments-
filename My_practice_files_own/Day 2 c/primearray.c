/*
 * Purpose : Store 100 numbers and make non-primes 0
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    int arr[100], i;
    printf("Enter first value: ");
    scanf("%d", &arr[0]);

    for(i=1;i<100;i++) arr[i]=arr[i-1]+1;

    for(i=0;i<100;i++)
        if(!isPrime(arr[i])) arr[i]=0;

    for(i=0;i<100;i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

