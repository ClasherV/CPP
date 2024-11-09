// #include <iostream>
// using namespace std;
// class Parent
// {
//     public:
//         int id_p;
//         void printID_p()
//         {
//             cout<<"Base ID: "<<id_p<<endl;
//         }
// };
// class Child: public Parent
// {
//     public:
//         int id_c;
//         void printID_c()
//         {
//             cout<<"Child ID: "<<id_c<<endl;
//         }
// };
// int main()
// {
//     Child obj1;
//     obj1.id_p=7;
//     obj1.printID_p();
//     obj1.id_c=91;
//     obj1.printID_c();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base
// {
//     public:
//         int publicVar=10;
//         void display()
//         {
//             cout<<"Value of publicVar: "<<publicVar<<endl;
//         }
// };
// class Derived: public Base
// {
//     public:
//         void displayMember()
//         {
//             display();
//         }
//         void modifyMember(int pub)
//         {
//             publicVar=pub;
//         }
// };
// int main()
// {
//     Derived obj;
//     obj.displayMember();
//     obj.modifyMember(24);
//     obj.displayMember();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base
// {
//     private:
//         int privateVar;
//     public:
//         Base(int val)
//         {
//             privateVar(val)
//         }
// }