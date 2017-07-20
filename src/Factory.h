/*
 * Factory.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */

#ifndef FACTORY_H_
#define FACTORY_H_

namespace std {

class Factory {
public:
	virtual Sausage* createSausage() = 0;
};

}



#endif /* FACTORY_H_ */
