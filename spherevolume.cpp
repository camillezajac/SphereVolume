#include <iostream>
#include <cmath>

using namespace std;

// prototype
double sphereVolume(double, const double, double);

const double PI = 3.14; // global constant

int main(){
	double radius, volume;
	
	cout << "radius: " << endl;
	cin >> radius;

	// function call
	volume = sphereVolume(radius, PI, volume);

	cout << "Volume: " << volume << endl;

	return 0;
}

double sphereVolume(double radius, const double PI, double volume){
	// calculate volume
	volume = PI*(4.0/3.0)*pow(radius, 3);
	return volume;
}

