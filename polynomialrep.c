#include<stdio.h>
int main(){
    int d,i;
    printf("enter max degree");
    scanf("%d",&d);
    int poly[d+1];
    if(d<1){
        printf("enter atleast more than one degree");
    }
    else{
        printf("enter the coefficents in order");
        for(i=d;i>=0;i--){
            scanf("%d",&poly[i]);
        }
    }
    printf("the polynomial is\n ");
    for(i=d;i>=0;i--){
        if(poly[i]!=0);{
            if(i==d){
                printf("%dx^%d",poly[i],i);
            }
            else if(i==1){
                printf("+%dx",poly[i]);
            }
            else if(i==0){
                printf("%d",poly[i]);
            }
            else
            printf("+%dx^%d",poly[i],i);
        }
    }

}