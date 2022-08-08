#include <iostream>
#include "Atm.h"
#include "Terminal.h"
#include <array>

int main()
{
    Atm atmWincor = Atm('Y', 'Y', "000000001", "Wincor");
    SelfServiceDevice *ptrAtmWincor = &atmWincor;

    Atm atmNCR = Atm('Y', 'N', "000000002", "NCR");
    SelfServiceDevice* ptrAtmNCR = &atmNCR;

    Terminal terminalOpteva = Terminal('Y', "000000003", "Opteva");
    SelfServiceDevice* ptrTerminalOpteva = &terminalOpteva;

    Terminal terminalDiebold = Terminal('N', "000000004", "Diebold");
    SelfServiceDevice* ptrTerminalDiebold = &terminalDiebold;

    std::array<SelfServiceDevice*, 4> array =
    {
        ptrAtmWincor, ptrAtmNCR, ptrTerminalOpteva, ptrTerminalDiebold
    };

    for (SelfServiceDevice* element : array)
    {
        element->print();
    };

    return 0;
};
