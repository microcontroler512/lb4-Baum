#pragma once
#include <vector>
using namespace std;
class Knoten {
public:
	double value;
	Knoten* left;
	Knoten* right;
	Knoten* up;
	int hei =0;
	unsigned int id;
};
class Baum {
private:
	
public:
	vector<Knoten> arr;
	Baum();
	int add(double var, unsigned int id, bool left);
	int Himmel();
	bool del(unsigned int id);
	
	

};