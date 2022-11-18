#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
//---------------------------------------------------------------------------------------------------------


// Instersection Function
void intersection_of_vectors(vector<int> vec_1, vector<int> vec_2){
    map<int, int> map_vec_1;
    map<int, int> map_vec_2;
    map<int, int> intsersecion_sets;
    for (auto it:vec_1)     map_vec_1[it]++;                // Iserting Vector_1 in Map_1
    for (auto it:vec_2)     map_vec_2[it]++;                // Iserting Vector_2 in Map_2
    cout<<"The Intersection Elements:\t[ ";

    // Inserting the Common Elements from Vector_1
    for (int i=0; i<vec_1.size(); i++) {
        if (!intsersecion_sets[vec_1[i]] && map_vec_1[vec_1[i]] && map_vec_2[vec_1[i]]) {
            intsersecion_sets[vec_1[i]]++;
            cout<<vec_1[i]<<" ";
        }
    }

    // Inserting the Common Elements from Vector_1
    for (int i=0; i<vec_1.size(); i++) {
        if (!intsersecion_sets[vec_2[i]] && map_vec_1[vec_2[i]] && map_vec_2[vec_2[i]]) {
            intsersecion_sets[vec_2[i]]++;
            cout<<vec_2[i]<<" ";
        }
    }

    // Finishing The Function
    cout<<"]."<<endl;
}




// ---------------------------------------------------------------------------------------------------------





void union_of_vectors(vector<int> vec_1, vector<int> vec_2){
    map<int, int> map_vec_1;
    map<int, int> map_vec_2;
    map<int, int> union_sets;
    for (auto it:vec_1)     map_vec_1[it]++;                // Iserting Vector_1 in Map_1
    for (auto it:vec_2)     map_vec_2[it]++;                // Iserting Vector_2 in Map_2
    cout<<"Union of The Two Vectors:\t[ ";

    // Inserting The Elements in Vector_1
    for (int i=0; i<vec_1.size(); i++){
        if (!union_sets[vec_1[i]]){
            union_sets[vec_1[i]]++;
            cout<<vec_1[i]<<" ";
        }
    }

    // Inserting The Elements in Vector_2
    for (int i=0; i<vec_2.size(); i++){
        if (!union_sets[vec_2[i]]){
            union_sets[vec_2[i]]++;
            cout<<vec_2[i]<<" ";
        }
    }

    // Finishing The Function
    cout<< "]." <<endl;
}




// ---------------------------------------------------------------------------------------------------------




void in_vec1_no_vec2(vector<int> vec_1, vector<int> vec_2){
    map<int, int> map_vec_1;
    map<int, int> map_vec_2;
    map<int, int> m1_diff_m2;
    for (auto it:vec_1)         map_vec_1[it]++;                // Iserting Vector_1 in Map_1
    for (auto it:vec_2)         map_vec_2[it]++;                // Iserting Vector_1 in Map_2
    cout<<"Elements Only in Vector_1:\t[";

    // Elements Unique in Vector_1 onlyyy
    for (int i=0; i<vec_1.size(); i++){
        if (!m1_diff_m2[vec_1[i]]  && map_vec_1[vec_1[i]] && !map_vec_2[vec_1[i]]){
            m1_diff_m2[vec_1[i]]++;
            cout<<vec_1[i]<<" ";
        }
    }

    // Finishing The Function
    cout<<"]."<<endl;
}



// ---------------------------------------------------------------------------------------------------------




void in_vec2_no_vec1(vector<int> vec_1, vector<int> vec_2){
    map<int, int> map_vec_1;
    map<int, int> map_vec_2;
    map<int, int> m2_diff_m1;
    for (auto it:vec_1)         map_vec_1[it]++;                // Iserting Vector_1 in Map_1
    for (auto it:vec_2)         map_vec_2[it]++;                // Iserting Vector_1 in Map_2
    cout<<"Elements Only in Vector_2:\t[";

    // Elements Unique in Vector_1 onlyyy
    for (int i=0; i<vec_2.size(); i++){
        if (!m2_diff_m1[vec_2[i]]  && !map_vec_1[vec_2[i]] && map_vec_2[vec_2[i]]){
            m2_diff_m1[vec_2[i]]++;
            cout<<vec_2[i]<<" ";
        }
    }

    // Finishing The Function
    cout<<"]."<<endl;
}


// ---------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------






int main() {

    // Decleartion of Vectors
    vector <int> v1 = {10,20,30,40,10};
    vector <int> v2 = {15,5,20,5,10,25};

    // Testing
    intersection_of_vectors (v1, v2);
    union_of_vectors (v1, v2);
    in_vec1_no_vec2 (v1, v2);
    in_vec2_no_vec1 (v1, v2);




    return 0;
}
