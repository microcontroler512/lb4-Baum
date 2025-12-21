// lb4 Baum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Baum.h"
int main()
{
	Baum baum;
	baum.add(0, 0, 1);
	baum.add(1, 0, 1);
	baum.add(2, 0, 0);

	baum.add(3, 1, 1);
	baum.add(4, 1, 0);

	baum.add(5, 2, 1);
	baum.add(6, 2, 0);

	baum.add(7, 3, 1);
	baum.add(8, 3, 0);
	baum.del(8);
	baum.add(90, 3, 0);
	/*for (int i = 0; i < 9; i++) {
		cout << baum.arr[i].id<<endl;
	}*/
	baum.DSF_drucker(&baum.arr[0]);
	//baum.DSF_drucker();
}
