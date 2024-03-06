#include <vector>
using namespace std;

int min(vector<int> list){
  for(int i = 0; i < list.size(); i++) {
    if (list[1] > list[i]) {
      list[1] = list[i];
    }
  }
    return list[1];
}

int max(vector<int> list){
      for(int i = 0; i < list.size(); i++) {
    if (list[0] < list[i]) {
      list[0] = list[i];
    }
  }
    return list[0];
}
