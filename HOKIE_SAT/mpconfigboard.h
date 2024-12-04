#define MICROPY_HW_BOARD_NAME       "Hokie_Satellite"
#define MICROPY_HW_MCU_NAME         "STM32L496"

//#define MICROPY_HW_HAS_SWITCH       (1)
//#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
//#define MICROPY_HW_ENABLE_USB       (1)

// MSI is used and is 4MHz,
// Resulting core frequency is 80MHz:
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// The board has an external Low Speed Cystal
//#define MICROPY_HW_RTC_USE_LSE      (1)

// The board has an external High Speed Cystal
//#define MICROPY_HW_RTC_USE_HSE		(1)

// Memory layout
#define MICROPY_HW_FLASH_FS_LABEL   "HokieSat"  // Label for the flash filesystem

// Total Flash and RAM sizes
#define MICROPY_HW_FLASH_SIZE       (1024 * 1024) // 1 MB Flash
#define MICROPY_HW_RAM_SIZE         (320 * 1024)  // 320 KB RAM

// UART Configuration
#define MICROPY_HW_UART1_TX			(pin_A9)	// TX on PA9
#define MICROPY_HW_UART1_RX			(pin_A10)	// RX on PA10
#define MICROPY_HW_UART_REPL		(1)			// Enable REPL on UART
#define MICROPY_HW_UART_REPL_BAUD	(115200)	// Baud rate for REPL

// Enable QuadSPI
//#define MICROPY_HW_QSPI_FLASH_ENABLE	(1)						// Enable QSPI flash
//#define MICROPY_HW_QSPI_FLASH_SIZE		(16 * 1024 * 1024)		// External QSPI flash in bytes (16 MB)

// QSPI Pin Assignments
//#define MICROPY_HW_QSPI_CLK			(pin_A3)	// QSPI Clock on PA3
//#define MICROPY_HW_QSPI_NCS			(pin_C11)	// QSPI on PC11
//#define MICROPY_HW_QSPI_IO0			(pin_C1)	// QSPI Data Line 0 on PC1
//#define MICROPY_HW_QSPI_IO1			(pin_C2)	// QSPI Data Line 1 on PC2
//#define MICROPY_HW_QSPI_IO2			(pin_C3)	// QSPI Data Line 2 on PC3
//#define MICROPY_HW_QSPI_IO3			(pin_C4)	// QPIS Data Line 3 on PC4

// USB 

// I2C configuration
//#define MICROPY_HW_I2C3_SDA			(pin_B4)	// SDA on PB4
//#define MICROPY_HW_I2C3_SDL			(pin_C0)	// SDL on PC0

// LED
#define MICROPY_HW_LED1				pin_D0	// LED on PD0
#define MICROPY_HW_LED2				pin_D1	// LED on PD1
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))
