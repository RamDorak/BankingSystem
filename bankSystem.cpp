#include <algorithm>
#include <string>
#include <ctime>
#include <vector>
using std::string, std::vector;

class UserDetails{
    private:
        string name;
        tm DOB;
        string address;
        string unqID;
    public:
        UserDetails(string name, tm DOB, string address, string unqID):
        name(name), DOB(DOB), address(address), unqID(unqID){}

        const string& getName(){
            return name;
        }
        const tm& getDOB(){
            return DOB;
        }
        const string& getAddress(){
            return address;
        }
        const string& getUnqID(){
            return unqID;
        }
};

class TransactionHistory{
    private:
        tm timestamp;
        string type;    // Withdrawal or Deposit?
        double remBalance;
        string othParty; // Sender or Receiver?
        string othName;
    public:
        TransactionHistory(tm timestamp, string type, double remBalance, string othParty, string othName):
        timestamp(timestamp), type(type), remBalance(remBalance), othParty(othParty), othName(othName){}

        const tm& getTime(){
            return timestamp;
        }
        const string& getTransType(){
            return type;
        }
        double getRemBalance(){
            return remBalance;
        }
        const string& getOthParty(){
            return othParty;
        }
        const string& getOthName(){
            return othName;
        }
};

class Account{
    private:
        u_int32_t acID;
        UserDetails uD;
        u_int32_t passWord;
        string accountType;
        string IFSC;
        double balance;
        double withdrawalLimit;
        vector<TransactionHistory> transactionHistory;
};