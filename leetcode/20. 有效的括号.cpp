stack<char>stack1;
        if(s.size() == 0)
        {
            return true;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(stack1.empty())
            {
                stack1.push(s[i]);
            }
            else if((stack1.top() == '(' && s[i] == ')') ||
                    (stack1.top() == '[' && s[i] == ']') ||
                    (stack1.top() == '{' && s[i] == '}'))
            {
                stack1.pop();
            }
            else
            {
                stack1.push(s[i]);

            }
        }
        if(stack1.empty())
        {
            return true;
        }
        return false;
