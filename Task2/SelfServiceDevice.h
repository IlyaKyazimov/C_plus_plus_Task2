#ifndef SELFSERVICEDEVICE_H
#define SELFSERVICEDEVICE_H

#include <iostream>

class SelfServiceDevice
{
protected:

	// чтобы потомки не смогли изменить члены родительского класса, сделал их константными

	const std::string m_luno;
	const std::string m_producer;

public:

	SelfServiceDevice(const std::string& luno, const std::string& producer);

	// чтобы предотвратить утечку пам€ти при удалении объекта,
	// деструктор родител€ должен быть объ€влен как виртуальный (если в классе присутствует хот€ бы одна виртуальна€ функци€)

	virtual ~SelfServiceDevice();

	const std::string& getLuno() const { return m_luno; };
	
	const std::string& getProducer() const { return m_producer; };

	virtual void print() = 0;
};

#endif