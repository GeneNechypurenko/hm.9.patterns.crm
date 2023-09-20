#pragma once

#include "iInputManager.h"

class KeyboardInput : public iInputManager
{
public:
	void inputTitle(Task& task) override;
	void inputDate(Task& task) override;
	void inputPriority(Task& task) override;
};

