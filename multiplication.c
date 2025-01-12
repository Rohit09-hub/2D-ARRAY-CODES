#include <stdio.h>
int main(){
    int m,n,p,q;
    printf("ENTER ROWS OF FIRST MATRIX : \n");
    scanf("%d",&m);
    printf("ENTER COLUMNS OF FIRST MATRIX : \n");
    scanf("%d",&n);
    printf("ENTER ROWS OF SECOND MATRIX : \n");
    scanf("%d",&p);
    printf("ENTER COLUMNS OF SECOND MATRIX : \n");
    scanf("%d",&q);
    if(n == p){
        int a[m][n];
        printf("ENTER THE ELEMEENTS OF THE FIRST MATRIX : \n");
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                scanf("%d",&a[i][j]);
            }
        }
        int b[p][q];
        printf("ENTER THE ELEMENTS OF THE SECOND MATRIX : \n");   
         for(int i = 0; i<p; i++){
            for(int j = 0; j<q; j++){
                scanf("%d",&b[i][j]);
            }
        }
        int res[m][q];
        printf("THE RESULTANT MATRIX IS : \n");
        for(int i = 0; i<m; i++){
            for(int j = 0; j<q; j++){
                res[i][j] = 0;
                for(int k = 0; k<p; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(int i = 0; i< m; i++){
            for(int j = 0; j<q; j++){
                printf("%d ",res[i][j]);
                
            }
            printf("\n");
        }
    } else {
        printf(" THE MATRICES CANNOT BE MULTIPLIED ! \n");
        
    }
    return 0;
}