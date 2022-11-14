/*function overloading*/
#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
  cout<<"sum of a and b is ";
  return a+b;
}

int sum(int a, int b,int c){
  cout<<"sum of a,b and c is ";
  return a+b+c;
}
// calculating the volume of a circle
int volume(double r, int h){
  return (3.14*r*r*h);
}
// of cube
int volume(int a){
  return (a*a*a);
}
// of rectangular box
int volume(int l, int b , int h){
  return (l*b*h);
}

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<sum(a,b)<<endl;
  cout<<sum(a,b,c)<<endl;
  cout<<"volume of cylinder is"<<volume(3,6)<<endl;
  cout<<"volume of cube is"<<volume(3)<<endl;
  cout<<"volume of reactangle is"<<volume(3,6,5)<<endl;
  return 0;
}

/*structures,unions,enums*/

#include<iostream>
using namespace std;

typedef struct employee{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

union money{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m = breakfast;
    cout<<m<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
     ep nikita;
   union money m1; // use one at a time;
   m1.rice = 34;
   m1.car = 'a';
   cout<<m1.car<<endl;
   struct employee riya;
   struct employee ankur;
   nikita.eId=1;
   nikita.favChar='n';
   nikita.salary=10000000;
   cout<<nikita.eId<<endl;
   cout<<nikita.favChar<<endl;
   cout<<nikita.salary<<endl;
    return 0;
}

/*classes , public and private access modifiers*/

// #include<iostream>
// using namespace std;

// class Employee{
//   private:
//   int a,b,c;
//   public:
//   int d,e;
//   void setData(int a1, int b1, int c1);
//   void getData(){
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<c<<endl;
//     cout<<"The value of d is "<<d<<endl;
//     cout<<"The value of e is "<<e<<endl;
//   }
// };

// void Employee :: setData(int a1, int b1, int c1){
//      a=a1;
//      b=b1;
//      c=c1;
// }

// int main(){
//      Employee nikita;
//      nikita.d=3;
//      nikita.e=4;
//      nikita.setData(1,2,3);
//      nikita.getData();
//     return 0;
// }

/*Recap*/
//oops - classes and objects

// c++-->initialy called--> c with classes by stroustroup
// class-->extension of structures(in c)
// structures had limitations
//     -members are public
//     -no methods
// classes -->structures + mores
// classes -->can have methods and properties
// classes -->can make few members as private and few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration
// like this:
/* class employee{
    // class declaration
}nikita,riya,ankur*/
// nikita.salary = 8 makes no sense if salary is private

/*nesting of member functions*/
// #include<iostream>
// #include<string>
// using namespace std;

// class binary{
//     string s;
//     public:
//     void read(void);
//     void chk_bin(void);
//     void ones(void);
//     void display(void);
// };

// void binary :: read(void){
//     cout<<"Enter a binary number";
//     cin>>s;
// }

// void binary :: chk_bin(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"Incorrect binary format"<<endl;
//             exit(0);
//         }
//     }
// }

// void binary :: ones(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i)=='0'){
//             s.at(i) = '1';
//         }
//         else if(s.at(i)=='1'){
//           s.at(i)='0';
//         }
//     }
// }

// void binary :: display(void){
//     cout<<"Displaying your binary number"<<endl;
//     for(int i=0; i<s.length(); i++){
//      cout<<s[i]; // in place of s[i],can use s.at(i)
//     }
//     cout<<endl;
// }
// int main(){
//    binary b;
//    b.read();
//    b.chk_bin();
//    b.display();
//    b.ones();
//    b.display();
//     return 0;
// }

/*Memory allocation and using arrays in cpp*/
// #include<iostream>
// using namespace std;

// class Shop{
//  int itemId[100];
//  int itemPrice[100];
//  int counter;
//  public:
//  void initCounter(void){counter=0;}
//  void setPrice(void);
//  void displayPrice(void);
// };

// void Shop :: setPrice(void){
//     cout<<"Enter id of your item"<<endl;
//     cin>>itemId[counter];
//     cout<<"Enter Price of your item"<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void Shop :: displayPrice(void){
//     for(int i=0; i<counter; i++){
//         cout<<"The price of item with id "<<itemId[i]<<"is"<<itemPrice[i];
//     }
// }

// int main(){
//       Shop dukan;
//       dukan.setPrice();
//       dukan.setPrice();
//       dukan.setPrice();
//       dukan.setPrice();
//       dukan.displayPrice();
//     return 0;
// }

/*Static data members and methods in cpp oops*/

// #include <iostream>
// using namespace std;

// class employee
// {
//     int id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is " << id << endl;

//     }

//     static void getCount(void)
//     { //cout<<id;--> throws an error , can access only static variable
//         cout << "The value of count is " << count << endl;
//     }
// };

// // //count is the static data member of class employee
//  int employee:: count = 1000; // default value is 0;

// int main(){
//     employee nikita,riya,ankur;
//     // nikita.id=1;
//     // nikita.count=3; -->can't do as id and count are private
//     nikita.setData();
//     nikita.getData();
//     employee :: getCount();//static members don't need an object these are of class

//     riya.setData();
//     riya.getData();
//     employee :: getCount();

//      ankur.setData();
//      ankur.getData();
//      employee :: getCount();

//     return 0;
// }      

/*array of objects and passing objects as function argument in cpp*/

// #include<iostream>
// using namespace std;

// class Employee{
//     int id;
//     int salary;
//     public:
//     void setData(void){
//         salary=999;
//         cout<<"Enter the value of id"<<endl;
//         cin>>id;
//     }
//     void getData(void){
//          cout<<"The id of the employee is "<<id<<endl;
//     }
// };

// int main(){
//     // Employee nikita;
//     // nikita.setData();
//     // nikita.getData();
//       Employee fb[4];
//     for(int i=0; i<4; i++){
//        fb[0].setData();
//        fb[0].getData();
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }

//     void setDataBySum(Complex o1, Complex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }

//     void printNumber()
//     {
//         cout << "Your complex number is " << a <<"+ i"<< b << endl;
//     }
// };

// int main()
// {
//     Complex c1, c2, c3,c4;
//     c1.setData(1, 2);
//     c1.printNumber();
//     c2.setData(3, 4);
//     c2.printNumber();
//     c3.setData(5, 6);
//     c3.printNumber();
//     c4.setDataBySum(c1,c2);
//     c4.printNumber();

//     return 0;
// }     

/*Friend function in cpp*/

// #include<iostream>
// using namespace std;

// class Complex{
//     int a;
//     int b;
//     public:
//     void setData(int n1, int n2){
//         a = n1;
//         b = n2;
//     }
//     //Below line means that non member sumcomplex function is allowed to do anything with my private parts (data)
//     friend Complex sumComplex(Complex o1, Complex o2);
//     void printData(){
//         cout<<"Your number is "<<a<<" + i"<<b<<endl;
//     }
// };

// Complex sumComplex(Complex o1, Complex o2){
//        Complex o3;
//        o3.setData((o1.a + o2.a),(o1.b + o2.b));
//        return o3;
// }

// int main(){
//     Complex c1,c2,sum;
//     c1.setData(2,3);
//     c1.printData();

//     c2.setData(4,5);
//     c2.printData();

//     sum = sumComplex(c1,c2);
//     sum.printData();
//     return 0;
// }

/*properties of friend functions
1.Not in the scope of class
2.Since it is not in the scope of class , it can not be called
  from the object of that class. c1.sumcomplex()-->invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments 
5. can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name
to access any member.
*/

/*Friend classes and member friend in cpp*/

// #include<iostream>
// using namespace std;
// //Forward declaration
// class Complex;

// class calculator{
//   public:
//   int add(int a, int b){
//     return (a+b);
//   }
//   int sumRealComplex(Complex, Complex);
//   int sumCompComplex(Complex, Complex);
// };

// class Complex{
//      int a;
//      int b;
//      // Individually declaring functions as friends
//     //  friend int calculator :: sumRealComplex(complex,complex);
//     //  friend int calculator :: sumCompComplex(complex, complex);
//      //ALITER : Declaring the entire claculator class as friend;
//      friend class calculator;
//      public:
//      void setData(int n1, int n2){
//        a = n1;
//        b = n2;
//      }
//      void printData(void){
//        cout<<a<<"+"<<b<<"i"<<endl;;
//      }
// };

// int calculator :: sumRealComplex(Complex o1, Complex o2){
//   return (o1.a + o2.a);
// }
// int calculator :: sumCompComplex(Complex o1, Complex o2){
//   return (o1.b + o2.b);
// }
// int main(){
//         Complex o1,o2;
//         o1.setData(1,4);
//         o2.setData(5,7);
//        calculator calc;
//       int res = calc.sumRealComplex(o1,o2);        
//       cout<<"sum of real part of o1 and o2 is "<<res<<endl;
//        int resc = calc.sumCompComplex(o1,o2);        
//       cout<<"sum of complex part of o1 and o2 is "<<resc<<endl;
//     return 0;
// }

/*inline functions , default and constant arguments in c++*/
// don't use inline functions in recursion and static variables
//i.e. use inline funtions in simple programs
// #include<iostream>
// using namespace std;

//  inline int product(int a, int b){
//      return a*b;
//  }

// int product(int a, int b){
//     static int c=0; // This executes only once
//     c=c+1;// next time this function is run,the value of c will be retained
//     return a*b+c;
//  }

//  int main(){
//  int a, b;
//  cout<<"Enter the value of a and b"<<endl;
//  cin>>a>>b;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;    
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//  cout<<"The product of a and b is "<<product(a,b)<<endl;      
//     return 0;
// }

// #include<iostream>
// using namespace std;

// float moneyreceived(int currentmoney,float factor = 1.04){
//     return currentmoney*factor;
// }
// // constant arguments

// int strlen(const char *p){

// };

// int main(){
//        int money = 100000;
//        cout<<"if you have "<<money<<"rs in your bank account,you will receive "<<moneyreceived(money)<<"rs in 1 year"<<endl;
//        cout<<"if you have "<<money<<"rs in your bank account,you will receive "<<moneyreceived(money,1.1)<<"rs in 1 year"<<endl;
//      return 0;
// }

/*more on friend functions*/

// #include<bits/stdc++.h>
// using namespace std;

// class Y;

// class X{
//   int data;
//   public:
//   void setdata(int value){
//     data = value;
//   }
//   friend void add(X,Y);
// };

// class Y{
//   int num;
//   public:
//   void setdata(int value){
//     num = value;
//   }
//   friend void add(X,Y);
// };

// void add(X o1, Y o2){
//   cout<<"summing data of x and y objects gives me"<<o1.data + o2.num;
// }

// int main(){
//             X a;
//             a.setdata(3);
//             Y b;
//             b.setdata(5);
//             add(a,b);                                 
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Y;

// class X{
//   int data;
//   public:
//   void setdata(int val){
//     data = val;
//   }
//   void printdata(void){
//     cout<<"value of data is "<<data<<endl;
//   }
//   friend void swap(X & ,Y & );
// };

// class Y{
//   int num;
//   public:
//   void setdata(int val){
//     num = val;
//   }
//   void printdata(void){
//     cout<<"value of num is "<<num<<endl;
//   }
//   friend void swap(X & ,Y & );
// };

// void swap(X &a, Y &b){
//     int temp;
//     temp = a.data;
//     a.data = b.num;
//     b.num = temp;
// }

// int main(){
//         X a;
//         a.setdata(3);
//         a.printdata();
//         Y b;
//         b.setdata(5);
//         b.printdata();

//       swap(a,b);
//       a.printdata();
//       b.printdata();                                
//     return 0;
// }


 /*constructors*/

// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//   int a,b;
//   public:
//   //creating a constructor  
//   // consrtuctor is a special member function with the same name as of 
//   // the class.
//   // It is used to initialize the object of its class
//   // It is atomatically invoked whenever an object is created

//   Complex(void); // constructor declaration
//   void printnumber(){
//     cout<<a<<"+"<<b<<"i"<<endl;
//   }
// };

// Complex :: Complex(void){
//   a=10;
//   b=0;
// }

// int main(){
//        Complex c,e,f;
//        c.printnumber();
//        e.printnumber();
//        f.printnumber();
//      return 0;
// }

/*Characteristics of constructors
1.It should be declared in the public section
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments
5.We can not refer to the address
*/

/*Parameterized and Default constructions in c++*/
// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//   int a,b;
//   public:
//   Complex(int , int);
//   void printdata(void){
//   cout<<a<<"+"<<b<<"i"<<endl;
//   }
// };

// Complex :: Complex(int x, int y)//-->This is parametrized constructor as it accepts 2 parameters
// {
//   a=x;
//   b=y;
// }

// int main(){
//   //Implicit call
//   Complex c(4,5);

//   //Explicit call
//   Complex b = Complex(5,5);

//   c.printdata();
//   b.printdata();
//   return 0;
// }

/*constructor overloading in c++*/

// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//   int a,b;
//   public:
//   Complex(int x , int y){
//     a = x;
//     b = y;
//   }

//   Complex(int x){
//     a = x;
//     b=0;
//   }

//   Complex(){
//     a = 0;
//     b=0;
//   }
//   void printnumber(void){
//     cout<<a<<"+"<<b<<"i"<<endl;
//   }
// };

// int main(){
//  Complex c1(3,45);
//  c1.printnumber();

//  Complex c2(5);
//  c2.printnumber();

//  Complex c3;
//  c3.printnumber();
//   return 0;
// }

/*constructors with default arguments*/


// #include<bits/stdc++.h>
// using namespace std;

// class Simple{
//  int data1,data2,data3;
//  public:
//  Simple(int a ,int b=9,int c=8){
//    data1 = a;
//    data2 = b;
//    data3 = c;
//  }
//  void printdata(void);
// };

// void Simple :: printdata(void){
//   cout<<"The value of data is "<<data1<<" , "<<data2<<" and " <<data3<<endl;
// }

// int main(){
// // Simple s(1,3);
// Simple s(1);

// s.printdata();
//   return 0;
// }

/*Dynamic initialization of objects using constructors*/

// #include<iostream>
// using namespace std;

//   class BankDeposit{
//   int principal;
//   int years;
//   float interestRate;
//   float returnValue;
//   public:
//    BankDeposit(){} //declaration
//    BankDeposit(int p, int y, float r); //r can be a value like 0.04
//    BankDeposit(int p, int y, int r); //r can be a value like 12
//    void show();
// };

// BankDeposit :: BankDeposit(int p, int y, float r){
//   principal = p;
//   years = y;
//   interestRate = r;
//   returnValue = principal;
//   for(int i =0; i<y; i++){
//     returnValue = returnValue*(1+interestRate);
//   }
// }      

// BankDeposit :: BankDeposit(int p, int y, int r){
//   principal = p;
//   years = y;
//   interestRate = r;
//   returnValue = principal;
//   for(int i =0; i<y; i++){
//     returnValue = returnValue*(1+interestRate);
//   }
// }   

// void BankDeposit :: show(){
//   cout<<endl<<"Principal amount was"<<principal<<endl
//   <<"Return value after "<<years<<" is "<<returnValue
//   <<endl;
// }

// int main(){
//     BankDeposit bd1,bd2,bd3;
//     int p,y;
//     float r;
//     int R;
     
//     //bd3.show();
//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p,y,r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p,y,R);
//     bd2.show();
//   return 0;
// }

/*Copy constructor in c++*/

/*#include<iostream>
using namespace std;

class Number{
   int a;
   public:
   Number(){
     a = 0;
   }
   Number(int num){
     a = num;
   }
   //When no copy constructor is found,compiler supplies its own copy constructor
 Number(Number &obj){
   cout<<"Copy constructor called"<<endl;
     a = obj.a;
   }
   void display(){
     cout<<"The number of the object is "<< a <<endl;
   }
};

int main(){
  Number x,y,z(45),z2;
  x.display();
  y.display();
  z.display();
 Number z1(z);//copy constructor invoked;
 z1.display();
 z2 = z;//copy condtructor not called 

 Number z3 = z; //copy constructor invoked
 z3.display();
 //z1 should exactly resemble z or x or y

  return 0;
}*/

/*destructors*/

// #include<iostream>
// using namespace std;

// //Destructor never takes an argument nor does it return any value
// int count =0;// global variable

// class num{
//  public:
//  num(){
//    count++;
//    cout<<"This is the time when constructor is called for object number "<<count<<endl;
//  }
//  ~num(){
//    cout<<"This is the time when destructor is called for the object number "<<count<<endl;
//    count--;
//  }
// };

// int main(){
//  cout<<"We are inside our main function"<<endl;
//  cout<<"Creating first object n1"<<endl;
//  num n1;
//  {
//    cout<<"Entering this block"<<endl;
//    cout<<"Creating two more objects "<<endl;
//    num n2,n3;
//    cout<<"Exiting this block"<<endl;
//  }
//  cout<<"Back to main"<<endl;
//   return 0;
// }

/*Inheritence syntex and visibility in cpp*/

// #include<iostream>
// using namespace std;

// //BASE CLASS;
// class Employee{
//     public:
//     int id;
//     float salary;
//     Employee(int inpId){
//         id = inpId;
//         salary=34.0;
//     }
//     Employee(){};
// };

// //DERIVED CLASS
// /* 
// class{{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc;
// }
// Note:
// 1.default visibility mode is private
// 2.Public visibility mode : public members of the base class becomes public members of the derived class
// 3.Private visibility mode : public members of the base class becomes private members of the derived class
// 4.private members are never inherited
// */

// //creating a programmer class derived from employee base class
// class Programmer : Employee{
//     public:
//     int languageCode;
//     Programmer(int inpId){
//         id = inpId;
//         languageCode=9;
//     }
//     void getdata(){
//         cout<<id<<endl;
//     }
// };

// int main(){
//   Employee harry(1), rohan(2);
//   cout<<harry.salary<<endl;
//   cout<<rohan.salary<<endl;
//   Programmer skillF(1);
//   cout<<skillF.languageCode<<endl;
//    skillF.getdata();
//   return 0;
// }

/*Single inheritence Deep dive */

// #include<bits/stdc++.h>
// using namespace std;

// class Base{
//       int data1; // private by default , can't be inherited
//       public:
//       int data2;
//       void setdata();
//       int getdata1();
//       int getdata2();
// };

// void Base :: setdata(void){
//     data1 = 90;
//     data2 =3;
// }

// int Base :: getdata1(){
//     return data1;
// }


// int Base :: getdata2(){
//     return data2;
// }


// class Derived : public Base{ //class is being derived publically
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void Derived :: process(){
//     data3 = data2 * getdata1();
// }


// void Derived :: display(){
//     cout<<"Value of data1 is "<<getdata1()<<endl;
//     cout<<"Value of data2 is "<<data2<<endl;
//     cout<<"Value of data3 is "<<data3<<endl;
// }

// int main(){
//   Derived der;
//   der.setdata();
//   der.process();
//   der.display();
//     return 0;
// }

// using private visibility mode

// #include<bits/stdc++.h>
// using namespace std;

// class Base{
//       int data1; // private by default , can't be inherited
//       public:
//       int data2;
//       void setdata();
//       int getdata1();
//       int getdata2();
// };

// void Base :: setdata(void){
//     data1 = 90;
//     data2 =3;
// }

// int Base :: getdata1(){
//     return data1;
// }


// int Base :: getdata2(){
//     return data2;
// }


// class Derived : private Base{ //class is being derived publically
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void Derived :: process(){
//     setdata();
//     data3 = data2 * getdata1();
// }


// void Derived :: display(){
//     cout<<"Value of data1 is "<<getdata1()<<endl;
//     cout<<"Value of data2 is "<<data2<<endl;
//     cout<<"Value of data3 is "<<data3<<endl;
// }

// int main(){
//   Derived der;
// //   der.setdata();
//   der.process();
//   der.display();
//     return 0;
// }

/*PROCTED ACCESS MODIFIER IN C++*/

// #include<bits/stdc++.h>
// using namespace std;

// class Base{
//   protected:
//     int a;
//     private:
//     int b;
// };

// /*
//                      Public Derivation       Private Derivation      Protected Derivation
// 1.Private members   Not inherited             Not inherited            Not inherited
// 2.Protected members Protected                 Private                   Protected
// 3.public members     public                   private                   protected
// */

// class Derived :protected Base{

// };

// int main(){
//     Base b;
//     Derived d;
//     cout<<d.a;
//     return 0;
// }


/*Multilevel inheritence deep dive in cpp*/

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//  protected:
//      int roll_number;
//  public:
//      void set_roll_number(int);
//      void get_roll_number(void);
// };

// void Student :: set_roll_number(int r){
//     roll_number = r;
// }

// void Student :: get_roll_number(void){
//     cout<<"The roll number is "<<roll_number<<endl;
// }

// class Exam : public Student{
//     protected:
//     float maths;
//     float physics;
//     public:
//     void set_marks(float, float);
//     void get_marks(void);
// };

// void Exam :: set_marks(float a , float b){
//     maths = a;
//     physics = b;
// }

// void Exam :: get_marks(void){
//     cout<<"The marks in maths are "<<maths<<endl;
//     cout<<"The marks in physics are "<<physics<<endl;
// }

// class Result : public Exam{
//     float percentage;
//     public:
//     void display(){
//         get_roll_number();
//         get_marks();
//         cout<<"Your percentage is "<<(maths + physics)/2<<endl;
//     }
// };

// int main(){
//    Result harry;
//    harry.set_roll_number(404);
//    harry.set_marks(99.9 , 99.0);
//    harry.display();
//     return 0;
// } 

/*Multiple deep dive in c++*/

// #include<bits/stdc++.h>
// using namespace std;

/*syntex for inheriting in multiple dive
class Derived : visibility -mode base1, visibility mode - base2
{
    class body of class "Derived"
}
*/

// class Base1{
//     protected:
//     int base1int;
//     public:
//     void set_base1int(int a){
//         base1int = a;
//     }
// };

// class Base2{
//     protected:
//     int base2int;
//     public:
//     void set_base2int(int b){
//         base2int = b;
//     }
// };

// class Base3{
//     protected:
//     int base3int;
//     public:
//     void set_base3int(int c){
//         base3int = c;
//     }
// };

// class Derived : public Base1, public Base2,public Base3{
//     public:
//     void show(){
//         cout<<"The value of Base1 is "<<base1int<<endl;
//         cout<<"The value of Base2 is "<<base2int<<endl;
//         cout<<"The value of Base3 is "<<base3int<<endl;
//         cout<<"The sum of these values is "<<base1int+ base2int+base3int<<endl;
       
//     }
// };
// /*
// The inherited derived class will look like this:
// Data members:
// base1int-->protected
// base2int-->protected
// Member functions:
// set_base1int()-->public
// set_base2int()-->public
// set_show()-->public
// */

// int main(){
//  Derived nikita;
//  nikita.set_base1int(34);
//  nikita.set_base2int(2);
//  nikita.set_base3int(5);
//  nikita.show();
//     return 0;
// }


// Exercise on cpp inheritence
/*
Create 2 classes:
1.Simplecalculator-takes input of 2 numbers using a utility function and
performs +,-,*,/ and displays the results using another function.
2.Scientificalculator - takes input of 2 numbers using a utility function and per
performs any four scientific operation of your choice and displays the results
using another function.

create another class hybridisation and inherit it using these 2 classes:
Q1.what type of inheritence are you using ?-->multiple inheritence
Q2.Which mode of inheritence are you using ?-->
Q3.Create an object of hybridcalculator and display results of simple and scientific 
calculator.
Q4.How is code reusebility implemented ?
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Simplecalculator{
//     int a;
//     int b;
//     public: 
//     void getcal(){
//       cout<<"Enter the value of a"<<endl;
//       cin>>a;
//       cout<<"Enter the value of b"<<endl;
//       cin>>b;
//     }
//     void performoperations(){
//       cout<<"The value of a+b is "<< a+b<<endl;
//       cout<<"The value of a-b is "<< a-b<<endl;
//       cout<<"The value of a/b is "<< a/b<<endl;
//       cout<<"The value of a*b is "<< a*b<<endl;
//     }
// };

// class Scientificalculator{
//           int a;
//           int b;
// public:

// void getdata(){
//     cout<<"Enter the value of a "<<endl;
//     cin>>a;
//     cout<<"Enter the value of b "<<endl;
//     cin>>b;
// }

// void performoperationsci(){
//   cout<<"The value of cos(a) is : "<<cos(a)<<endl;
//   cout<<"The value of sin(a) is : "<<sin(a)<<endl;
//   cout<<"The value of exp(a) is : "<<exp(a)<<endl;
//   cout<<"The value of tan(a) is : "<<tan(a)<<endl;
// }
// };

// class Hybridcalcultor : public Simplecalculator, public Scientificalculator{
 
// };


// int main(){
//     // Simplecalculator calc;
//     // Scientificalculator calc;
//     // calc.getcal();
//     // calc.performoperations();
//     Hybridcalcultor cal;
//     cal.getdata();
//     cal.performoperationsci();
//           cal.getcal();
//           cal.performoperations();
// //   return 0;
// }

/*Ambiguity resoution in inheritence in cpp*/

// #include<iostream>
// using namespace std;

// class Base1{
//   public:
//   void greed(void){
//     cout<<"This is me"<<endl;
//   }
// };

// class Base2{
//   public:
//   void greed(void){
//     cout<<"ye mai hu"<<endl;
//   }
// };

// class Derived : public Base1, public Base2{
//   int a;
//   public:
//   void greed(){
//     // Base1::greed();
//     Base2::greed();
//   }
// };

// class B{
//   public:
//   void say(){
//     cout<<"hello world"<<endl;
//   }
// };

// class D : public B{
// int a;
// // D's new say() method will override base class's say() method 
// public:
// // void say(){
// //     cout<<"I am Nikita"<<endl;
// // }
// };

// int main(){
//   // ambiguity1
//     // Base1 base1obj;
//     // base1obj.greed();
//     // Base2 base2obj;
//     // base2obj.greed();
//     // Derived derived;
//     // derived.greed();
//  // ambigutiy2
//    B b;
//    b.say();
//    D d;
//    d.say();
//   return 0;
// }

/*virtual base class in cpp*/

// #include<iostream>
// using namespace std;

//  /*Student-->test
//  student-->sports
//  sports-->result
//  test-->result*/

// class Student{
//   protected:
//   int roll_num;
//   public:
//   void set_roll(int a){
//     roll_num=a;
//   }
//   void print_roll(void){
//     cout<<"your roll number is "<<roll_num<<endl;
//   }
// };

// class Test : virtual public Student{
// protected:
// float maths, physics;
// public:
// void set_marks(float a, float b){
//   maths = a;
//   physics = b;
// }

// void print_marks(void){
//   cout<<"your marks are"<<endl<<"Maths:"<<maths<<endl<<"physics:"<<physics<<endl;
// }
// };

// class Sports: virtual public Student{
//   protected:
//   float score;
//   public:
//   void set_score(float sc){
//     score = sc;
//   }
//   void print_score(void){
//     cout<<"your score is "<<score<<endl;
//   }
// };

// class Result: public Sports, public Test{
// protected:
// float total;
// public:
// void display(void){
//   total = maths+physics+score;
//   print_roll();
//   print_marks();
//   print_score();
//   cout<<"your total score is:"<<total<<endl;
// }
// };

// int main(){
//   Result Nikita;
//   Nikita.set_roll(82);
//   Nikita.set_marks(95.0 , 95.0);
//   Nikita.set_score(9);
//   Nikita.display();
//   return 0;
// }

/*Constructors in derived class in cpp*/

// #include<iostream>
// using namespace std;

/*
Case1:
class B: public A{
  // order of execution of constructor -> first A() then B()
};

case2:
class A : public B, public C{
  // order of execution of constructor-> B() then C() and A()
};

case3:
class A: public B, virtual public C{
  // order of execution of constructor -> C() then B() and A()
};

*/

// class Base1{
//  int data1;
//  public:
//   Base1(int i){
//     data1 = i;
//     cout<<"Base1 constructor is called "<<endl;
//   }
//   void print_data1(void){
//     cout<<"data1 is "<<data1<<endl;
//   }
// };

// class Base2{
//  int data2;
//  public:
//   Base2(int i){
//     data2 = i;
//     cout<<"Base2 constructor is called "<<endl;
//   }
//   void print_data2(void){
//     cout<<"data2 is "<<data2<<endl;
//   }
// };

// class Derived: public Base2, public Base1{
//   int derived1, derived2;
//   public:
//    Derived(int a, int b, int c , int d) : Base1(a), Base2(b){
//      derived1=c;
//      derived2=d;
//      cout<<"derived constructor is called"<<endl;
//    }
//    void print_dataderived(void){
//     cout<<"derived1 and derived2 are: "<<derived1 << derived2<<endl;
//   }
// };

// int main(){
//   Derived Nikita(1,2,3,4);
//   Nikita.print_data1();
//   return 0;
// }

/*Initialization list in construction in cpp*/

// #include<iostream>
// using namespace std;

/*
syntax for intitialization list:
constructor(argument-list) : initilization-section
{
       assignment + other code;
}

class Test{
  int a;
  int b;
  public:
  Test(int i, int j) : a(i), b(j){constructor-body}
};
*/

// class Test{
//   int a;
//   int b;
//   public:
//   //  Test(int i, int j): a(i), b(j)
//   //  Test(int i, int j): a(i), b(i+j)
//   //  Test(int i, int j): a(i), b(2*j)
//   //  Test(int i, int j): a(i), b(a+j)
//   //  Test(int i, int j):b(j),a(i+b)   // error will come because a is declared first so it must be initializedt first
//   Test(int i, int j): a(i){
//     b = j;

//     cout<<"constructor-body"<<endl;
//     cout<<"Value of a is "<<a<<endl;
//     cout<<"value of b is "<<b<<endl;
//     }
// };

// int main(){
//   Test t(4,5);
//   return 0;
// }

/*
new and delete keywords in cpp
*/

// #include<iostream>
// using namespace std;

//   int main(){
//   //Basic example
//   // int a = 4; 
//   // int *ptr = &a;
//   // or
//   int *ptr = new int(4);
//   cout<<"The value of a is "<<(*ptr)<<endl;
//   //New keyword
//   // int *p = new int(40);
//   float *p = new float(45.67);
//   cout<<"The value at address p is "<<*(p)<<endl;

//   int *arr = new int[3];
//   arr[0] = 10;
//   arr[1] = 20;   // can also write as *(arr+1) = 20
//   arr[2] = 30;
//   // delete[] arr; // delete operator 
//   cout<<"The value of arr[0] is "<< arr[0]<<endl;
//   cout<<"The value of arr[1] is "<< arr[1]<<endl;
//   cout<<"The value of arr[2] is "<< arr[2]<<endl;

//   // delete operator 
 
//   return 0;
// }

/*pointers to objects and arrow operator in cpp */

// #include<iostream>
// using namespace std;

// class Complex{
//   int real, imaginary ;
//   public:
//   void getData(){
//     cout<<"The real part is "<<real<<endl;
//     cout<<"The imaginary part is "<<imaginary<<endl;
//   }
//   void setData(int a, int b){
//     real = a;
//     imaginary = b;
//   }
// };

// int main(){
//  Complex c1;
//  c1.setData(1,4);
//  c1.getData();
// // Complex *ptr = &c1;
// Complex *ptr = new Complex; 
// // (*ptr).setData(1,4); is exactly same as 
// ptr->setData(1,4);

// // (*ptr).getData(); is exactly good as
// ptr->getData();

// // Array of objects
// Complex *ptr1 = new Complex[4];
// ptr1->setData(45,466);
// ptr1->getData();
//   return 0;
// }

/*
array of objects using pointers in c++
*/


// #include<iostream>
// using namespace std;

// class Shopitem{
//   int id;
//   float price;
//   public:
//   void setData(int a, float b){
//     id = a;
//     price = b;
//   }
//   void getData(){
//     cout<<"Code of this item is "<<id<<endl;
//     cout<<"Price of this item is "<< price << endl;
//   }
// };

// int main(){
//  int size = 2;
// //  idea
// // int *ptr = &size;
// // int *ptr = new int[34];

// // 1.general store item ;
// // 2.veggies item ;
// // 3.hardware item ;

//  Shopitem *ptr = new Shopitem[size];
//  Shopitem *ptrTemp = ptr;
//  int p;
//  float q;
//  for(int i=0; i<size; i++){
//    cout<<"Enter id and price of item "<<i+1<<endl;
//    cin>>p>>q;
//    ptr->setData(p,q);
//    ptr++;
//  }

//  for(int i=0; i<size; i++){
//  cout<<"Item number:"<<i+1<<endl;
//  ptrTemp->getData();
//  ptrTemp++;
//  }
//   return 0;
// }

/*
This pointer in cpp
*/

// #include<iostream>
// using namespace std;

// class A{
//   int a;
//   public:
//   A & setData(int a){
//     this->a=a;
//     return *this;
//   }
//   void getData(){
//     cout<<"The value of a is "<<a<<endl;
//   }
// };

// int main(){
//   //this is a keyword which is a pointer which points to the objects which envokes to the member function  
//  A a;
//  a.setData(4);
//  a.getData();
//   return 0;
// }

// polymorphism in cpp

// #include<iostream>
// using namespace std;
 
// int main(){
//  // polymorphism
//  //one name and multiple forms
//  // e.g. Function overloading, operator overloading
//  // e.g. virtual functions

//  /*
//  polymorphism in cpp can be two types
//  1. compile time polymorphism
//     compile time polymorphism in cpp is achieved using :
//  1.1 - Function overloading
//  1.2 - Operator overloading

//  2. run time polymorphism
//     run time polymorphism in cpp is achieved using : 
//  2.1 - Virtual Functions
//  */
// return 0;
// }


// pointers to derived class in c++

// #include<iostream>
// using namespace std;
 
//  class BaseClass{
//       public:
//       int var_base;
//       void display(){
//         cout<<"Displaying base class variable var_base "<<var_base<<endl;
//       }
//  };

// class DerivedClass : public BaseClass{
//   public:
//   int var_der;
//   void display(){
//     cout<<"Displaying base class variable var_base "<<var_base<<endl;
//     cout<<"Displaying derived class variable var_der "<<var_der<<endl;
//   }
// };


// int main(){
//  BaseClass *base_class_ptr;
//  BaseClass obj_base;
//  DerivedClass obj_der;
//  base_class_ptr = &obj_der;  // pointing base class pointer to derived class
//  base_class_ptr->var_base=34;
// //  base_class_ptr->var_der=243; will throw an error
//  base_class_ptr->display();

// base_class_ptr->var_base = 3400;
// base_class_ptr->display();

// DerivedClass *der_class_ptr;
// der_class_ptr = &obj_der;
// der_class_ptr->var_base = 9448;
// der_class_ptr->var_der=56;
// der_class_ptr->display();
// return 0;
// }

//virtual functions in cpp

// #include<iostream>
// using namespace std;
 
// class BaseClass{
//   public:
//   int var_base=90;
//   virtual void display(){
//     cout<<"1Displaying base class variable var_base "<<var_base<<endl;
//   }
// };

// class DerivedClass:public BaseClass{
//   public:
//   int var_derived=1;
//   void display(){
//     cout<<"2Displaying base class variable var_derived "<<var_base<<endl;
//     cout<<"2Displying derived class variable var_derived "<<var_derived<<endl;
//   }
// };

// int main(){
//  BaseClass *base_class_ptr;
//  BaseClass obj_base;
//  DerivedClass obj_derived;
//  base_class_ptr = &obj_derived;
//  base_class_ptr->display();
// return 0;
// }

//virtual functions 

// #include<iostream>
// #include<cstring>
// using namespace std;
 
// class CWH{
//   protected:
//    string title;
//    float rating;
//    public:
//     CWH(string s , float r){
//           title = s;
//           rating = r;
//     }
//     virtual void display(){}
// };

// class CWHVideo:public CWH{
//        float videoLength;
//        public:
//        CWHVideo(string s, float r, float vl):CWH(s,r){
//          videoLength=vl;
//        }
//        void display(){
//          cout<<"This is an amazing video tutorial with title "<<title<<endl;
//          cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
//          cout<<"Length of this video is : "<<videoLength<<endl;
//        }
// };


// class CWHText:public CWH{
//        int words;
//        public:
//        CWHText(string s, float r, int wc):CWH(s,r){
//          words=wc;
//        }
//        void display(){
//          cout<<"This is an amazing text tutorial with title "<<title<<endl;
//          cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
//          cout<<"No of words in this text tutorial is "<<words<<endl;
//        }
// };

// int main(){
//  string title;
//  float rating , vlen;
//  int words;

//  // for code with harry video
// title = "Django tutorial";
// vlen = 4.56;
// rating = 4.89;
// CWHVideo djVideo(title, rating, vlen);
// // djVideo.display();

// //for code with harry text
// title = "Django tutorial textual ";
// words = 4;
// rating = 4.19;
// CWHText djText(title, rating, words);
// // djText.display();

// CWH *tut[2];
// tut[0]=&djVideo;
// tut[1]=&djText;

// tut[0]->display();
// tut[1]->display();
// return 0;
// }

/* Rules for virtual functions
1. They cannot be static 
2. They are accessed by object pointers
3. virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the
   derived class
*/

//Abstract base class and pure virtual functions 

/*#include<iostream>
#include<cstring>
using namespace std;
 
class CWH{
  protected:
   string title;
   float rating;
   public:
    CWH(string s , float r){
          title = s;
          rating = r;
    }
    virtual void display()=0; //do-nothing function --> pure virtual function
};

class CWHVideo:public CWH{
       float videoLength;
       public:
       CWHVideo(string s, float r, float vl):CWH(s,r){
         videoLength=vl;
       }
       void display(){
         cout<<"This is an amazing video tutorial with title "<<title<<endl;
         cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
         cout<<"Length of this video is : "<<videoLength<<endl;
       }
};


class CWHText:public CWH{
       int words;
       public:
       CWHText(string s, float r, int wc):CWH(s,r){
         words=wc;
       }
       void display(){
         cout<<"This is an amazing text tutorial with title "<<title<<endl;
         cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
         cout<<"No of words in this text tutorial is "<<words<<endl;
       }
};

int main(){
 string title;
 float rating , vlen;
 int words;

 // for code with harry video
title = "Django tutorial";
vlen = 4.56;
rating = 4.89;
CWHVideo djVideo(title, rating, vlen);
// djVideo.display();

//for code with harry text
title = "Django tutorial textual ";
words = 4;
rating = 4.19;
CWHText djText(title, rating, words);
// djText.display();

CWH *tut[2];
tut[0]=&djVideo;
tut[1]=&djText;

tut[0]->display();
tut[1]->display();
return 0;
}*/

/* Rules for virtual functions
1. They cannot be static 
2. They are accessed by object pointers
3. virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the
   derived class
*/


// operator overloading
// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//   private:
//   int real,img;
//   public:
//   Complex(){
//     real=0;
//     img=0;
//   }
//   Complex(int r, int i){
//     real=r;
//     img=i;
//   }
//   void print(){
//     cout<<real<<" + "<<img<<"i"<<endl;
//   }
//   Complex operator+(Complex c){
//     Complex temp;
//     temp.real=real+c.real;
//     temp.img=img+c.img;
//     return temp;
//   }
// }; 

// int main(){
// Complex c1(4,5);
// Complex c2(3,3);
// Complex c3;
// Complex c4(1,1);
// Complex c5;
// // c3=c1+c2; //this will give error without operator overloading
// c3=c1+c2;  // c1.add(c2);
// c5 = c1+c2+c4;
// c5.print();
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
 
int main(){
printf("1/2 = %f",(float)(1/2));
return 0;
}