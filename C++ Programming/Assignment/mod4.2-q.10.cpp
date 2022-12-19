#include <iostream> 
using namespace std; 

class String 
{ 
private: 
	char *s; 
	int size; 
public: 
	String(const char *str = NULL);  
	~String() { delete [] s; }
	String(const String&); 
	void print() { cout << s << endl; } 
	void operator +=(String&); 
}; 

String::String(const char *str) 
{ 
	size = strlen(str); 
	s = new char[size+1]; 
	strcpy(s, str); 
} 

 
String::String(const String& old_str) 
{ 
	size = old_str.size; 
	s = new char[size+1]; 
	strcpy(s, old_str.s); 
} 

 
void String::operator +=(String& str) 
{ 
	
	size += str.size; 
	char *ns = new char[size+1]; 

	
	strcpy(ns, s); 

	
	strcat(ns, str.s); 

	
	delete [] s; 
	s = ns; 
} 


int main() 
{ 
	String str1("Geeks"); 
	String str2("ForGeeks"); 

	
	str1 += str2; 

	str1.print(); 
	return 0; 
}