#include <bits/stdc++.h>
using namespace std;

#define error(args...) { string _s = #args; 
                        replace(_s.begin(), _s.end(), ',', ' '); 
                        stringstream _ss(_s); 
                        istream_iterator<string> _it(_ss); 
                        err(_it, args); 
                        }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}

int main() {
	int a = 4, b = 8, c = 9;
	error(a, b, c);
}


int main(){

deque<vector<pair<int, int>>> d;
d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};
for (auto i: d) {
    for (auto j: i)
        cout << j.first << ' ' << j.second << '\n';
    cout << "-\n";
}
// prints "3 4
//         5 6
//         -
//	   1 2
//	   3 4
//	   -"

vector<int> v = {3, 1, 2, 1, 8};
sort(begin(v), end(v), [] (int a, int b) { return a > b; });
for (auto i: v) cout << i << ' ';


//RAW STRING 

string str = "Hello\tWorld\n";    // Hello	World

string r_str = R"(Hello\tWorld\n)"; //Hello\tWorld\n

cout << str << r_str;

//TUPLE

tuple<int, int, int, char> t (3, 4, 5, 'g');
int a, b;
tie(b, ignore, a, ignore) = t;
cout << a << ' ' << b << '\n';


// We can also change the values just change auto with auto &:

vector<int> v = {8, 2, 3, 1};
for (auto &it: v)
    it *= 2;
for (auto it: v)
    cout << it << ' ';
// prints "16 4 6 2"

}