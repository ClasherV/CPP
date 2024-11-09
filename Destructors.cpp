// Default Destructor

// #include <iostream>
// using namespace std;
// class Sum
// {
//     int a=10,b=5;
//     public:
//         Sum()
//         {
//             int sum=a+b;
//             cout<<sum<<endl;
//             cout<<"Constructor called"<<endl;
//         }
//         ~Sum()
//         {
//             cout<<"Destructor called"<<endl;
//         }
// };
// int main()
// {
//     Sum s;
//     return 0;
// }

// Virtual Destructor

// #include <iostream>
// using namespace std;
// class Base
// {
//     public:
//     Base()
//     {
//         cout<<"Base Constructor Created\n";
//     }
//     virtual ~Base()
//     {
//         cout<<"Base Constructor Destructed\n";
//     }
// };
// class Derived: public Base
// {
//     public:
//     Derived()
//     {
//         cout<<"Derived Constructor Created\n";
//     }
//     ~Derived()
//     {
//         cout<<"Derived Constructor Destructed\n";
//     }
// };
// int main()
// {
//     Derived *d=new Derived();
//     Base *b=d;
//     delete b;
//     getchar();
//     return 0;
// }