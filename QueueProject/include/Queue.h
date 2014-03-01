/*
 * Queue.h
 *
 *  Created on: Mar 1, 2014
 *      Author: ankit
 */

#ifndef QUEUE_H_
#define QUEUE_H_

namespace PF{

template<class T>
class Queue
{

public:
	Queue(bool ts, bool b) : isThreadSafe_(ts), isBlocking_(b) { }
	virtual void push(T) = 0 ;
	virtual T pop() = 0 ;
	virtual int size() = 0 ;
	virtual bool isEmpty() = 0 ;
	virtual T peek() = 0 ;
	bool isThreadSafe() const { return isThreadSafe_ ; }
	bool isBlocking() const { return isBlocking_ ; }
private:
	bool isThreadSafe_ ;
	bool isBlocking_ ;

};

};

#endif /* QUEUE_H_ */
