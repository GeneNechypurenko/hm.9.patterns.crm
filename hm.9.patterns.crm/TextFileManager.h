#pragma once

#include <set>

#include "iDataStorageManger.h"

class TextFileManager : public iDataStorageManager
{
public:
	void saveData(multiset <Task>& taskset, const string filename) override;
	multiset <Task> loadData(const string& filename) override;
};