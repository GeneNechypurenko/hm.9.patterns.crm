#pragma once

#include <set>
#include <conio.h>

#include "Task.h"
#include "iInputManager.h"
#include "iOutputManager.h"
#include "iDataStorageManger.h"

class TaskManager
{
private:
	multiset<Task>taskset;
	iInputManager* input;
	iOutputManager* output;
	iDataStorageManager* data;

public:
	TaskManager(iInputManager* input, iOutputManager* output, iDataStorageManager* data);

	void setTaskSet(const multiset<Task>& newTaskSet);
	multiset<Task>& getTaskSet();

	void addTask();
	void printTasks() const;
	void saveData(const string filename);
	void loadData(const string filename);

	void removeTask(const string title);
	void editTask(const string title);

	void findTaskByTitle(const string title);
	void findTasksByDate(const string date);
	void findTasksByPriority(const string priority);
};