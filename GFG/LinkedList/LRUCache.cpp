#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
        int capacity;
        unordered_map<int,list<pair<int,int>>::iterator> res;
        list<pair<int,int>> head;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        capacity=cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(res.find(key)!=res.end()){
            auto it=res[key];
            pair<int,int> p=*it;
            head.erase(res[key]);
            head.push_front(p);
            res[key]=head.begin();
            return (p.second);
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here   
        if(res.find(key)!=res.end()){
            head.erase(res[key]);
        }
        else{
            if(head.size()==capacity){
                res.erase(head.back().first);
                head.pop_back();
            }
        }
        head.push_front({key,value});
        res[key]=head.begin();
       
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends