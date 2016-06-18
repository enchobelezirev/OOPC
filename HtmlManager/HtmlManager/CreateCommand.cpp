#define _CRT_SECURE_NO_WARNINGS
#include "CreateCommand.h"



CreateCommand::CreateCommand()
{
}

CreateCommand::CreateCommand(char* name, char * tag)
{
	this->name = name;
	this->tag = nullptr;
	this->tag = new char[strlen(tag) + 1];
	strcpy(this->tag, tag);
}


CreateCommand::~CreateCommand()
{
}

void CreateCommand::execute()
{
	std::cout << "creted " << tag;
}
