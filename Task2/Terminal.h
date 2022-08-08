#ifndef TERMINAL_H
#define TERMINAL_H

#include "SelfServiceDevice.h"

class Terminal: public SelfServiceDevice
{
private:

	char m_isScannerInstalled;

public:

	Terminal(const char isScannerInstalled, const std::string& luno, const std::string& producer)
		: SelfServiceDevice(luno, producer), m_isScannerInstalled(isScannerInstalled)
	{
	};

	~Terminal();

	void print();
};

#endif