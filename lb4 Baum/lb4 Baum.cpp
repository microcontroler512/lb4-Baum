// lb4 Baum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Baum.h"
int main()
{
	Baum baum;
	baum.add(101, 0, 1);
	
	int c = baum.add(11, 0, 1);
	int b = baum.add(12, 1, 1);
	int a = baum.add(13, 2, 1);
	cout<<baum.del(a)<<endl;
	
	for (int i = 0; i < baum.arr.size(); i++) {
		cout << baum.arr[i].value << endl;
		
	}
	cout << baum.minB() << endl;
	cout << baum.maxB() << endl;

	
}

