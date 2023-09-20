#pragma once

#include "Task.h"

class iOutputManager abstract
{
public:
	virtual void printTask(Task& task) abstract;
};

