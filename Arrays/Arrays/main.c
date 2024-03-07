//
//  main.c
//  Arrays
//
//  Created by Jaime Jonathan Ortiz Velazco on 03/02/24.
//

#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    printf("\nElements are\n");
    for (i =0 ; i<arr.length; i++) {
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

int Delete(struct Array *arr, int index){
    int x = 0;
    int i;
    if (index>= 0 && index < arr->length) {
        x=arr->A[index];
        for (i=index; i<arr->length-1; i++) {
            arr->A[i]= arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >= 0 && index <= arr->length){
        for(i=arr->length; i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x= *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key){
    int i;
    for (i=0; i<arr->length; i++) {
        if(key==arr->A[i]){
            // Linear Search With Mutation
//            swap(&arr->A[i], &arr->A[i-1]);
            // Linear Search With Move to Header
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}
// Iterative version
int BinarySearch(struct Array arr, int key){
    int l, mid,h;
    l=0;
    h=arr.length-1;
    
    while (l<=h) {
        mid = (h+l)/2;
        if(key == arr.A[mid]){
            return mid;
        }else if ( key < arr.A[mid]){
            h = mid-1;
        }else{
            l = mid + 1;
        }
    }
    return -1;
    
}
// El resultado de este algo ritmo es O(log(n+1)) EN SI ES log_2
int RBinarySearch(int a[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid= (h+l)/2;
        if(key==a[mid]){
            return mid;
        }else if(key < a[mid]){
            RBinarySearch(a, l, mid-1, key);
        }else{
            RBinarySearch(a, mid+1, h, key);
        }
    }
    return -1;
}

int Get(struct Array arr, int index){
    if(index>=0 && index <arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index >=0 && index<arr->length){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for (i=1; i<arr.length; i++) {
        if (arr.A[i] > max) {
            max = arr.A[i];
        }
    }
    return max;
}
int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for (i=1; i<arr.length; i++) {
        if (arr.A[i] < min) {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int s=0;
    int i;
    for (i=0; i<arr.length; i++) {
        s+=arr.A[i];
    }
    return s;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr){
    int *B;
    int i,j;
    
    B = (int *)malloc(arr->length *sizeof(int));
    for(i = arr->length - 1, j = 0 ; i>= 0; i--, j++){
        B[j] = arr->A[i];
    }
    for(i = 0; i<arr->length; i++){
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j;
    for(i=0, j=arr->length -1 ;i<j;i++, j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

int main(int argc, const char * argv[]){
    struct Array arr= {{2,3,4,5,60},20,5};
    Reverse2(&arr);
    Display(arr);
    return 0;
}
