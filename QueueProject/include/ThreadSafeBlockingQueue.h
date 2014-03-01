/*
 * ThreadSafeBlockingQueue.h
 *
 *  Created on: Mar 1, 2014
 *      Author: ankit
 */

#ifndef THREADSAFEBLOCKINGQUEUE_H_
#define THREADSAFEBLOCKINGQUEUE_H_

#include <iostream>
#include <queue>
#include "Queue.h"

namespace PF {

template<class T>
class ThreadSafeBlockingQueue : public Queue<T> {

public:
	ThreadSafeBlockingQueue() :
			Queue<T>(true, true) {
	}

	virtual void push(T element){
		queue_.push(element) ;
	}

	virtual T pop(){
		T element = queue_.front() ;
		queue_.pop();
		return element ;
	}

	virtual int size(){
		return queue_.size() ;
	}

	virtual bool isEmpty(){
		return ( ( queue_.size() == 0 ) ? true : false ) ;
	}

	virtual T peek(){
		return queue_.front() ;
	}

	virtual ~ThreadSafeBlockingQueue() { }

private:
	std::queue<T> queue_;

};

}
;

#endif /* THREADSAFEBLOCKINGQUEUE_H_ */
