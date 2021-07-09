#pragma once
#include<iostream>
#include<string>
using namespace std;
class  cargo
{
protected:
	string nomcar;
	string codcar;
public:
	cargo();
	cargo(string pnomcar, string pcodcar);
	~cargo();
	void setNOMCAR(string pnomcar);
	void setCODCAR(string pcodcar);
	string getNOMCAR();
	string getCODCAR();

};

