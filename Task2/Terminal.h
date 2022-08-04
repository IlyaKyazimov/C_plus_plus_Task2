#ifndef TERMINAL_H
#define TERMINAL_H

#include "SelfServiceDevice.h"

class Terminal: public SelfServiceDevice
{
private:
	char m_isScannerInstalled;

public:
	Terminal(char isScannerInstalled, std::string luno, std::string producer)
		: SelfServiceDevice(luno, producer), m_isScannerInstalled(isScannerInstalled)
	{
	};

	~Terminal();

	void print();
};

#endif