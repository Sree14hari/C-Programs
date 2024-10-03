#include<stdio.h>
void insertion_sort(int ar[],int n){
    int i,temp;
    for(i=0;i<n;i++){
        temp=ar[i];
        int j=i-1;
        while(j>=0&&ar[j]>temp){
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=temp;

    }
}
void printarray(int n,int ar[]){
    for(int i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
}
void main(){
    int ar[100],n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter elemnts of array ");
        scanf("%d",&ar[i]);

    }
    insertion_sort(ar,n);
    printarray(n,ar);
}