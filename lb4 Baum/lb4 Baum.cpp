// lb4 Baum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Baum.h"
int main()
{
	Baum baum;
	baum.add(101, 0, 1);
	
	baum.add(11, 0, 1);
	baum.add(12, 1, 1);
	baum.add(13, 2, 1);
	
	for (int i = 0; i < baum.arr.size(); i++) {
		cout << baum.arr[i].value << endl;
		cout << baum.Himmel() << endl;
	}


	
}

