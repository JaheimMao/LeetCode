// 0690_Employee Importance
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution {
public:
    unordered_map<int, Employee *> mp;

    int dfs(int id) {
        Employee *employee = mp[id];
        int total = employee->importance;
        for (int subId : employee->subordinates) {
            total += dfs(subId);
        }
        return total;
    }

    int getImportance(vector<Employee *> employees, int id) {
        for (auto &employee : employees) {
            mp[employee->id] = employee;
        }
        return dfs(id);
    }
};

int main(void){
    Solution test;
    vector<Employee*> employees = {};
    int id = 2;
    cout<<"\nThe total importance value of this employee and all their subordinates is "<<test.getImportance(employees, id)<<endl;
    return 0;
}