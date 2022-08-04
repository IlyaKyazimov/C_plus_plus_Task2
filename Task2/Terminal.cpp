#include "Terminal.h"

void Terminal::print()
{
	std::cout << "LUNO: " << m_luno << std::endl;
	std::cout << "Producer: " << m_producer << std::endl;
	std::cout << "Type: Terminal" << std::endl;
	std::cout << "With scanner: " << m_isScannerInstalled << "\n\n";
};

Terminal::~Terminal()
{
	std::cout << "Destroy Terminal\n";
};