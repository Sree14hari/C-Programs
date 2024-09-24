#include<stdio.h>
void selection_sort(int ar[],int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(ar[j]<ar[min]){
               min=j; 
            }
            int temp=ar[min];
            ar[min]=ar[i];
            ar[i]=temp;
            
        }
    }
}
void printarray(int ar[],int n){
    int i ;
    for(i=0;i<n;i++){
        printf("%d",ar[i]);
    }
    printf("\n");
}
void main(){
    int ar[100],n,i;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
    }
    selection_sort(ar,n);
    printarray(ar,n);
}