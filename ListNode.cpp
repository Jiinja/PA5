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