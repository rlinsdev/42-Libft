<h1 align="center">  Libft - 42sp </h1>

<p align="center">:information_source: Uma Biblioteca estática em C com funções padrão recodificadas </p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> </p>
 

<h2 align="center" id="o-que-e-libft"> O que é Libft? </h2>

 O Primeiro projeto na 42. Consiste em uma biblioteca estática em C com funções padrão da linguagem recodificadas que rodam e compilam usando um Makefile.
 A biblioteca pode ser usada de apoio em projetos futuros, uma vez que não é permitido o uso das funções originais.
 Uma vez que tenha terminado o projeto, você pode (e deve) incluir mais funções à sua Libft.
	
Divisão do projeto

#### Parte I.
 
>Nessa primeira parte, você deve recodificar um conjunto de funções da libc, como definidas em seu manual (man).
>Suas funções precisam apresentar o mesmo protótipo e compartamento das originais. Além disso o nome das funções devem apresenar o prefixo “ft_”. Por exemplon, a strlen se torna
>ft_strlen. **ft_ vem de forty-two(42).
	
<p align="center">• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi • calloc • strdup</p>
 
#### Parte II.
>Nessa segunda parte, você deve codar um punhado de funções que ou não estão inclusas na libc ou 
>foram incluídas de uma outra forma. Algumas dessas funções podem ser úteis para escrever as funções da parte I.

<p align="center">• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd</p>
	
 <h2 align="center" id="requisitos"> Requisitos </h2>

<p  align="center"> :warning: O projeto deve estar de acordo com a <a href="https://github.com/42School/norminette/blob/master/pdf/pt_br.norm.pdf" target="blank">Norma</a> </p>
A Norma é um padrão de programação que define um conjunto de regras a seguir ao escrever um código na 42. A norma aplica-se a todos os projetos C dentro do currículo interno por padrão, e para qualquer projeto onde é especificado. Aqui algumas das regras:

    Cada função dever ter no máximo 25 linhas, não contando suas próprias chaves '{}'.
    
    Cada linha deve ter no máximo 80 colunas de largura, comentários incluídos.
    
    Uma função pode ter no máximo 4 parâmetros definidos.
   
    Não podem ser declaradas mais que 5 variáveis por função.
    
    Não é permitido o uso de: for , do...while , switch , case ,  goto  ,
    operadores ternários como `?' e VLAs - Matrizes de comprimento variável.
  A norminette (como chamamos a norma na 42) é feita em python e é open source.
  
  Além da norma padrão, o projeto tem alguns requisitos próprios
  
    É proibido declarar variáveis globais.
   
    Usar o comando libtool para criar a biblioteca é proibido.
    
    O Makefile deve compilar com as flags -Wall, -Wextra e -Werror
 
 <h2 align="center" id="funcoes"> Funções </h2>
 
 Essas são as funções presentes na minha Libft atualmente - algumas não fazem parte do subject - já que podemos posteriormente adicionar funções para usar em outros projetos.
 
### Funções da <ctype.h>
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_isalpha.c">ft_isalpha</a> - checa se é um caractere alfabético.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_isdigit.c">ft_isdigit</a> - checa se é um digito (0 a 9).
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_isalnum.c">ft_isalnum</a> - checa se é um caractere alfanumérico.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_isascii.c">ft_isascii</a> - checa se é um caractere que faz parte da tabela ASCII tradicional.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_isprint.c">ft_isprint</a> - checa se é um caractere printável.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_toupper.c">ft_toupper</a> - converte o caractere para maiúsculo.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_tolower.c">ft_tolower</a> - converte o caractere para minúsculo.
	
### Funções da <string.h>
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_memset.c">ft_memset</a> - enche o bloco de memória com um mesmo byte.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strlen.c">ft_strlen</a> - calcula o tamanho de uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_bzero.c">ft_bzero</a> - preenche uma string com zero.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_memcpy.c">ft_memcpy</a> - copia uma área de memória.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_memmove.c">ft_memmove</a> - copia uma área de memória.
 
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strlcpy.c">ft_strlcpy</a> - copia uma string para um tamanho especificado.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strlcat.c">ft_strlcat</a> - concatena uma string para um um tamanho especificado.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strchr.c">ft_strchr</a> - localiza a primeira ocorrência de um caractere em uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strrchr.c">ft_strrchr</a> - localiza a última ocorrência de um caractere em uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strncmp.c">ft_strncmp</a> - compara duas strings.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_memchr.c">ft_memchr</a> - checa um bloco de memória em busca de um caractere.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_memcmp.c">ft_memcmp</a> - compara blocos de memória.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strnstr.c">ft_strnstr</a> - localiza uma substring dentro de uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strdup.c">ft_strdup</a> - cria uma duplicata da string passada como parâmetro.
	
### Funções da <stdlib.h>
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_atoi.c">ft_atoi</a> - converte uma string para um inteiro.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_calloc.c">ft_calloc</a> - alloca memória e seta o valor de todos os bytes para 0.
	
### Funções não-padrão da linguagem
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_substr.c">ft_substr</a> - retorna uma substring de uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strjoin.c">ft_strjoin</a> - retorna uma string que é a junção das duas strings passadas como parâmetro.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strtrim.c">ft_strtrim</a> - Corta o início e fim de uma string quando achada a sequência de caracteres passada.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_split.c">ft_split</a> - separa uma string em várias substrings delimitadas por um caractere.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_itoa.c">ft_itoa</a> - converte um número em string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_strmapi.c">ft_strmapi</a> - aplica uma função a cada caractere de uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_striteri.c">ft_striteri</a> - aplica uma função a cada caractere de uma string.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_putchar_fd.c">ft_putchar_fd</a> - da como output um caratere para um file descriptor.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_putstr_fd.c">ft_putstr_fd</a> - da como output uma string para um file descriptor.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_putendl_fd.c">ft_putendl_fd</a> - da como output uma string para um file descriptor, seguido por uma nova linha.
	
• <a href="https://github.com/rlinsdev/42-Libft/blob/main/Libft/ft_putnbr_fd.c">ft_putnbr_fd</a> - da como output um número para um file descriptor.
	
	
<h2 align="center" id="makefile"> Makefile </h2>

<p align="center">:information_source: Uma ferramenta de automacão para rodar e compilar seus programas com maior eficiência.	</p>

Um Makefile define uma série de tarefas para serem executadas em shell script. Essas tarefas são escritas em um target nesse formato:
	
	target: pré-requisitos
	<TAB> receita

<h2 align="center" id="como-eu-testo"> Como eu testo? </h2>

Para testar o código vamos usar um Tester para a Libft feito pelo @jgambard. Há vários outros bons testers mas hoje vou cobrir apenas esse.
    
    git clone https://github.com/Tripouille/libftTester libftTester
Entre na pasta do Tester e rode o teste mandatório e então o bônus:

    cd libftTester
    make m
    make b
    
Se você fez tudo corretamente, deve ver algo como isso:
![image](https://user-images.githubusercontent.com/81205527/149175403-68b2b73b-5669-45ff-a874-e95055abe0e3.png)

<h2 align="center" id="42-cursus"> 42 Cursus </h2>
	
A 42 é uma iniciativa educacional global que propõe uma nova forma de aprender tecnologia: sem professores, sem salas de aula,
estudantes aprendendo com seus colegas estudantes (Aprendizado peer to peer),
com uma metodologia que desenvolve habilidades de computação e da vida.
Sem mencionar que é completamente gratuita e aberta para todos, sem pré-requisitos. 
    
As admissões na 42 são diferentes de outras escolas. Usamos um processo de admissão baseado em mérito.
O passo final no processo é a Piscina - parte parte do processo seletivo que requer 4 semanas de código intenso e imersivo.
Não é necessário experiência anterior em programação.
    
Você pode conferir mais sobre o processo de admissão no site da 42sp: https://www.42sp.org.br
    