#pragma once
#include <iostream>
#include <string>
class ListNode
{
public:
	ListNode(std::string newItem);
	std::string getItem();
	void setNext(ListNode* newNode);
	ListNode* getNext();
	~ListNode();
private:
	ListNode* pNext;
	std::string item;
};

