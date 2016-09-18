/*
 Author: Rahul Gaikwad
 Date: 09/09/2015
 */
#include "FindString.h"

#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Collection
{

protected:
	string CollectionCallNumber;
	string CollectionTitle;
	string CollectionSubjects;
	string CollectionNotes;
	
public:
	Collection(const string& CollectionCn,
             const string& CollectionTi,
             const string& CollectionSu,
             const string& CollectionNts);
  
  virtual ~Collection();
		  
	virtual void display() const;
	
  bool compare_string(const string& ti) const;
};

#endif
