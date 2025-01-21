#ifndef OLED_H
#define OLED_H

//Oled pin definitions
#define SCL_PIN         22
#define SDA_PIN         23
#define U8LOG_WIDTH     16
#define U8LOG_HEIGHT    8

void initDisplay();
void oled88_bienvenida(void);
void mostrarDatos(float temperatura, float humedad);

#endif