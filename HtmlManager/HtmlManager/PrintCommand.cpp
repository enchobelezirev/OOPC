#include "PrintCommand.h"

PrintCommand::PrintCommand()
{
}

PrintCommand::PrintCommand(char * name)
{
	this->name=name;
}


PrintCommand::~PrintCommand()
{
}

void PrintCommand::execute()
{
	std::cout << "PRINTTTTT" << std::endl;
	// printing of the HTML object
}
