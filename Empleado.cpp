#include"Empleado.h"

empleado::empleado()
{
	nomemp = " ";
	cedemp = 0;
}

empleado::empleado(string pnomemp, long pcedemp)
{
	nomemp = pnomemp;
	cedemp = pcedemp;

}

empleado::~empleado()
{

}

void empleado::setNOMEMP(string pnomemp)
{
	nomemp = pnomemp;
}

void empleado::setCEDEMP(long pcedemp)
{
	cedemp = pcedemp;

}

string empleado::getNOMEMP()
{
	return nomemp;
}

long empleado::getCEDEMP()
{
	return cedemp;
}
