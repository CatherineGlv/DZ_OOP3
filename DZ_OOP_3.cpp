//===================================================
#include <iostream>
#include <string>

using namespace std;

class Figure
{
public:
    virtual void area() = 0;

    virtual ~Figure() { };

};

class Parallelogram : public Figure
{
protected:
    int base;
    int height;
public:

    Parallelogram(int b, int h) : base(b), height(h) {}
    void area() override
    {
        cout << "The parallelogram area is " << base * height << endl;
    }
};

class Circle : public Figure
{
    double radius;
    double P = 3.1415;
public:
    Circle(double r) : radius(r) {}
    void area() override
    {
        cout << "The area of the circle is " << P * (radius * radius) << endl;
    }
};

class Rectangle : public Parallelogram
{
public:
    Rectangle(int b, int h) : Parallelogram(b, h) {}
    void area() override
    {
        cout << "The area of the triangle is " << base * height << endl;
    }
};

class Square : public Parallelogram
{
public:

    Square(int b, int h) : Parallelogram(b, h) {}

    void area() override
    {
        cout << "The square area is " << base * height << endl;
    }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(int b, int h) : Parallelogram(b, h) {}
    void area() override
    {
        cout << "The area of the rhombus is " << base * height << endl;
    }
};



int main()
{
    Parallelogram parallelogram(2, 3);
    parallelogram.area();

    Circle circle(5);
    circle.area();

    Rectangle rectangle(5, 6);
    rectangle.area();

    Square square(8, 2);
    square.area();

    Rhombus rhombus(3, 3);
    rhombus.area();

    return 0;
}
//=========================================================

class Car
{
public:
    string company;
    string model;

    Car(string c, string m) : company(c), model(m) {};
};

class PassengerCar : virtual public Car
{
public:

    PassengerCar(string c, string m) : Car(c, m) {}
    
    void print() const
    {
        cout << "PassengerCar company is " << company << " and model is " << model << endl;
    }
};

class Bus : virtual public Car
{
public:

    Bus(string c, string m) : Car(c, m) {}

    void print() const
    {
        cout << "Bus company is " << company << " and model is " << model << endl;
    }
};

class Minivan : public PassengerCar, public Bus
{
public:

    Minivan(string c, string m) : Car(c, m) {};

    void print() const
    {
        cout << "Minivan company is " << company << " and model is " << model << endl;
    }
};

int main()
{
    PassengerCar car("Honda", "Fit");
    car.print();

    Bus bus("Hino", "1");
    bus.print();

    Minivan minivan("Toyota", "Hice");
    minivan.print();

    return 0;
}

//============================================================ Укажите, где ошибка...

// 3 задание не сильно понимаю как сделать, я методичку прочитала, но про перегрузку операторов не сильно поняла, буду читать дополнительно

// 4 задание хотелось бы посмотреть разбор, как правильно выполнить (не хочу искать все из интернета, хочу понять сама)
