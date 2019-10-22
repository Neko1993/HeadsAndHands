#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

int findMaxIndex(vector<int> &mas){
    int maxi = INT_MIN;
    int maxi_ind = -1;
    for(int i = 0; i < mas.size(); i++){
        if(maxi < mas[i]) {
            maxi = mas[i];
            maxi_ind = i;
        }
    }
    return maxi_ind;
}

void test_findMaxIndex(int distrib = 300){
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,20);
    uniform_int_distribution<int> distribution2(1,distrib);

    int n = distribution(generator);
    vector<int> test_mas(n);
    cout <<"index:";
    for(int i = 0; i < n; i++){
        cout <<setw(5)<< i;
    }
    cout <<endl;
    cout <<"value:";
    for(int i = 0; i < n; i++){
        test_mas[i] = distribution2(generator);
        cout <<setw(5)<< test_mas[i];
    }
    cout <<endl;
    int answer = findMaxIndex(test_mas);
    cout <<"max_index: "<<answer;
}

int main() {
    test_findMaxIndex(201);
    return 0;
}