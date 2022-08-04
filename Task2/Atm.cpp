#include "Atm.h"

void Atm::print()
{
	std::cout << "LUNO: " << m_luno << std::endl;
	std::cout << "Producer: " << m_producer << std::endl;
	std::cout << "Type: ATM" << std::endl;
	std::cout << "Recycler: " << m_isRecycler << std::endl;
	std::cout << "EPP installed: " << m_isEppInstalled << "\n\n";
};

Atm::~Atm()
{
	std::cout << "Destroy Atm\n";
};