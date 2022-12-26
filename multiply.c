#include<stdio.h>
void main(){
    int m,n,p,q;
    scanf("%d%d",&m,&n);
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],c[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("NOt Possible");
}
