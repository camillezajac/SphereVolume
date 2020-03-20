#include <iostream>
#include <cmath>

using namespace std;

double sphereVolume(double, const double, double);

const double PI = 3.14;

int main(){
	double radius, volume;
	
	cout << "radius: " << endl;
	cin >> radius;

	volume = sphereVolume(radius, PI, volume);

	cout << "Volume: " << volume << endl;

	return 0;
}

double sphereVolume(double radius, const double PI, double volume){
	volume = PI*(4.0/3.0)*pow(radius, 3);
	return volume;
}

