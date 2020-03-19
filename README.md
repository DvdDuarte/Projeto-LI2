# Projeto-LI2
Laboratórios de Informática II - PL5 - Grupo 5 - David Alexandre Ferreira Duarte A93253; Carlos Manuel Cerqueira de Oliveira A82884; Rodrigo Jorge Pinto Guimarães A93236

| -- 13/03/2020 -- |  |13:44|  
  A Pasta "Projeto e Regras" contem os pdf referentes ao projeto, como ele deve ser constituido assim como a sua data de entrega, e as regras e forma de jogar.
  A pasta "Rastros" contem os ficheiros do jogo, ou sejan , o ficheiro main, os ficheiros do cmake e pastas com os varios modulos do jogo.
  Uma das pastas chama-se "Camada de Interface" que contem os ficheiros de interface e interpretador. O ficheiro de interface tem uma funcao que imprime o tabuleiro. O ficheiro de interpretador contem funcoes que recebem comandos para jogar.
  A pasta de "Camada de dados" contem os ficheiros estruturasDados e modificaEstado. O ficheito estruturas de dados contem todos os tipos de dados utilizados para fazer o jogo desde estado em que esta uma peca ate ao tabuleiro e jogadas. O ficheiro modificaEstado contem funcoes que vao modificar o estado, tal como a funcao que inicializa o estado sempre que se comeca um  jogo novo.
  A pasta da "Logica do Programa contem o ficheiro para jogar. Este ficheiro chamado jogar contem a funcao que devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida e devolve verdadeir(valor diferente de zero) se for possivel e falso(zero) caso nao seja 

| -- 13/03/2020 -- |  |14:45|
Foram alterados os ficheiros jogar.c e jogar.h, onde foi colocada uma função auxiliar que ,dadas as coordenadas nas quais se pretende jogar, esta coloca a peça branca nessas mesmas coordenadas (função void coloca_peça).
Foi também invocada esta função auxiliar na função principal (int jogar).  Nessa funcao utiliza se um funcao auxiliar chamada transformaBrancaPreta, o qual levou a criacao dos ficheiro transformaBranca.c e transformaBranca.h. No ficheiro transformaBranca.c encontra-se a funcao transformaBrancaPreta definida, que pega na posicao da posicao branca e coloca la uma peca preta.

| -- 13/03/2020 -- |  |16:10|
Foi alterado o ficheiro interface, onde foi feita a funcao mostrar mapa que imprime o mapa dado um determinado estado. Foram criados os ficheiros imprimeCasa.c e imprimeCasa.h. O ficheiro imprimeCasa.c contem uma funcao que dada o estado o numero da linha e a coluna, ve qual e o tipo de peca que se encontra nessa casa (VAZIA, BRANCA e PRETA) e imprime a peca de acordo com o mesmo. Esta funcao e utilizada como uma funcao auxiliar na funcao mostrar_tabuleiro para imprimir o tabuleiro sempre que se faz uma jogada.

| -- 16/03/2020 -- |  |21:30|
Foi alterado o ficheiro jogar.c, no qual foi colocado um "if" que testa se a jogada é ou não válida, ou seja, se a casa onde se pretende jogar está vazia e se é vizinha da casa onde se encontra a peça branca.


| -- 18/03/2020 -- |  |11.35|
Alteração na função jogar, para validar as jogadas, ainda se encontra incompleto dado ao facto de não verificar se as coordenadas dadas existem. Foi feita também validação do fim de jogo.

| -- 19/03/2020 -- |  |15:52|
Foram alterados os ficheiros interface.c, interface.h e interpretador.c, nos quais foi adicionado o prompt a através da função mostrar_prompt que deverá imprimir um texto idêntico ao do exemplo presente no Guião 6.
