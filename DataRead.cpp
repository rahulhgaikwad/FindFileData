/*
 Author: Rahul Gaikwad
 Date: 09/17/2015
 */

#include "DataRead.h"

#include <iostream>
#include <string>

using namespace std;

DataRead::DataRead(const string& cn,
                   const string& ti,
                   const string& su,
                   const string& au,
                   const string& ds,
                   const string& pb,
                   const string& ct,
                   const string& yr,
                   const string& sr,
                   const string& nts):
                    Collection(cn,ti,su,nts),
                    author(au),
                    description(ds),
                    publication(pb),
                    city(ct),
                    year(yr),
                    series(sr)
{
//
}

void DataRead::display() const
{
  cout << "---Type : DataRead---" << endl;
  
  Collection :: display();
  
  cout << "author : " << author << endl;
  cout << "description : " << description << endl;
  cout << "publication : " << publication << endl;
  cout << "city : " << city << endl;
  cout << "year : " << year << endl;
  cout << "series : " << series << endl << endl;
  cout << "----------------------------------------" << endl;
}
