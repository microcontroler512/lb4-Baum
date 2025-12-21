#include "Baum.h"

using namespace std;
Baum::Baum() {}
int Baum::add(double var, unsigned int id, bool left) {

	Knoten knot;
	knot.value = var;
	knot.id = len;

	
	if (len == 0) {
		knot.hei = 1;
		knot.x = 60;
		arr[len]=knot;
		len++;
		return 0;
	}

	else if (id < len) {

		if (left) {
			if (arr[id].left == nullptr) {

				knot.hei = arr[id].hei + 1;

				int space = 60;
				for (int i = 0; i < knot.hei; i++) {
					space /= 2;
				}
				knot.x = arr[id].x - space;
				arr[len]=knot;
				len++;
				arr[id].left = &arr[knot.id];
				arr[knot.id].up = &arr[id];
			}
			else {
				return -1;
			}

		}

		else {
			if (arr[id].right == nullptr) {


				knot.hei = arr[id].hei + 1;

				int space = 60;
				for (int i = 0; i < knot.hei; i++) {
					space /= 2;
				}
				knot.x = arr[id].x + space;
				arr[len]=knot;
				len++;
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
	for (int i = 0; i < len; i++) {
		if (arr[i].hei > max) {
			max = arr[i].hei;
		}
	}
	return max;
}
bool Baum::del(unsigned int id) {
	if (id < len) {
		if ((arr[id].left == nullptr) && (arr[id].right == nullptr)) {

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
			arr[id].value = mull;


		

			return 1;

		}
	}
	return 0;
}
double Baum::maxB() {
	double max = arr[0].value;
	for (int i = 0; i < len; i++) {
		if (arr[i].value > max) {
			max = arr[i].value;
		}
	}
	return max;
}
double Baum::minB() {
	double max = arr[0].value;
	for (int i = 0; i < len; i++) {
		if (arr[i].value < max) {
			max = arr[i].value;
		}
	}
	return max;
}

void gotoxy(int x, int y) {
	COORD c;
	c.X = x;
	c.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void Baum::print() {
	for (int i = 0; i < len; i++) {
		if (arr[i].value != mull) {
			gotoxy(arr[i].x, arr[i].hei * 2);
			cout << arr[i].value;
		}
	}
}

void Baum::DSF(Knoten* knot) {
	
	if (knot == nullptr) {
		return;
	}

	cout << knot->id;
	DSF(knot->left);
		
	DSF(knot->right);
	
}
void Baum::DSF_drucker(Knoten* knot) {

	if (knot == nullptr) {
		return;
	}

	gotoxy(knot->x, knot->hei * 2);
	cout << knot->value;
	DSF(knot->left);
	DSF(knot->right);

}
	
	
