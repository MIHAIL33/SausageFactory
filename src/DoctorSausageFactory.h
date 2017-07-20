/*
 * DoctorSausageFactory.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */

#ifndef DOCTORSAUSAGEFACTORY_H_
#define DOCTORSAUSAGEFACTORY_H_

#include "DoctorSausage.h"
#include "Factory.h"

namespace std {

class DoctorSausageFactory: public Factory {
public:
	Sausage* createSausage() {
		return new DoctorSausage;
	}
};

}



#endif /* DOCTORSAUSAGEFACTORY_H_ */
