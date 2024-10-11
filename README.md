# Teste Seletivo - Target
3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); 
Ao final do processamento, qual será o valor da variável SOMA? <br><br>
**Resposta: Será 77.**<br>
**OBS: também fiz a questão num .cpp**

4) Descubra a lógica e complete o próximo elemento: <br>
    a) 1, 3, 5, 7, ( **9** ) <br>
    b) 2, 4, 8, 16, 32, 64, ( **128** )  <br>
    c) 0, 1, 4, 9, 16, 25, 36, ( **49** ) <br>
    d) 4, 16, 36, 64, ( **100** ) <br>
    e) 1, 1, 2, 3, 5, 8, ( **13** ) <br>
    f) 2,10, 12, 16, 17, 18, 19, ( **200** ) <br>

5) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?  <br> <br>
**Para facilitar a compreensão, vou chamar os interruptores de A B e C. <br>
Eu ligo o interruptor A, e espero até a lâmpada esquentar. Após um tempo, desligo o interruptor A, ligo o interruptor B, e entro numa das salas. Se ela estiver com a lâmpada apagada e quente, é a lâmpada referente ao interruptor A, se estiver acesa, é do interruptor B, e se estiver apagada e fria, é a lâmpada do interruptor C. <br>
Após fazer isso, desligo o interruptor que havia ligado, testando outro interruptor e deixando de fora o que foi descoberto na etapa anterior. Se por exemplo, a sala na qual eu entrei estava com a lâmpada acesa, já descobri a sala referente ao interruptor B, então agora faltam só o A e o C. Volto aos interruptores, desligo o interruptor B, e ligo o A, e entro em outra sala, descobrindo assim qual sala pertence ao A (a que estiver com a luz acesa) e qual pertence ao C (a que estiver com a luz apagada).**


