#pragma once
const double mull = 1.1e-307;
#include <iostream>
#include <Windows.h>
using namespace std;
class Knoten {
public:
	double value = 0;
	Knoten* left = nullptr;
	Knoten* right = nullptr;
	Knoten* up = nullptr;
	int hei = 0;
	int x = 0;
	unsigned int id = 0;
	
};
class Baum {
private:

public:
	Knoten arr[100];
	unsigned len = 0;
	Baum();
	int add(double var, unsigned int id, bool left);
	int Himmel();
	bool del(unsigned int id);
	double maxB();
	double minB();
	void print();
	void DSF(Knoten* knot );
	void DSF_drucker(Knoten* knot);

};