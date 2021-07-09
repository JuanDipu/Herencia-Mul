#include"Obreros.h"

obreros::obreros():cargo(),empleado()
{
	horaext = 0;
}

obreros::obreros(int phoraext, string pnomcar, string pcodcar, string pnomemp, long pcedemp):cargo(pnomcar,pcodcar),empleado(pnomemp,pcedemp)
{
	horaext = phoraext;
}

obreros::~obreros()
{

}

void obreros::setHORAEX(int phoraext)
{
	horaext = phoraext;
}

int obreros::getHORAEX()
{
	return horaext;
}

