## Resuméco

Essa primeira condição refere-se às bordas do retangulo, caso o valor I ou J atenda qualquer uma desses casos, ele é um valor da borda do retangulo e deve ser printado.
~~~C
if (j == 0 || i == 0 || i == y - 1 || j == x - 1 )
~~~

Dentro dessa condição exploramos os casos de borda (as quinas)
~~~C
(j == 0 && i == 0) // Representa a quina superior esquerda
(j == x - 1 && i == 0) // Representa a quina superior direita

(j == 0 && i == y - 1) // Representa a quina inferior esquerda
(j == x - 1 && i == y - 1 ) // Representa a quina inferior direita
~~~

Com o entendimento dessas condições cada função Rush trata as bordas de maneira similar, colocando o caractere solicitado na posição solicitada, caso nenhuma codição seja atendida ela printará o valor padrão, EX: RUSH02 o valor padrão é 'B';

As outras tratativas referem-se a valores inseridos que a não devem ser impressos, como caso seja dado o input de valor negativo ela deverá ignorar ou entao tratar o valor para se tornar positivo.
