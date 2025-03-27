#include <stdio.h>

int main() {
    int sexo, satisfacao, recomendacao, motivo;
    int totalRespondentes = 0;
    int feminino = 0, masculino = 0, naoInformado = 0;
    int muitoInsatisfeito = 0, insatisfeito = 0, neutro = 0, satisfeito = 0, muitoSatisfeito = 0;
    int recomendacaoSim = 0, recomendacaoNao = 0, recomendacaoTalvez = 0;
    int qualidade = 0, preco = 0, recomendacaoAmigos = 0, funcionalidades = 0, outro = 0;
    char novaLeitura;

    do {
        printf("--------------------------------------------------PESQUISA--------------------------------------------------\n");

        // Pergunta sobre o sexo
        printf("Sexo\n");
        printf("[1] Feminino\n");
        printf("[2] Masculino\n");
        printf("[3] Prefiro não informar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &sexo);

        // Pergunta sobre a satisfação
        printf("Em uma escala de 1 a 5, quão satisfeito você está com nosso serviço?\n");
        printf("[1] Muito insatisfeito\n");
        printf("[2] Insatisfeito\n");
        printf("[3] Neutro\n");
        printf("[4] Satisfeito\n");
        printf("[5] Muito satisfeito\n");
        printf("Escolha uma opção: ");
        scanf("%d", &satisfacao);

        // Pergunta sobre recomendação
        printf("Você recomendaria nosso serviço para um amigo?\n");
        printf("[1] Sim\n");
        printf("[2] Não\n");
        printf("[3] Talvez\n");
        printf("Escolha uma opção: ");
        scanf("%d", &recomendacao);

        // Pergunta sobre o motivo
        printf("Qual é o principal motivo pelo qual você escolheu nosso serviço em vez de outros disponíveis no mercado?\n");
        printf("[1] Qualidade\n");
        printf("[2] Preço\n");
        printf("[3] Recomendação de amigos/família\n");
        printf("[4] Funcionalidades específicas\n");
        printf("[5] Outro\n");
        printf("Escolha uma opção: ");
        scanf("%d", &motivo);

        // Incrementa os contadores
        totalRespondentes++;
        switch (sexo) {
            case 1: feminino++; break;
            case 2: masculino++; break;
            case 3: naoInformado++; break;
        }

        switch (satisfacao) {
            case 1: muitoInsatisfeito++; break;
            case 2: insatisfeito++; break;
            case 3: neutro++; break;
            case 4: satisfeito++; break;
            case 5: muitoSatisfeito++; break;
        }

        switch (recomendacao) {
            case 1: recomendacaoSim++; break;
            case 2: recomendacaoNao++; break;
            case 3: recomendacaoTalvez++; break;
        }

        switch (motivo) {
            case 1: qualidade++; break;
            case 2: preco++; break;
            case 3: recomendacaoAmigos++; break;
            case 4: funcionalidades++; break;
            case 5: outro++; break;
        }

        // Pergunta sobre nova leitura
        printf("--------------------------------------------------\n");
        printf("Nova leitura [S/N]: ");
        scanf("%d", &novaLeitura);

    } while (novaLeitura == 's' || novaLeitura == 'S');

    // Calcula as porcentagens
    float percFeminino = (feminino / (float)totalRespondentes) * 100;
    float percMasculino = (masculino / (float)totalRespondentes) * 100;
    float percNaoInformado = (naoInformado / (float)totalRespondentes) * 100;

    float percMuitoInsatisfeitoInsatisfeito = ((muitoInsatisfeito + insatisfeito) / (float)totalRespondentes) * 100;
    float percNeutro = (neutro / (float)totalRespondentes) * 100;
    float percSatisfeitoMuitoSatisfeito = ((satisfeito + muitoSatisfeito) / (float)totalRespondentes) * 100;

    float percRecomendacaoSim = (recomendacaoSim / (float)totalRespondentes) * 100;
    float percRecomendacaoNao = (recomendacaoNao / (float)totalRespondentes) * 100;
    float percRecomendacaoTalvez = (recomendacaoTalvez / (float)totalRespondentes) * 100;

    float percQualidade = (qualidade / (float)totalRespondentes) * 100;
    float percPreco = (preco / (float)totalRespondentes) * 100;
    float percRecomendacaoAmigos = (recomendacaoAmigos / (float)totalRespondentes) * 100;
    float percFuncionalidades = (funcionalidades / (float)totalRespondentes) * 100;
    float percOutro = (outro / (float)totalRespondentes) * 100;

    // Imprime o resultado
    printf("------------------------------------------------------------RESULTADO------------------------------------------------------------\n\n");

    printf("PERFIL RESPONDENTES\n");
    printf("Total de respondentes: %d\n", totalRespondentes);
    printf("Sexo Feminino: %.2f%%\n", percFeminino);
    printf("Sexo Masculino: %.2f%%\n", percMasculino);
    printf("Não informou sexo: %.2f%%\n\n", percNaoInformado);

    printf("GRAU DE SATISFAÇÃO\n");
    printf("Muito insatisfeito e Insatisfeito: %.2f%%\n", percMuitoInsatisfeitoInsatisfeito);
    printf("Neutro: %.2f%%\n", percNeutro);
    printf("Muito satisfeito e Satisfeito: %.2f%%\n\n", percSatisfeitoMuitoSatisfeito);

    printf("RECOMENDAÇÃO\n");
    printf("Sim: %.2f%%\n", percRecomendacaoSim);
    printf("Não: %.2f%%\n", percRecomendacaoNao);
    printf("Talvez: %.2f%%\n\n", percRecomendacaoTalvez);

    printf("MOTIVO QUE ESCOLHEU NOSSO SERVIÇO\n");
    printf("Qualidade: %.2f%%\n", percQualidade);
    printf("Preço: %.2f%%\n", percPreco);
    printf("Recomendação amigos/família: %.2f%%\n", percRecomendacaoAmigos);
    printf("Funcionalidades específicas: %.2f%%\n", percFuncionalidades);
    printf("Outro: %.2f%%\n\n", percOutro);

    // Grau de satisfação por sexo
    printf("GRAU DE SATISFAÇÃO POR SEXO\n");

    // Feminino
    printf("Feminino\n");
    if (feminino > 0) {
        printf("Muito insatisfeito e Insatisfeito: %.2f%%\n", ((muitoInsatisfeito + insatisfeito) / (float)feminino) * 100);
        printf("Neutro: %.2f%%\n", (neutro / (float)feminino) * 100);
        printf("Muito satisfeito e Satisfeito: %.2f%%\n\n", ((satisfeito + muitoSatisfeito) / (float)feminino) * 100);
    } else {
        printf("Nenhum respondente feminino.\n\n");
    }

    // Masculino
    printf("Masculino\n");
    if (masculino > 0) {
        printf("Muito insatisfeito e Insatisfeito: %.2f%%\n", ((muitoInsatisfeito + insatisfeito) / (float)masculino) * 100);
        printf("Neutro: %.2f%%\n", (neutro / (float)masculino) * 100);
        printf("Muito satisfeito e Satisfeito: %.2f%%\n\n", ((satisfeito + muitoSatisfeito) / (float)masculino) * 100);
    } else {
        printf("Nenhum respondente masculino.\n\n");
    }

    // Não informou o sexo
    printf("Não informou o sexo\n");
    if (naoInformado > 0) {
        printf("Muito insatisfeito e Insatisfeito: %.2f%%\n", ((muitoInsatisfeito + insatisfeito) / (float)naoInformado) * 100);
        printf("Neutro: %.2f%%\n", (neutro / (float)naoInformado) * 100);
        printf("Muito satisfeito e Satisfeito: %.2f%%\n\n", ((satisfeito + muitoSatisfeito) / (float)naoInformado) * 100);
    } else {
        printf("Nenhum respondente que não informou o sexo.\n\n");
    }

    printf("-------------------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}