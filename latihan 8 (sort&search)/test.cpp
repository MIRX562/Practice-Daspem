#include <iostream>
#include <algorithm>

using namespace std;
int main(){

    int arr[] = {5,6,7,8};
    int target[] = {3,5,6,7,8,10};
    int res[];
    
    int n = sizeof(arr) / sizeof(*arr);
    for(int i; i < sizeof(target)/sizeof(*target);i++){
        int x = 0;
        bool exists = std::find(arr, arr + n, target) != arr + n;
        if (exists) {
            std::cout << "Element found";
        } else {              
            res[x] = target[i];
            x=x+1;
            cout<<res[x]<<endl;
        }
    }
    getch();
    return 0;
}
