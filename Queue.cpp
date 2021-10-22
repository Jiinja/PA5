/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program creates a queue that is used to simulate grocery store lines *
******************************************************************************************/

#include "Queue.h"


Queue::Queue()
{
	this->mpHead = nullptr;
	this->mpTail = nullptr;
}

void Queue::enqueue(int newNum, int newTime, std::string itemList[])
{
	QueueNode* newNode = new QueueNode(newNum, newTime, itemList);
	if (newNode != nullptr) //allocated space
	{
		if (this->mpHead == nullptr) //if empty queue
		{
			this->mpHead = this->mpTail = newNode;
		}
		else //if not empty
		{
			this->mpTail->setNext(newNode);
			this->mpTail = newNode;
		}
	}
}

Data Queue::dequeue()
{
	if (this->isEmpty()) return Data(0, 0);
	Data result = *this->mpHead->getData();
	QueueNode* pTemp = this->mpHead;
	if (this->mpHead == this->mpTail)
	{
		this->mpHead = this->mpTail = nullptr;
	}
	else
	{
		this->mpHead = this->mpHead->getNext();
	}
	delete pTemp;
	return result;
}

bool Queue::isEmpty()
{
	return (this->mpHead == this->mpTail && this->mpTail == nullptr);
}

void Queue::addTime() //adds 1 to each customers total time in the queue
{
	QueueNode* pAdder = this->mpHead;
	while (pAdder != nullptr)
	{
		pAdder->addTime();
		pAdder = pAdder->getNext();
	}
}

int Queue::getTime()
{
	return this->mpHead->getData()->getTime();
}

void Queue::incrementTime() //removes 1 minute from the head's service time + deletes a node from the linked list
{
	this->mpHead->incrementTime();
}

void Queue::printQueue() //iterates through the queue printing ID, amount of items, and the list of items for each customer
{
	QueueNode* pPrinter = this->mpHead;
	while (pPrinter != nullptr)
	{
		std::cout << *pPrinter->getData() << "  Items: ";
		pPrinter->printList();
		std::cout << std::endl;
		pPrinter = pPrinter->getNext();
	}
}

Queue::~Queue()
{
	if (this->mpHead == this->mpTail) //if one item or no items, delete then set to nullptr
	{
		delete this->mpHead;
		this->mpHead = nullptr;
		this->mpTail = nullptr;
	}
	else //if 2+ items, destroy each node and then set to nullptr
	{
		destroyQueue(this->mpHead);
		this->mpHead = nullptr;
		this->mpTail = nullptr;
	}
}

void Queue::destroyQueue(QueueNode* deleter) //recursively goes through the list and deletes all the nodes
{
	if (deleter->getNext() != nullptr)
	{
		destroyQueue(deleter->getNext());
	}
	delete deleter;
}