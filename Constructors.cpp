// Default Constructor

// #include <iostream>
// using namespace std;
// class student
// {
//     int roll_no;
//     string name;
//     int age;
//     public:
//         student()
//         {
//             cout<<"Enter Your Name: ";
//             getline(cin,name);
//             cout<<"Enter Your Roll Number: ";
//             cin>>roll_no;
//             cin.ignore();
//             cout<<"Enter Your Age: ";
//             cin>>age;
//             cin.ignore();
//         }
//         void display()
//         {
//             cout<<name<<endl;
//             cout<<roll_no<<endl;
//             cout<<age<<endl<<endl;
//         }
// };
// int main()
// {
//     student Student1;
//     Student1.display();
//     student Student2;
//     Student2.display();
//     student Student3;
//     Student3.display();
//     student Student4;
//     Student4.display();
//     return 0;
// }

// Parameterized Constructor

// #include <iostream>
// using namespace std;
// class student
// {
//     int roll_no;
//     string name;
//     int age;
//     public:
//         student(string,int,int);
//         student(student&copy)
//         {
//             name=copy.name;
//             roll_no=copy.roll_no;
//             age=copy.age;
//         }
//         void display()
//         {
//             cout<<name<<endl;
//             cout<<roll_no<<endl;
//             cout<<age<<endl<<endl;
//         }
// };
// student::student(string Name,int Roll,int Age)
// {
//     name=Name;
//     roll_no=Roll;
//     age=Age;
// }
// int main()
// {
//     student Student1("Anjali Raja",5,20);
//     Student1.display();
//     student Student2("Vaibhav Raikwar",48,19);
//     Student2.display();
//     student Student3(Student1);
//     Student3.display();
//     student Student4(Student2);
//     Student4.display();
//     return 0;
// }

// Copy Constructor

// #include <iostream>
// using namespace std;
// class Construct
// {
//     float area;
//     public:
//     Construct()
//     {
//         area=0;
//     }
//     Construct(int a,int b)
//     {
//         area=a*b;
//     }
//     void display()
//     {
//         cout<<area<<endl;
//     }
// };
// int main()
// {
//     Construct obj1;
//     obj1.display();
//     Construct obj2(5,5);
//     obj2.display();
//     return 0;
// }