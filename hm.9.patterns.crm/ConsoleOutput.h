#pragma once

#include "iOutputManager.h"

class ConsoleOutput : public iOutputManager
{
public:
	void printTask(Task& task) override;
};