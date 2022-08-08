#ifndef SELFSERVICEDEVICE_H
#define SELFSERVICEDEVICE_H

#include <iostream>

class SelfServiceDevice
{
protected:

	const std::string m_luno;
	const std::string m_producer;

public:

	SelfServiceDevice(const std::string& luno, const std::string& producer);

	~SelfServiceDevice();

	const std::string& getLuno() const { return m_luno; };
	
	const std::string& getProducer() const { return m_producer; };

	virtual void print() = 0;
};

#endif