#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
	    Person(string name){
	        this->name=name;
	    }
	    string getName(){
	     return name;
    	}
};


class Driver:public Person{
    
    public:
        
        Driver(string name): Person(name){}
    string getDriver(){
        return name;
    }
};

class MP:public Person{
    public:
        string constituency;
        int spendingLimit;
        int expenses;
        MP(string name,string constituency,int spending_limit):Person(name),
        constituency(constituency),spendingLimit(spending_limit),expenses(0)
        {
        }
        
        string getConstituency(){
            return constituency;
        }
        int getSpendingLimit(){
            return spendingLimit;
        }
        
        void spendMoney(int money){
            expenses+=money;
        }
};


class Minister:public MP{
    public:
        string ministry;
        Minister(string name,string consti,int slimit,string ministry):
            MP(name,consti,slimit),ministry(ministry){}
};

class PM:public Minister{
    public:
        bool havePlane=1;
        bool Arrest_Permission;
        
        PM(string name,string constituency,int spending_limit,string ministry,bool Arrest_Permission):
        
        Minister(name,constituency,spending_limit,ministry),Arrest_Permission(Arrest_Permission){}
            
        string getMinistry(){
            return ministry;
        }    
        
    
};

class Commissioner:public Person{
    public:
    Commissioner(string name):Person(name)
    {
    }
    bool canArrest(MP mp){
        if((mp.expenses>mp.spendingLimit)){
            return true;
        }
        else if( mp.expenses<=mp.spendingLimit){
            return false;
        }
        
    }
    bool canArrest(PM &pm){
        return false;
    }
    bool canArrest(PM pm,Minister minister){ 
        if(minister.expenses>minister.spendingLimit && (pm.Arrest_Permission)){
            return true;
        }
        return false;
    }
};


int main(){
    Minister yogi("yogi","Uttar Pradesh",100000,"Highway");
    yogi.spendMoney(50000);
    cout<<yogi.getConstituency()<<endl;
    PM  modi("narendra","varanasi",200000000,"prime",true);
    Commissioner dsp("mai hu dsp");
    if(dsp.canArrest(modi,yogi)){
        cout<<"minister Arrested";
    }
    else{
        cout<<"can't arrest";
    }
    return 0;
}
