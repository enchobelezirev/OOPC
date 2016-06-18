#pragma once
#include "Command.h"
#include <iostream>
class PrintCommand : public Command
{
public:
	PrintCommand();
	PrintCommand(char* name);
	~PrintCommand();

	void execute();
};

