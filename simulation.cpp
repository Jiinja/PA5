/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program runs a 24 hour grocery store line simulation with 2 lines	 *
******************************************************************************************/
#include "Simulation.hpp"

Simulation::Simulation(int length)
{
	this->maxTime = length;
	this->currentTime = 0;
	this->nextExpress = this->nextNormal = this->printCheck = 0;
}

void Simulation::run()
{
	srand(time(NULL)); //initialising random
	Queue expressQueue;
	Queue normalQueue;
	int customerNumber = 1;
	int itemCount = 0; //used to store random itemcount
	Data temp; //used to store result of dequeue
	this->currentTime = 0;
	while (this->currentTime != this->maxTime)
	{
		if (this->nextNormal == 0) //when time is 0, when time is -1, its time for another customer to start coming
		{
			this->nextNormal = rand() % 5 + 4; //random number 3-8
		}
		if (this->nextExpress == 0)
		{
			this->nextExpress = rand() % 5 + 1; //random number 1-5
		}
		this->nextExpress--;
		this->nextNormal--;
		if (this->nextExpress == 0)
		{
			itemCount = rand() % 5 + 1;
			expressQueue.enqueue(customerNumber, itemCount); //adds person to queue with random 1-5 items
			std::cout << "Express entered: ID: " << customerNumber << "  Items: " << itemCount << "  Current Time: " << currentTime << std::endl;
			customerNumber++;
		}
		if (this->nextNormal == 0)
		{
			itemCount = rand() % 5 + 4;
			normalQueue.enqueue(customerNumber, itemCount); //adds person to queue with random 3-8 items
			std::cout << "Normal entered: ID: " << customerNumber << "  Items: " << itemCount << "  Current Time: " << currentTime << std::endl;
			customerNumber++;
		}
		if (this->currentTime - this->printCheck > 10) //if it has been 10 minutes since last print
		{
			if (!expressQueue.isEmpty()) //if express queue is not empty, print
			{
				std::cout << "Express Queue:" << std::endl;
				expressQueue.printQueue();
				std::cout << std::endl;
			}
			if (!normalQueue.isEmpty()) //if normal queue is not empty, print
			{
				std::cout << "Normal Queue:" << std::endl;
				normalQueue.printQueue();
				std::cout << std::endl;
			}
			this->printCheck = this->currentTime; //updating last print time
		}
		currentTime++;
		expressQueue.addTime(); //add 1 minute service time to each customer in each queue
		normalQueue.addTime(); 
		if (!expressQueue.isEmpty()) //if the express queue has customers in it
		{
			expressQueue.incrementTime(); //service 1 item & remove from the list of items
			if (expressQueue.getTime() == 0) //if no items are left to service
			{
				temp = expressQueue.dequeue(); //remove the customer from the queue & safe info
				std::cout << "Express exited: ID: " << temp.getID() << "  Total Service Time: " << temp.getTotalTime() << std::endl; //print customer info
			}
		}
		if (!normalQueue.isEmpty()) //if the normal queue has customers in it
		{
			normalQueue.incrementTime(); //service 1 item & remove from the list of items
			if (normalQueue.getTime() == 0) //if no items are left to service
			{
				temp = normalQueue.dequeue(); //remove the customer from the queue & safe info
				std::cout << "Normal exited: ID: " << temp.getID() << "  Total Service Time: " << temp.getTotalTime() << std::endl; //print customer info
			}
		}
	}
}