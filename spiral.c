#include <stdio.h>

int main() {
    int row,colom,ele=0;
    printf("Enter the no of rows columns: ");
    scanf("%d %d",&row,&colom);
    int r=colom-1,l=0,t=0,b=row-1,a[100][100],o=0;
    for (int i=0;i<row;i++){
        for(int j=0; j<colom;j++){
            o++;
            a[i][j]=o;
        }
    }
    while(ele<row*colom){
        //left to right
        for(int i=l;i<=r;i++) {
            printf("%d ",a[t][i]);
            ele++;
        }
        t++;
        //top to bottom
        for(int i=t;i<=b;i++){
            printf("%d ",a[i][r]);
            ele++;
        }
        r--;
        //right to left
        for(int i=r;i>=l;i--) {
            printf("%d ",a[b][i]);
            ele++;
        }
        b--;
        //bottom to top
        for(int i=b;i>=t;i--){
            printf("%d ",a[i][l]);
            ele++;
        }
        l++;
    }
    
    return 0;
}