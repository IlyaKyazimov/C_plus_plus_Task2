#ifndef ATM_H
#define ATM_H

#include "SelfServiceDevice.h"

class Atm: public SelfServiceDevice
{
private:
	char m_isEppInstalled;
	char m_isRecycler;

public:
	Atm(char isEppInstalled, char isRecycler, std::string luno, std::string producer)
		: SelfServiceDevice(luno, producer), m_isEppInstalled(isEppInstalled), m_isRecycler(isRecycler)
	{
	};

	~Atm();

	void print();
};

#endif