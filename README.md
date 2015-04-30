SPI
===

SPI driver for Arduino Uno

###Usage

* Set up pin-definition, SPI-mode and speed divider macro in *spi.c* 
```c
#define DDR_SPI		DDRB
#define PORT_SPI	PORTB
#define DD_MOSI		3
#define DD_SCK		5
#define DD_SS		2

/* SPI mode settings */
#define SPI_MODE_MASTER	1
#define SPI_CPOL	0
#define SPI_CPHA	0

...

#define SPI_CLK_DIVIDER_VALUE SPI_CLK_DIV64
#define SPI_DOUBLE_SPEED 1 /* SPI speed * 2 */
```
* Write your code, e.g. in *main.c*

```c
...
#include <spi.h>

int main() {

  char c;
  c = ANY_SPI_DATA_BYTE;
  
  /*select dev #0 on SPI bus*/
  spi_ioctl_select(0);
  spi_write(&c, 1);
  spi_read(&c, 1);
  /*release selected device*/
  spi_ioctl_release(0);
  
  return 0;
}
```
