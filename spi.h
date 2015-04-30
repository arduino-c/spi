
#ifndef SPI_H
#define SPI_H

void spi_init();

int spi_read(char *buf, int len);
int spi_write(char *buf, int len);

void spi_ioctl_select(int dev);
void spi_ioctl_release(int dev);

#endif /* SPI_H */
