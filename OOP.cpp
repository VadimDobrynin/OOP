// first.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <string>
#include <stdint.h>
using namespace std;
/*
* Делегирующий конструктор
*/

class Human {
public:
    Human(string name)
    {
        this->name = name;
        this->age = 0;
        this->weight = 0;
    }
    Human(string name, int age) : Human(name)
    {
        this->age = age;
    }
    Human(string name, int age, int weight) : Human(name, age)
    {
        this->weight = weight;
    }
    void getParams() {
        cout << "name = " << name << endl
            << "age = " << age << endl
            << "weight = " << weight << endl;

    }
private:
    string name;
    int age;
    int weight;

};

int main()
{
    setlocale(LC_ALL, "ru");
    Human h("Tardis");
    h.getParams();


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
