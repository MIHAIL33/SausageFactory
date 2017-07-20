//============================================================================
// Name        : SausageFactory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "DoctorSausageFactory.h"
#include "LiverwurstFactory.h"
#include "Sausage.h"
#include <vector>

using namespace std;

int main() {
	DoctorSausageFactory* doctorSausage = new DoctorSausageFactory;
	LiverwurstFactory* liverwurst = new LiverwurstFactory;

	vector<Sausage*> sausage;

	sausage.push_back(doctorSausage->createSausage());
	sausage.push_back(doctorSausage->createSausage());
	sausage.push_back(liverwurst->createSausage());
	sausage.push_back(doctorSausage->createSausage());
	sausage.push_back(liverwurst->createSausage());
	sausage.push_back(liverwurst->createSausage());

	for (int i = 0; i < sausage.size(); i++) {
		sausage[i]->info();
	}

	return 0;
}
