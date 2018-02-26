#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(void){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(4);
    vec.push_back(6);
    //vec.pop_back();

    //cout <<vec.size()<< endl;
    /*
    for(int i= 0;i < vec.size();i++)
    {cout << vec[i]<<endl;}
*/
   //list
   /*
    vector<int>::iterator itor= vec.begin();
    cout <<*itor<<endl;
    for(;itor != vec.end();itor++)
    {
        cout<< *itor<<endl;
    }
    cout << vec.front()<< endl;
    cout << vec.back()<< endl;
    */
    /*list<int> list1;
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(7);*/
/* not work
    for(int i = 0; i<list1.size();i++)
    {
        cout << list1 <<endl;
    }
    */
    /* work
    list<int>::iterator itor = list1.begin();
    for(;itor != list1.end();itor++)
    {
        cout<< *itor<< endl;

    }
    */
    map<int, string> m;
    pair<int, string> p1(3, "hello");
    pair<int, string> p2(4, "world");

    m.insert(p1);
    m.insert(p2);

    cout << m[3] << endl;
    cout << m[4] <<endl;
    map<int, string>::iterator itor = m.begin();
    for(;itor != m.end();itor++)
    {
        cout << (*itor).first << (*itor).second <<endl;
    }
}
