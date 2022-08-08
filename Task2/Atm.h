#ifndef ATM_H
#define ATM_H

#include "SelfServiceDevice.h"

class Atm: public SelfServiceDevice
{
private:

	char m_isEppInstalled;
	char m_isRecycler;

public:

	Atm(const char isEppInstalled, const char isRecycler, const std::string& luno, const std::string& producer)
		: SelfServiceDevice(luno, producer), m_isEppInstalled(isEppInstalled), m_isRecycler(isRecycler)
	{
	};

	~Atm();

	void print();
};

#endif