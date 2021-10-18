/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines a linked list object to use for customer item storage*
******************************************************************************************/

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

