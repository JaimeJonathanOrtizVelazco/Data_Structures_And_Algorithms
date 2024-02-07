//
//  main.c
//  Recursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>
int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n-1)+n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int r;
    r = fact(5);
    printf("%d ",r);
    return 0;
}
