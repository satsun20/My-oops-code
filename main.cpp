// #include <iostream>
// #include <string>
// using namespace std;
// int add(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }
// int main()
// {
//     cout << "hello world" << endl << " Next line" << endl;
//     cout << "I am Nikita";
//        int a, b, c;
//        short sa = 9;
//        cout<<sa;
//     //   camelCaseNotation;
//     int marksInMaths = 98;
//     cout << "My marks in mathematics is "<< marksInMaths;
//     short a;
//     int b;
//     long c;
//     long long d;
//     float score = 98.78;
//     double score2 = 98.788;
//     long double score3 = 98.7888;
//     cout<<"My marks in pps is "<< score;

//     int a ,b;
//     cout<<"Enter the value of a"<<endl;
//     cin>>a;
//      cout<<"Enter the value of b"<<endl;
//     cin>>b;
//     cout<<a<<endl<<b<<endl;

//     cout<<"The sum is "<< a+b<<endl;
//     cout<<"The difference is "<< a-b<<endl;
//     cout<<"The multiplication is "<< a*b<<endl;
//     cout<<"The division is "<< (float)a/b<<endl;

//     // ** if else;
//     int age;
//     cout << "Enter your age" << endl;
//     cin >> age;
//     cout << "Your age is " << age << endl;
//     if (age > 200)
//     {
//         cout << "Invalid age" << endl;
//     }
//     else if (age >= 18)
//     {
//         cout << "You can vote" << endl;
//     }

//     else
//     {
//         cout << "You can not vote" << endl;
//     }

//     switch (age)
//     {
//     case 12:
//         cout << "Your age is 12" << endl;
//         break;
//     case 23:
//         cout << "Your age is 23" << endl;

//     default:
//         cout << "Invalid age" << endl;
//         break;
//     }
//     // *** loops***
//     int index = 0;

//     while(index<34){
//         cout<<"We are at index number "<<index<<endl;
//         index++;
//     }
//     do{
//         cout<<"We are at index number "<<index<<endl;
//         index = index +1;
//     }while(index>3456);
//     for (int i = 0; i < 34; i++)
//     {
//         cout << "We are at index number " << index << endl;
//         index++;
//     }

//     // ***function**

//     int a = 3, b = 8, p;

//     cout << "The sum of a and b is " << add(a, b);

//         int arr[34] = {1, 2, 3};
//         // cout<< arr[0]<<endl<< arr[2];
//         int marks[6];
//         for (int i = 0; i < 6; i++)
//         {
//             cout << "Enter the marks of " << i << "th student" << endl;
//             cin >> marks[i];
//         }
//         for (int i = 0; i < 6; i++)
//         {
//             cout << "The marks of" << i << "th student is " << marks[i] << endl;
//         }
//         int arr2d[2][3] = {
//         {1,2,3},
//         {2,3,4}
//     };

//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout<<"The value at "<< i <<","<< j <<" is"<<arr2d[i][j]<<endl;
//         }
//     }

//     // string name = "Nikita";
//     // cout<<"The name is "<<name<<endl;
//     // cout<<"The length of name is "<<name.length()<<endl;
//     // cout<<"The name is "<<name.substr(0,3)<<endl;
//     // cout<<"The name is "<< name.substr(2,3)<<endl;

//     int a=23;
//     int *ptra;
//     ptra= &a;
//     cout<<"The value of a is "<<*ptra<<endl;
//     cout<<"The value of a is "<<a<< endl;
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<ptra<<endl;

//     //  ***OBJECT ORIENTED

//         return 0;
//     }

// #include <iostream>
//     using namespace std;

//     /*C++ Function to print leaders in an array */
//     void printLeaders(int arr[], int size)
//     {

//         for (int i = 0; i < size; i++)
//         {
//             int j;
//             for (j = i + 1; j < size; j++)
//             {
//                 if (arr[i] <= arr[j])
//                     break;
//             }
//             if (j == size) // the loop didn't break
//                 cout << arr[i] << " ";
//         }
//     }

//     /* Driver program to test above function */
//     int main()
//     {
//         int arr[] = {16, 17, 4, 3, 5, 2};
//         int n = sizeof(arr) / sizeof(arr[0]);
//         printLeaders(arr, n);
//         return 0;
//     }
