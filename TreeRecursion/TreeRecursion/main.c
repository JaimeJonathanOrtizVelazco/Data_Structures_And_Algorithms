//
//  main.c
//  TreeRecursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>

void fun( int n){
    if(n>0){
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}

int main(int argc, const char * argv[]) {
    fun(3);
    return 0;
}
