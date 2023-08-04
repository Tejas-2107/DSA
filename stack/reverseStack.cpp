
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
queue<int>q;
    void Reverse(stack<int> &st){
        if(st.empty()){
            return;
        }
        int top = st.top();
        q.push(top);
        st.pop();
        Reverse(st);
        st.push(q.front());
        q.pop();
    }
};

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
