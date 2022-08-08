#include <exception>
#include "SelfServiceDevice.h"

SelfServiceDevice::SelfServiceDevice(std::string luno, std::string producer) try
{
	if (luno.length() != 9)
		throw std::invalid_argument("LUNO is not correct\n");

	m_luno = luno;
	m_producer = producer;
}
catch (const std::exception& err)
{
	std::cerr << err.what();
};

SelfServiceDevice::~SelfServiceDevice()
{
	std::cout << "Destroy SelfServiceDevice\n\n";
};