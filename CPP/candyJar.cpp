#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    
    int n,k;
    cin >> n >> k;
    
    int m,total=n;
    cin >> m;
    
    if(m<=n){
        n-=m;
        cout << "NUMBER OF CANDIES SOLD : " << m << endl;
        if(total-m<=k){
            n = total;
        }
        cout << "NUMBER OF CANDIES AVAILABLE : "<< n << endl; 
    }
    else{
        cout << "INVALID INPUT" << endl;
    }
    
    return 0;
}