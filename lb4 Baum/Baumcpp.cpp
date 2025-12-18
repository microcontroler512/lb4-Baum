#include "Baum.h"
#include <vector>
using namespace std;
Baum::Baum(){}
int Baum::add(double var, unsigned int id, bool left) {

	Knoten knot;
	knot.value = var;
	knot.id = arr.size();

	
	if (arr.size() == 0) {
		knot.hei = 1;
		arr.push_back(knot);
		return 0;
	}
	
	if (id < arr.size()) {
		
		if (left) {
			if (arr[id].left == nullptr) {
				
				knot.hei = arr[id].hei +1;
				arr.push_back(knot);
				arr[id].left = &arr[knot.id];
				arr[knot.id].up = &arr[id];
			}
			else {
				return -1;
			}
			
		}

		else {
			if (arr[id].right == nullptr) {
				
				
				knot.hei = arr[id].hei+1 ;
				arr.push_back(knot);
				arr[id].right = &arr[knot.id];
				arr[knot.id].up = &arr[id];
			}
			else {
				return -1;
			}
		}
		return knot.id;
	}

}
int Baum::Himmel() {
	int max = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].hei > max) {
			max = arr[i].hei;
		}
	}
	return max;
}
bool Baum::del(unsigned int id) {
	if (id < arr.size()) {
		if ((arr[id].left == nullptr)&&(arr[id].right == nullptr)) {

			Knoten* upp = arr[id].up;
			if (upp->left == nullptr) {
				upp->right = nullptr;
			}
			else if (upp->right == nullptr) {
				upp->left = nullptr;
			}
			else {
				if (upp->left->id == id) {
					upp->left = nullptr;
				}
				else if (upp->right->id == id) {
					upp->right = nullptr;
				}
			}



			arr.erase(arr.begin() + id);

			return 1;

		}
	}
	return 0; 
}
double Baum::maxB() {
	double max = arr[0].value;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].value > max) {
			max = arr[i].value;
		}
	}
	return max;
}
double Baum::minB() {
	double max = arr[0].value;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].value < max) {
			max = arr[i].value;
		}
	}
	return max;
}
bool Baum::finde(double var) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].value == var) {
			return 1;
		}
	}
	return 0;
}
Baum::~Baum() {
	arr.clear();
}