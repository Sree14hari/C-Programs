#include <stdio.h>
int linearSearch(int* arr, int size, int key)
{
for (int i = 0; i < size; i++) {
if (arr[i] == key) {
return i;
}
}
return -1;
}
int main()
{
int arr[100], n,key ,i;
printf("enter value of n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter key");
scanf("%d",&key);
int index = linearSearch(arr,n, key);
if (index == -1) {
printf("The element is not present in the arr.");
}
else {
printf("The element is present at arr[%d].", index);
}
return 0;
}
