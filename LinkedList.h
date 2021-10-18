#pragma once
#include "ListNode.h"
class LinkedList
{
public:
	LinkedList();
	void insert(std::string newItem);
	void remove();
	void printList();
	~LinkedList();
private:
	ListNode* mpHead;
};

