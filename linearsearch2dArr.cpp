#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3] , int element , int row , int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(element==arr[row][col]){
                return 1;
            }
        }
    }
    return 0;
    
}


int main(){

    int arr[3][3]={{23,56,89},{78,45,12},{14,25,36}};
    if(isPresent(arr,45,3,3)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }

    
    return 0;

}