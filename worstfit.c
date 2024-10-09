#include<stdio.h>
void worstfit(int size[],int m,int process[], int n){
int alloc[n];
for(int i=0;i<n;i++){
alloc[i]=-1;
}
for(int i=0;i<n;i++){
int wrst=-1;
for(int j=0;j<n;j++){
if(size[j]>=process[i]){
if(wrst==-1){
wrst=j;
}
else if(size[wrst]<size[j]){
wrst=j;
}
}
if(wrst!=-1){
alloc[i]=wrst;
size[wrst]-=process[i];
}
}
}
printf("\npro.no\tpro size\tblk.no.\n");
for(int i=0;i<n;i++){
printf("%d\t\t%d\t\t",i+1,process[i]);
if(alloc[i]!=-1){
printf("%d",alloc[i]+1);
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
worstfit(size,m,process,n);
}
