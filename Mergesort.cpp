#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10
typedef int ElemType;
using namespace std;
int *b = (int *)malloc(sizeof(int)*MaxSize);
void merge(int a[], int low, int mid, int high){
    int i, j, k;
    for(k = low; k <= high; k++) b[k] = a[k];
    for(i = low, j = mid+1, k = i; i <= mid && j <= high; k++){
        if(b[i] <= b[j])
            a[k] = b[i++];
        else
            a[k] = b[j++];
    }
    while(i <= mid) a[k++] = b[i++];
    while(j <= high) a[k++] = b[j++];
}
void Mergesort(int a[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        Mergesort(a, low, mid);
        Mergesort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}
void print(int a[], int len){
    for(int i = 0; i<len; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
int main(){
    int a[] = {1,5,7,2,3,4,9};
    Mergesort(a,0,6);
    print(a,7);
    return 0;
}