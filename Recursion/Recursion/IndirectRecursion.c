//
//  main.c
//  Recursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>
void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d ",n);
        funB(n-1);
    }
}

void funB(int n){
    if (n> 1){
        printf("%d ",n);
        funA(n/2);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    funA(20);
    return 0;
}
