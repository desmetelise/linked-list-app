    #include "bull.h" 
    
    Bull::Bull(int weight, int liftCapacity, std::string name){
        this->weight = weight;
        this->liftCapacity = liftCapacity;
        this->name = name;
    } 

    std::string Bull::to_string(void) {
            return "Weight: " + std::to_string(weight) + " tons, " + "Lifting Capacity: " + std::to_string(liftCapacity) + " tons, " + "Name: " + name;
    }