// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "HelloWorldClass.h"
#include <iostream>

int main()
{
	HelloWorldClass hello;
	hello.writeHello();
	int x = hello.calculate(4, 5);
	hello.showResult(x);
	hello.waitForAnyKey();
    return 0;
}
