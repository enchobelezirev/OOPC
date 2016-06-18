#pragma once
#include "Command.h"
#include <iostream>
class AddCommand : public Command
{
public:
	AddCommand();
	AddCommand(char* name, char* tag);
	~AddCommand();

	void execute();
};

