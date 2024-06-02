struct CustomTime {
    int hours;
    int mins;
    int secs;
};

B. Here's the implementation of the timeToSecs member function:

cpp

int timeToSecs() {
    return hours * 3600 + mins * 60 + secs;
}

C. Here's the implementation of the AddTimes member function:

cpp

int AddTimes(CustomTime &t1, CustomTime &t2) {
    int totalSecs = t1.timeToSecs() + t2.timeToSecs();
    return totalSecs;
}