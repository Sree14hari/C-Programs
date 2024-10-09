#include<stdio.h>
void firstfit(int size[],int m, int process[],int n){
int i,j;
int alloc[n];
for(i=0;i<n;i++){
alloc[i]=-1;
}
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(size[j]>=process[i]){
alloc[i]=j;
size[j]-=process[i];
break;
}
}
}
printf("\npro.no.\tpro.size\tblk.no.\n");
for(int i=0;i<n;i++){
printf("%i\t\t\t",i+1);
printf("%i\t\t\t",process[i]);
if(alloc[i]!=-1){
printf("%i",alloc[i]+1);
}
else{
printf("Not allocated");
}
printf("\n");
}
}

void main(){
int m;
int n;
int size[]={300,50,100,250,420};
int process[]={299,25,110,300};
m=sizeof(size)/sizeof(size[0]);
n=sizeof(process)/sizeof(process[0]);
firstfit(size,m,process,n);
}
