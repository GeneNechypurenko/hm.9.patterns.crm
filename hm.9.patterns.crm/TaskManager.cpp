#include "TaskManager.h"

TaskManager::TaskManager(iInputManager* in, iOutputManager* out, iDataStorageManager* data)
	:
	input(in),
	output(out),
	data(data)
{}

void TaskManager::setTaskSet(const multiset<Task>& newTaskSet)
{
	taskset = newTaskSet;
}

multiset<Task>& TaskManager::getTaskSet()
{
	return taskset;
}

void TaskManager::addTask()
{
	Task newTask;

	input->inputTitle(newTask);
	input->inputDate(newTask);
	input->inputPriority(newTask);

	taskset.insert(newTask);
}

void TaskManager::printTasks() const
{
	for (Task task : taskset)
	{
		output->printTask(task);
	}
}

void TaskManager::saveData(const string filename)
{
	data->saveData(taskset, filename);
}

void TaskManager::loadData(const string filename)
{
	multiset<Task> loadedTasks = data->loadData(filename);
	setTaskSet(loadedTasks);
}

void TaskManager::removeTask(const string title)
{
	for (auto it = taskset.begin(); it != taskset.end();)
	{
		if (it->getTitle() == title)
		{
			it = taskset.erase(it);
		}
		else
		{
			++it;
		}
	}
}

void TaskManager::editTask(const string title)
{
	for (auto task : taskset)
	{
		if (task.getTitle() == title)
		{
			input->inputTitle(task);
			input->inputDate(task);
			input->inputPriority(task);
			break;
		}
	}
}

void TaskManager::findTaskByTitle(const string title)
{
	for (auto task : taskset)
	{
		if (task.getTitle() == title)
		{
			output->printTask(task);
		}
	}
}

void TaskManager::findTasksByDate(const string date)
{
	for (auto task : taskset)
	{
		if (task.getDate() == date)
		{
			output->printTask(task);
		}
	}
}

void TaskManager::findTasksByPriority(const string priority)
{
	for (auto task : taskset)
	{
		if (task.getPriority() == priority)
		{
			output->printTask(task);
		}
	}
}