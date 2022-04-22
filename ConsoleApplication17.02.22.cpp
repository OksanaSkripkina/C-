// ConsoleApplication17.02.22 функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

float maximum (float a1, float a2, float a3, float a4)
{
	float max = a1;
	if (max < a2)max = a2;
	if (max < a3)max = a3;
	if (max < a4)max = a4;
	return max;
}
// вывести mассив. заполнить массив
//void  fill(int array[], int n, int a, int b)
//{
//	if (a > b)swap(a, b);
//	for (int i = 0; i < n; i++)
//	{
//		array[i] = a + rand() % (b-a + 1);
//	}
// }
//float fill2(int array2[], int a, int b, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << array2[i] << " ";
//	}
//	cout << endl;
//}
//void  copyArray(int  array[], int size, int array2[])
//{
//	for (int i = 0; i < size; i++)
//	{
//	array2[i]=array[i];
//	}
//	
//}
void showAr(int array[7][4])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; i < 4; j++)
		{
			array[i][j]=1+rand()%(1+7-1);
			cout << array[i][j];
		}
	}
	
}



int main()
{
srand(time(NULL));

	/*maximum(1, 4, 5, 7);
	copyArray(array2, array, size);*/
//int array[10];
//int array2[10];
//int array3[5][8];
//int size1 = sizeof(array3) / sizeof(array3[0]);
//cout << size1;
//cout << endl;
//cout << sizeof(array3[0]) / sizeof(array3[0][0]) << endl;

}




#include <iostream>
#include <ctime>
using namespace std;

void initArray(int array[], int n, int a, int b) {
    if (a > b) swap(a, b);
    for (int i = 0; i < n; i++) {
        array[i] = a + rand() % (b - a + 1);
    }
}

void initArray(int array[5][8]) {
    for (int i = 0; i < 5; i++) {
        initArray(array[i], 8, 1, 9);
    }
}

void showArray(int array2[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
}

void showArray(int array[5][8]) {
    for (int i = 0; i < 5; i++) {
        showArray(array[i], 8);
    }
}

void copyArray(int array[], int array2[], int size) {
    for (int i = 0; i < size; i++) {
        array2[i] = array[i];
    }
}



int main()
{
    srand(time(NULL));
    int array[10];
    int array2[10];
    int array3[5][8];
    initArray(array3);
    showArray(array3);

    //int size = sizeof(array) / sizeof(array[0]);
    /*initArray(array, size,1, 9);
    showArray(array, size);
    copyArray(array, array2, size);
    showArray(array2, size);*/
}
