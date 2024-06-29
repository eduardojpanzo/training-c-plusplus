#include <iostream>

using namespace std;

int main() {
    int startHour, startMin, endHour, endMin;
    
    cin >> startHour >> startMin >> endHour >> endMin;
    
    int startTime = startHour * 60 + startMin;
    int endTime = endHour * 60 + endMin;
    
    int duration;
    if (endTime > startTime) {
        duration = endTime - startTime;
    } else {
        duration = (24 * 60 - startTime) + endTime;
    }
    
    int durationHours = duration / 60;
    int durationMin = duration % 60;
    
    cout << "O JOGO DUROU " << durationHours << " HORA(S) E " << durationMin << " MINUTO(S)" << endl;
    
    return 0;
}