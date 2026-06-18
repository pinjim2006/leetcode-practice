double angleClock(int hour, int minutes) {
    if(hour == 12) hour = 0;
    double minuteAngle = 6 * minutes;
    double hourAngle = (30 * hour) + (0.5 * (double)minutes);
    double tmp = (minuteAngle - hourAngle) > 0 ? (minuteAngle - hourAngle) : -(minuteAngle - hourAngle); 
    return tmp > 180 ? (360 - tmp) : tmp;
}