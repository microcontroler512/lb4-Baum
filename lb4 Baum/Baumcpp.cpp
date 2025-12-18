#include "Baum.h"
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
				arr[id].left = &knot;
				knot.hei = arr[id].hei +1;
				arr.push_back(knot);
			}
			else {
				return -1;
			}
			
		}

		else {
			if (arr[id].right == nullptr) {
				arr[id].right = &knot;
				knot.hei = arr[id].hei+1 ;
				arr.push_back(knot);
				
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
		if (arr[id].hei == Himmel()) {
			arr.erase(id);
		}
	}
}