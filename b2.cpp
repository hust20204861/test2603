#include <iostream>
#include <vector>
#include <string>

using namespace std;

    bool check(string s) {   
        vector<char> vector;
        for( int i=0; i<s.length(); i++){
            //nếu vector rỗng và gặp ngoặc đóng thì trả về false, gặp ngoặc mở thì thêm vào 
            if(vector.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}')){
                return false;
            }
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                vector.push_back(s[i]);
            }
            //so sánh xem dấu ngoặc đóng được thêm vào có hợp lệ không, nếu hợp lệ thì xóa cặp ngoặc. trả về kết quả vector rỗng hay không
            if(s[i] == ')' && vector.back()=='('){
                vector.pop_back();
            }
            if(s[i] == ']' && vector.back()=='['){
                vector.pop_back();
            }
            if(s[i] == '}' && vector.back()=='{'){
                vector.pop_back();
            }
        }
        return vector.empty();
    } 
    

int main(){
    string s;  
    int n;
    cin >> n;                                                    
   for(int i=0; i<n; i++){
    cin >> s;
    cout << check(s) << endl;
    }                                                                           
    return 0;    
}