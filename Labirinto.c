#include <stdio.h>

int main()
{
	int matriz[9][9] = { 1,1,1,0,0,0,0,0,0,0,
					     0,0,1,0,0,0,1,1,1,0,
					 	 0,0,1,1,1,0,1,0,1,0,
					 	 0,0,0,0,1,1,1,0,1,1,
					  	 0,0,0,0,0,0,0,0,0,1,
						 1,1,1,1,1,0,0,0,1,1,
					     1,0,0,0,1,1,1,1,1,0,
					 	 1,0,0,0,0,0,0,0,0,0,
					 	 1,1,1,1,1,0,0,1,1,1,
					  	 0,0,0,0,1,1,1,1,0,1};
	int i,j;
	
	while(i != 999 && j != 999)	
	{		 
		printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
		scanf("%d %d", &i, &j);
	
		if(matriz[i][j]==1 && i == 0 && j == 0)
		{
			system("cls");
			matriz[i][j] = 0;
			printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
			scanf("%d %d", &i, &j);
			if(matriz[i][j]==1 && i == 0 && j == 1)
			{
				system("cls");
				matriz[i][j] = 0;
				printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
				scanf("%d %d", &i, &j);
				if(matriz[i][j]==1 && i == 0 && j == 2)
				{
					system("cls");
					matriz[i][j] = 0;
					printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
					scanf("%d %d", &i, &j);
					if(matriz[i][j]==1 && i == 1 && j == 2)
					{
						system("cls");
						matriz[i][j] = 0;
						printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
						scanf("%d %d", &i, &j);
						if(matriz[i][j]==1 && i == 2 && j == 2)
						{
							system("cls");
							matriz[i][j] = 0;
							printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
							scanf("%d %d", &i, &j);
							if(matriz[i][j]==1 && i == 2 && j == 3)
							{
								system("cls");
								matriz[i][j] = 0;
								printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
								scanf("%d %d", &i, &j);
								if(matriz[i][j]==1 && i == 2 && j == 4)
								{
									system("cls");
									matriz[i][j] = 0;
									printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
									scanf("%d %d", &i, &j);
									if(matriz[i][j]==1 && i == 3 && j == 4)
									{
										system("cls");
										matriz[i][j] = 0;
										printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
										scanf("%d %d", &i, &j);
										if(matriz[i][j]==1 && i == 3 && j == 5)
										{
											system("cls");
											matriz[i][j] = 0;
											printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
											scanf("%d %d", &i, &j);
											if(matriz[i][j]==1 && i == 3 && j == 6)
											{
												system("cls");
												matriz[i][j] = 0;
												printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
												scanf("%d %d", &i, &j);
												if(matriz[i][j]==1 && i == 2 && j == 6)
												{
													system("cls");
													matriz[i][j] = 0;
													printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
													scanf("%d %d", &i, &j);
													if(matriz[i][j]==1 && i == 1 && j == 6)
													{
														system("cls");
														matriz[i][j] = 0;
														printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
														scanf("%d %d", &i, &j);
														if(matriz[i][j]==1 && i == 1 && j == 7)
														{
															system("cls");
															matriz[i][j] = 0;
															printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
															scanf("%d %d", &i, &j);
															if(matriz[i][j]==1 && i == 1 && j == 8)
															{
																system("cls");
																matriz[i][j] = 0;
																printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
																scanf("%d %d", &i, &j);
																if(matriz[i][j]==1 && i == 2 && j == 8)
																{
																	system("cls");
																	matriz[i][j] = 0;
																	printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
																	scanf("%d %d", &i, &j);
																	if(matriz[i][j]==1 && i == 3 && j == 8)
																	{
																		system("cls");
																		matriz[i][j] = 0;
																		printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
																		scanf("%d %d", &i, &j);
																		
																		if(matriz[i][j]==1 && i == 3 && j == 9)
																		{
																			system("cls");
																			matriz[i][j] = 0;
																			printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");
																			scanf("%d %d", &i, &j);
																			if(matriz[i][j]==1 && i == 4 && j == 4)
																			{
																				system("cls");
																				matriz[i][j] = 0;
																				printf("  0 1 2 3 4 5 6 7 8 9\n0| | | | | | | | | | |\n1| | | | | | | | | | |\n2| | | | | | | | | | |\n3| | | | | | | | | | |\n4| | | | | | | | | | |\n5| | | | | | | | | | |\n6| | | | | | | | | | |\n7| | | | | | | | | | |\n8| | | | | | | | | | |\n9| | | | | | | | | | |\nLugar certo\n999 para sair\ndigite onde voce quer ir: ");	
																			}
																			else
																			{
																			printf("Caminho errado!\n\n");
																			}
																		}
																		else
																		{
																			printf("Caminho errado!\n\n");
																		}
																	}
																	else
																	{
																		printf("Caminho errado!\n\n");
																	}
																}
																else
																{
																	printf("Caminho errado!\n\n");
																}
															}
															else
															{
																printf("Caminho errado!\n\n");
															}
														}
														else
														{
														printf("Caminho errado!\n\n");
														}
													}
													else
													{
												 		printf("Caminho errado!\n\n");
													}
												}
												else
												{
													printf("Caminho errado!\n\n");
												}
											}
											else
											{
												printf("Caminho errado!\n\n");
											}	
										}
										else
										{
										printf("Caminho errado!\n\n");
										}
									}
									else
									{
										printf("Caminho errado!\n\n");
									}
								}
								else
								{
									printf("Caminho errado!\n\n");
								}
							}
							else
							{
								printf("Caminho errado!\n\n");
							}
						}
						else
						{
							printf("Caminho errado!\n\n");
						}
					}
					else
					{
					printf("Caminho errado!\n\n");
					}
				}
				else
				{
			 		printf("Caminho errado!\n\n");
				}
			}
			else
			{
				printf("Caminho errado!\n\n");
			}
		}
		else
		{
			printf("Caminho errado!\n\n");
		}
	}
}
