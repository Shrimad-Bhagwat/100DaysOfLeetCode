#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    
    int n,m,p,k,j;
    cin >> n >> m >> p >> k >> j;
    
    int count=0;
    if(n<0 && (k<0 || j<0 || m<0 || p<0)) cout << "INVALID INPUT";
    else{
            
        while(k>0 && k>=m){
                count++;
                k = k-m;
        }
        while(j>0 && j>=p){
                count++;
                j = j-p;
        }
        while(k+j>m+p){
            count++;
        }
    }
    
    cout <<"Monkeys left on the tree : "<< (n-count>0) ? n-count : 0;
    
    return 0;
}