#include <iostream>
using namespace std;

void max_acts(){
    
    int N = 6;
    int start[]  = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int selected[2*N] = {1,2}; int count = 1;
    
    for(int i = 1; i < N; i++){
        if(selected[2*count - 1] <= start[i]){
            selected[2*count] = start[i];
            selected[(2*count)+1] = finish[i];
            count++;
        }
    }
    cout << "Maximum number of activities = " << count << endl;
    cout << "Selected activities: ";
    for(int i = 0; i < 2*count; i = i+2){
        cout << "(" << selected[i] << ", " << selected[i+1] << ")";
        if(i< 2*count -2) cout << ", ";
    }
}
int main() {
    max_acts();
    return 0;
}
