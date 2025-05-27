#include <stdio.h>

int main() {

float meta_aluguel, meta_condominio, meta_iptu, meta_ipva, meta_combustivel;
float meta_agua, meta_energia, meta_telefonia, meta_alimentacao, meta_educacao;
float meta_saude, meta_lazer;

float gasto_atual_aluguel, gasto_atual_condominio, gasto_atual_iptu, gasto_atual_ipva; 
float gasto_atual_combustivel, gasto_atual_agua, gasto_atual_energia, gasto_atual_telefonia;
float gasto_atual_alimentacao, gasto_atual_educacao, gasto_atual_saude, gasto_atual_lazer;

float gasto_anterior_aluguel, gasto_anterior_condominio, gasto_anterior_iptu, gasto_anterior_ipva; 
float gasto_anterior_combustivel, gasto_anterior_agua, gasto_anterior_energia, gasto_anterior_telefonia; 
float gasto_anterior_alimentacao, gasto_anterior_educacao, gasto_anterior_saude, gasto_anterior_lazer;

float total_meta, total_atual, total_anterior, fluxo;

int desvio = 0;
 
printf("Digite as metas de gastos por categoria:\n");
printf("Aluguel: "); scanf("%f", &meta_aluguel);
printf("Condominio: "); scanf("%f", &meta_condominio); 
printf("IPTU: "); scanf("%f", &meta_iptu);
printf("IPVA: "); scanf("%f", &meta_ipva);
printf("combustivel: "); scanf("%f", &meta_combustivel);
printf("Agua: "); scanf("%f", &meta_agua);
printf("Energia: "); scanf("%f", &meta_energia);
printf("Telefonia: "); scanf("%f", &meta_telefonia); 
printf("Alimentacao: "); scanf("%f", &meta_alimentacao);
printf("Educacao: "); scanf("%f", &meta_educacao);
printf("Saude: "); scanf("%f", &meta_saude);
printf("Lazer: "); scanf("%f", &meta_lazer);
 
printf("Digite os gastos do MES ATUAL por categoria:\n");
printf("Aluguel: "); scanf("%f", &gasto_atual_aluguel);
printf("Condominio: "); scanf("%f", &gasto_atual_condominio);
printf("IPTU: "); scanf("%f", &gasto_atual_iptu);
printf("IPVA: "); scanf ("%f", &gasto_atual_ipva);
printf("Combustivel: "); scanf("%f", &gasto_atual_combustivel);
printf("Agua: "); scanf("%f", &gasto_atual_agua);
printf("Energia: "); scanf("%f", &gasto_atual_energia);
printf("Telefonia: "); scanf("%f", &gasto_atual_telefonia);
printf("Alimentacao: "); scanf("%f", &gasto_atual_alimentacao);
printf("Educacao: "); scanf("%f", &gasto_atual_educacao);
printf("Saude: "); scanf("%f", &gasto_atual_saude);
printf("Lazer: "); scanf("%f", &gasto_atual_lazer);
 
printf("Digite os gastos do MES ANTERIOR por categoria:\n");
printf("Aluguel: "); scanf("%f", &gasto_anterior_aluguel);
printf("Condominio: "); scanf("%f", &gasto_anterior_condominio);
printf("IPTU: "); scanf("%f", &gasto_anterior_iptu);
printf("IPVA: "); scanf ("%f", &gasto_anterior_ipva);
printf("Combustivel: "); scanf("%f", &gasto_anterior_combustivel);
printf("Agua: "); scanf("%f", &gasto_anterior_agua);
printf("Energia: "); scanf("%f", &gasto_anterior_energia);
printf("Telefonia: "); scanf("%f", &gasto_anterior_telefonia);
printf("Alimentacao: "); scanf("%f", &gasto_anterior_alimentacao);
printf("Educacao: "); scanf("%f", &gasto_anterior_educacao);
printf("Saude: "); scanf("%f", &gasto_anterior_saude);
printf("Lazer: "); scanf("%f", &gasto_anterior_lazer);

total_meta = meta_aluguel + meta_condominio + meta_iptu + meta_ipva + 
meta_combustivel + meta_agua + meta_energia + meta_telefonia + 
meta_alimentacao + meta_educacao + meta_saude + meta_lazer;

total_atual = gasto_atual_aluguel + gasto_atual_condominio + gasto_atual_iptu + 
gasto_atual_ipva + gasto_atual_combustivel + gasto_atual_agua + 
gasto_atual_energia + gasto_atual_telefonia + gasto_atual_alimentacao + 
gasto_atual_educacao + gasto_atual_saude + gasto_atual_lazer;
            
total_anterior = gasto_anterior_aluguel + gasto_anterior_condominio +  
gasto_anterior_iptu + gasto_anterior_ipva + gasto_anterior_combustivel +  
gasto_anterior_agua + gasto_anterior_energia + gasto_anterior_telefonia +  
gasto_anterior_alimentacao + gasto_anterior_educacao + gasto_anterior_saude +  
gasto_anterior_lazer;  

fluxo = total_meta - total_atual;

printf("TOTAL DA META MENSAL R$: %.2f\n",total_meta);
printf("TOTAL DE GASTOS NO MES ATUAL R$: %.2f\n",total_atual);
printf("TOTAL DE GASTOS NO MES ANTERIOR R$: %.2f\n",total_anterior);
printf("FLUXO DE CAIXA (meta - gasto atual) R$: %.2f\n",fluxo);

if (total_atual > total_anterior) {
   printf("Atencao: Os gastos aumentaram em relacao ao mes anterior.\n");
} else if (total_atual < total_anterior) {
   printf("Parabens! Houve reducao nos gastos em relacao ao mes anterior.\n");	
} else {
   printf("Os gastos se mantiveram estaveis em relacao ao mes anterior.\n"); 
}

if (total_atual < total_meta) {
	printf ("Parabens! houve reducao de gastos em relacao a meta.\n");
desvio = 1;
}
if (total_atual > total_meta) { 
   printf("Atencao: Gastos do mes atual ultrapassaram a meta do mes.\n");
desvio = 1;
}

if (gasto_atual_combustivel > meta_combustivel) {
    printf("Considere economizar combustivel para equilibrar esta despesa.\n");
desvio = 1;
}

if (gasto_atual_agua > meta_agua) {
   printf("Considere economizar no consumo de agua para equilibrar esta despesa.\n");
desvio = 1;	  
}

if (gasto_atual_energia > meta_energia) {
   	printf("Considere economizar no consumo de energia eletrica para equilibrar esta despesa.\n");
desvio = 1;
}

if (gasto_atual_telefonia > meta_telefonia) {
   printf("Considere economizar em telefonia para equilibrar esta despesa.\n");
desvio = 1;    
}

if (gasto_atual_alimentacao > meta_alimentacao) {
   printf("Considere economizar em alimentacao para equilibrar esta despesa.\n");
desvio = 1;	
}

if (gasto_atual_lazer > meta_lazer) {
  printf("Considere economizar em lazer para equilibrar esta despesa.\n");
desvio = 1;  	
}

if (desvio == 0) {
printf("Nao houve desvios significativo em relacao a meta.\n");		
}

return 0;

}
