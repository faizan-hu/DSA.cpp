#include <iostream>
#include <string>
using namespace std;
#include <vector>




class solution{
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        
        while( i < chars.size()){
            char currentchar = chars[i];

            int count = 0;

            while(i < chars.size() && chars[i] == currentchar){
                count ++;
                i++;
            }

            chars[ansIndex++] = currentchar;

            if(count > 1){
                string countstr = to_string(count);

                for(char ch : countstr){
                    chars[ansIndex++] = ch;
                }
            }
            

        }
        return ansIndex;
    }      
};

