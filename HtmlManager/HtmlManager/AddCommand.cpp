#define _CRT_SECURE_NO_WARNINGS
#include "AddCommand.h"
AddCommand::AddCommand()
{
	this->tag = nullptr;
}

AddCommand::AddCommand(char* name, char * tag)
{
	this->name = name;
	this->tag = nullptr;
	this->tag = new char[strlen(tag) + 1];
	strcpy(this->tag, tag);
}


AddCommand::~AddCommand()
{
}

void AddCommand::execute()
{
	std::cout << "Added " << tag << std::endl;
}
