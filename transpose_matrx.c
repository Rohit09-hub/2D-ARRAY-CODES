#include <stdio.h>

int main(){
    int m,n;
    printf("ENTER THE NUMBER OF ROWS AND COMUMNS : \n");
    scanf("%d%d",&m,&n);
    printf("ENTER THE ELEMENTS OF THE MATRIX : \n");
    int arr[m][n];
    
    for(int i = 0; i< m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("MATRIX : \n");
    
    for(int i = 0; i< m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("TRANSPOSE : \n");
    
    int tr[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            tr[j][i] = arr[i][j];
            
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ",tr[i][j]);
        }
        printf("\n");
    }
    return 0;
}