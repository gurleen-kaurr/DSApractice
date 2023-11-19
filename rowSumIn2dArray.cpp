#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3] , int i , int j){ // i = row & j = column
    for(i=0;i<3;i++){
        int sum = 0;
        for(j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<< "Sum of Row "<<i+1<<" is "<<sum;
        cout<<endl;
    }
}

int main(){
     int arr[3][3]={{23,56,89},{78,45,12},{14,25,36}};
     rowSum(arr,3,3);
     return 0;
}