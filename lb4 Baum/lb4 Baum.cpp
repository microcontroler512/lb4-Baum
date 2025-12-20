// lb4 Baum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Baum.h"

int main()
{
	Baum baum;

	baum.add(10, 0, 0);
	baum.add(11, 0, 0);
	baum.add(12, 1, 0);
	baum.add(13, 2, 0);
	
	for (int i = 0; i < baum.arr.size(); i++) {
		cout << baum.arr[i].value << endl;
	}


	cout << baum.Himmel() << endl;

	baum.add(0, 0, 1);
	
	int c = baum.add(1, 0, 0);
	int b = baum.add(2, 0, 1);
	//baum.add(3, 1, 1);
	baum.add(4, 1, 0);
	baum.add(5, 2, 1);
	//baum.add(6, 2, 0);
	baum.add(7, 3, 1);
	baum.add(8, 3, 0);
	

	
/*	for (int i = 0; i < baum.arr.size(); i++) {
		cout << baum.arr[i].value << endl;
		cout << int(baum.arr[i].x) << endl;
		
	}
	*/
	baum.print();
	

}

