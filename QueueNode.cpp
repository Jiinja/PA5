#include "QueueNode.h"

QueueNode::QueueNode(int newNum, int newTime)
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
	this->pData = new Data(newNum, newTime);
	this->pNext = nullptr;
	this->mpList = new LinkedList;
	srand(time(NULL));
	for (int i = 0; i < newTime; i++)
	{
		this->mpList->insert(itemList[(rand()+newNum+i) % 14]);
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