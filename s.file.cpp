//tut60

// #include<iostream>
// #include<fstream>
// using namespace std;
 
//  /*
//  The useful classes for working with files in c++ are:
//  1.fstreambase
//  2.ifstream -->derived from fstreambase
//  3.ofstream -->derived from fstreambase
//  */

// //In order to work with these files in c++, you will have to open it. Primarily there are 2
// // ways to open a file
// //1.using the constructor
// //2.using the member function open() of the class


// int main(){
//     string st = "Nikita";
//     string st2;
// //opening files using constructor
// //  ofstream out("sample.txt"); //write operation
// //  out<<st;

//  //opening files using constructor and reading it
//  ifstream in("sample2.txt"); //read operation
// //  in>>st2;
// getline(in,st2);
//  cout<<st2;
// return 0;
// }

//tut61

// #include<iostream>
// #include<fstream>
// using namespace std;
 
// int main(){
    //connecting our file with nout stream
//  ofstream nout("sample.txt");
//  string name;

//  //creating a name string and filling it with the string entered by the user
//  cout<<"Enter your name";
//  cin>>name;

//  //writing a string to the file
//  nout<<"My name is " + name;
//  nout.close();

//  ifstream nin("sample.txt");
//  string content;
//  nin>>content;
//  cout<<"The content of the file is : "<<content;
//  nin.close();

// return 0;
// }

//63

#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
 ofstream out;
 out.open("sample.txt");
 out<<"This is me : ";
 out<<"This is also me : ";
 out<<"This is for me : ";
 out<<"I am confused : ";
 out.close();

 ifstream in;
 string st,st2;
 in.open("sample.txt");
//  in>>st>>st2;
//  cout<<st<<st2;
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
 in.close();
return 0;
}