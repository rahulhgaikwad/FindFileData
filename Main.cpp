/*
 Author: Rahul Gaikwad
 Date: 09/17/2015
 */
#include "DataRead.h"
#include "Collection.h"


#include <string>
#include <fstream>

using namespace std;

int main()
{
  FindString se;
  
  string str1;
  string str2;
  string str3="yes";
  
  cout<<"Type : "<<endl;
  cout<<"Keyword : "<<endl;
  
  vector<Collection*> m;
  
  while(str3 == "yes")
  {
    cout<< "Which type of search you wanna do?"<<endl;
    cout << "Type one of the option from below :"<<endl;
    cout<<"(1) FindByTitleColumn'"<<endl;
  
    getline(cin,str1);
    
    cout<< "Enter a string you wanna search" <<endl;
    
    getline(cin,str2);
    
    if(str1 == "1")
    {
      m=se.search_by_column_title(str2);
     
      for(unsigned int i=0; i < m.size();i++)
      {
        m[i]->display();
      }
    }
    cout<<"Type yes to Continue the search? or hit enter to exit"<<endl;
    getline(cin,str3);
  }
  return 0;
}
