#include<stdio.h>
int main()
{
    int a,b[100],i,j,u=0,v=0;
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
            scanf("%d",&b[i]);
    }

    for(j=1;j<a+1;j++){
        if(b[j]%2==1){
            v=v+1;
        }
        else if(b[j]%2==0){
            u=u+1;
        }
    }
    if(v>u)
        printf("Congratulations Robert!!\n");
    else if(u>v)
        printf("Congratulations Max!!\n");
    else if(u==v)
        printf("Draw!!\n");
}
