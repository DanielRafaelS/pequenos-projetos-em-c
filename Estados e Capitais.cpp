#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(void){
	
	float estadoacerto = 0, siglaacerto = 0, capitalacerto = 0, conAcerto, contErros;
	char resposta, aceita;
	char estado[30], sigla[2], capital[100];
	int a ;
	
	printf("          BEM-VINDO AO JOGO DE\n     MEMORIA DOS ESTADOS BRASILEIRO\n");
	printf("\nAqui voce precisa acertar o nome dos Estados,\nsuas siglas, e suas capitais.\n");
	
	printf("\n____________________________________________\n\n");
	
	printf("\n\n          ****OBJETIVO DO JOGO****\n\n");
	printf("o jogo inicialmente pergunta nome do primeiro\nestado, em seguida pergunta a sigla do estado\ne em por fim pergunta o nome da capital.");
	printf("\n\nCaso voce erre alguma das perguntas,o jogo\nautomaticamente ira para o proximo estado.\n");
	printf("\nEXEMPLO : caso voce acerte o nome do segundo\nestado, mas erra a abreviacao, o jogo\nautomaticamente pula para o terceiro\nestado da lista alfabetica.");
	printf("\n____________________________________________\n\n");
		
		
	printf("\n\n      ****OBSERVACOES IMPORTANTES:****\n\n");
	
		
	printf("--Acentuacoes devem ser ignoradas ao preencher\n");
	printf("--O jogo esta em ordem alfabetica por *ESTADO*\n");
	printf("--Para realizar espacamento entre as palavras\nUtilize um sublinhado UNDERSCORE\n");
	printf("\nEXEMPLO :  joguinho_dos_estados\n\n");
	
	printf("\n____________________________________________\n\n");
	
	printf("prescione ENTER para comecar o jogo :3 ");
		
	printf("\n____________________________________________\n\n");
	fflush(stdin);
	scanf("%c", &aceita);	
	printf("\n\n BOA SORTE !!! :D \n\n");	
//	while(aceita =='s') {
			
			 {
				estadoacerto = 0;
				siglaacerto = 0;
				capitalacerto = 0;
				
			//	system("cls");
		
			
				printf("digite o nome do primeiro estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("acre", estado) == 0){
						estadoacerto = estadoacerto + 1;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado do ACRE: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("ac", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital do Acre:  ");
								scanf("%s", &capital);
								if((strcmp("rio_branco", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Acre :(\n\nVamos para o proximo Estado!\n");
								}
							}
							else{
								printf("errou a sigla do Acre :(\n\nVamos para o  proximo estado!\n");
							}
					}
					else{
						printf("errou o nome do estado :( \n\nVamos para o proximo estado!\n");
					}	
				
				
			
		//	system("cls");
			
				printf("digite o nome do segundo estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("alagoas", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado do ALAGOAS: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("al", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de Alagoas:  ");
								scanf("%s", &capital);
								if((strcmp("maceio", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Alagoas :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Alagoas :(\n\nVamos para o  proximo estado!\n");
							}
					}
					else{
						printf("errou o nome do  estado :(\n\nVamos para o proximo estado!\n");
					}	
				
		//	system("cls");
			
			printf("digite o nome do terceiro estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("amapa", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado do AMAPA: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("ap", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de AMAPA:  ");
								scanf("%s", &capital);
								if((strcmp("macapa", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Amapa :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Amapa :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do  estado :(\n\nVamos para o proximo estado! \n");
					}	
		
		//	system("cls");
			
			
			printf("digite o nome do quarto estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("amazonas", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado da AMAZONIA: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("am", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de AMAZONIA:  ");
								scanf("%s", &capital);
								if((strcmp("manaus", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Amazonia :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Amazonia :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do  estado :(\n\nVamos para o proximo estado! \n");
					}	
		
		//	system("cls");
		
				printf("digite o nome do quinto estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("bahia", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado da BAHIA: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("ba", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de BAHIA:  ");
								scanf("%s", &capital);
								if((strcmp("salvador", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Bahia :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Bahia :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
					}	
		
		//	system("cls");
		
			printf("digite o nome do sexto estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("ceara", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado da CEARA: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("ce", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de CEARA:  ");
								scanf("%s", &capital);
								if((strcmp("fortaleza", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Ceara :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Ceara :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
					}	
					
		printf("digite o nome do setimo estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("espirito_santo", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado do Espirito Santo: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("es", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de ESPIRITO SANTO:  ");
								scanf("%s", &capital);
								if((strcmp("vitoria", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Espirito Santo :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Espirito Santo :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
					}	
		
		
			printf("digite o nome do oitavo estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("goias", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado de Goias: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("go", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de GOIAS:  ");
								scanf("%s", &capital);
								if((strcmp("goiania", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Goias :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Goias :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
					}	
		
		
		//	system("cls");
	
	
			printf("digite o nome do nono estado: ");
				fflush(stdin);
				scanf("%s", estado);
					if( strcmp("maranhao", estado) == 0){
						estadoacerto = estadoacerto + 1;;
						printf("\nAcertou !");
						printf("\nQual a sigla do estado do MARANHAO: ");
						fflush(stdin);
						scanf("%s", sigla);
							if((strcmp("ma", sigla) == 0)){
								siglaacerto++;
								printf("acertou !!\n");
								printf("Qual a Capital de MARANHAO:  ");
								scanf("%s", &capital);
								if((strcmp("sao_luis", capital) == 0)){
									capitalacerto++;
									printf("Acertou !!!\n");
								}
								else{
									printf("Errou o capital do Maranhao :(\n\nVamos para o proximo Estado!\n ");
								}
							}
							else{
								printf("errou a sigla do Maranhao :(\n\nVamos para o  proximo estado! \n");
							}
					}
					else{
						printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
					}	
		
		
		//	system("cls");
	
			printf("digite o nome do decimo estado: ");
					fflush(stdin);
					scanf("%s", estado);
						if( strcmp("mato_grosso", estado) == 0){
							estadoacerto = estadoacerto + 1;;
							printf("\nAcertou !");
							printf("\nQual a sigla do estado do MATO GROSSO: ");
							fflush(stdin);
							scanf("%s", sigla);
								if((strcmp("mt", sigla) == 0)){
									siglaacerto++;
									printf("acertou !!\n");
									printf("Qual a Capital de MATO GROSSO:  ");
									scanf("%s", &capital);
									if((strcmp("cuiaba", capital) == 0)){
										capitalacerto++;
										printf("Acertou !!!\n");
									}
									else{
										printf("Errou o capital do Mato Grosso :(\n\nVamos para o proximo Estado!\n ");
									}
								}
								else{
									printf("errou a sigla do Mato Grosso :(\n\nVamos para o  proximo estado! \n");
								}
						}
						else{
							printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
						}	
			
			
			//	system("cls");
		
			printf("digite o nome do decimo primeiro estado: ");
					fflush(stdin);
					scanf("%s", estado);
						if( strcmp("mato_grosso_do_sul", estado) == 0){
							estadoacerto = estadoacerto + 1;;
							printf("\nAcertou !");
							printf("\nQual a sigla do estado do MATO GROSSO DO SUL: ");
							fflush(stdin);
							scanf("%s", sigla);
								if((strcmp("ms", sigla) == 0)){
									siglaacerto++;
									printf("acertou !!\n");
									printf("Qual a Capital de MATO GROSSO DO SUL:  ");
									scanf("%s", &capital);
									if((strcmp("campo_grande", capital) == 0)){
										capitalacerto++;
										printf("Acertou !!!\n");
									}
									else{
										printf("Errou o capital do Mato Grosso do Sul :(\n\nVamos para o proximo Estado!\n ");
									}
								}
								else{
									printf("errou a sigla do Mato Grosso do Sul :(\n\nVamos para o  proximo estado! \n");
								}
						}
						else{
							printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
						}	
			
			
			//	system("cls");
		
					
			printf("digite o nome do decimo segundo estado: ");
					fflush(stdin);
					scanf("%s", estado);
						if( strcmp("minas_gerais", estado) == 0){
							estadoacerto = estadoacerto + 1;;
							printf("\nAcertou !");
							printf("\nQual a sigla do estado do MINAS GERAIS: ");
							fflush(stdin);
							scanf("%s", sigla);
								if((strcmp("mg", sigla) == 0)){
									siglaacerto++;
									printf("acertou !!\n");
									printf("Qual a Capital de MINAS GERAIS:  ");
									scanf("%s", &capital);
									if((strcmp("belo_horizonte", capital) == 0)){
										capitalacerto++;
										printf("Acertou !!!\n");
									}
									else{
										printf("Errou o capital do Minas gerais :(\n\nVamos para o proximo Estado!\n ");
									}
								}
								else{
									printf("errou a sigla do Minas Gerais :(\n\nVamos para o  proximo estado! \n");
								}
						}
						else{
							printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
						}	
			
					
			printf("digite o nome do decimo terceiro estado: ");
					fflush(stdin);
					scanf("%s", estado);
						if( strcmp("para", estado) == 0){
							estadoacerto = estadoacerto + 1;;
							printf("\nAcertou !");
							printf("\nQual a sigla do estado do PARA: ");
							fflush(stdin);
							scanf("%s", sigla);
								if((strcmp("pa", sigla) == 0)){
									siglaacerto++;
									printf("acertou !!\n");
									printf("Qual a Capital de PARA:  ");
									scanf("%s", &capital);
									if((strcmp("belem", capital) == 0)){
										capitalacerto++;
										printf("Acertou !!!\n");
									}
									else{
										printf("Errou o capital do Para :(\n\nVamos para o proximo Estado!\n ");
									}
								}
								else{
									printf("errou a sigla do Para :(\n\nVamos para o  proximo estado! \n");
								}
						}
						else{
							printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
						}
						
			
			//	system("cls");

			printf("digite o nome do decimo quarto estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("paraiba", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do PARAIBA: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("pb", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de PARAIBA:  ");
											scanf("%s", &capital);
											if((strcmp("joao_pessoa", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Paraiba :(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Paraiba :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
								
						
			//	system("cls");
			
				printf("digite o nome do decimo quinto estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("parana", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do PARANA: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("pr", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de PARANA:  ");
											scanf("%s", &capital);
											if((strcmp("curitiba", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Parana :(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Parana :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
								
			
			
			//	system("cls");
			
				printf("digite o nome do decimo sexto estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("pernambuco", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do PERNANBUCO: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("pe", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de PERNAMBUCO:  ");
											scanf("%s", &capital);
											if((strcmp("recife", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Pernambuco :(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Pernambuco :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
				
			//	system("cls");
			
			
				printf("digite o nome do decimo setimo estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("piaui", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do PIAUI: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("pi", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de PIAUI:  ");
											scanf("%s", &capital);
											if((strcmp("teresina", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Teresina :(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Teresina :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
								
								
				printf("digite o nome do decimo oitavo estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("rio_de_janeiro", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do RIO DE JANEIRO: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("rj", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de RIO DE JANEIRO:  ");
											scanf("%s", &capital);
											if((strcmp("rio_de_janeiro", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Rio de Janeiro :(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Rio de Janeiro :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
								
			
			
			//	system("cls");
			
				printf("digite o nome do decimo nono estado: ");
							fflush(stdin);
							scanf("%s", estado);
								if( strcmp("rio_grande_do_norte", estado) == 0){
									estadoacerto = estadoacerto + 1;;
									printf("\nAcertou !");
									printf("\nQual a sigla do estado do RIO GRANDE DO NORTE: ");
									fflush(stdin);
									scanf("%s", sigla);
										if((strcmp("rn", sigla) == 0)){
											siglaacerto++;
											printf("acertou !!\n");
											printf("Qual a Capital de RIO GRANDE DO NORTE:  ");
											scanf("%s", &capital);
											if((strcmp("natal", capital) == 0)){
												capitalacerto++;
												printf("Acertou !!!\n");
											}
											else{
												printf("Errou o capital do Rio Grande do Norte:(\n\nVamos para o proximo Estado!\n ");
											}
										}
										else{
											printf("errou a sigla do Rio Grande do Norte :(\n\nVamos para o  proximo estado! \n");
										}
								}
								else{
									printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
								}
								
			
			
			//	system("cls");
			
				printf("digite o nome do vigesimo estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("rio_grande_do_sul", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do RIO GRANDE DO SUL: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("rs", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de RIO GRANDE DO SUL:  ");
												scanf("%s", &capital);
												if((strcmp("porto_alegre", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital do Rio Grande do Sul:(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla do Rio Grande do Sul :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
				
					printf("digite o nome do vigesimo primeiro estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("rondonia", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do RONDONIA: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("ro", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de RONDONIA:  ");
												scanf("%s", &capital);
												if((strcmp("porto_velho", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital do Rondonia :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla do Rondonia :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
				
				
					printf("digite o nome do vigesimo segundo estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("roraima", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do RORAIMA: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("rr", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de RORAIMA:  ");
												scanf("%s", &capital);
												if((strcmp("boa_vista", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital do Roraima :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla do Roraima :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
						
					printf("digite o nome do vigesimo terceiro estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("santa_catarina", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do SANTA CATARINA: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("sc", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de SANTA CATARINA:  ");
												scanf("%s", &capital);
												if((strcmp("florianopolis", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital de Santa Catarina :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla de Santa Catarina :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
					
				//	system("cls");
								
					printf("digite o nome do vigesimo quarto estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("sao_paulo", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do SAO PAULO: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("sp", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de SAO PAULO:  ");
												scanf("%s", &capital);
												if((strcmp("sao_paulo", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital de Sao Paulo :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla de Sao Paulo :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
			 		printf("digite o nome do vigesimo quinto estado: ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("sergipe", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do SERGIPE: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("se", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de SERGIPE:  ");
												scanf("%s", &capital);
												if((strcmp("aracaju", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital de Sergipe :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla de Sergipe :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
				
					printf("digite o nome do vigesimo sexto estado:  ");
								fflush(stdin);
								scanf("%s", estado);
									if( strcmp("tocantins", estado) == 0){
										estadoacerto = estadoacerto + 1;;
										printf("\nAcertou !");
										printf("\nQual a sigla do estado do TOCANTINS: ");
										fflush(stdin);
										scanf("%s", sigla);
											if((strcmp("to", sigla) == 0)){
												siglaacerto++;
												printf("acertou !!\n");
												printf("Qual a Capital de TOCANTINS:  ");
												scanf("%s", &capital);
												if((strcmp("palmas", capital) == 0)){
													capitalacerto++;
													printf("Acertou !!!\n");
												}
												else{
													printf("Errou o capital de Tocantins :(\n\nVamos para o proximo Estado!\n ");
												}
											}
											else{
												printf("errou a sigla de Tocantins :(\n\nVamos para o  proximo estado! \n");
											}
									}
									else{
										printf("errou o nome do estado :(\n\nVAmos para o proximo estado! \n");
									}
			
				//	system("cls");
				
				
				printf("\n\n                RESULTADOS               \n");
				printf("ESTADOS ACERTADOS : %.0f\n",estadoacerto);	
				printf("SIGLAS DOS ESTADOS ACERTADOS: %.0f\n",siglaacerto);	
				printf("CAPITAIS DOS ESTADOS ACERTADOS: %.0f\n",capitalacerto);	

				printf("\nDeseja jogar novamente ? ( s / n )\n");
				fflush(stdin);
				resposta = getch();
				
			}while(resposta=='s');
				
				fflush(stdin);
		}
			
		
// }



