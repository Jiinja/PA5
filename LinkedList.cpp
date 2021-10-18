#include "LinkedList.h"

LinkedList::LinkedList()
{
	this->mpHead = nullptr;
}

void LinkedList::insert(std::string newItem) //creates a new node and inserts at the end of the list
{
	ListNode* pTemp = new ListNode(newItem);
	if (this->mpHead == nullptr) this->mpHead = pTemp;
	else
	{
		ListNode* pCur = this->mpHead;
		while (pCur->getNext() != nullptr) pCur = pCur->getNext();
		pCur->setNext(pTemp);
	}
}

void LinkedList::remove() //removes the last item in the list
{
	ListNode* pCur = this->mpHead;
	ListNode* pPrev = nullptr;
	while (pCur != nullptr && pCur->getNext() != nullptr)
	{
		pPrev = pCur;
		pCur = pCur->getNext();
	}
	if (pPrev == nullptr) this->mpHead = nullptr;
	else
	{
		pCur = nullptr;
		pPrev->setNext(nullptr);
	}
}

void LinkedList::printList() //prints the list: item, item, item, ....
{
	ListNode* pPrinter = mpHead;
	while (pPrinter != nullptr)
	{
		std::cout << pPrinter->getItem();
		pPrinter = pPrinter->getNext();
		std::cout << ", ";
	}
}

LinkedList::~LinkedList()
{
	delete mpHead;
}
