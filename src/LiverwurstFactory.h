/*
 * LiverwurstFactory.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */

#ifndef LIVERWURSTFACTORY_H_
#define LIVERWURSTFACTORY_H_

#include "Factory.h"
#include "Liverwurst.h"

namespace std {

class LiverwurstFactory: public Factory {
public:
	Sausage* createSausage() {
		return new Liverwurst;
	}
};

}


#endif /* LIVERWURSTFACTORY_H_ */
