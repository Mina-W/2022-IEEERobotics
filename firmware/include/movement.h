void motor_shield_setup();

void escape_white_box();

//when on short road, turn or adjust left
void turnleftshort(unsigned int sensorValues[]);

//when on short road, turn or adjust left
void turnleftlong(unsigned int sensorValues[]);

//when on short road, turn or adjust right
void turnrightshort(unsigned int sensorValues[]);

//when on long road, turn or adjust right
void turnrightlong(unsigned int sensorValues[]);

void stopmotors();

void checkturnshort(unsigned int sensorValues[]);

void checkturnlong(unsigned int sensorValues[]);