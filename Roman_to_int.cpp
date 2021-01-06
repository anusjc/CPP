#include<bits/stdc++.h>
using namespace std;
int roman_to_int(string A){
	map<char,int> rmap;
	rmap['I'] =   1;
	rmap['V'] =   5;
	rmap['X'] =  10;
	rmap['L'] =  50;
	rmap['C'] = 100;
	rmap['D'] = 500;
	rmap['M'] =1000;
	int number=0,i=0;
	if(A.length()<=1){
		return rmap[A.at(0)];
	}
	else{
		while(i<A.size()){
			if(rmap[A[i]]<rmap[A[i+1]]){
				number+=rmap[A[i+1]]-rmap[A[i]];
				i+=2;
			}
			else{
				number+=rmap[A[i]];
				i++;
			}
		}
		return number;
	}
}

int main(){
	string roman;
	
	cout<<"Enter the roman number (in capital only): ";
	getline(cin,roman);
	
	int number;
	number=roman_to_int(roman);
	
	cout<<"The interger form is: "<<number;
	
	return 0;
}
// class Solution {
// public:
//     int romanToInt(string s) {
//         int num = 0;
//         int size = s.size();

//         for (int i = 0; i < size; i++) {
//             // Does lesser value precede higher value ? 
//             if (i < (size - 1) && romanCharToInt(s[i]) < romanCharToInt(s[i + 1])) {
//                 num -= romanCharToInt(s[i]);
//             } else {
//                 num += romanCharToInt(s[i]);
//             }
//         }
//         return num;
//     }

//     int romanCharToInt(char c) {
//         switch (c) {
//             case 'I':   return 1;
//             case 'V':   return 5;
//             case 'X':   return 10;
//             case 'L':   return 50;
//             case 'C':   return 100;
//             case 'D':   return 500;
//             case 'M':   return 1000;
//             default:    return 0;
//         }
//     }
// };