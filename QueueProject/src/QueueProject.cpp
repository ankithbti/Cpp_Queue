//============================================================================
// Name        : QueueProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include "ThreadSafeBlockingQueue.h"
#include <string>

int main(void) {
	//puts("Hello World!!!");
	PF::Queue<int> *myQ = new PF::ThreadSafeBlockingQueue<int>();

	myQ->push(10);
	myQ->push(20);
	myQ->push(30);

	std::cout << " Queue Size :: " << myQ->size() << std::endl;
	std::cout << " Queue popped element :: " << myQ->pop() << std::endl;
	std::cout << " Queue Size :: " << myQ->size() << std::endl;
	std::cout << " Queue front element :: " << myQ->peek() << std::endl;
	std::cout << " Queue emptyness :: " << myQ->isEmpty() << std::endl;
	std::cout << " Queue popped element :: " << myQ->pop() << std::endl;

	std::cout << " Queue Size :: " << myQ->size() << std::endl;
	std::cout << " Queue front element :: " << myQ->peek() << std::endl;
	std::cout << " Queue emptyness :: " << myQ->isEmpty() << std::endl;

	delete myQ;

	return EXIT_SUCCESS;
}
