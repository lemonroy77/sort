#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
int partition(int a[],int low,int high){
    int pivot=a[low];
    while(low<high){
        while(low<high&&a[high]>pivot) high--;
        a[low]=a[high];
        while(low<high&&a[low]<=pivot) low++;
        a[high]=a[low];
    }
    a[low]=pivot;
    return low;
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int pivotpos=partition(a,low,high);
        quicksort(a,low,pivotpos-1);
        quicksort(a,pivotpos+1,high);
    }
}
void print(int a[],int len){
    for(int i=0;i<=len;i++)
        printf("%d\t",a[i]);
}
int main(){
    int a[] = {10,5,8,3,7,6,2};
    quicksort(a,0,6);
    print(a, 6);
    return 0;
}