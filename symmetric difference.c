#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],b[10],c[10],d[10],m=0,k=0,n=0,n1,n2,l,i,j,e[100];
    printf("Enter size of set a");
    scanf("%d",&n1);
    printf("Enter element of set a");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Enter size of set b");
    scanf("%d",&n2);
    printf("Enter element of set b");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);

    //difference of sets

// A-B
    for( i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(b[j]==a[i])
             break;
        }
        if(j==n2){
            for(l=0;l<k;l++){
                if(c[l]==a[i])
                    break;
            }
            if(l==k){
                c[k]=a[i];
                k++;
            }
        }
    }

 //B-A
    for( i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++){
                if(d[l]==b[i])
                 break;
            }
            if(l==m){
                d[m]=b[i];
                m++;
            }
        }
    }
    printf("set a \n");
    for(i=0; i<n1;i++){
        printf("%d ", a[i]);
    }
    printf("set b \n");
    for(i=0; i<n2;i++){
        printf("%d ", b[i]);
    }
    for(i=0;i<k;i++){
        e[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++){
        e[n]=d[i];
        n++;
    }
    printf("symmetric Difference of sets is");
    for(i=0;i<n;i++)
     printf("%d ",e[i]);

  }
