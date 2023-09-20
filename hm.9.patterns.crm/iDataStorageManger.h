#pragma once

#include <fstream>

#include "Task.h"

class iDataStorageManager abstract
{
public:
	virtual void saveData(multiset<Task>& taskset, const string filename) abstract;
	virtual multiset<Task> loadData(const string& filename) abstract;
};
