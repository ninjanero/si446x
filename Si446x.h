// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef Si446x_H_
#define Si446x_H_
#include "Arduino.h"
#include "SPI.h"

class RF_Si446x {
public:

	enum RF_GPIO_Pin {
		GPIO_1, GPIO_2, GPIO_3,
	};

	/* Constructor for radio
	 * PRE: Device attached ;)
	 * POST: Device shall be configured to use the specified parameters for general.
	 * */
	RF_Si446x(uint8_t nSelPin, uint16_t baseFrequency, uint8_t irqPin = 0, uint8_t cstPin = 0, uint8_t sdnPin = 0);

	/* Main initiator of the module. performs POR, POWER_UP and SPI initialization, as well as channel and frequency setting.
	 * */
	void initialize();



protected:

private:

	uint8_t _pinNSel, _irqPin, _cstPin, _sdnPin;
	uint16_t _baseFreq;

};

#endif /* Si446x_H_ */
