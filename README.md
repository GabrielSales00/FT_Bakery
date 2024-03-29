# FT_Bakery

Nesta atividade, os grupos vão examinar um código pronto, funcional, mas incompleto em alguns pontos. Em linhas gerais, portanto, o trabalho é de estudo e de codificação a partir do exemplo fornecido. Vamos chamar este método de Learning By Sample.

Faça:

1. Abra uma pasta nova no seu computador de trabalho para resolver o exercício.

2. Copie para esta pasta o arquivo aqui anexado e descompacte-o. Devem estar presentes os seguintes arquivos:
a02ex00.cpp
a02ex00.hpp
a02ex01_a.cpp
a02ex01_a.hpp
a02ex03_a.cpp
a02ex03_a.hpp
a02ex03_b.cpp
a02ex03_b.hpp
a02ex03_c.cpp
a02ex03_c.hpp
a02ex03.cpp
a02ex03_d.cpp
a02ex03_d.hpp
a02ex03_e.cpp
a02ex03_e.hpp
a02ex03.hpp

3. Veja em a02ex03.sh um script para compilar o projeto em shell (bash)

4. Compile o programa e rode-o usando também as opções '-v' e '-s'. Lembre-se que trata-se de um 'controle de padaria' bem simples. O programa não trata erros de entrada como a leitura de uma string quando se espera um valor numérico ou coisas do tipo. Portanto, execute com atenção as entradas de dados.

5. Liste a base de dados inicialmente vazia e veja o resultado de tela.

6. Insir em qualquer ordem vários ítens: pães (bread), bolachas (cracker) e bolachas recheadas (filled wafer).

7. Liste a base de dados e veja o resultado de tela.

8. Repita os passos 6 e 7 quantas vezes quiser.

9. Veja que os itens 2, 3, 6 e 7 do menu de inserção não funcionam porque não há código para eles. Mas eles não geram erros, apenas não permitem entrada de dados. Procure no código onde as chamadas de função deveriam estar.

10. Examine os códigos (hpp e cpp) das classes "Comida", "Bolacha", "Bolacha Recheada" e "Pão". Para coerência com o programa, altere seus nomes, respectivamente para "Food", "Cracker", "Filled Wafer" e "Bread". Altere todo o código que for necessário para isto.

11. Use as classes "Food", "Bread", "Cracker", "Filled Wafer" como base conceitual e crie as classes "Cheese", "Cottage Cheese", "Ham" e "Mortadella". "Cottage Cheese" deriva-se de "Cheese"; todas as demais, de "Food".

12. Altere o programa criando os métodos:

void insertCheese(void);
void insertCottageCheese(void);
void insertHam(void);
void insertMortadella(void);

Lembre-se de colocar os #include's necessários para usar as novas classes.

13. Insira apropriadamente as chamadas aos novos métodos para que o menu de inserção de itens funcione completamente.

14. Veja que é possível listar a base de dados já com novos itens, SEM ALTERAR o código de void listItems(). Entenda como o polimorfismo proporcionou esta possibilidade e examine a função em detalhes até ter certeza de compreendê-la.

15. Estude todos os elementos desta linha: cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;

16. Estude a função void clearAll(). ELA ESTÁ ERRADA. Localize e corrija o erro.

17. Todas as funções que estão em a02ex03.cpp são iguais às da programação estruturada, no sentido de que não pertencem a classes (não são métodos). Assim, o programa é um "C com classes" mais que "orientado a objetos". Reverta esta situação da seguinte maneira:

18. Crie uma classe "MyProgram" que encapsule, agora como métodos privados, as funcões de a02ex03.cpp.

19. verboseMode, shortMessageMode e myMainList devem ser atributos privados de MyProgram. Acabam-se as variáveis globais !!!

20. Crie os métodos públicos get / set para verboseMode e shortMessageMode.

21. Crie um método público void start() para MyProgram, com todo o conteúdo da atual main, EXCETO: verifyArguments(argc, argv); Elime a atual main de a02ex03.cpp, deixe só o start.

22. Crie os arquivos hpp e cpp com o nome "FT_bakery" e crie nele a função main. Vai ser o novo ponto de entrada.

23. Passe void verifyArguments(int argc, char* argv[]) para FT_bakery, fazendo ajustes necessários em hpp e cpp's.

24. Na função main (que agora está SÓ em FT_bakery), crie DINAMICAMENTE um objeto MyProgram, use os set's para ajustar verboseMode e shortMessageMode e chame start. Dessa forma, todo o processamento ficará a cargo do objeto e não de funções soltas.

25. A padaria vai começar a vender leite, água, refrigerante e cerveja. Crie uma classe "Liquid", derivada de "Food" com os atributos comuns a todos estes novos produtos.

26. Crie as classes "Milk", "Water", "Soda" e "Beer". Crie também 4 derivadas de Beer, correspondentes a diferentes tipos de cerveja.

27. Altere MyProgram para acomodar estes novos produtos. No menu de inserção, ao escolher "Beer", um novo submenu deve ser aberto, somente com os tipos de cerveja. Faça o código conforme a estrutura já fornecida (veja como é aberto um submenu, ...).

28. Veja que é possível continuar com o programa SEM ALTERAR o código de void listItems() e de void clearAll().

29. Faça a limpeza do código: elimine #include's desnecessários, acerte formatação, apague todos os trechos de código comentado (não os comentários de documentação), ordene os métodos e verifique se os escopos de visibilidade estão adequados.

30. Mostre em sala, para avaliação, estes procedimentos concluídos. Veja os prazos da atividade no Moodle.

31. Após a avaliação, poste UM .zip com todo o código no Moodle.

Bom trabalho.
