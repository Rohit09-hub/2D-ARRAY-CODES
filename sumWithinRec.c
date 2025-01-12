#include <stdio.h>

int main(){
    int  r,c;
    printf("enter the no. of rows: ");
    scanf("%d",&r);
    printf("enter the no. of columns: ");
    scanf("%d",&c);
    printf("enter all the elements: ");
    
    int arr[r][c];

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
     for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }

        int x1,y1,x2,y2;
        printf("enter the top left index :");
        scanf("%d %d",&x1,&y1);
        printf("enter the bottom right  index :");
        scanf("%d %d",&x2,&y2);

        
    
    int sum = 0;
     for(int i = x1; i<=x2; i++){
        for(int j = y1; j<=y2; j++){
            sum += arr[i][j];
        }
    }
    printf("the sum of the  given matrix  from (%d,%d) to (%d,%d) is %d \n",x1,y1,x2,y2,sum);
    return 0;
}