#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
void Bubblesort(int a[], int n){
    for(int i = 1; i < n; i++){
        bool flag = false;
        for(int j = n; j > i; j--){
            if(a[j] < a[j-1]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                flag = true;
            }
        }
        if(flag == false) return ;
    }
}
void Bubblesort1(int a[], int n){
    for(int i = n; i > 1; i--){
        bool flag = false;
        for(int j = 1; j < i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = true;
            }
        }
        if(flag == false) return ;
    }
}
void dbubblesort(int a[], int n){
    int low = 1, high = n, i, temp;
    int flag = 0;
    while(low < high){
        for(i = low; i < high; i++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                flag = 1;
            }
        }
        if(!flag) return ;
        high--;
        for(i = high; i > low; i--){
            if(a[i] < a[i-1]){
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        low++;
    }
}
void print(int a[], int len){
    for(int i = 1; i<= len; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
int main(){
    int a[] = {10,5,8,3,7,6,2};
    dbubblesort(a, 6);
    print(a, 6);
    return 0;
}