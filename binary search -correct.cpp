#include<iostream>
#include<vector>

using namespace std;

int Binary_search(vector<int>arr,int start,int end,int key){
    int mid=(start+end)/2;

    if(start>end){
        return -1;
    }

    if(arr[mid]==key){
        cout<<"found"<<endl;
        return 1;
    }
    else if(arr[mid]>key){
        return Binary_search(arr,start,mid-1,key);
    }
    else if(arr[mid]<key ){
        return Binary_search(arr,mid+1,end,key);
    }
    return -1;

}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int result =Binary_search(arr,0,arr.size()-1,1111);
    cout<<result;
    return 0;
}