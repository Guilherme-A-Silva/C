# Exercicio [4]

![C-programming-1024x530](https://user-images.githubusercontent.com/68473916/226371932-ed4684f7-fded-4170-802b-20a3271421c2.png)

# Apresentação do Problema

<h2> Uma empresa [X] quer que o desenvolvedor que eles contraram produza um algortimo que receba os dados de seus funcionarios e mostre os dados de todos os funcionarios no fim.<br> </h2>

# Esqueleto basico do algoritmo.

```c++
{
ㅤmain() /* função obrigatória */
ㅤ{
ㅤㅤ// Seu codigo...
ㅤ}
}
```

# Sugestões

[1] - Usem laços de repetição para armazenar os valores, para que vocês não tenham tanta dificuldade durante o exercicio. <br>

[2] - Use nomes de variavies faceis de entender, para que outro programador possa entender sua logica. <br>

[3] - Usem a struct que haviamos apresentados na ultima aula <br>

```c++
{
  typedef struct Funcionario{
    char Nome[60];
    int Idade;
    char Cargo[50];
    float Salario;
    // Sinta-se a vontade para acrescentar mais variaveis.
  }Funcionarios[50];
ㅤmain() /* função obrigatória */
ㅤ{
ㅤㅤFuncionarios funcionarios;
  }
ㅤ}
}
```

[4] - DIVIRTA-SE <br>
