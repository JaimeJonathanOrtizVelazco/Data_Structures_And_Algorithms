//
//  main.c
//  Recursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>

int fun(int n){
    if (n> 100)
        return n-10;
    return fun(fun(n+11));
}

int main(int argc, const char * argv[]){
    int r;
    r =fun(95);
    printf("%d\n",r);
    return 0;
}
