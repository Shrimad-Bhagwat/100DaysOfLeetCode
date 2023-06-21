#include <iostream>
#include <climits>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main() {
    int max_sum=INT_MIN,index=0;
    int r,c;
    cin >> r >> c;;
    int arr[r][c];
    
    for(int i=0; i<r; i++){
        int sum = 0;
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
            if(arr[i][j]==1) sum++;
        }
        if(max_sum<sum){
            max_sum = sum;
            index = i+1;
        }
    }
    cout << index << endl;
    

    return 0;
}
// or





// Parking Lot with most parking space full

// 4 4 
// 1 1 0 0
// 0 0 1 0
// 1 0 1 1
// 1 1 1 1

// int main() {
    
//     int r,c;
//     cin >> r >> c;;
//     int arr[r][c];
//     int res[r];
    
//     for(int i=0; i<r; i++){
//         int sum = 0;
//         for (int j = 0; j < c; j++) {
//             cin >> arr[i][j];
//             if(arr[i][j]==1) sum++;
//         }
//         res[i] = sum;
//     }
//     int *max = res;
//     max = max_element(res,res+r);
//     cout <<"Row : "<< max - res+1 << endl;

        
//     // cout << "Row : "<< distance(res, max_element(res, res+r))+1<< endl;

//     return 0;
// }

