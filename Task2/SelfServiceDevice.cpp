#include <exception>
#include "SelfServiceDevice.h"

SelfServiceDevice::SelfServiceDevice(const std::string& luno, const std::string& producer) 
try : m_luno(luno), m_producer(producer)
{
	if (luno.length() != 9)
		throw std::invalid_argument("LUNO is not correct\n");
}
catch (const std::exception& err)
{
	std::cerr << err.what();
};

SelfServiceDevice::~SelfServiceDevice()
{
	std::cout << "Destroy SelfServiceDevice\n\n";
};