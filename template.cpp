// #include <iostream>
// using namespace std;

// template <class T>

// class vector
// {
// public:
//     int size;
//     T *arr;
//     vector(int a)
//     {
//         size = a;
//         arr = new T[size];
//     }
//     T dotProduct(vector &v)
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main()
// {
//     // vector v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 3;
//     // v1.arr[2] = 1;
//     // vector v2(3);
//     // v2.arr[0] = 3;
//     // v2.arr[1] = 5;
//     // v2.arr[2] = 2;
//     // int a = v1.dotProduct(v2);
//     // cout << a << endl;

//     vector <float>v1(3);
//     v1.arr[0] = 4.2;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 1.4;
//     vector <float> v2(3);
//     v2.arr[0] = 3.4;
//     v2.arr[1] = 5.3;
//     v2.arr[2] = 2.1;
//     float a = v1.dotProduct(v2);
//     cout << a << endl;
//     return 0;
// }

//c++ templates with multiple parameters

// #include<iostream>
// using namespace std;

// /*
// template <class T1, class T2>
// class nameOfClass{
//     // body
// };
// */

// template<class T1, class T2>
// class myClass{
//     public:
//     T1 data1;
//     T2 data2;
//      myClass(T1 a, T2 b){
//          data1=a;
//          data2=b;
//      }
//     void display(){
//         cout<<this->data1<<this->data2<<endl;
//     }
// };

// int main(){
//  myClass <int , char>obj(2,'7');  
//  obj.display();
// return 0;
// }

//class template with default parameters

// #include<iostream>
// using namespace std;
 
// template<class T1=int , class T2=float, class T3=char>
// class Nikita{
//     public:
//     T1 a;
//     T2 b;
//     T3 c;
//     Nikita(T1 x , T2 y, T3 z){
//         a = x;
//         b = y; 
//         c = z;
//     }
//     void display(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//     }
// };

// int main(){
//  Nikita<> nik(4,6.4,'r');
//  nik.display();
//  cout<<endl;

//  Nikita<float,char,char> n(4.5,'t','r');
//  n.display();
// return 0;
// }

//function templates and function templates with parameters

// #include<iostream>
// using namespace std;
 
// // float funcAverage(int a , int b){
// //     float avg = (a+b)/2.0;
// //     return avg;
// // }

// // float funcAverage2(int a , float b){
// //     float avg = (a+b)/2.0;
// //     return avg;
// // }

// //instead make a template

// template<class T1, class T2>

// float funcAverage(T1 a , T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// template<class T>
// void swapp(T &a , T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//  float a,b;
// //  a = funcAverage(5,2);
// //  printf("The average of these numbers is %.3f",a);
// //  b=funcAverage2(5,2.4);
// //  printf("The average of these numbers is %.3f",b);


// // a = funcAverage(5,2.4);
// // printf("The average of these numbers is %.3f",a);


// int a1 = 3, a2=56;
// cout<<a1<<" "<<a2<<endl;
// swapp(a1,a2);
// cout<<a1<<" "<<a2<<endl;
// return 0;
// }


//member function templates and overloading template functions

// #include<iostream>
// using namespace std;
 
// template<class T>
// class Nikitaj{
//     public:
//     T data;
//     Nikitaj(T A){
//         data = A;
//     }
//     void display();
// };

// template<class T>
// void Nikitaj<T>::display(){
//         cout<<"The value of data is "<< data<<endl;
// }

// void func(int a){
//     cout<<"I am first func() "<<a<<endl;
// }

// template<class T>
// void func(T a){
//     cout<<"I am templized func() "<<a<<endl;
// }

// template<class T>
// void func1(T a){
//     cout<<"I am templized func1() "<<a<<endl;
// }

// int main(){
//  Nikitaj<int> obj(345);
//  Nikitaj<char> obj('c');
//  Nikitaj<float> obj(34.5);
//  cout<<obj.data<<endl;
//  obj.display();

// func(34789); // exact match takes the highest priority
// func1('c');
// return 0;
// }