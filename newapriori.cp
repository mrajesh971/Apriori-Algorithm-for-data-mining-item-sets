#include<iostream>
#include<set>
#include<vector>
#include<sstream>
#include<map>
#include<fstream>
#include<algorithm>
#include<iterator>
using namespace std;
set< set<int> > l[100];
set<int> in,in1;
vector<int> c[100];
set<int> input[100];
int i=0;
int x=0;
set< set<int> > com[100];
int k;
int minsup;
int arr[100];


void checkfrequent(set <int> &b)
{
	
	int d;
	vector<int> vec;
	/*cout<<"the coming elements are"<<endl;
		for(set< int > :: iterator it=b.begin();it!=b.end();it++)
    cout<<*it<<" ";*/
    cout<<endl;
		set<int> v;
		ifstream fin1("input.txt");
		string s;
		while(getline(fin1,s))
		{
			int j=0;
			//fin1>>s;
			//cout<<s<<endl;
			while(j<s.length())
			{	
				
				int d=s[j]-'0';
				if(d>0)
				v.insert(d);
				j++;
			
			}

				//		cout<<"the no of elements are"<<endl;
						for(set<int>::iterator j=v.begin();j!=v.end();j++)
             {	
             	//cout<<*j;
             }
             	//cout<<"________"<<endl;
						//cout<<"____________"<<endl;
						
						if (std::includes(v.begin(), v.end(),b.begin(), b.end()))
					
						x++;
				//		cout<<"the value of x is"<<x<<endl;}		
						//cout<<"what thefuck\n";*/	
						v.clear();			
						
	}
}
void set1()
{

	int g=0;
	for(set< set<int> > :: iterator it1=l[0].begin();it1!=l[0].end();it1++)
    {       
             for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
             {	
             	//cout<<"the value of *J"<<*j<<endl;
             	arr[g]=*j;
             	g++;
             }
         }
             	//cout<<"_____________________________"<<endl;
             	
			 	 for(int y=0;y<g;y++)
			 	 {	
			 	 	in1.insert(arr[y]);
			 	 	//cout<<"@@@@@@@@@@@@@@@@@@@@@@"<<arr[y]<<"@@@@@@@@@@@"<<endl;
			 	 for(int h=0;h<g;h++)
				  {
				  	//cout<<"$$$$$$$$$$$$$$$$$$$$$$$"<<arr[h]<<"$$$$$$$$$$$"<<endl;
				  in1.insert(arr[h]);	
	//		cout<<"_______________________"<<in1.size()<<"___________________________"<<endl;
			 if(in1.size()==2)
			 {
			 	//cout<<"entering";
			 	checkfrequent(in1);
			 	if(x>minsup)
			 	{
			 		l[1].insert(in1);
			 		
			 	}
			 	x=0;
				}
				in1.erase(arr[h]);
			}
in1.clear();			 	 	
}
cout<<"the two frquent set are"<<endl;
for(set< set<int> > :: iterator it1=l[1].begin();it1!=l[1].end();it1++)
    {       
             for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
             {
					cout<<*j<<" ";
}
cout<<endl;}
}


void aprgen(set< set<int> >&p )
{
	//cout<<"####################################"<<endl;
	set<int> input,input1,input2,input3;
 std::set<int>::iterator it3,it6;
/*	for(set< set<int> > :: iterator it1=p.begin();it1!=p.end();it1++)
    { 
		for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
			 {
			 	input.insert(*j);
			 	//cout<<*j;
			 }
			 cout<<endl;
			 it3=input.end();
			 --it3;
			 input.erase(it3);	 
for(set<int> :: iterator it2=input.begin();it2!=input.end();it2++ )
cout<<*it2<<endl;
input.clear();
}*/
int w=0,t=0;;
	for(set< set<int> > :: iterator it1=p.begin();it1!=p.end();it1++)
    { 
    				for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
			 {
			 	input.insert(*j);
			 	//cout<<"the value of j "<<*j<<endl;
			 	
			 	//cout<<*j;
			 }
			 //cout<<1<<endl;
			 it3=input.end();
			 --it3;
			 input.erase(it3);
			 	for(set<int>::iterator r=input.begin();r!=input.end();r++)
			 {
			 	//input.insert(*j);
			 	//cout<<"the value of r "<<*r<<endl;
			 	
			 	//cout<<*j;
			 }
			  std::set< set<int> >::iterator it4=it1;
			  
			 std::advance(it4, 1);
			 while(it4!=p.end())
			 {
				for(set<int>::iterator j=it4->begin();j!=it4->end();j++)
			 {
			 	input1.insert(*j);
			 	
			 }
		//	 cout<<1<<endl;
			 it6=input1.end();
			 --it6;
			 input1.erase(it6);
			 	for(set<int>::iterator r=input1.begin();r!=input1.end();r++)
			 {
			 	//input.insert(*j);
			 //	cout<<"@@@@@@@@@@@@@@@@@@@@2 "<<*r<<endl;
			 	
			 	//cout<<*j;
			 }
			if(includes(it1->begin(),it1->end(),input.begin(),input.end()))
			w++;
				if(includes(it4->begin(),it4->end(),input.begin(),input.end()))
			t++;
	//	cout<<w<<" "<<t<<endl;
			if(w==t)
			{
				 for(set<int>::iterator j1=it4->begin();j1!=it4->end();j1++)
			 {
			 	input2.insert(*j1);
			 }
			 
    				for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
			 {
			 	input2.insert(*j);
			
			 }
			 set<int> :: iterator it7;
			 it7=input2.begin();
			 input2.erase(it7);
			 if(p.find(input2)!=p.end())
			 {
			 	for(set<int>::iterator j1=it4->begin();j1!=it4->end();j1++)
			 {
			 	input2.insert(*j1);
			 }
			 com[2].insert(input2);
		}
			} 
			w=0;t=0;
			
			input1.clear();
			input2.clear();
			 std::advance(it4, 1);
			 
			 }
			 input.clear();
}

for(set< set<int> > :: iterator it1=com[2].begin();it1!=com[2].end();it1++)
    { 
    				for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
			 {
			 	input3.insert(*j);
			 }
			 cout<<endl;
			 x=0;
			 checkfrequent(input3);
			 if(x>minsup)
			 l[2].insert(input3);
			 input3.clear();
			 x=0;
		}
		cout<<" the three frequent itemsets are"<<endl;
for(set< set<int> > :: iterator it1=l[k].begin();it1!=l[k].end();it1++)
    { 
    				for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
			 {
			 	cout<<*j<<" ";
			 }
			 cout<<endl;
}
}


void apr()
{
	for(k=2;!l[k-1].empty();k++)
	{
		//cout<<"--------------------------------------------------"<<endl;
		aprgen(l[k-1]);
	}
}

int main()
{	
	
	cout<<"enter the minimum support\n";
	cin>>minsup;
 	ifstream fin("input.txt");
 	string str1,token;
 	int d;
 	map<int,int> mymap;
 	while(!fin.eof())
 	{				
	 				 string s;
	 				 fin>>s;
	 //				 cout<<"___________";
	 //				 cout<<s<<endl;
	 				 istringstream str1(s);
	 				 int j=0;
	 				 while(j<s.length())
	 				 {	
	 				 	d=s[i]-'0';
					 	//d=atoi(token.c_str());				  
					  	c[i].push_back(d);
						input[i].insert(d);
						j++;
						}
						
		}
		for(set<int> :: iterator it=input[i].begin();it!=input[i].end();it++)
		mymap[*it]=count(c[i].begin(),c[i].end(),*it);
		for(map<int,int> :: iterator it=mymap.begin();it!=mymap.end();it++)
		{
	 //	cout<<it->first<<" "<<it->second<<endl;
	 	cout<<"one frquent item sets"<<endl;
	 	if(it->second>minsup)
	 	{
	 	cout<<it->first<<endl;
	 	in.insert(it->first);
	 	l[i].insert(in);
		}
		in.clear();
		}
		cout<<endl;
/*		for(set< set<int> > :: iterator it1=l[0].begin();it1!=l[0].end();it1++)
    {
            // set<int>::iterator j;
            cout<<"_____________________________________________"<<endl;
             for(set<int>::iterator j=it1->begin();j!=it1->end();j++)
             {
             cout<<"yahoo the value is\n"<<*j;
             }
             }*/
         set1();    
		apr();
		fin.close();
		system("pause");
		return 0;
		}
							
						  	
						  				  					  			  
					  					  
					  	 
 	
