#include "CommandManager.h"



CommandManager::CommandManager()
{
}


CommandManager::~CommandManager()
{
}

void CommandManager::registerCommand(Command * cmd)
{
	commands.push_back(cmd);
}

// TODO: Parse the args(extract command name + additional arguments)
void CommandManager::executeCommand(char * args)
{
	for (size_t i = 0; i < commands.getLength(); i++)
	{
		if (strcmp(args, commands[i]->getName()) == 0)
		{
			commands[i]->execute();
			break;
		}
	}
}
