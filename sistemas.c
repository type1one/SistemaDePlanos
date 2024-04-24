#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[40];
char cpf[12];
char dataNasc[11];
float valorIndividualPlanoSaude,
      valorTotalPlanoSaude;

char nomeOdonto[40];
char cpfOdonto[12];
char dataNascOdonto[11];
float valorIndividualPlanoOdonto,
      valorTotalPlanoOdonto;

int main() {
   int tipoPlano;
   
   printf("Qual o tipo de plano? 1 - Saúde | 2 - Odonto\n");
   scanf("%d", &tipoPlano);
   
   if (tipoPlano == 1) {
      printf("Informe o nome do beneficiário: ");
      scanf("%s", nome);

      printf("Informe o CPF do beneficiário: ");
      scanf("%s", cpf);

      printf("Informe a data de nascimento (dd/mm/aaaa) do beneficiário: ");
      scanf("%s", dataNasc);

      printf("Informe o valor individual do plano de saúde: ");
      scanf("%f", &valorIndividualPlanoSaude);

      valorTotalPlanoSaude = valorIndividualPlanoSaude;

      printf("\nBeneficiário: %s\n", nome);
      printf("CPF: %s\n", cpf);
      printf("Data de nascimento: %s\n", dataNasc);
      printf("Valor individual do plano de saúde: R$ %.2f\n", valorIndividualPlanoSaude);
      printf("Valor total do plano de saúde: R$ %.2f\n", valorTotalPlanoSaude);
   } else if (tipoPlano == 2) {
      printf("Informe o nome do beneficiário: ");
      scanf("%s", nomeOdonto);

      printf("Informe o CPF do beneficiário: ");
      scanf("%s", cpfOdonto);

      printf("Informe a data de nascimento (dd/mm/aaaa) do beneficiário: ");
      scanf("%s", dataNascOdonto);

      printf("Informe o valor individual do plano odontológico: ");
      scanf("%f", &valorIndividualPlanoOdonto);

      valorTotalPlanoOdonto = valorIndividualPlanoOdonto;

      printf("\nBeneficiário: %s\n", nomeOdonto);
      printf("CPF: %s\n", cpfOdonto);
      printf("Data de nascimento: %s\n", dataNascOdonto);
      printf("Valor individual do plano odontológico: R$ %.2f\n", valorIndividualPlanoOdonto);
      printf("Valor total do plano odontológico: R$ %.2f\n", valorTotalPlanoOdonto);
   } else {
      printf("Opção inválida!\n");
   }

   return 0;
}
