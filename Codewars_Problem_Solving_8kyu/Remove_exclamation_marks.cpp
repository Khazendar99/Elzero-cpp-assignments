#include <string>

std::string removeExclamationMarks(std::string str){
  //your code here
  std::string newStr = "";
  for(int i = 0; i < str.size(); i++) {
    if(str[i] == '!') {
      continue;
    }
    newStr += str[i];
  }
  return newStr;
}
