/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines the Queue object used to simulate grocery store lines*
******************************************************************************************/

#pragma once
#include "QueueNode.h"
class Queue
{
public:
	Queue();
	void enqueue(int newNum, int newTime, std::string itemList[]);
	Data dequeue();
	bool isEmpty();
	void addTime();
	int getTime();
	void incrementTime();
	void printQueue();
	~Queue();
private:
	void destroyQueue(QueueNode* deleter);
	QueueNode* mpHead;
	QueueNode* mpTail;
};

