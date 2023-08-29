#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10
typedef int ElemType;
using namespace std;
void sift(int a[], int k, int len){
    a[0] = a[k];
    for(int i = 2*k; i <= len; i*=2){
        if(i < len && a[i] < a[i+1]) i+=1;
        if(a[i] <= a[0]) break;
        else{
            a[k] = a[i];
            k = i;
        }
    }
    a[k] = a[0];
}
void createheap(int a[], int len){
    for(int i = len/2; i >= 1; i--){
        sift(a, i, len);
    }
}

void Heapsort(int a[], int n){
    createheap(a, n);
    for(int i = n; i > 1; i--){
        int temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        sift(a, 1, i-1);
    }
}
void print(int a[], int len){
    for(int i = 0; i< len; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
int main(){
    int a[] = {1,5,7,2,3,4,9};
    Heapsort(a,6);
    print(a,7);
    return 0;
}