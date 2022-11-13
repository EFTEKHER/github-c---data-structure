#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;

class Book
{
public:
    string name;
    int price;

    Book()
    {
    }
    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
template <class ForwardIterator, class T, class Compare>

ForwardIterator Search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{
    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }
        start++;
    }
    return end;
}
int main()
{
    Book b1("C++", 100); // old edition
    Book b2("Python", 120);
    Book b3("java", 130);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book tofindbook("C++", 110);

    BookCompare cmp;
    // if(cmp(b1,tofindbook))
    // {
    //     cout<<" Same True book";
    // }
    auto it = Search(l.begin(), l.end(), tofindbook, cmp);
    if (it != l.end())
    {
        cout << " Found  " << endl;
    }
    else
    {
        cout << " Not Found " << endl;
    }
    return 0;
}
