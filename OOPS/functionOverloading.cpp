// #include<bits/stdc++.h>
// using namespace std;

// //gives an error
// class Overload{
//     public:
//      int sum(int x, int y){
//         return x+y;
//     }
//      float sum(int x, int y){
//         return x+y;
//     }
// };

// int main(){
//     Overload o;
//      cout << o.sum(1.4,1);
// }

// #include<bits/stdc++.h>
// using namespace std;

// //gives an error
// class Overload{
//     public:
//      int sum(int x, int y){
//         return x+y;
//     }
//      float sum(int x, int y){
//         return x+y;
//     }
// };

// int main(){
//     Overload o;
//      cout << o.sum(1.4,1);
// }

#include <iostream>
#include <stdio.h>

using namespace std;

class over
{
public:
    int f(int x)
    {
        return x + 10;
    }

    int f(int x, int y = 10)
    {
        return x + y + 10;
    }
};

int main()
{
   
   over o;
   cout << o.f(10);
    return 0;
}


