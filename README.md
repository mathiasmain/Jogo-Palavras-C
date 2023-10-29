# Planejamento

Após iniciar o programa, é apresentado um menu, tendo:

1. Jogar
2. Consultar pontuação
3. Cadastrar uma palavra
4. Retirar uma palavra
5. Consultar palavras adicionadas
6. Sair

- Jogo: Primeiramente, será selecionado a dificuldade, e assim: fará uma leitura de uma **string**? aleatória por um sistema de seleção comandado por um rand().
    Após a leitura, basta apenas copiar essa string, retirar o tamanho dela, e dependendo do modo de dificuldade, retirar de 10% -> 50% das letras delas.
    Com base nisto, o jogador precisará acertar a palavra toda.
    
    Mid           - 20% faltando, 20 segundos e chances infinitas.
    A vida é dura - 30% faltando, 10 segundos, 5 chances.
    GOW           - 40% faltando, 5 segundos, 2 chances.

- Após criar o sistema de pontuação, é só ler o valor guardado **aonde** ??

- Ao selecionar para adicionar uma palavra, o programa criará uma pasta "repo.txt",
e com o modo write+, fará um append de uma palavra.

- Ao selecionar retirar uma palavra, o programa entrará no modo write+ **e**??

- Consultar palavras adicionadas, fará uma leitura com read até o fim do arquivo.

- Para sair, será usado um bool de valor modificado para 1 para indicar a saída.
