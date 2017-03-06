#include <iostream>
using namespace std;
// создание класса очередь
//3. Очередь для хранения вещественных чисел
//в классе должны быть функции:
//1)добавления элемента в конец очереди
//2)чтение первого элемента из очереди
//3)проверка очереди на пустоту
//4)проверка что очередь целиком заполнена
//Максимально допустимый размер стека указывается
//при создании каждого объекта

class queue {
int size;	
float *q;
float temp;
int sloc ;
public:

void init(int msize);
void empty();
void qput(float i);
float qget();

};
void queue::init(int msize) //задаём размер очереди
{
	size=msize+1;
	 q=new float[size];
 sloc = 0;
}

void queue::empty() //проверяем очередь на пустоту
{
if (sloc == 0)
cout << "Queue is empty\n";
else
cout << "Queue isn't empty\n";
}

void queue::qput(float i) //добавляем элемент в конец очереди и ещё говорим о возникновении заполненности
{
if (sloc==(size-1)) {
cout << "Queue is full.\n";}
else{

sloc++ ; q[sloc] = i;}
}


float queue::qget ()//получаем первый элемент очереди или говорим о её пустоте
{

if (sloc>0){

temp =q[1];
for(int i=2; i<=sloc; i++)
{
	q[i-1]=q[i];
}
sloc--;
return temp;
}
else
cout << "Queue is empty\n";
return 0;
}
int main1 ()
{
queue a, b; // создание двух объектов типа queue
a.init(2);
b.init(1);
a.qput(10);
b.qput(19);
a.qput(20);
b.qput(1);
a.empty();
cout << a.qget()<< " ";
cout << a.qget()<< " ";
cout << b.qget()<< " ";
cout << b.qget()<< "\n";
return 0;
}
