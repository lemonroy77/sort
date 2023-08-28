#include<stdio.h>
#include<stdio.h>
#define MaxSize 100
int Binarysearch(int a[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            return key;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
}
void Insertsort2(int a[],int N)
{
    int i,j,temp;
    for(i=1; i<N; i++)
    {
        temp=a[i];
        int low=0,high=i-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]<temp)
                low=mid+1;
            else
                high=mid-1;
        }
        for(j=i-1; j>=low; j--)
            a[j+1]=a[j];
        a[low]=temp;
    }
}
void Insertsort1(int a[],int N){
    int i,j,temp;
    for(i=1;i<N;i++){
        temp=a[i];
        for(j=i;j>=1;j--){
            if(a[j-1]>temp)
                a[j]=a[j-1];
            else
                break;
        }
        a[j]=temp;
    }
}
void print1(int a[],int len)
{
    for(int i=0; i<len; i++)/*ÉÚ±ø³õÊ¼int i=1*/
        printf("%d\t",a[i]);
    printf("\n");
}
void Insertsort(int a[],int N){//ÉÚ±ø²åÈë
     int i,j;
     for(i=2;i<=N;i++){
         a[0]=a[i];
         for(j=i-1;a[j]>=a[0]&&j>=0;j--)
             a[j+1]=a[j];
         a[j+1]=a[0];
     }
}
void print(int a[],int len)
{
    for(int i=1; i<len; i++)
        printf("%d\t",a[i]);
    printf("\n");
}
int main()
{
    int a[]= {0,3,2,4,1};
    Insertsort(a,5);
    print(a,5);
}
