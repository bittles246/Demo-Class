#include <iostream>
#include <string.h>
#ifndef MyClass_h;
#define MyClass_h;

class Myclass
{
	private: 	int num =0;
				string room="";
				bool fun= true;

	public: void setNum(int);
			int getNum();
			void setRoom(string);
			string getRoom();
			void setFun(bool);
			bool getFun();

			MyClass(bool h);
			MyClass();
			MyClass(int n,string s);
			MyClass(int n);
			~MyClass();
			

}
