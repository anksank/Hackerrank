vector <string> braces(vector <string> values) {
    vector<string> output;
    
    for (int i = 0; i < values.size(); i++) {
        stack<char> s;
        char a, b, c;
        string ans = "YES";
        string input = values[i];
        for (int j = 0; j < input.length(); j++) {
            if (input[j]=='('||input[j]=='['||input[j]=='{')
            {
                s.push(input[j]);
            }
            else
            {
                switch (input[j])
                {
                case ')':
                    if (s.size() == 0) {
                        ans = "NO";
                        break;
                    }
                    a = s.top();
                    s.pop();
                    if (a=='{'||a=='[')
                        ans = "NO";
                    break;
                case '}':
                    if (s.size() == 0) {
                        ans = "NO";
                        break;
                    }
                    b = s.top();
                    s.pop();
                    if (b=='('||b=='[')
                        ans = "NO";
                    break;
                case ']':
                    if (s.size() == 0) {
                        ans = "NO";
                        break;
                    }
                    c=s.top();
                    s.pop();
                    if (c=='('||c=='{')
                        ans = "NO";
                    break;
                }
            }
        }
        if(s.size() != 0) {ans = "NO";}
        output.push_back(ans);
    }
    
    return output;
}
