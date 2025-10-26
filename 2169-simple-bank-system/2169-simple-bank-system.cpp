#define ll long long
class Bank {
public:
    vector<ll>bal;
    Bank(vector<long long>& balance) {
        bal=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        int id1=account1-1,id2=account2-1;
        if(id1>=bal.size() || id2>=bal.size()) return false; 
        if((bal[id1]-money)<0) return false;
        bal[id1]-=money;
        bal[id2]+=money;
        return true;
        
    }
    
    bool deposit(int account, long long money) {
        int id=account-1;
        if(id>=bal.size()) return false;
        bal[id]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        int id=account-1;
        if(id>=bal.size()) return false;
        if((bal[id]-money)<0) return false;
        bal[id]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */