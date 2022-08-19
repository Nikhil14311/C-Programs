#include"stdio.h"
int main()
{
    int i,j,k,n=10;
    int a[1000];
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((i+j)==k){
                printf("(%d,%d)",i,j);
            }
        }
    }
}
