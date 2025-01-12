#include<iostream>
using namespace std;
int main () {
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    int max = arr[0][0];
    int maxrow = 0;
    int maxcol = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" "; 
            
        }
        cout<< endl;
    }  
     for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
           if(arr[i][j] < max){
            max = arr[i][j];
            maxrow = i+1;
            maxcol = j+1;
           }    
        }
    }
    cout<<"the maximum elemeent of the matrix is :"<<max<<endl;
    cout<<"the index of the maximum element is :"<<"("<<maxrow<<","<<maxcol<<")";     

}
