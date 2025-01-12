#include <stdio.h>
int main(){
    int arr[2][3] = {1,2,3,4,5,6};
    int max = arr[0][0];
    int maxRow = 0;
    int maxCol = 0;
    
    printf("matrix: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");   
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j]>max){
               max = arr[i][j];
               maxRow = i+1;
               maxCol = j+1;     
            } 
        }                    
    }
    printf("the maximum element is %d \n",max);
    printf("the index of the maximum element is (%d,%d)",maxRow,maxCol);
    
    
    return 0;
}
