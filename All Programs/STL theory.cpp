/*
STL Theory

1)
std::array
syntax: array <T,N> name;
-> assign by is actually by vaue and not by pointer.
Access Elements:
a) at()
b) []
c) front()
d) back()
e) data()// gives access to the underlying array element
usage:-
array<int,5> myarr;
myarr= {1,2,3,4,5};

2)
std::vector
syntax: std::vector<Type> name;
-> it is sequence container. it is also known as a array list or dynamic array.
Element accessesor:
a) at()
b) []
c) front()
d) back()
e) data()
Element modifier:
a) insert()
b) emplace()
c) push_back()
d) emplace_back()
e) pop_back()
f) resize()
g) swap()
h) erase()
i) clear()
Usage:
int main()
{
   vector<int> vec;
   for(int i=0; i<32;i++)
   {
      vec.push_back(i);
      cout<<"Size"<< vec.size(); // returns number of elements present in the vector 
      cout<<" Capacity"<< vec.capacity()<< endl;// returns the total capacity of a vector. increases in n^2 times
   }
   return 0;
}
// we can also use the vec.reserve(n) , which reserve makes a vector of capacity n from beginning it self.

3)
std::set
syntax: std::set<T>ojectname;
-> set is an associative container that contains a sorted set of unique objects of type key.
-> It is usually implemented using red black tree.
-> it has logarithmic time for certain applications ike, iinsertion, removal, or search.
-> If we want to store user defined datatype in set  then we will have to provide compare function so that the set can store them in sorted order.
** In c++ STLs we have for associative containers -> set, multiset, map, multimap
USAGE:
int main()
{
   set<int> s= { 2,2,1,1,3,3}; // will store them uniquely as {1,2,3}
   for(const auto& e: s)
   { cou<<e<<endl;}
   return 0;
}
by default it store in ascending order but to store in descending order we use as folows:
set<int,std::greater> s= {2, 2,1,1,3,3} ; // stores as{3,2,1}
     ,,  ,,::less     // store it in ascending
     
To Compare Objects
class person
{
   public:
        float age;
		string name;
		bool operator<(const person& rhs) const{return age<rhs.age;}
		bool operator>(const person& rhs) const{return age>rhs.age;}
};

int main()
{
    set<person, greater<person>> s= {{22,"a"}, {17,"c"}, {40,"f"}};
    set<person, less<person>> p= {{22,"a"}, {17,"c"}, {40,"f"}};
    for(const auto& e: s)
    {
       cout<<e.age<< " "<< e.name<< endl;// prints in descending order
    }
    for(const auto& e: p)
    {
       cout<<e.age<< " "<< e.name<< endl; // prints it in ascending order
    }
    return 0;
}

Containers inside Containers -> Making a Tress:

int main()
{
   std::vector<vector<int>> tree:
   int edge, n1, n2;
   cin>>edge;
   tree,resize(edge);
   for(int i=0; i<edges; i++)
   {
      tree[n1].push_back(n2);
  }
  
  fpr(const auto& e1: tree)
  {
     for( const auto& e2:tree)
     {
        cout<<e2;
      }
  }
  cout<<endl;
  retuen 0;
}

4)
std::set
syntax: multiset<Type> objname;
-> multiset is a assosiative contains that contains a sorted set of duplicate objects of type key.
-> It is implemented using red black tree or AVL tree
USAGE:
int main()
{
  multiset<int, std::greater<int>> ms= {5,2,4,3,2,5};// stores as { 5,5,4,3,2,2}
  for( const auto& e: ms)
  { cout<<e<< endl;
} return 0;
}

class person
{ public:
      float age;
      string name;
      bool operator<( const person& rhs) const{ return age< rhs.age;}
      bool operator>( const person& rhs) const{ return age> rhs.age;}
};
int main()
{ 
   multiset<person,greater<>> ms={{22,"Satya"}, {17,"Sourav}, {30,"Patel"}};
   
   for(const auto& e: ms)  
       cout<<e.age<<" "<<e.name<<endl;
   return 0;
}


5)
std::map
syntax: map<T1,T2> objname;// where T1 ia key type and T2 is value type
-> It is a associative container which stores elements in key value combination where key should be unique, otherwise it overrides the previous value.
-> It is implemented by self balanced binary search tree( AVL/ Read Black tree)
-> it stores in a sorted order on the basic of keys
-> It is mainly used in a dictionary type problems
eg- Dictionary 
USAGE:
int main(
{
   std::map<string, int> mapp;
   mapp["Chotu"]= 9875412365;
   mapp["Ramesh"]= 958745632;
   mapp.insert(std::make_pair("Bot", 987564123));
   for( auto &el1:mapp)
   {
       cout<< el1.first<< " "<<eli.second<<endl;
   }
   cout<<mapp["Chotu"]<< endl;
   return 0;
}
int main(
{
   std::map<string, vector<int>> mapp;
   mapp["Chotu"].push_back(9875412365);
   mapp["Ramesh"].push_back(958745632);
   maoo["Chotu"].push_back(958745624); 
   for( auto &el1:mapp)
   {
       cout<<el1.first<<": ";
       for(aut0 &el2: el1.second)
       {cout<< el2 <<" ";}
       cout<<endl;
   }
   
   return 0;
}

6)
Multimap
syntax-> std::multimap<T1,T2> objname;
-> it is same as maps but it allpws multiple entries on the same key
-> Lookup: count, find, contains, equal_range, lower_bound, upper_bound
-> We do not have at() or [] functions to get element like we had in std::map
USAGE:
int main()
{
   std::multimap<char, int, std::greater<> >mm;
   mm.insert(make_pair('b', 1);
   mm.insert(make_pair('a', 2);
   mm.insert(make_pair('b', 3);
   mm.insert(make_pair('c', 4);
   mm.insert(make_pair('a', 5);
   
   for( auto &elm:mm)
   {
     cout<<elm.first<< " "<< alm.second<< endl;
   }
   auto range= mm.equal_range('a');
   for(auto it= range.first; it!= range.second; ++it)
   {  
       cout<<it->first<<" "<< it->second<< endl;
   }
   
   cout<< mm.count('a');// returns the number of a present i.e. 2
   cout<< mm.contains('a');// returns true or false i.e. exists or not
   cout<< mm.find('a');// returns any pain of key value a
   
   auto range= mm.lower_bound('a'); // returns pair a,2
   auto range= mm.upper_bound('a'); // returns pair b,1
   cout<< range->first << " "<< range->second<< endl;
   
   return 0;
}

7)
Emplace
-> all the containers support insert and emplace operation to store data
-> Emplacee is used to construct object in-place and avoids unnecessary copy of objects
-> Emplace and Insert are both equal for primitive datatypes but when we deal with heavy objects we should use emplace if we can for efficiency 
USAGE:
class A
{
   public:
     int x;
     A(int x=0):x{x} {cout<<"Construct"<<endl; };
     A(const A& rhs) { x= rhs.x; cout<<" copy"<<endl;}
 };
 bool operator <(const A& lhs, const A& rhs) { return lhs.x < rhs.x; }
int main()
{
   set<A> Set;
   Set.insert(A(10));// Constructs and copies to store a data
   
   Set.emplace(10);// Constructs and directly stores data
   
   for(auto &elm:Set)
   {
      cout<< elm.x<< endl;
   }
   return 0;
   
}

8)
forward list in stl
-> it is a singly linked list 
-> as compared to traditional methods forward list is well tested and has a bunch of available options
Few available operations:
operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge, splice_after, unique, remove, remove_if, resize
USAGE:
int main()
{
   forward_list<int> list1= {5,4,6,2};
   forward_list<int> list2= {7,6,1,9};
   list1.insert_after(list1.begin(), 8);// inserts after first element 
   list.reverse();
   list1.sort();
   list2.sort();
   list1.merge(list2);// can only be merged after sorting
   list1.splice_after(list1.begin(), list2)// takes out some data from list1 and places in list2
    cout<<" size of list"<< std::distance(list2.begin(), list2.end())<< endl;// to know the number of elements
   for(auto &elm:list1)
   {
      cout<<elm<<endl;
    }
   list1.unique();// removes duplicate after sorting
   list1.remove(2);// removes all 2s from the list
   








const data member of class in c++
-> they are constant so  cannot be changed once initialized
1st way: initialize in class.
2nd way: initializer list is used to initialize them from outside
USAGE:

