#include "is_prime.hpp"
#include <iostream>
#include <cmath>


bool is_prime(int n){

    

    if(n==0 || n==1){
        return false;
    }else{
        for(int i=2; i<=n/2; ++i){
            if(n%i==0)
                return false;
            
        }
    }
    return true;
}


bool is_prime_opt(int n){

    if(n==0 || n==1){
        return false;
    }else{
        int limit=(int)sqrt((double)n);
        for(int i=2; i<limit; ++i){
            if(n%i==0)
                return false;
        }
    }
    return true;

}