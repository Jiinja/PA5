#pragma once
#include "QueueNode.h"
class Queue
{
public:
	Queue();
	void enqueue(int newNum, int newTime);
	Data dequeue();
	bool isEmpty();
	void addTime();
	int getTime();
	void incrementTime();
	void printQueue();
	~Queue();
private:
	QueueNode* mpHead;
	QueueNode* mpTail;
};

