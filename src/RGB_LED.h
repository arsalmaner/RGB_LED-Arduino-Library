#ifndef RGB_LED_h
#define RGB_LED_h

#include	<Arduino.h>

#define	COMMON_ANODE		1
#define	COMMON_CATHOD		0

class RGB_LED {
  public:
	RGB_LED(
		int _pinred = 3, 
		int _pingreen = 5, 
		int _pinblue = 6, 
		bool _type = COMMON_ANODE 
	);
	void set(unsigned long *param, int repeat = 0);
	int tick(void);
	
private:
	unsigned long   startTime;	
	int	count;
	bool	type;
	int	index;
	int	repeat;
	int	pinred;
	int	pingreen;
	int	pinblue;
	unsigned long *_params = NULL;
	void setRGB(unsigned long p);
};

#endif

