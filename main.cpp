#include "database.h"
#include <iostream>

typedef Singleton<Database> DatabaseSingleton;   // Global declaration

int main(){
    DatabaseSingleton::Instance()->log("Logged from main");
    return 0;
}

 
