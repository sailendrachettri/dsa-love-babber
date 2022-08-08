#include <stack>

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        
        if(ch == '(' or ch == '+' or ch == '-' or ch == '/' or ch == '*'){
            st.push(ch);
            
        } else {
            if(ch == ')'){
                bool isRedundent = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' or top == '-' or top == '/' or top == '*'){
                        isRedundent = false;
                    }
                    st.pop();
                }
                
                if(isRedundent == true)
                    return true;
                
                st.pop();
            }
        }
    }
    
    return false;
}
