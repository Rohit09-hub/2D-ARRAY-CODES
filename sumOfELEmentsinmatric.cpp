#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows : "<<endl;
    cin>>r;
    cout<<"enter thee number of columnss : "<<endl;
    cin>>c;
    int arr[r][c];
    cout<<"enter elements :"<<endl;  
    for(int i = 0; i< r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
        cout<<endl;   
    }
    for(int i = 0; i< r; i++){
        for(int j = 0; j< c; j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    } 

    int sum = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
        }
    }
    cout<<"the sum of the elements of the matrix is : "<<sum;
    return 0;
}