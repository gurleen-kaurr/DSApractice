#include<bits/stdc++.h>
using namespace std;

void colSum(int arr[][3] , int i , int j){ // i = row & j = column
    for(j=0;j<3;j++){
        int sum = 0;
        for(i=0;i<3;i++){
            sum += arr[i][j];
        }
        cout<< "Sum of Column "<<j+1<<" is "<<sum;
        cout<<endl;
    }
}

int main(){
     int arr[3][3]={{23,56,89},{78,45,12},{14,25,36}};
     colSum(arr,3,3);
     return 0;
}