//Chris Sun
//C++ COSC 1320
//Kinety Energy Program accepting mass and velocity then calculating kinetic energy for the user

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

//prototypes//
double getMass();
double getVelocity();
double calcEnergy(double, double);
void display(double, double, double);


int main()
{
	//variable
	double mass = 0;			//stores the mass value
	double velocity = 0;		//stores the velocity value
	double kinEnergy = 0;		//store kinetic energy value

	mass = getMass();
	velocity = getVelocity();
	kinEnergy = calcEnergy(mass, velocity);
	display(mass, velocity, kinEnergy);

	return 0;
}

//getMass function to ask user for mass
double getMass() {
	double mass;
	cout << "Enter the mass: " << endl;		//asking user for mass
	cin >> mass;							//storing mass			
	return mass;
}

//getVelocity funtion to ask user for velocity
double getVelocity() {
	double velocity;
	cout << "Enter the velocity: " << endl;	//asking user for velocity
	cin >> velocity;						//storing velocity
	return velocity;
}

//calcEnergy function that accepts mass and velocity as arguments then calculates the kinetic energy
double calcEnergy(double m, double v) {
	double kinEnergy;
	kinEnergy = .5*(m*(v * v));
	return kinEnergy;
}

//display function to display results to user
void display(double m, double v,double kE) {
	cout << "The Kinetic energy for the mass: " << m << "kgs and velocity: " << v << "meters per sec is: " << kE << "joules" << endl;
}