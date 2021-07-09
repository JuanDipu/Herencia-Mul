#pragma once
#include"Cargo.h"
#include"Empleado.h"
class vendedor: public cargo, empleado
{
private:
	long totvent;
public:
	vendedor();
	vendedor(long ptotvent, string pnomcar, string pcodcar, string pnomemp, long pcedemp);
	~vendedor();
	void setTOTVE(long ptotvent);
	int getTOTVE();
};