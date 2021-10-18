/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines a node of a queue used in the simulation			 *
******************************************************************************************/

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

