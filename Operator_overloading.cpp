/*
NOTES:
1. In C++, it is possible to change the behaviour of operators(+, -, *, ... etc)
2. But we can change the behaviour for user defined types(class, struct) only.

POINTS:
1. If we use them our program becomes more intutive.

There are few operators we can't overload
1. ::
2. ?:
3. .
4. .*
5. sizeof
6. typeid
*/

#include <bits/stdc++.h>
using namespace std;

class oprtr
{
    int x, y;

public:
    oprtr(int x = 0, int y = 0) : x{x}, y{y} {}

    oprtr add(const oprtr &rhs)
    {
        oprtr p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;

        return p;
    }

    oprtr subtract(const oprtr &rhs)
    {
        oprtr p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;

        return p;
    }

    void print()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    oprtr p1(1, 2), p2(3, 4);
    oprtr p3 = p1.add(p2); // oprtr p3 = p1.operator :: + (p2);
    oprtr p4 = p3.subtract(p1);
    p3.print();
    p4.print();

    return 0;
}

/*
POINTS:
1. When we need overload << & >>?
     cout << (user defined type) OR, cin >> (user defined type).
2. It can't be class member function(reason we will discuss), you have to make it friend function of your class.
*/

#include <bits/stdc++.h>
using namespace std;

class test
{
    int x;

public:
    test(int x = 0) : x{x} {}
    friend istream &operator>>(istream &input, test &obj);
    friend ostream &operator<<(ostream &output, test &obj);
};

istream &operator>>(istream &input, test &obj)
{
    input >> obj.x; // cin >> obj. x;
    return input;
}

ostream &operator<<(ostream &output, test &obj)
{
    output << obj.x << endl; // cout << obj. x << endl;
    return output;
}

int main()
{
    test t;
    cin >> t;          // operator.>>(cin, t); / cin >> t >> t1 >> x -> cin >> t -> cin >> t1 -> cin -> x;
    cout << t << endl; // operator.<<(cin, t);

    return 0;
}

/*
POINTS:
1. Operator overloading works with (class/ struct).
2. Unary operator overloading needs only one operand.
*/

#include <bits/stdc++.h>
using namespace std;

class point
{
    int x, y;

public:
    point(int x = 0, int y = 0) : x{x}, y{y} {}

    void print()
    {
        cout << x << " " << y << endl;
    }

    point operator-()
    {
        return point(-x, -y);
    }
};

int main()
{
    point p1(1, 2), p2;
    p1.print();
    p2.print();
    point p3 = -p1;
    p3.print();

    return 0;
}
