#include <iostream>
using namespace std;
// �������� ������ �������
//3. ������� ��� �������� ������������ �����
//� ������ ������ ���� �������:
//1)���������� �������� � ����� �������
//2)������ ������� �������� �� �������
//3)�������� ������� �� �������
//4)�������� ��� ������� ������� ���������
//����������� ���������� ������ ����� �����������
//��� �������� ������� �������

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
void queue::init(int msize) //����� ������ �������
{
	size=msize+1;
	 q=new float[size];
 sloc = 0;
}

void queue::empty() //��������� ������� �� �������
{
if (sloc == 0)
cout << "Queue is empty\n";
else
cout << "Queue isn't empty\n";
}

void queue::qput(float i) //��������� ������� � ����� ������� � ��� ������� � ������������� �������������
{
if (sloc==(size-1)) {
cout << "Queue is full.\n";}
else{

sloc++ ; q[sloc] = i;}
}


float queue::qget ()//�������� ������ ������� ������� ��� ������� � � �������
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
queue a, b; // �������� ���� �������� ���� queue
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
