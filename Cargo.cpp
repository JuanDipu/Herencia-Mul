#include "Cargo.h"

cargo::cargo()
{
	nomcar = " ";
	codcar = " ";
}

cargo::cargo(string pnomcar, string pcodcar)
{
	nomcar = pnomcar;
	codcar = pcodcar;
}

cargo::~cargo()
{

}

void cargo::setNOMCAR(string pnomcar)
{
	nomcar = pnomcar;
}

void cargo::setCODCAR(string pcodcar)
{
	codcar = pcodcar;
}

string cargo::getNOMCAR()
{
	return nomcar;
}

string cargo::getCODCAR()
{
	return codcar;
}
