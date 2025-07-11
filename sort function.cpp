#include <iostream>
#include <queue>
#include <vector>
#include<algoorithm>

using namespace std;





int main(){
    vecor<string>m={"HII","HLLO","MEE","Z","KIII"};
    sort(m.begin(),m.end(),[](const string& a,const string& b){
        if(a.size()==b.size()){
            return a<b;
        }
        return a.size()<b.size();

    });


}