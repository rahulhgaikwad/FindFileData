/*
Author: Rahul Gaikwad
Date: 09/17/2015
*/

#include "FindString.h"

#include <string>
#include <vector>
#include <fstream>


using namespace std;

FindString::FindString()
{
  ifstream inf("Data.txt");
	string strfind;
  string cn;
  string ti;
  string su;
  string au;
  string ds;
  string pb;
  string ct;
  string yr;
  string sr;
  string di;
  string nts;
  string pbh;
  string relti;
  string othfrmti;
  string gvdno;
  string dst;
  string lb;
	if (inf.fail()){
		cout << "File not found";
	}
	else
  {
    while(!inf.eof())
    {
      getline(inf, cn, '|');
      getline(inf, ti, '|');
      getline(inf, su, '|');
      getline(inf, au, '|');
      getline(inf, ds, '|');
      getline(inf, pb, '|');
      getline(inf, ct, '|');
      getline(inf, yr, '|');
      getline(inf, sr, '|');//etc.
      getline(inf, nts, '\n'); //equivalently: getline(inf, nts);
      DataRead* ptrDataRead = new DataRead(cn, ti, su, au, ds, pb, ct, yr, sr, nts);
      records.push_back(ptrDataRead);
    }
      inf.close();
	}
}

FindString::~FindString()
{
  for(unsigned int i=0; i < records.size();i++)
  {
    delete records[i];
  }
}

vector<Collection*> FindString ::
search_by_column_title(const string& searchString) const
{
  vector <Collection*> result;
  int recordsSize = records.size();
  int i;
  for (i = 0 ; i < recordsSize ; i++)
  {
    if (records[i]->compare_string(searchString) == true)
    {
      result.push_back(records[i]);
    }
  }
  return result;
}
