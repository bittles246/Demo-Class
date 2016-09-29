#include <iostream>
#include "MyClass.h"

void MyClass::setNum(int v)
{ num = v;}

int MyClass::getNum()
{ return num; }

void MyClass::setRoom(string a)
{ room = a; }

string MyClass::getRoom()
{ return room; }

void MyClass::setFun(bool b)
{ fun = b; }

string MyClass::getFun()
{ return fun; }

MyClass::MyClass()
	{}
	
MyClass::MyClass(int n,string s)
	{ 	num = n ;
		room = s; } 
	
MyClass::MyClass(int n)
	{ num = n; }
	
MyClass::~MyClass()
	{}

MyClass::MyClass(bool h)
{ fun = h;)
