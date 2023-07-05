// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int salary;

// public:
//     int rollno;

//     // employee()
//     // {
//     //     cout << "constructor called";
//     // }
//     employee(int salary){
//         cout<<this;
//         this-> salary=salary;
//     }
//     int setsalary(int salary)
//     {
//         this-> salary = salary;
//     }
//     int setrollno(int roll)
//     {
//         rollno = roll;
//     }
//     void getsalary()
//     {
//         cout<<salary;
//     }
//     int getrollno()
//     {
//         return rollno;
//     }
// };
// int main()
// {

//     employee siddharth(1);
//     cout<<&siddharth;
//     // employee *harsh=new employee(1050);
//     // harsh->setsalary(5000);
//     // harsh->getsalary();
//     // siddharth.setsalary(1000);
//     // siddharth.getsalary();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class sum1
// {
// private:
//     int sum = 0;

// public:

//     int add(int n){
//         for (int i = 1; i <=n; i++)
//         {
//             sum+=i;
//         }
//         return sum;

//     }

// };
// int main()
// {
//     // statically created object
//     sum1 sum;
//     cout<<sum.add(5);
//     cout<<endl;

//     //dynamically created object
//     sum1 *sum2=new sum1;
//     cout<<sum2->add(5);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int a, b;

// public:
//     void fun()
//     {
//         a = 0;
//         b = 0;
//     }
//     void fun(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void print()
//     {
//         cout << a << "  " << b;
//         cout<<endl;
//     }
// };

// int main()
// {
//     employee e1,e2;
//     e1.fun();
//     e2.fun(5,10);
//     e1.print();
//     e2.print();

//     employee *emp=new employee;
//     emp->fun(2,4);
//     emp->print();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class point
// {
// private:
//     int a, b;

// public:
//     point() : a(0), b(0)
//     {
//     }
//     point(int x, int y) : a(x), b(y)
//     {
//     }
//     void print()
//     {
//         cout << a << "  " << b << endl;
//     }
// };
// int main()
// {
//     // statically created object
//     point p1, p2(5, 20);
//     p1.print();
//     p2.print();

//     // dynimacally created object

//     point *ptr = new point(10, 20);
//     point *ptr2 = new point;
//     ptr->print();
//     ptr2->print();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class test
// {
// public:
//     test()
//     {
//         cout << "default constructor" << endl;
//     }
//     test(int x)
//     {
//         cout << "parametric constructor" << endl;
//     }
// };
// class main1
// {
//     test t;

// public:
//     main1()
//     {
//         t = test(50);
//     }
// };
// int main()
// {
//     main1 m;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class test
// {
// public:
//     test()
//     {
//         cout << "default constructor" << endl;
//     }
//     test(int x)
//     {
//         cout << "parametric constructor" << endl;
//     }
// };
// class main1
// {
//     test t;

// public:
//     main1():t(10)
//     {
//     }
// };
// int main()
// {
//     main1 m;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class point
// {
// private:
//     int *ptr;

// public:
//     point(int x)
//     {
//         ptr = new int(x);
//     }
//     void set(int x)
//     {
//         *ptr = x;
//     }
//     void print()
//     {
//         cout << *ptr << endl;
//     }
// };
// int main()
// {
//     point ptr(10);
//     point ptr2(ptr);
//     ptr.print();
//     ptr2.print();
//     ptr2.set(20);
//     ptr.print();
//     ptr2.print();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class point
// {
// private:
//     int ptr;

// public:
//     point(int x)
//     {
//         ptr=x;
//     }
//     void set(int x)
//     {
//         ptr = x;
//     }
//     void print()
//     {
//         cout << ptr << endl;
//     }
// };
// int main()
// {
//     point ptr(10);
//     point ptr2(ptr);
//     ptr.print();
//     ptr2.print();
//     ptr2.set(20);
//     ptr.print();
//     ptr2.print();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class test{
//     public:
//     test(){
//         cout<<"constructor called"<<endl;

//     }
//     ~test(){
//         cout<<"destructor called"<<endl;
//     }
// };
// int main(){
//     {
//         test t;
//     }
//     test t1;
//     test t2;

//     return 0;
// }

#include <iostream>
using namespace std;
class test
{
private:
    int x;

public:
    test(int y) : x(y)
    {
        cout << "const " << x << endl;
    }
    ~test()
    {
        cout << "dest " << x << endl;
    }
};
int main()
{
    {
        test t1(10);
    }
    test t2(20);

    return 0;
}