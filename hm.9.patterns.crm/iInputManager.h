#pragma once

#include "Task.h"

class iInputManager abstract
{
public:
	virtual void inputTitle(Task& task) abstract;
	virtual void inputDate(Task& task) abstract;
	virtual void inputPriority(Task& task) abstract;
};