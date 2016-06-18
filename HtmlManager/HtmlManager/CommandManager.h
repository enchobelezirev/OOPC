#pragma once
#include "DynamicArray.h"
#include "Command.h"
class CommandManager
{
private:
	DynamicArray<Command*> commands;
public:
	CommandManager();
	~CommandManager();

	void registerCommand(Command* cmd);
	void executeCommand(char* cmdName);
};

