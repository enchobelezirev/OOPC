#pragma once
class Command
{
protected:
	char* tag;
	char* name;
public:
	virtual void execute() = 0;
	char* getName() const;
};

