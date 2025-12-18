#pragma once
#include <vector>
using namespace std;
class Knoten {
public:
	double value=0;
	Knoten* left=nullptr;
	Knoten* right=nullptr;
	Knoten* up=nullptr;
	int hei =0;
	unsigned int id=0;
};
class Baum {
private:
	
public:
	vector<Knoten> arr;
	Baum();
	Baum(const Baum var);
	~Baum();
	int add(double var, unsigned int id, bool left);
	int Himmel();
	bool del(unsigned int id);
	double maxB();
	double minB();
	bool finde(double var);
	
	

};