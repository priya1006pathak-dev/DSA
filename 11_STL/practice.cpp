// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
// set<int>s;
// s.insert(5);
// s.insert(5);
// s.insert(5);
// s.insert(1);
// s.insert(1);
// s.insert(6);
// s.insert(7);
// s.insert(6);
// s.insert(7);
// for(auto i: s){
//     cout << i << endl;
// }cout << endl;
// set<int>::iterator it = s.begin();
// it++;
// s.erase(it);
// for(auto i: s){
//     cout << i << endl;
// }
// cout << endl;
// cout<< "-5 is present or not->" << s.count(-5) << endl;
// set<int>::iterator itr = s.find(5);

// for(auto it = itr; it !=s.end(); it++){
//     cout << *it << " ";
// }cout << endl;



// }




// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//    int basic[3] = {1,2,3};
//    array<int ,4> a ={1,2,3,4};
//    int size = a.size();
//    for(int i=0; i<size; i++){
//     cout << a[i] << endl;
//    }
//    cout << "Element at 2nd Index ->" << a.at(2) << endl;

//    cout << "first element ->" << a.front() << endl;
//       cout << "last element ->" << a.back() << endl;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    vector<int>v;
//    cout << "Size->" << v.capacity()<< endl;


// v.push_back(1);
// cout << "Size->" << v.capacity() << endl;

//       v.push_back(2);
// cout << "Size->" << v.capacity() << endl;

//       v.push_back(3);
// cout << "Size->" << v.capacity() << endl;

// cout << "Element at 2nd Index ->" << v.at(0) << endl;
// cout << "Element at 2nd Index ->" << v.at(1) << endl;
// cout << "Element at 2nd Index ->" << v.at(2) << endl;
// cout << "first element ->" << v.front() << endl;
// cout << "last element ->" << v.back() << endl;


// cout << "before pop" << endl;
// for(int i:v){
//     cout << i << " ";
// }cout << endl;
//   v.pop_back();


// cout << "after pop" << endl;
// for(int i:v){
//     cout << i << " ";

// cout << endl;
// }
// cout << "before clear size" << v.size() << endl;
// v.clear();
// cout << "after clean size" << v.size() << endl;
// }





#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    // for(int i:d){
    //     cout << i << " ";
    // }
    // d.pop_front();
    //     d.pop_back();
    // cout << endl;
    // for(int i:d){
    //     cout << i << " ";
    // }
    cout << endl;
    cout << "print first Index element" << d.at(1) << endl;


    cout << "First element " << d.front() << endl;
    cout << "Last element " << d.back() << endl;

    cout << "empty or not" << d.empty() << endl;

    cout << " before erase" << d.size() << endl;
    d.erase(d.begin()+1);
    cout << "after erase" << d.size() << endl;
  for(int i:d){
    cout << i << endl;
  }


}