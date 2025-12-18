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
}

