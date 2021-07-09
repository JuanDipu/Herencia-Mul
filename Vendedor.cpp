#include"Vendedor.h"

vendedor::vendedor() :cargo(), empleado()
{
   totvent = 0;
}

vendedor::vendedor(long ptotvent, string pnomcar, string pcodcar, string pnomemp, long pcedemp) : cargo(pnomcar, pcodcar), empleado(pnomemp, pcedemp)
{
	totvent = ptotvent;
}

vendedor::~vendedor()
{

}

void vendedor::setTOTVE(long ptotvent)
{
	totvent = ptotvent;
}

int vendedor::getTOTVE()
{
	return totvent;
}

