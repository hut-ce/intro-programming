#include <iostream>
#include <cstring>

using namespace std;


string strubg_to_lower(string str) {
    string ans = "";
    for (int i = 0; i < str.length(); i++)
        ans += tolower(str[i]);

    return ans;
}

string string_reverse (string str){
	string ans ="" ;

	for (int i = s.length()-1 ; i >= 0 ; i--)
		ans += s[i] ;

	return ans ;
}


string* search_wordDupWord(string text, string ptrn)
{
    string word = "";
    string words[];
    for (auto x : str)
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
}

int main (){
	string my_str = "" ;
	string search = "";
	string rev_search ;
	int l ;
	
	
	getline (cin , my_str) ;
	cin >> search ;
	
	my_str = take_lower_string(my_str) ; 
	
	search = take_lower_string(search) ;
	
	rev_search = reverser(search) ;

	l = searcher(my_str , search , rev_search) ;
	
	cout << l;

	return 0;
}