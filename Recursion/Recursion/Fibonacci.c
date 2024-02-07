//
//  Fibonacci.c
//  Recursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 29/10/23.
//

#include <stdio.h>

int fib(int n){
    int t0=0, t1=1,s=0,i;
    if(n<=1){
        return n;
    }
    for( i =2; i<=n;i++){
        s= t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
// Recursive function
int rfib(int n){
    if(n<=1)
        return n;
    return rfib(n-2)+rfib(n-1);
}

//Memoization function
int F[10];
int mfub(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    if(F[n-2]==-1){
        F[n-2] = mfub(n-2);
    }
    if(F[n-1]==-1){
        F[n-1] = mfub(n-1);
    }
    F[n]=F[n-2]+F[n-1];
    return F[n-2]+F[n-1];
}

int main(){
    printf("%d \n",fib(10));
    for (int i=0; i<10; i++) {
        F[i] = -1;
    }
    printf("%d \n",mfub(6));
    return 0;
}
