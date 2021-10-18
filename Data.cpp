/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program creates a data storage object used in the queue nodes		 *
******************************************************************************************/

#include "Data.hpp"

Data::Data(int newNum, int newTime)
{
	this->customerNumber = newNum;
	this->serviceTime = newTime;
	this->totalTime = 0;
}

void Data::addTime()
{
	this->totalTime++;
}

int Data::getID() const
{
	return this->customerNumber;
}

int Data::getTotalTime() const
{
	return this->totalTime;
}

int Data::getTime() const
{
	return this->serviceTime;
}

std::ostream& operator<< (std::ostream& lhs, const Data& data)
{
	lhs << "ID: " << data.getID() << "  Items Left: " << data.getTime() << "  Total Service Time: " << data.getTotalTime();
	return lhs;
}

void Data::incrementTime()
{
	serviceTime--;
}

Data::~Data()
{
	//only stores int, which is not an object, thus no delete
}