/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program tests the queues and the 24 hour simulation					 *
******************************************************************************************/

#include "Tester.h"


//
// NOTE: the arrays are made in each of these test functions because they used to be in queueNode. instead of 100+ arrays, now there are only 4 in the whole program :)
//


void Tester::enqueue1() //tests enqueue for when the list has 1 item
{
	std::string itemList[15];
	itemList[0] = "eggs";
	itemList[1] = "milk";
	itemList[2] = "cheese";
	itemList[3] = "steak";
	itemList[4] = "chicken";
	itemList[5] = "crackers";
	itemList[6] = "tissues";
	itemList[7] = "fruit snacks";
	itemList[8] = "soda";
	itemList[9] = "shampoo";
	itemList[10] = "conditioner";
	itemList[11] = "wine";
	itemList[12] = "juice";
	itemList[13] = "fruit";
	itemList[14] = "vegetables";
	Queue testQueue;
	testQueue.enqueue(15, 5, itemList);
}

void Tester::enqueue2() //tests enqueue for when the list has 2 items
{
	std::string itemList[15];
	itemList[0] = "eggs";
	itemList[1] = "milk";
	itemList[2] = "cheese";
	itemList[3] = "steak";
	itemList[4] = "chicken";
	itemList[5] = "crackers";
	itemList[6] = "tissues";
	itemList[7] = "fruit snacks";
	itemList[8] = "soda";
	itemList[9] = "shampoo";
	itemList[10] = "conditioner";
	itemList[11] = "wine";
	itemList[12] = "juice";
	itemList[13] = "fruit";
	itemList[14] = "vegetables";
	Queue testQueue;
	testQueue.enqueue(15, 5, itemList);
	testQueue.enqueue(16, 4, itemList);
}

void Tester::dequeue1() //tests enqueue for when the list has 1 item
{
	std::string itemList[15];
	itemList[0] = "eggs";
	itemList[1] = "milk";
	itemList[2] = "cheese";
	itemList[3] = "steak";
	itemList[4] = "chicken";
	itemList[5] = "crackers";
	itemList[6] = "tissues";
	itemList[7] = "fruit snacks";
	itemList[8] = "soda";
	itemList[9] = "shampoo";
	itemList[10] = "conditioner";
	itemList[11] = "wine";
	itemList[12] = "juice";
	itemList[13] = "fruit";
	itemList[14] = "vegetables";
	Queue testQueue;
	testQueue.enqueue(15, 5, itemList);
	std::cout << "Removed Entry: " << testQueue.dequeue() << std::endl;
}

void Tester::dequeue2() //tests enqueue for when the list has 2 items
{
	std::string itemList[15];
	itemList[0] = "eggs";
	itemList[1] = "milk";
	itemList[2] = "cheese";
	itemList[3] = "steak";
	itemList[4] = "chicken";
	itemList[5] = "crackers";
	itemList[6] = "tissues";
	itemList[7] = "fruit snacks";
	itemList[8] = "soda";
	itemList[9] = "shampoo";
	itemList[10] = "conditioner";
	itemList[11] = "wine";
	itemList[12] = "juice";
	itemList[13] = "fruit";
	itemList[14] = "vegetables";
	Queue testQueue;
	testQueue.enqueue(15, 5, itemList);
	testQueue.enqueue(16, 4, itemList);
	std::cout << "Removed Entry: " << testQueue.dequeue() << std::endl;

}

void Tester::runSim() //runs the simluation for 1 day (1440 minutes)

//	To make sure it works, I'd just change the printChecker in simulation.cpp to > 0 so it prints each round
//  then, i would change the simluation length to <50 and walk through each print statement to see if its correct (it should be)
{
	Simulation sim(1440);
	sim.run();
}