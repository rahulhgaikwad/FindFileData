/*
 Author: Rahul Gaikwad
 Date: 09/17/2015
 */

#ifndef DATAREAD_H
#define DATAREAD_H

#include "Collection.h"

#include <iostream>
#include <string>

using namespace std;

class DataRead : public Collection
{
    
	private:
  		string author;
  		string description;
  		string publication;
  		string city;
  		string year;
  		string series;
    
   	public:
     	DataRead(const string& cn, const string& ti,
               const string& su, const string& au,
               const string& ds, const string& pb,
               const string& ct, const string& yr,
               const string& sr, const string& nts);
    
      void display() const;
};

#endif
