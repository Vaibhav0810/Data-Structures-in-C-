 Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. 
   The values are stored in a specific sorted order i.e. either ascending or descending.
   #include <iostream>
#include <set>
 
int main()
{
  std::set<char> a;
  a.insert('G');
  a.insert('F');
  a.insert('G');
  for(auto& str: a)
  {
    std::cout << str << ' ';
  }
  std::cout << '\n';
  return 0;
}

Output
F G 
Note: The reason it printed only F and G is that set does not take multiple same values it only accepts a unique value;
we should use Multiset to print same different value
Properties:
Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. 
 Thus, the values are immutable.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are unindexed.
Note: To store the elements in an unsorted(random) order,  unordered_set() can be used.

Some Basic Functions Associated with Set: 
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.
The time complexities for doing various operations on sets are:

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)
  
  Difference between Set and Unordered Set
      Set                                                                                     Unordered Set

Set stores elements in a sorted order	                                           Unordered Set stores elements in an unsorted order
Set stores/acquire unique elements only	                                         Unordered Set stores/acquire only unique values
Set uses Binary Search Trees for implementation	                                 Unordered Set uses Hash Tables for implementation
More than one element can be erased by giving the starting and ending iterator.	 We can erase that element for which the iterator position is given
set<datatype> Set_Name;	                                                         unordered_set<datatype> UnorderedSet_Name;
  

// CPP program to demonstrate various functions of
// Set in C++ STL
#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main()
{
    // empty set container
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40) << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40) << endl;
 
    return 0;
}
Output
The set s1 is : 
60 50 40 30 20 10 

The set s2 after assign from s1 is : 
10 20 30 40 50 60 

s2 after removal of elements less than 30 :
30 40 50 60 
s2.erase(50) : 1 removed
30 40 60 
s1.lower_bound(40) : 
40
s1.upper_bound(40) : 
30
s2.lower_bound(40) :
40
s2.upper_bound(40) : 
60

