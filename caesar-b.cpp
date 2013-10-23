/* Caesar cipher: works for small case letters only and some special characters
like ',' '.' and ' '. Doesn't work for numbers.*/


#include <iostream>
#include <string>
using namespace std;


class index
{
private:
	char a[26],b[26];
public:
	index()					//Constructor creating plain index
	{
		a[0]='a';						
		int i=0;
			while(i<26)
			{	
				a[i+1]=a[i]+1;
				i++;
			}
	}

	void cipherindex(char n);
	void encipher(string str);
};
/*********************************cipher index************************************************/
void index::cipherindex(char n)
{
	n=n-1;
	b[0]=n;			//start cipher index from user specified character
	int k=0;
	while(k<25 && b[k]!='z')
	{
		b[k+1]=b[k]+1;
		k=k+1;
	}
int i=0;				//Display cipher index
	while(i<26)
	{	
		cout<<b[i]<<" ";
		i++;
	}
cout<<"\n";
if(k!=25)
{
k=k+1;
b[k]='a';				//repeat index from 'a'
	while(k<25)
	{
		b[k+1]=b[k]+1;
		k=k+1;
	}

}
int l=0;				//Display cipher index
	while(l<25)
	{	
		cout<<b[l]<<" ";
		l++;
	}
cout<<"\n";

}

/*****************************encipher***********************************/
void index::encipher(string str)
{	
int i=0,j=0;
	while(j<str.length())
	{
		if(str[j]==' '){cout<<" "; j=j+1;continue;}	//skip spaces ' '	
		if(str[j]==','){cout<<","; j=j+1;continue;}	//skip commas ','
		if(str[j]=='.'){cout<<"."; j=j+1;continue;}	//skip period '.'	
		
//searching letter position of string in plain index
		while(a[i]!=str[j]&&i<25) {i=i+1;}    
		
		cout<<b[i];			//replacing letter with cipher index
		j=j+1;
		i=0;
	}
cout<<"\n";
}	
/*****************************main************************************/
int main()
{
char n;
index ob;				
string str;
cout<<"Enter data to be encrypted:";
getline(cin,str);

cout<<"Enter cipher key(key should be a positive integer): ";
cin>>n;
cout<<"\n";
		//condition not working(if n is 0 or 1-->no change)
ob.cipherindex(n);
ob.encipher(str);
return 0;
}

	
