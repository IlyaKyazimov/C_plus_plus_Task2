#ifndef SELFSERVICEDEVICE_H
#define SELFSERVICEDEVICE_H

#include <iostream>

class SelfServiceDevice
{
protected:
	std::string m_luno;
	std::string m_producer;

public:
	SelfServiceDevice(std::string luno, std::string producer);

	~SelfServiceDevice();

	std::string getLuno() { return m_luno; };
	
	std::string getProducer() { return m_producer; };

	virtual void print() = 0;
};

#endif