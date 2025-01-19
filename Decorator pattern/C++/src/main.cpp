#include "../include/Bread.h"
#include "../include/FlatBread.h"
#include "../include/ItalianBread.h"
#include "../include/WheatBread.h"

#include "../include/Cheese.h"
#include "../include/Corn.h"

#include<bits/stdc++.h>
using namespace std;

int main(){
    Bread* cornCheeseFlatBreadPizza = new ItalianBread();
    cornCheeseFlatBreadPizza = new Corn(cornCheeseFlatBreadPizza);
    cornCheeseFlatBreadPizza = new Cheese(cornCheeseFlatBreadPizza);
    cout<<cornCheeseFlatBreadPizza->cost();
}