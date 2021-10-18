#include "Tester.h"

void Tester::enqueue1() //tests enqueue for when the list has 1 item
{
	Queue testQueue;
	testQueue.enqueue(15, 5);
}

void Tester::enqueue2() //tests enqueue for when the list has 2 items
{
	Queue testQueue;
	testQueue.enqueue(15, 5);
	testQueue.enqueue(16, 4);
}

void Tester::dequeue1() //tests enqueue for when the list has 1 item
{
	Queue testQueue;
	testQueue.enqueue(15, 5);
	std::cout << "Removed Entry: " << testQueue.dequeue() << std::endl;
}

void Tester::dequeue2() //tests enqueue for when the list has 2 items
{
	Queue testQueue;
	testQueue.enqueue(15, 5);
	testQueue.enqueue(16, 4);
	std::cout << "Removed Entry: " << testQueue.dequeue() << std::endl;

}

void Tester::runSim() //runs the simluation for 1 day (1440 minutes)

//	To make sure it works, I'd just change the printChecker in simulation.cpp to > 0 so it prints each round
//  then, i would change the simluation length to <50 and walk through each print statement to see if its correct (it should be)
{
	Simulation sim(1440);
	sim.run();
}