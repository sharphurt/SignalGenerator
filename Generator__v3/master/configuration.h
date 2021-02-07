// Файл конфигурации системы
#ifndef CONFIG
#define CONFIG

// Адреса периферийных устройств
#define SLAVE_AMOUNT 2	// количество ведомых устройств

// адреса устройств

uint8_t addresses[SLAVE_AMOUNT] = {
	1, 2
};

uint8_t logicPins[8] = {
	6, 7, 8, 9, 10, 11, 12, 13
};
// Настройки UART
#define BAUD_RATE 38400	// скорость порта (бод)

// Пины
#define BUZZ_PIN 4		// пин буззера
#define POWER_BTN 5		// пин кнопки старт/стоп
#define FEEDBACK_PIN 2

#define LONG_SIG_DUR 1500
#define SHORT_SIG_DUR 250

#define ID				123456	// шестизначное число
#define POOL_PERIOD 	1000 // Период опроса входов всех слейвов (мс)



#endif