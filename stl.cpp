/*
STL = containers + algorithms + iterators

containers
1. sequence containers--linear fashion 
   e.g.=vector,list,deque
2. associative containers--direct access
   e.g.=set/multiset, map/multimap
3. derived containers--real world modelling
   e.g.=stack,queue,priority--queue


when to use which one?
**sequence containers
1.vector
random access=fast
middle insertion/deletion = slow
insertion at the end = fast

2.list
random access = slow
middle insertion = fast
del/insertion at the end = fast

**associative containers
-->all operations are fast

**derives containers
-->depends
*/

//vectors in cpp stl

#include<iostream>
#include<vector>
using namespace std;
 
template <class T> 
void display(vector<T> &v){
   cout<<"Displaying this vector"<<endl;
 for (int i = 0; i < v.size(); i++)
 {        
     cout<<v[i]<<" ";
     cout<<v.at(i)<<" ";
 }
 cout<<endl;
}

 int main(){
//ways to create a vector
 vector<int> vec1;          // zero length integer vector
//  display(vec1);
 vector<char> vec2(4);      // 4-element character vector
 vec2.push_back('c');  
//  display(vec2);
 vector<char> vec3(vec2);   // 4-element character vector from vec2
 vector<int> vec4(6,3);     // 6-element vector of 3s 
 display(vec4);

//  int element,size;
//  cout<<"Enter the size of vector"<<endl;
//  cin>>size;
//  for(int i=0; i<size; i++){
//      cout<<"Enter an element to add to this vector : ";
//      cin>>element;
//      vec1.push_back(element);
//  }
// //  vec1.pop_back();
// //  display(vec1);
//  vector<int> :: iterator iter = vec1.begin();
// //  vec1.insert(iter,5666);
// //  vec1.insert(iter+1,5666);
//  vec1.insert(iter+1,5,5666);
//  display(vec1);
return 0;
}


// list in cpp stl

/*#include<iostream>
#include<list>

using namespace std;
 
void display(list<int> &lst){
   list<int> :: iterator it;
   for(it = lst.begin(); it!=lst.end(); it++){
            cout<<*it<<" ";
   }
   cout<<endl;
}

int main(){
list<int> list1; // list of 0 length
// list<int> list2(7); // empty list of 7 length
list1.push_back(2);
list1.push_back(1);
list1.push_back(32);
list1.push_back(55);
list1.push_back(3);
list1.push_back(54);

// list<int> :: iterator iter;
// iter = list1.begin();
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
// iter++;
// cout<<*iter<<" ";
display(list1);

// removing elements from the list
// list1.pop_back();
// list1.pop_front();
// list1.remove(55);  // all 55 present in list will be removed

// sorting the list
// list1.sort();
// display(list1);

// reversing the list
list1.reverse();
display(list1);

// list<int> list2(3);
// list<int> :: iterator iter;
// iter = list2.begin();
// *iter = 34;
// iter++;
// *iter = 67;
// iter++;
// *iter = 9;
// display(list2);
// list1.merge(list2);
// cout<<"List1 after merging: ";
// display(list1);

return 0;
}*/

//map in c++ stl

/*#include<iostream>
#include<string>
#include<map>
using namespace std;
 
//Map is an associative array 
int main(){
 map<string,int> marksMap;
 marksMap["Nikita"] = 98;
 marksMap["Riya"] = 99;
 marksMap["Ankur"] = 100;
 marksMap.insert({{"Vinika",123},{"Priyanka",234}});
 map<string,int> :: iterator iter;
 for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
 }
 cout<<"The size is : "<<marksMap.size()<<endl;
 cout<<"The max size is : "<<marksMap.max_size()<<endl;
 cout<<"The empty's return value is : "<<marksMap.empty()<<endl;
return 0;
}*/

//function objects

#include<iostream>
using namespace std;
 
int main(){
 
return 0;
}