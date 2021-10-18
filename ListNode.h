/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines a listnode object used in the linked list			 *
******************************************************************************************/

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

