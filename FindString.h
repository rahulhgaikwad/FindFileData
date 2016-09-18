/*
Author: Rahul Gaikwad
Date: 09/17/2015
*/

#ifndef FINDSTRING_H
#define FINDSTRING_H

#include "Collection.h"
#include "DataRead.h"


#include <vector>
#include <iostream>
#include <string>

using namespace std;

class FindString{
	
public:
	
	FindString();
  	~FindString();
  	vector<Collection*> search_by_column_title (const string& searchString) const;
  
private:
	vector <Collection*> records;
};

#endif
