#include "BaseClass.h"

using namespace std;



BaseClass::BaseClass()
{
}

void BaseClass::GetName(string userName) {
	name = userName;

	return;
}

BaseClass::~BaseClass()
{
}

void BaseClass::PrintAll() {
	cout << name << endl;
	return;
}