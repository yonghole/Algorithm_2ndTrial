#include <iostream>

using namespace std;

int main(){
    int hour, minute, ck_time;
    int hour_plus, minute_plus;
    int result_hour, result_minute;

    cin >> hour >> minute >> ck_time;

    hour_plus = ck_time / 60;
    minute_plus = ck_time % 60;

    result_hour = hour + hour_plus;
    result_minute = minute + minute_plus;
    
    if(result_minute >= 60){
        result_hour += (result_minute / 60);
        result_minute = result_minute % 60;
    }

    if(result_hour >=24){
        result_hour -= 24;
    }

    cout << result_hour << " " << result_minute << endl;


    return 0;
}