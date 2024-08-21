#include <iostream>
using namespace std;
void menu();
void area_perimeter();
float area_circle(int radius);
float perimeter_circle(int radius);
int area_rectangle(int length, int breadth);
int perimeter_rectangle(int length, int breadth);
int area_square(int side);
int perimeter_square(int side);
int area_triangle(int height, int base);
int perimeter_triangle(int a, int b, int c);
int main()
{
    menu();
    int ch;
    cout << "Enter Your Choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "You Select Circle: ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int radius;
        cout << "Enter the radius: ";
        cin >> radius;
        if (ch == 1)
            area_circle(radius);
        else if (ch == 2)
            perimeter_circle(radius);
        break;

    case 2:
        cout << "You Select Rectangle: ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int length;
        cout << "Enter the length: ";
        cin >> length;
        int breadth;
        cout << "Enter the breadth: ";
        cin >> breadth;
        if (ch == 1)
            area_rectangle(length, breadth);
        else if (ch == 2)
            perimeter_rectangle(length, breadth);
        break;
    case 3:
        cout << "You Select Square: ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int side;
        cout << "Enter the Side: ";
        cin >> side;

        if (ch == 1)
        {
            area_square(side);
        }
        else if (ch == 2)
        {
            perimeter_square(side);
        }
        break;
    case 4:
        cout << "You Select Triangle: ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        if (ch == 1)
        {
            area_triangle(height, base);
        }
        else if (ch == 2)
        {
            perimeter_triangle(a, b, c);
        }
        break;
    }
}

void area_perimeter()
{
    cout << "1.Area: ";
    cout << "2.Perimeter: ";
}

float area_circle(int radius)
{
    float area = 3.14 * radius * radius;
    cout << "Area of Circle: ";
    cout << area;
}

float perimeter_circle(int radius)
{
    float perimeter = 2 * 3.14 * radius;
    cout << perimeter;
}

int area_rectangle(int length, int breadth)
{
    int area = length * breadth;
    cout << area;
}

int perimeter_rectangle(int length, int breadth)
{
    int perimeter = 2 * (length + breadth);
    cout << perimeter;
}

int area_square(int side)
{
    int area = side * side;
    cout << area;
}

int perimeter_square(int side)
{
    int perimeter = side * side;
    cout << perimeter;
}

int area_triangle(int height, int base)
{

    int height, base;
    cout << "enter the height";
    cin >> height;
    cout << "Enter the base: ";
    cin >> base;
    float area = (height * base) / 2;
    cout << area;
}

int perimeter_triangle(int a, int b, int c)
{

    int a, b, c;
    cout << "Enter the value of side 1";
    cin >> a;
    cout << "Enter the value of side 2";
    cin >> b;
    cout << "Enter the value of side 3";
    cin >> c;
    int perimeter = a + b + c;
    cout << perimeter;
}

void menu()
{
    cout << "........Menu........ " << endl;
    cout << "1.Circle" << endl;
    cout << "2.Rectangle" << endl;
    cout << "3.Square" << endl;
    cout << "4.Triangle" << endl;
}