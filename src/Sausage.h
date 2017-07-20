/*
 * Sausage.h
 *
 *  Created on: 20 июля 2017 г.
 *      Author: Михаил
 */


#ifndef SAUSAGE_H_
#define SAUSAGE_H_

#include <string>

namespace std {

class Sausage {
public:
	Sausage();
	virtual ~Sausage();
	virtual void info();
public:
	string MixingTheDough();
	string AddingComponents();
	string Cutting();
	string Packing();
};

} /* namespace std */

#endif /* SAUSAGE_H_ */
