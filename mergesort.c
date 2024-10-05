#include<stdio.h>
#include<stdlib.h>
void merge(int ar[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int leftar[n1],rightar[n2];           //created temporary array for storing values😁
    for(i=0;i<n1;i++)                     //storing values to temp array 
       leftar[i]=ar[left+i];
    for(j=0;j<n2;j++)
       rightar[j]=ar[mid+1+j];
    i=0;
    j=0;
    k=left;
    while(i<n1&&j<n2){
        if(leftar[i]<=rightar[j]){             //checking smaller element to store in array 
            ar[k]=leftar[i];
            i++;
        }
        else{
            ar[k]=rightar[j];
            j++;
        }
        k++;
    }
    while(i<n1){                  //adding remaining elements of left array 
        ar[k]=leftar[i];
        i++;
        k++;
    }
    while(j<n2){                 //adding remaining elements of right array 
        ar[k]=rightar[j];
        j++;
        k++;
    }
}
void mergesort(int ar[],int left,int right){
    if(left<right){
        int mid =(left+right)/2;
        mergesort(ar,left,mid);
        mergesort(ar,mid+1,right);
        merge(ar,left,mid,right);
    }
}
int main(){
    int ar[100],n;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter values in array  ");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("usorted array \n");
    for(int i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
    printf("\n");
    mergesort(ar,0,n-1);
    printf("sorted array \n");
    for(int i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
    return 0;
}
