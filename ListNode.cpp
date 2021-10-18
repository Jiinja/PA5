/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines a node in the linked list, one node for each item	 *
******************************************************************************************/


#include "ListNode.h"

ListNode::ListNode(std::string newItem)
{
	this->item = newItem;
	this->pNext = nullptr;
}

std::string ListNode::getItem()
{
	return this->item;
}

void ListNode::setNext(ListNode* newNode)
{
	this->pNext = newNode;
}

ListNode* ListNode::getNext()
{
	return this->pNext;
}

ListNode::~ListNode()
{
	//nothing to do here
}