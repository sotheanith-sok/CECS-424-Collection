Assignment-7
By: Sotheanith Sok 
Date: 10/17/2018

1.  Complete the following find function in C++
    template<class Iter, class T>
    Iter find(Iter first, Iter last, const T& val){
        while(first!=last){ //Check if we have reach the ending
            if(*first == val){ //The value store in that address is equaled to val
                return first; //return the address of that value
            }
            first = first + 1; //Increminated address by 1
        }
        return nullptr; //Return null pointer if it didn't find anything.
    }
    
2.  Why did C++ succeed?
    1.  Reasons:
            Low level access to machines plus abstractions mechanism 
            Peformance
            Direct access to read hardware. Ex. Access to address
            Very general zero-overhead 
            Compability with C
            Usefull tool since day one 
            Timing was good
            Non-propriatary
            ISO standard