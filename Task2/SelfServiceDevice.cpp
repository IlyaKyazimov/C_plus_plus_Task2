#include "SelfServiceDevice.h"

SelfServiceDevice::SelfServiceDevice(std::string luno, std::string producer) try
{
	if (luno.length() != 9)
		throw 1;
	m_luno = luno;
	m_producer = producer;
}
catch (int)
{
	std::cerr << "LUNO is not correct\n";
};

SelfServiceDevice::~SelfServiceDevice()
{
	std::cout << "Destroy SelfServiceDevice\n\n";
};