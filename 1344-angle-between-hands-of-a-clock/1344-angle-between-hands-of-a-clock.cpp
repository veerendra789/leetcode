class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute=6.0*minutes;
        double hours=30*(hour%12)+0.5*minutes;
        double diff=abs(minute-hours);
        return min(diff,360-diff);
    }
};