/*
 * DoctorSausage.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */

#ifndef DOCTORSAUSAGE_H_
#define DOCTORSAUSAGE_H_

#include <iostream>
#include <string>

#include "Sausage.h"

namespace std {

class DoctorSausage : public Sausage {
public:
	Sausage sausage;
	void info() {
		cout << "Doctor: " + sausage.MixingTheDough() + sausage.AddingComponents() + sausage.Cutting() + sausage.Packing() << endl;
	}
};

}


#endif /* DOCTORSAUSAGE_H_ */
