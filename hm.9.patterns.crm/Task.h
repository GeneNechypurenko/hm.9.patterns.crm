#pragma once

#include <iostream>
#include <string>

using namespace std;

class Task
{
private:
	string title;
	string date;
	string priority;

public:

	void setTitle(const string title);
	void setDate(const string date);
	void setPriority(const string priority);

	string getTitle() const;
	string getDate() const;
	string getPriority() const;

	bool operator<(const Task& obj) const;
};

