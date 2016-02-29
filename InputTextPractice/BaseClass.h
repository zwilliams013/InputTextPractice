#pragma once
#include <iostream>
#include <string>
using namespace std;

class BaseClass
{
public:
	BaseClass();
	~BaseClass();
	void PrintAll();
	void GetName(string userName);
protected:
	int ID;
private:
	std::string name;
};

class DerivedClass : public BaseClass {
public:

private:
	int numID;
};