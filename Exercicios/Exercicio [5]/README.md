# Exercicio [5]

![C-programming-1024x530](https://user-images.githubusercontent.com/68473916/226371932-ed4684f7-fded-4170-802b-20a3271421c2.png)

# Apresentação do Problema

<h2> Um hospital quer fazer um sistema para cadastrar o prontuario dos pacientes, apos cadastra-los, iremos filtrar os pacientes por estado(Grave,..etc). <br> </h2>

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
  typedef struct Paciente{
    char Nome[60];
    int Idade;
    char Estado[25]; // Vocês podem usar outros tipos de variaveis. Sinta-se livres, para usar a logica que quiserem.
    // Sinta-se a vontade para acrescentar mais variaveis.
  }Pacientes[50];
ㅤmain() /* função obrigatória */
ㅤ{
    Pacientes pacientes;
  }
ㅤ}
}
```

[4] - DIVIRTA-SE <br>
