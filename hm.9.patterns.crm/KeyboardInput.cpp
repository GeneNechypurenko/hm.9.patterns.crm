#include "KeyboardInput.h"

void KeyboardInput::inputTitle(Task& task)
{
	string newTitle;

	cout << "Enter task title: ";
	getline(cin, newTitle);

	task.setTitle(newTitle);
}

void KeyboardInput::inputDate(Task& task)
{
	string newDate;

	cout << "Enter task date: ";
	getline(cin, newDate);

	task.setDate(newDate);
}

void KeyboardInput::inputPriority(Task& task)
{
	string newPriority;

	cout << "Enter task priotity: ";
	getline(cin, newPriority);

	task.setPriority(newPriority);
}
