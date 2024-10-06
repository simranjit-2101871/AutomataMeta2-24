/*QUESTION-->The computer systems of N employees of a company are arranged in a row. A technical fault in the power supply has caused some of the systems to 
turn OFF while the others remain ON. Because of this, the employees whose systems are OFF are unable to work. The company does not like to see 
its employees sitting idle. So until the technical team can find the actual cause of the breakdown, the technical head Adam has devised a 
temporary workaround for the OFF systems at a minimum cost. Adam decides to connect all the OFF systems to the nearest ON system with the 
shortest possible length of cable. To make this happen, he calculates the distance of each system from the first system. Write an algorithm 
to help Adam find the minimum length of cable he needs to turn all the systems ON .
*/
/*#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int systemState_size, dist_size;
    cin >> systemState_size;

    vector<int> systemState(systemState_size);
    for (int i = 0; i < systemState_size; ++i) {
        cin >> systemState[i];
    }

    cin >> dist_size;

    vector<int> dist(dist_size);
    for (int i = 0; i < dist_size; ++i) {
        cin >> dist[i];
    }

    int min_cable_length = numeric_limits<int>::max();
    int last_on_index = -1;

    for (int i = 0; i < systemState_size; ++i) {
        if (systemState[i] == 1) {
            last_on_index = i;
        }
    }

    for (int i = 1; i <= last_on_index; ++i) {
        if (systemState[i] == 0) {
            int cable_length = dist[i] - dist[last_on_index];
            min_cable_length = min(min_cable_length, cable_length);
        }
    }

    cout << min_cable_length << endl;

    return 0;
}
*/
//Send to friends to find the solutions