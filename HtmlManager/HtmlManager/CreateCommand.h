#pragma once
#include <iostream>
#include "Command.h"
class CreateCommand : public Command
{
	
public:
	CreateCommand();
	CreateCommand(char* name, char* tag);
	~CreateCommand();

	void execute();
};

