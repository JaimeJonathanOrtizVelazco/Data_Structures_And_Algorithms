//
//  main.c
//  Recursion
//
//  Created by Jaime Jonathan Ortiz Velazco on 28/10/23.
//

#include <stdio.h>
int sum(int n){
    if(n == 0){
        return 0;
    }
    return sum(n-1)+n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int r;
    r = sum (5);
    printf("%d ",r);
    return 0;
}
