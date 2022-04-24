class UndergroundSystem {
public:
    
    
    map<int,pair<string,int>>chin;
    map<string,pair<int,int>>chout;
    multimap<pair<string,string>,int>total;
    
    
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        
        chin[id]={stationName,t};
        
    }
    
    void checkOut(int id, string stationName, int t) {
       
        if(chin.find(id)!=chin.end())
        {
            chout[stationName]={id,t};
            total.insert({{chin[id].first,stationName},t-chin[id].second});
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        double c =0;
        double avg=0;
       for(auto i = total.begin();i!=total.end();i++)
       {
           if(i->first.first == startStation and i->first.second == endStation)
           {
                 c++;
                 avg += i->second;
           }
       }
        
        return(avg/c);
        
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */