# Sensor de Irrigação Automático com Arduino

Este é um projeto feito para detectar se a terra está seca ou úmida, e caso esteja seca, ele liga uma bomba de água, para que a terra seja umedecida.

## Motivação

Este é um projeto para exposição em uma feira de profissões, que ocorrerá em uma universidade. <br />
É uma modificação de um projeto existente exibido [nesse vídeo](https://www.youtube.com/watch?v=FGrN8tdAhi8&ab_channel=BitaBit).

## Montagem

O projeto segue esse diagrama:

![diagrama (1)](https://github.com/user-attachments/assets/0463aefc-6eb8-4e24-a52c-05cde3f00ff9)
_Imagem retirada do vídeo mencionado acima e ampliada por IA._

Há também uma versão digital do projeto, que está disponível no [Tinkercad](https://www.tinkercad.com/things/anHxaQcpELA-sensor-de-irrigacao-com-arduino). <br />
Para que funcione na plataforma, ele foi levemente modificado, mas a lógica é a mesma, e a sua montagem pode ser vista pelo link acima.

Ambos os códigos estão presentes neste repositório.

## Componentes

- 1 Arduino Uno;
- 1 mini bomba d'água;
- 1 sensor de umidade de solo;
- 1 módulo relé 5VDC / 10A 250VAC / 15A 125VAC
- 1 fonte de 5V utilizada para alimentar a bomba d'água (pode-se utilizar fonte de 3 a 6V);
- 1 fonte de 12V para alimentar o Arduino;
- 1 mangueira utilizada na bomba d'água.

São os mesmos componentes presentes no vídeo.

## Dependências

O código para o projeto físico depende de uma biblioteca chamada `LiquidCrystal_I2C`. <br />
Para efetuar o download, clique [aqui](https://drive.google.com/file/d/1bSa5tyCN3MOfJj4zkT1RD-bnLCxr6tFv/view).

A instalação segue o mesmo princípio de um vídeo que ensina a como usá-la e também o link de download é proveniente deste mesmo vídeo. <br />
Clique [aqui](https://www.youtube.com/watch?v=5OSPk5oHhVM&ab_channel=BrincandocomIdeias) para assisti-lo.
