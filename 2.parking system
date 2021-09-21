class ParkingSystem {
public:
    vector<int> ctr;
    ParkingSystem(int big, int medium, int small) {
         ctr={big,medium,small};  
        
    }
    
    bool addCar(int carType) {
         return ( ctr[carType - 1]-- ) >  0;        
    }
};
