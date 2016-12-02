#include <iostream>
#include <map>
using namespace std;

static map<unsigned int,map<unsigned int,unsigned long long> > state_strings;

void insert_map()
{
	static unsigned int val = 0;
	map<unsigned int,unsigned long long> in_map;
	for(int i = 0; i < 10; i++)
	{
          in_map.insert(pair<unsigned int,unsigned long long> (i+1, i+2));
	  cout<<"in map "<<i+1<<"--"<<i+2<<endl;
        }


	state_strings.insert(make_pair(val , in_map));
	val++;

}

int main()
{
 insert_map();
 insert_map();

 map<unsigned int,map<unsigned int,unsigned long long> >::iterator i;
 for(i = state_strings.begin(); i != state_strings.end(); ++i)
 {
	 unsigned int c = (*i).first;
    	map<unsigned int,unsigned long long> in_map = (*i).second;
		map<unsigned int,unsigned long long> ::iterator a;
	switch(c)
 	{
  	case 0:
    	for( a = in_map.begin(); a != in_map.end() ; ++a)
   	 {
     		cout<<"Out map "<<(*a).first<<"--"<<(*a).second<<endl;
   	 } 
    	break;
  	case 1:
    	for( a = in_map.begin(); a != in_map.end() ; ++a)
     	{
       	cout<<"Out map "<<(*a).first<<"--"<<(*a).second<<endl;
    	 } 
   	 break;
   
  }

 }


#if 0
map<unsigned int,map<unsigned int,unsigned long long> >::iterator i;
for( i = state_strings.begin(); i != state_strings.end(); ++i)
{
 int c = i.first;
 switch(c)
 {
    map<unsigned int,unsigned long long> in_map = i[1];
    map<unsigned int,unsigned long long>::iterator a;
  case 0:
    for(a = in_map.begin(); a != in_map.end(); ++a)
    {
     cout<<"Out map "<<a.first<<"--"<<a.second<<endl;
    } 
    break;
  case 0:
     for(auto a = in_map.begin(); a != in_map.end(); ++a)
     {
       cout<<"Out map "<<a.first<<"--"<<a.second<<endl;
     } 
    break;
   
  }
 }
#endif
}
