#pragma once
#include<iostream>
#include<string>
using namespace std;
class empleado
{
protected:
	string nomemp;
	long cedemp;
public:
	empleado();
	empleado(string pnomemp, long pcedemp);
	~empleado();
	void setNOMEMP(string pnomemp);
	void setCEDEMP(long pcedemp);
	string getNOMEMP();
	long getCEDEMP();
};

