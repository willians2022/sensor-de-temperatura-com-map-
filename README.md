🌡️ Sensor de Temperatura com Arduino usando map()
📌 Descrição

Este projeto consiste na leitura de temperatura utilizando um sensor analógico conectado ao Arduino, com conversão dos valores usando a função map().

O sistema exibe os dados em um display LCD I2C e classifica automaticamente a temperatura em diferentes estados (frio, ambiente, calor, etc.).

A função map() é utilizada para converter os valores lidos da entrada analógica (0–1023) para uma faixa de temperatura em graus Celsius, 
facilitando a interpretação dos dados .

🚀 Funcionalidades
Leitura de temperatura via entrada analógica (A0)
Conversão dos dados com map()
Exibição em display LCD I2C
Classificação da temperatura:
❄️ Muito frio
🧥 Frio
🌤️ Ambiente
💧 Resfriante
🔥 Calor
☀️ Muito calor
Atualização em tempo real
🧰 Componentes utilizados
Arduino Uno
Sensor de temperatura (ex: LM35 ou TMP36)
Display LCD 16x2 com módulo I2C
Jumpers
Protoboard
🔌 Esquema de ligação (básico)
Sensor:
VCC → 5V
GND → GND
OUT → A0
LCD I2C:
SDA → A4
SCL → A5
