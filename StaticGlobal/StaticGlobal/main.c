//
//  main.c
//  StaticGlobal
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>

int x = 0;

int fun(int n){
    if (n > 0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int r;
    r =  fun(6);
    printf("%d\n",r);
    return 0;
}
