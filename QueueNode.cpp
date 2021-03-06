/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program creates a node in the queues used for the simulation		 *
******************************************************************************************/

#include "QueueNode.h"

QueueNode::QueueNode(int newNum, int newTime, std::string itemList[])
{
	this->pData = new Data(newNum, newTime);
	this->pNext = nullptr;
	this->mpList = new LinkedList;
	srand(time(NULL));
	for (int i = 0; i < newTime; i++) //newTime is service time/how many items a customer has. I generate this in the simulation then pass it in.
	{
		this->mpList->insert(itemList[(rand()+newNum+i+newNum%(i+1)) % 14]); //"randomly" selects items from the array of 15 possible items at the store (its a bad store)
	}
}

QueueNode* QueueNode::getNext() const
{
	return this->pNext;
}

void QueueNode::setNext(QueueNode* newNode)
{
	this->pNext = newNode;
}

Data* QueueNode::getData() const
{
	return this->pData;
}

void QueueNode::addTime() //adds 1 minute to totaltime
{
	this->pData->addTime();
}

void QueueNode::incrementTime() //removes 1 from service time and removes 1 item from the linked list
{
	this->pData->incrementTime();
	this->mpList->remove();
}

void QueueNode::printList() //goes through the list of items and prints them: item, item, item, 
{
	this->mpList->printList();
}

QueueNode::~QueueNode()
{
	delete this->mpList;
	delete this->pData;
	this->pNext = nullptr;
}