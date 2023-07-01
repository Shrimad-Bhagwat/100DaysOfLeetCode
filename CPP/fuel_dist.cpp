#include <iostream>
using namespace std;

int main() {
	double fuel, dist;
	cin >> fuel >> dist;
	
	if(dist<0){
	    cout << "Invalid Input";
	}
	else{
	    
    	cout << "Fuel Consumption : ";
    	printf("%.2f", (fuel/dist)*100.00);
    	cout << " L / 100 Km"<<endl ;
    	
    	fuel = fuel*0.2642;
    	dist = dist*0.6214;
    	
        cout << endl;
    	cout << "Fuel Consumption (American): ";
    	printf("%.2f", (dist/fuel));
    	cout << " Miles / Gallon" ;
    	
	
	}
	
	return 0;
}