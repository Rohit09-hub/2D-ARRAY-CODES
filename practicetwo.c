#include <stdio.h>

int main(){
    int arr[3][3] = {{0,7,3},
                    {9,5,5},
                    {7,8,2}};
                    printf("THE PRINTED MATRIX IS : \n");
                    for(int i = 0; i<3; i++){
                        for(int j = 0; j< 3; j++){
                            printf("%d ",arr[i][j]);    
                        }
                        printf("\n");
                        
                    }
                    
    return 0;
}