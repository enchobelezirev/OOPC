#include "CommandManager.h"
#include "PrintCommand.h"
#include "AddCommand.h"
#include "CreateCommand.h"
#include <iostream>


int main() {
	CommandManager manager;
	manager.registerCommand(new PrintCommand("print"));
	manager.registerCommand(new AddCommand("add", "<li>"));
	manager.registerCommand(new CreateCommand("create", "<a href=#>Test</a>"));

	char args[100];
	std::cin.getline(args, 100);
	manager.executeCommand(args);

	system("PAUSE");
	return 0;
}