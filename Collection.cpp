/*
 Author: Rahul Gaikwad
 Date: 09/17/2015
 */

#include "Collection.h"

#include <iostream>
#include <string>

using namespace std;

Collection::Collection(const string& CollectionCn,
                       const string& CollectionTi,
                       const string& CollectionSu,
                       const string& CollectionNts):
                        CollectionCallNumber(CollectionCn),
                        CollectionTitle(CollectionTi),
                        CollectionSubjects(CollectionSu),
                        CollectionNotes(CollectionNts)
{
            //
}

Collection::~Collection()
{
//
}

void Collection::display() const
{
	cout << "Call Number : " << CollectionCallNumber << endl;
  cout << "Title : " << CollectionTitle << endl;
  cout << "Subject : " << CollectionSubjects << endl;
  cout << "Notes : " << CollectionNotes << endl;
}

bool Collection::compare_string(const string& ti)	const
{
	if(CollectionTitle.find(ti) != std::string::npos)
  {
		return true;
	}
  else
  {
    return false;
  }
}
