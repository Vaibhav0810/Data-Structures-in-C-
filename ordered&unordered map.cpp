
                                                                    UNORDERED MAP


unordered_map is an associated container that stores elements formed by the combination of key-value and a mapped value. 
The key value is used to uniquely identify the element and the mapped value is the content associated with the key. 
Both key and value can be of any type predefined or user-defined. 

Internally unordered_map is implemented using Hash Table, the key provided to map are hashed into indices of a hash table 
that is why the performance of data structure depends on hash function a lot but on an average, the cost of search, insert and delete from the hash table is O(1).
                          
Note: In the worst case, its time complexity can go from O(1) to O(n2), especially for big prime numbers. 
 You can read more about this (BELOW). In this situation, it is highly advisable to use a map instead to avoid getting a TLE error.
  
  // C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;
  
int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of int type
    unordered_map<string, int> umap;
  
    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
  
    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;
  
}

Output
Contribute 30
GeeksforGeeks 10
Practice 20
  
 unordered_map vs unordered_set : 
In unordered_set, we have only key, no value, these are mainly used to see presence/absence in a set. 
  For example, consider the problem of counting the frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts. 

unordered_map vs map : 
map (like set) is an ordered sequence of unique keys whereas in unordered_map key can be stored in any order, so unordered. 
The map is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). 
  The time complexity of map operations is O(log n) while for unordered_map, it is O(1) on average.
  
  
  // C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;
  
int main()
{
    // Declaring umap to be of <string, double> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, double> umap;
  
    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
  
    // inserting value by insert function
    umap.insert(make_pair("e", 2.718));
  
    string key = "PI";
  
    // If key not found in map iterator to end is returned
    if (umap.find(key) == umap.end())
        cout << key << " not found\n\n";
  
    // If key found then iterator to that key is returned
    else
        cout << "Found " << key << "\n\n";
  
    key = "lambda";
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;
  
    //    iterating over all value of umap
    unordered_map<string, double>:: iterator itr;
    cout << "\nAll Elements : \n";
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        // itr works as a pointer to pair<string, double>
        // type itr->first stores the key part  and
        // itr->second stores the value part
        cout << itr->first << "  " << itr->second << endl;
     }
}

Output
Found PI

lambda not found

All Elements : 
loge  1
e  2.718
log10  2.302
root3  1.732
PI  3.14
root2  1.414
  
 Q  A practical problem based on unordered_map – given a string of words, find frequencies of individual words.

Input :  str = "geeks for geeks geeks quiz practice qa for";
Output : Frequencies of individual words are
   (practice, 1)
   (for, 2)
   (qa, 1)
   (quiz, 1)
   (geeks, 3)


// C++ program to find freq of every word using
// unordered_map
#include <bits/stdc++.h>
using namespace std;
  
// Prints frequencies of individual words in str
void printFrequencies(const string &str)
{
    // declaring map of <string, int> type, each word
    // is mapped to its frequency
    unordered_map<string, int> wordFreq;
  
    // breaking input into word using string stream
    stringstream ss(str);  // Used for breaking words
    string word; // To store individual words
    while (ss >> word)
        wordFreq[word]++;
  
    // now iterating over word, freq pair and printing
    // them in <, > format
    unordered_map<string, int>:: iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";
}
  
// Driver code
int main()
{
    string str = "geeks for geeks geeks quiz "
                 "practice qa for";
    printFrequencies(str);
    return 0;
}
Output
(qa, 1)
(quiz, 1)
(practice, 1)
(geeks, 3)
(for, 2)
  
  Methods of unordered_map : 

at(): This function in C++ unordered_map returns the reference to the value with the element as key k.
begin(): Returns an iterator pointing to the first element in the container in the unordered_map container
end(): Returns an iterator pointing to the position past the last element in the container in the unordered_map container
  
 find(): Returns iterator to element.
empty(): checks whether container is empty in the unordered_map container.
erase(): erase elements in the container in the unordered_map container.
  
count(): Count the number of elements present in an unordered_map with a given key.
  
  
  
  
  
                                                                        ORDERED MAP


  Maps are associative containers that store elements in a mapped fashion.
  Each element has a key value and a mapped value.
  No two mapped values can have the same key values.

Some basic functions associated with Map: 
 
begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.
Implementation:

// CPP Program to demonstrate the implementation in Map

#include <iostream>
#include <iterator>
#include <map>
using namespace std;
  
int main()
{
  
    // empty map container
    map<int, int> gquiz1;
  
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
      
      gquiz1[7]=10;     // another way of inserting a value in a map
     
  
    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
  
    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
  
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
  
    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
  
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
  
    cout << endl;
  
    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;
  
    return 0;
}
Output
The map gquiz1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10


The map gquiz2 after assign from gquiz1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10


gquiz2 after removal of elements less than key=3 : 
    KEY    ELEMENT
    3    60
    4    20
    5    50
    6    50
    7    10

gquiz2.erase(4) : 1 removed 
    KEY    ELEMENT
    3    60
    5    50
    6    50
    7    10

gquiz1.lower_bound(5) :     KEY = 5        ELEMENT = 50
gquiz1.upper_bound(5) :     KEY = 6        ELEMENT = 50
  
  
  List of all Functions of Map 
Function	Definition
map::insert()	Insert elements with a particular key in the map container –> O(log n)
      
map:: count()	Returns the number of matches to element with key-value ‘g’ in the map. –> O(log n)
      
map equal_range()	Returns an iterator of pairs. 
      The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k.
      
map erase()	Used to erase elements from the container –> O(log n)
      
map rend()	Returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map(which is considered its reverse end).
      
map rbegin() 	Returns a reverse iterator which points to the last element of the map.
      
map find()	Returns an iterator to the element with key-value ‘g’ in the map if found, else returns the iterator to end.
      
map crbegin() and crend() 	crbegin() returns a constant reverse iterator referring to the last element in the map container. 
      crend() returns a constant reverse iterator pointing to the theoretical element before the first element in the map.
      
map cbegin() and cend()	 cbegin() returns a constant iterator referring to the first element in the map container.
      cend() returns a constant iterator pointing to the theoretical element that follows the last element in the multimap.
      
map emplace()	Inserts the key and its element in the map container.
      
map max_size() 	Returns the maximum number of elements a map container can hold –> O(1)
      
map upper_bound()	Returns an iterator to the first element that is equivalent to mapped value with key-value ‘g’ or definitely will go after the element with key-value ‘g’ in the map

map operator=	Assigns contents of a container to a different container, replacing its current content.

 map lower_bound()	Returns an iterator to the first element that is equivalent to the mapped value with key-value ‘g’ or definitely will not go before the element with key-value ‘g’ in the map –> O(log n)

map emplace_hint()	Inserts the key and its element in the map container with a given hint.

map value_comp() 	Returns the object that determines how the elements in the map are ordered (‘<‘ by default).

map key_comp() 	Returns the object that determines how the elements in the map are ordered (‘<‘ by default).
      
map::size()	Returns the number of elements in the map.
      
map::empty()	Returns whether the map is empty

map::begin() and end()	begin() returns an iterator to the first element in the map. e
nd() returns an iterator to the theoretical element that follows the last element in the map

map::operator[]	This operator is used to reference the element present at the position given inside the operator.
      
map::clear() 	Removes all the elements from the map./
      
map::at() and map::swap()	at() function is used to return the reference to the element associated with the key k. 
      swap() function is used to exchange the contents of two maps but the maps must be of the same type, although sizes may differ.
      
      
      
      
      
      
                                                           WHEN TO USE WHAT MAP

Use std::map when 

You need ordered data.
You would have to print/access the data (in sorted order).
You need predecessor/successor of elements.
See advantages of BST over Hash Table for more cases.
  
  
  Use std::unordered_map when 

You need to keep count of some data (Example – strings) and no ordering is required.
You need single element access i.e. no traversal.
  
  
  Let us see the differences in a tabular form -:

          	map	                                                                              unordered_map
1.	map is define in  #include <map> header file	                                      unordered_map is defined in #include <unordered_map> header file
2.	It is implemented by red-black tree.	                                              It is implemented using hash table.
3.	It is slow.	                                                                        It is fast.
4.	Time complexity for operations is O(log N)(like search del insert)                  Time complexity for operations is O(1)
5.	map is used to store elements as key,value pairs in sorted order.	                  unordered_map is used to store elements as key,value pairs in non-sorted order.
      
      
      
      
  
