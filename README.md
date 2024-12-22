Conversões para Profissionais  

Este projeto em C implementa um sistema de conversões úteis para profissionais de diversas áreas. Ele fornece um menu interativo com funcionalidades como conversões de área, volume, comprimento, dados digitais, cálculos de materiais, e conversões de tempo.  

Funcionalidades :
As funcionalidades estão organizadas em módulos, correspondendo às opções do menu principal:  
1. Conversões de Área  
2. Conversões de Volume (em desenvolvimento)  
3. Conversões de Comprimento (em desenvolvimento)  
4. Conversões Digitais  
5. Cálculo de Materiais (em desenvolvimento)  
6. Conversões de Tempo (em desenvolvimento)  
7. Sair  

  Como Utilizar:
1. Compile o código com um compilador C, por exemplo:  
   ```gcc -o conversoes
   conversoes.c  
   ```  
2. Execute o programa:  
   ```
    ./conversoes  
   ```  
3. Escolha uma das opções do menu e siga as instruções exibidas.  

Estrutura do Código:
O projeto é modular e segue as boas práticas de programação. Ele inclui funções específicas para cada tipo de conversão, garantindo clareza e fácil manutenção.  

Conversões de Área:
Função principal: `converteArea()`  
Converte entre as seguintes unidades:  
cm²  
m²  
Hectare  
Km²  
ft² (pés quadrados)  
pol² (polegadas quadradas)  

Conversões Digitais:  
Função principal: `conversoes_digitais()`  
Converte bits para bytes e bytes para terabytes.  

Testes:
Este projeto inclui testes unitários para validar as funções implementadas. Abaixo estão exemplos dos testes criados:  

Testes de Conversões de Área  
Teste: `test_convert_area_to_cm2()`  
Objetivo: Validar a conversão de metros quadrados para centímetros quadrados.  
Cenário de teste:  
Entrada: `1.0 m²`  
Saída esperada: `10000.0 cm²`  

Teste: `test_convert_area_to_ft2()`  
Objetivo: Validar a conversão de metros quadrados para pés quadrados.  
Cenário de teste:  
Entrada: `1.0 m²`  
Saída esperada: `10.7639 ft²`  

Testes de Conversões Digitais  
Teste: `test_convert_bits_to_bytes()`  
Objetivo: Validar a conversão de bits para bytes.  
Cenário de teste:  
Entrada: `8000 bits`  
Saída esperada: `1000 bytes`  

Teste: `test_convert_bytes_to_terabytes()`  
Objetivo: Validar a conversão de bytes para terabytes.  
Cenário de teste:  
Entrada: `1e12 bytes`  
Saída esperada: `1.0 TB`  

 Instruções para Rodar os Testes  
1. Compile e execute o programa de testes junto ao código principal.  
2. Inclua os testes dentro de uma função `main` específica para execução de testes.  
3. Exemplos de saída serão exibidos no terminal ao rodar os testes.  

Abaixo está um exemplo de execução do programa:  
```
========== Conversões para Profissionais ==========  
Escolha uma das opções abaixo:  
1. Conversões de Área  
2. Conversões de Volume  
3. Conversões de Comprimento  
4. Conversões Digitais  
5. Cálculo de Materiais  
6. Conversões de Tempo  
7. Sair  
================ fim do menu ================  
Digite sua escolha (1-7): 4  
Digite o número de bits: 8000  
8000 bits equivalem a 1000.00 bytes.  
Digite o número de bytes: 1000000000000  
1000000000000 bytes equivalem a 1.000000000000 terabytes.  
```  

Contribuidores:
Patrick (queirozPatrick)  
Heitor (TorRLD)  
João Victor (PaimJv)  
Josimar (perseu120)  
André (dededutra)  
Ana Luiza (luizatxt)  
Juan (JGarc1as)  
Alex (Alex-SB7)  
Raidane (raiidane)
