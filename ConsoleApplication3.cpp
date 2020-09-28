// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "1 13 49\n";// Task1
    char c;//Task2
    cout << "Vvedite simvol\n";
    cout << "Simvol-";
    cin >> c;
    cout << "1" << c << "13" << c << "49\n";
    double c1, c2, c3;//Task3
    cout << "Vvedite 3 chisla\n";
    cout << "Chisla:";
    cin >> c1 >> c2 >> c3;
    cout << c1 << "  " << c2 << "  " << c3 << endl;
    double x, a, y, x1;//Task4
    cout << "Vvedite a\n";
    cout << "a:";
    cin >> a;
    x = 12 * a * a + 7 * a - 12;
    cout << "x=" << x << endl;
    cout << "Vvedite x\n";
    cout << "x=";
    cin >> x1;
    y = 3 * x1 * x1 * x1 + 4 * x1 * x1 - 11 * x1 + 1;
    cout << "y=" << y << endl;
    double V, m, p;//Task5
    cout << "Vvedite objem & massu\n";
    cout << "V=";
    cin >> V;
    cout << "m=";
    cin >> m;
    p = m /V;
    cout << "p=" << p<<endl;
    double a1, b,x2;//Task6;
    cout <<"Vvedite a & b\n";
    cout << "a=";
    cin >> a1;
    cout << "b=";
    cin >> b;
    x2 = -b / a;
    cout << "x=" << x2 << endl;
    double x3, y3, x4, y4,o,r,s;//Task7
    cout << "Vvedite koordinaty tochki 1\n";
    cin >> x3 >> y3;
    cout << "Vvedite koordinaty tochki 2\n";
    cin >> x4 >> y4;
    double  dx, dy;
    dx = abs(x3 - x4);
    dy = abs(y3 - y4);
    r = sqrt(dx * dx + dy * dy);
    cout << "Rasstoyanie=" << r << endl;
    double l1, l2, h,k,lbk;// Task 8
    cout << "Vvedite dlinyi osnovaniy\n";
    cin >> l1 >> l2;
    cout << "Vvedite dlinu visoti\n";
    cin >> h;
    k = abs(l1 - l2) / 2;
    lbk = sqrt(k * k + h * h);
    p = lbk + lbk + l1 + l2;
    cout << "Perimetr=" << p << endl;
    double r1, r2, pi;//Task 9
    pi = 3, 14;
    cout << "Vvedite radiusi\n";
    cin >> r1 >> r2;
    s = pi * abs(r1 * r1 - r2 * r2);
    cout << "s=" << s << endl;
    double l,Vk,Sk;//Task 10
    cout << "Vvedite dlinu rebra\n";
    cin >> l;
    Vk = l * l * l;
    Sk = 6 * l * l;
    cout << "V=" << Vk << " S=" << Sk << endl;
    double cc;//Task 11;
    cout << "Vvedite dlinu storoni\n";
    cin >> cc;
    p = 4 * cc;
    cout << "P=" << p << endl;
    double R;//Task 12;
    cout << "Vvedite radius\n";
    cin >> R;
    R *= 2;
    cout << "d=" << R << endl;
    string name;//Task 13
    cout << "Write your name\n";
    cout << "Name-";
    cin >> name;
    cout << "Hello," << name << "! My name is C++" << endl;
    char C1, C2, C3, C4, C5, C6, C7;//Task 14
    cout << "Write a word\n";
    cin >> C1 >> C2 >> C3 >> C4 >> C5 >> C6 >> C7;
    if (
        (C1 == C7) && (C2 == C6) && (C3 == C5)
        )
    {
        cout << "This is polindrom!\n";
    }
    else
    {
        cout << "Sorry, this is not polindrom!";
    }

   


















        return 0;
}
