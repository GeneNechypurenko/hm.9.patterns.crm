#include "Task.h"

void Task::setTitle(const string title)
{
	this->title = title;
}

void Task::setDate(const string date)
{
	this->date = date;
}

void Task::setPriority(const string priority)
{
	this->priority = priority;
}

string Task::getTitle() const
{
	return title;
}

string Task::getDate() const
{
	return date;
}

string Task::getPriority() const
{
	return priority;
}

bool Task::operator<(const Task& obj) const
{
	return obj.date < date;
}