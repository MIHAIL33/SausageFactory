/*
 * Liverwurst.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */

#ifndef LIVERWURST_H_
#define LIVERWURST_H_

#include <iostream>
#include <string>

#include "Sausage.h"

namespace std {

class Liverwurst : public Sausage {
public:
	Sausage sausage;
	void info() {
		cout << "Liwerwurst: " + sausage.MixingTheDough() + sausage.AddingComponents() + sausage.Cutting() + sausage.Packing() << endl;
	}
};


}


#endif /* LIVERWURST_H_ */
