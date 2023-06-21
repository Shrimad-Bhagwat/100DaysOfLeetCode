
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int maxValue = INT_MIN,c=0;
    
    int  v[] = {0};
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    for(auto x:v){
        if(x>maxValue){
            c++;
            maxValue = x;
        }
    }
    cout << c << endl;

    return 0;
}