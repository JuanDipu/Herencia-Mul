#pragma once
#include"Cargo.h"
#include"Empleado.h"
class obreros : public cargo, empleado  
{
private:
	int horaext;
public:
	obreros();
	obreros(int phoraext, string pnomcar, string pcodcar, string pnomemp, long pcedemp);
	~obreros();
	void setHORAEX(int  phoraext);
	int getHORAEX();
};
