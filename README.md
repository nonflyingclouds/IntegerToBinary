<sub> Ok, o salto de legibilidade entre esse código e o meu anterior (https://github.com/nonflyingclouds/sqrt2CEFET2012) me impressionou um pouco. </sub>
# Integer to Binary, primeiro código decente que eu fiz na minha vida.

##### Roubei a ideia de fazer ele depois de ver alguns minutos do CS50x, pois eu estava entediado.
Eu nem sei como eu explicaria como esse código funciona, ele só funciona. E funciona BEM, viu? Matter of fact, esse foi provavelmente o meu código mais bem feito nesses longos 4 meses programando.

~~Uma coisa, você não escolhe o valor que ele vai transformar em binário com argumento e coisa assim, você precisa alterar o #DEFINE DEFAULT_VALUE lá em cima do código ou trocar o valor recebido pela função itob.~~

Agora que eu reescrevi o código, podendo ser obtido pela pasta pitob _(Positive Integer to Binary)_, ele aceita argumentos, sendo eles, respectivamente, o número decimal a ser convertido, a sua array e o tamanho da sua array __ignorando o caractere final nulo__.

---

#### >👽: Você sabia que você só precisava dividir o número por 2 e gravar o resto da divisão, né?
>
_Morrar._ Mas eu sabia sim, mas eu gostei mais de ocupar 3 vezes mais linhas pra fazer desse jeito aqui.

#### > 👽: O que você pretende fazer agora?
> Todas as novas mudanças só poderão ser encontradas dentro da pasta pitob, que contém a versão mais atualizada do código.
> 
 - ✅ ~~Fazer uma forma de tirar a necessidade de declarar uma array apenas para o número binário (para poder o retornar mais facilmente, né).~~
    - Odeio números binários que começam por 0, randomicamente me proibindo de retorná-los como int.
    - Feito ao, ao invés de retornar a array, declará-la fora da função como uma array (char) vazia e modificá-la usando um pointer dentro da função pitob().
 
 - ✅ ~~Também arranjar algum jeito de implementar argc e argv no código .c.~~
    - Feito no código MAIN.c.
 
 - ✅ ~~Fazer o .h pra ele e postar aqui, o que eu devo conseguir ainda hoje.~~
    - Não fiz no dia, porém consegui.


