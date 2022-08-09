#ifndef SELFSERVICEDEVICE_H
#define SELFSERVICEDEVICE_H

#include <iostream>

class SelfServiceDevice
{
protected:

	// чтобы потомки не cмогли изменить члены родительского класса, сделал их константными

	const std::string m_luno;
	const std::string m_producer;

public:

	SelfServiceDevice(const std::string& luno, const std::string& producer);

	// чтобы предотвратить утечку памяти при удалении объекта,
	// деструктор родителя должен быть объявлен как виртуальный (если в классе присутствует хотя бы одна виртуальная функция)

	virtual ~SelfServiceDevice();

	const std::string& getLuno() const { return m_luno; };
	
	const std::string& getProducer() const { return m_producer; };

	virtual void print() = 0;
};

#endif