#pragma once
#include "Data.hpp"
class QueueNode
{
public:
	QueueNode(int newNum, int newTime);
	void addTime();
	QueueNode* getNext() const;
	void setNext(QueueNode* newNode);
	Data* getData() const;
	void incrementTime();
	void printList();
	~QueueNode();
private:
	Data* pData;
	QueueNode* pNext;
	LinkedList* mpList;
};

