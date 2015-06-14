

struct SensorMessage
{
  uint16_t location;
  uint16_t temperature_reading;
  uint16_t humidity_reading;
  uint16_t voltage_reading;
  uint16_t pressure_reading;
  uint16_t light_reading;
  SensorMessage(void): temperature_reading(0),humidity_reading(0),voltage_reading(0),pressure_reading(0),light_reading(0){};
};

