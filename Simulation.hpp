/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines the simulation object used to simulate the queues	 *
******************************************************************************************/

#include "Queue.h"

class Simulation {
public:
	Simulation(int length = 120);
	void run();
private:
	int currentTime; 
	int maxTime; //user input length of simulation
	int nextExpress; //minutes till next express customer
	int nextNormal; //minutes till next normal customer
	int printCheck; //checks 10 mins if need to print;
};