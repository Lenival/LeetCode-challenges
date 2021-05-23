#include <regex>
class Solution {
public:
    bool isValid(string code) {
    //cpp.sh/4e5bx
    //cpp.sh/96iozy
    //cpp.sh/5rfsw
    //cpp.sh/2z7bp
    
      
    std::stack<std::string> valStack;
    int len_str, len_top;//\\w\\d<>/!\\[\\]
    std::regex generalValidation ("^<([A-Z]{1,9}>).*</\\1$");
    std::regex generalSearch ("</?[A-Z]{1,9}>|<!\\[CDATA\\[.*?\\]\\]>|[^<]+|<");
    std::regex_iterator<std::string::iterator> rit ( code.begin(), code.end(), generalSearch );
    std::regex_iterator<std::string::iterator> rend;
        

    if(!(std::regex_match  ( code, generalValidation ))){
        return 0;
    }

    while (rit!=rend) {
    if(rit->str()[0]=='<'){
        if(rit->str().size()>1){
            if(rit->str()[1]!='!'){
                if(valStack.empty()){
                    valStack.push(rit->str());
                }else{
                    len_top = (valStack.top()).size();
                    len_str = (rit->str()).size();
                    if(len_top>len_str){
                        valStack.push(rit->str());
                    }else{
                        if((rit->str()).compare(2,len_str-2,valStack.top(),1,len_top-1)==0){
                            valStack.pop();
                        }else{
                        valStack.push(rit->str());
                        }
                    }
                }
            }
        }else{
            return 0;
            }
        }else{
    }

    ++rit;
    }


    if(valStack.empty()){
      return 1;
    }else{
      return 0;
    }

    }
};