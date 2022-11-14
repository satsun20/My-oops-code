/*1.Create a class named 'Student' with a string variable 'name'
and an integer variable 'roll_no.' .Assign the rollno as 2 and that
of name as nikita by creating an object of the class student*/

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//  public:
//  string name;
//  int roll_no;
//  void printdata(void){
//     cout<<"name is "<< name <<" and roll_no is "<<roll_no<<endl;
// }
// };

// int main(){
//  Student o;
//  o.name = "nikita";
//  o.roll_no = 2;
//  o.printdata();
//     return 0;
// } 

/*2.Assign and print the roll no. ,phone number and address of two
students having names "Sam" and 'JOHN' respectively by creating two 
objects of the class "Student"*/

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     int roll_no;
//     int phone_no;
//     string address;
//     public:
//     void setdata(int a , int b , string s){
//         roll_no = a;
//         phone_no = b;
//         address = s;
//     }
//     void printdata(void){
//         cout<<roll_no<<endl<<phone_no<<endl<<address<<endl;
//     }
// };

// int main(){
//  Student sam, john;
//  sam.setdata(2,456,"pawal");
//  sam.printdata();
//  john.setdata(1,3456,"faridabad");
//  john.printdata();
//     return 0;
// } 

/*3.Write a program to print the area and perimeter of a
triangle having sides of 3,4 and 5units by creating a class
named 'Triangle' with a function to print the area and perimeter*/

// #include<bits/stdc++.h>
// using namespace std;

// class Triangle{
//     public:
//     void perimeter(int a , int b, int c){
//         int p = a+b+c;
//         cout<<p<<endl;
//     }
//     void area(int a , int b, int c){
//         double s = (a*b)/2;
//         cout<<s<<endl;
//     }
// };

// int main(){
//     Triangle o;
//     o.area(3,4,5);
//     o.perimeter(3,4,5);
//     return 0;
// }

/*4.Write a program to print the area and perimeter of a 
triangle having sides of 3,4,5 units by creating a class named
'Triangle' with the constructor having the three sides as its
parameters */

// #include<bits/stdc++.h>
// using namespace std;

// class Triangle{
//          int area, per;
//          public:
//          Triangle(int , int ,int  );
// void area_per(void){
//   cout<<"area is "<<area<<endl<<" perimeter is "<<per<<endl;
// }
// };

// Triangle :: Triangle(int a ,int b , int c){
//     area = (a*b)/2;
//     per = a+b+c;
// }

// int main(){
//  Triangle a(3,4,5);
// a.area_per();
//     return 0;
// }

/*5.Write a program to print the area of two rectangles having sides (4,5) and
(5,8) respectively by creating a class named 'Rectangle' with a function named
'Area' which returns the area . Length and breadth are passed as arguments to its constructor*/

// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
//     int ar,a,b;
//     public:
//     Rectangle(int , int );
//     void area(void){
//         ar = a*b;
//         cout<<"area is "<< ar;
//     }
// };

// Rectangle :: Rectangle(int l , int h){
//     a = l;
//     b = h;
// }

// int main(){
//  Rectangle o1(4,5) , o2(5,8);
//  o1.area();
//  o2.area();
//     return 0;
// }


/*6.Write a program to print the area of rectangle by class named 'Area' 
having two functions .First function is getdim and takes the length and 
breadth of rectangle as parametes and the second function named as getarea
return the area of the rectangle . length and breadth are entered through 
keyboard*/

// #include<bits/stdc++.h>
// using namespace std;

// class Area{
//     int length , breadth;
//     public:
//     void getdim(int l , int b){
//      length = l;
//      breadth = b;
//     }
//     int getarea(){
//        return (length*breadth);
//     }
// };

// int main(){
//  int l,b;
//  cin>>l>>b;
//   Area a;
//   a.getdim(l,b);
//  cout<< a.getarea()<<endl;
//     return 0;
// }

/*7.Write a program to print the area of a rectangle by creating a class named 
'Area' taking the values of its length and breadth as parameters of its constructor
 and having a function named 'returnArea' which returns the area of the rectangle.
 length and breadth are entered by keyboard*/

 
// #include<bits/stdc++.h>
// using namespace std;

// class Area{
//     int length , breadth ;
//     public:
//     Area(int , int );
//     int returnArea(){
//         return (length*breadth);
//     }
// };

// Area :: Area(int a , int b){
//     length = a;
//     breadth = b;
// }

// int main(){
//  int l, b;
//  cin>>l>>b;
//  Area a(l,b);
//  cout<<a.returnArea()<<endl;
//     return 0;
// }


/*8.Print the average of three numbers entered by the user by creating a class 
named 'Average' having a function to calculate and print the average without creating any 
object of the Average class*/
  
// DOUBT**********

// #include<bits/stdc++.h>
// using namespace std;

// class Average{
//     int av,z,y,x;
//  public:
//  void setdata(int a, int b, int c){
//      x=a;
//      y=b;
//      z=c;
//  }
//  void fuc(void){
//      av = 
//  }
// };

// int main(){
//  int a,b,c;
//  cin>>a>>b>>c;

//     return 0;
// }

/*9.Print the sum , difference and product of two complex numbers by creating the class
named 'Complex' with separate functions for each operations whose real and imaginaray parts 
are entered by the user*/

// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//  int a,b;
//  public:
//  Complex(int , int);
//  int get_real(){
//      return a;
//  }
//   int get_imag(){
//      return b;
//  }
//  void add(Complex c1){
//         cout<<c1.get_real()+a<<" +i"<<c1.get_imag()+b<<endl;
//  }
//   void diff(Complex c1){
//         cout<<c1.get_real()-a<<" +i"<<c1.get_imag()-b<<endl;
//  }
//   void prod(Complex c1){
//         cout<<c1.get_real()*a<<" +i"<<c1.get_imag()*b<<endl;
//  }
// };

// Complex :: Complex(int r, int i){
//     a=r;
//     b=i;
// }

// int main(){
// int r1,i1,r2,i2;
// cin>>r1>>i1>>r2>>i2;
// Complex c1(r1,i1),c2(r2,i2);
// c1.add(c2);
// c1.diff(c2);
// c1.prod(c2);
//     return 0;
// }


/*10.WAP to print the volume of a box by creating a class named 'volume' with an initialization
list to intitialize its length , breadth , height (just to make you familiar with initailization list)
*/

// will do later after learning __cpp_initializer_list

/*11.practise questions in cpp classes codedope*/


// #include<bits/stdc++.h>
// using namespace std;

// class Employee{
//  string name;
//  int year;
//  string address;
//  public:

// };

// int main(){

//     return 0;
// }

/*12. Add two distances in inch-feet by creating a class named 'adddistance'*/

#include<bits/stdc++.h>
using namespace std;

class AddDistance{
  
};


int main(){

    return 0;
}