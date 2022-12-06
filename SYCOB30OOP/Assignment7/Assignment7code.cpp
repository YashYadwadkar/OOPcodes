#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
map<string,int>populationMap;
populationMap.insert(pair<string,int>("MH",112));
populationMap.insert(pair<string,int>("UP",112));
populationMap.insert(pair<string,int>("MP",112));
populationMap.insert(pair<string,int>("AP",112));
populationMap.insert(pair<string,int>("RJ",112));
map<string,int>::iterator iter = populationMap.end();
cout<<"Size of populationMap:"<<populationMap.size()<<"\n";
for(iter=populationMap.begin();iter!=populationMap.end();++iter)
{
cout<<iter->first<<":"<<iter->second<<"million\n";
}
string state;
cout<<"\nEnter the state:";
cin>>state;
iter=populationMap.find(state);
if(iter!=populationMap.end())
cout<<state<<"population is:"<<iter->second<<"million\n";
else
cout<<"Key is not in populationMap";
populationMap.clear();
return 0;
}