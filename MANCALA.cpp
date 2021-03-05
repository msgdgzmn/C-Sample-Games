#include<iostream>
using namespace std;
int main()
{
	int Player1_ColumnA=4, Player1_ColumnB=4, Player1_ColumnC=4, Player1_ColumnD=4, Player1_ColumnE=4, Player1_ColumnF=4, Player1_Pot=0;
	int Player2_ColumnA=4, Player2_ColumnB=4, Player2_ColumnC=4, Player2_ColumnD=4, Player2_ColumnE=4, Player2_ColumnF=4, Player2_Pot=0;
	int Player1_Turn, Player2_Turn, Game_Over=0, Grab, Turn1, Turn2, NReady;
	char Start, Ready, Choose;
	cout<<endl<<endl<<endl<<endl;
	cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
	cout<<"                    |  -    |    |    |    |    |    |--|\n";
	cout<<"                   (   M----A----N----C----A----L----A   )\n";
	cout<<"                    |--|    |    |    |    |    |    -  |\n";
	cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
	cout<<endl<<endl;
	cout<<"\t\t\t   O.) GAME Start\n";
	cout<<"\t\t\t   X.) CONTROLS & RULES\n";
	cout<<endl<<endl;
	cout<<"\t\t\t   Choose: ";
	do
	{
		cin>>Start;
		switch (Start)
		{
			case 'x': case 'X':
				system("cls");
				cout<<"                                 ---RULES---\n\n";
				cout<<"                         This game consist of 2 Players\n\n ";
				cout<<"\n                  This is the layout of Mancala Game Board\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2-    |    |    |    |    |    |--|\n";
				cout<<"                   (   +----+----+----+----+----+----+   )\n";
				cout<<"                    |--|    |    |    |    |    |    -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\n         There are 6 small pots on both the sides consisting 4 stones\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2- 04 | 04 | 04 | 04 | 04 | 04 |--|\n";
				cout<<"                   ( 00+----+----+----+----+----+----+00 )\n";
				cout<<"                    |--| 04 | 04 | 04 | 04 | 04 | 04 -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\n                          This is Player 1's side\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2- 04 | 04 | 04 | 04 | 04 | 04 |--|\n";
				cout<<"                   ( 00+----+----+----+----+----+----+00 )\n";
				cout<<"           ------>  |--| 04 | 04 | 04 | 04 | 04 | 04 -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\n                          This is Player 2's side\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2- 04 | 04 | 04 | 04 | 04 | 04 |--|  <------\n";
				cout<<"                   ( 00+----+----+----+----+----+----+00 )\n";
				cout<<"                    |--| 04 | 04 | 04 | 04 | 04 | 04 -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\nThis is Player 1's Mancala pot. Stones captured by Player 1 will be in this pot\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2- 04 | 04 | 04 | 04 | 04 | 04 |--|\n";
				cout<<"                   ( 00+----+----+----+----+----+----+00 )  <-----\n";
				cout<<"                    |--| 04 | 04 | 04 | 04 | 04 | 04 -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\nThis is Player 2's Mancala pot. Stones captured by Player 2 will be in this pot\n\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                    |P2- 04 | 04 | 04 | 04 | 04 | 04 |--|\n";
				cout<<"           ----->  ( 00+----+----+----+----+----+----+00 )\n";
				cout<<"                    |--| 04 | 04 | 04 | 04 | 04 | 04 -P1|\n";
				cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
				cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
				cout<<"\n               Stones get distributed this by counter-clockwise\n\n";
				cout<<"\n                 Capture maximum Stones in Mancala pot to win\n\n";
				cout<<"\n       Choose A, B, C, D, E, or F to Choose your move. (Choose only 1 letter)\n\n";
				cout<<"\n       If the last Stone falls in your Mancala pot, then you get a free turn\n\n";
				cout<<"\n If the last Stone lands in your empty dish, you can capture that Stones & any\nStones in the dish directly opposite (If the opposite have no Stone, then you do                       not put your Stone in your Mancala)\n\n";
				cout<<"\n    Game ends when all six dishes on one side of the Mancala board are empty.\n\n";
				do
				{
					cout<<"\nAre you ready (Y/N): ";
					cin>>Ready;
					if ((Ready=='Y')||(Ready=='y'))
					{
						NReady=1;
					}
					else
					{
						NReady=0;
					}
				}
				while (NReady!=1);
				break;
			case 'O': case 'o':
				cout<<"________________________________________________________________________________\n";
				Ready='Y';
				break;
			default:
				cout<<"\t\tInvalid... Try Again... ";
				Ready='N';
		}
		if ((Ready=='Y')||(Ready=='y'))
		{
			NReady=1;
		}
		else
		{
			NReady=0;
		}
	}
	while (NReady!=1);
	cout<<"________________________________________________________________________________\n";
	do
	{
		do
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n";
			Player1_Turn=0;
			if (Player1_Pot+Player2_Pot==48)
			{
				Player1_Turn=0;
				Game_Over=1;
			}
			else
			{
				if (Player1_ColumnA+Player1_ColumnB+Player1_ColumnC+Player1_ColumnD+Player1_ColumnE+Player1_ColumnF==0)
				{
					Player1_Turn=0;
					Game_Over=1;
					Player2_Pot+=Player2_ColumnA+Player2_ColumnB+Player2_ColumnC+Player2_ColumnD+Player2_ColumnE+Player2_ColumnF;
					Player2_ColumnA=0;
					Player2_ColumnB=0;
					Player2_ColumnC=0;
					Player2_ColumnD=0;
					Player2_ColumnE=0;
					Player2_ColumnF=0;
				}
				else if (Player2_ColumnA+Player2_ColumnB+Player2_ColumnC+Player2_ColumnD+Player2_ColumnE+Player2_ColumnF==0)
				{
					Player1_Turn=0;
					Game_Over=1;
					Player1_Pot+=Player1_ColumnA+Player1_ColumnB+Player1_ColumnC+Player1_ColumnD+Player1_ColumnE+Player1_ColumnF;
					Player1_ColumnA=0;
					Player1_ColumnB=0;
					Player1_ColumnC=0;
					Player1_ColumnD=0;
					Player1_ColumnE=0;
					Player1_ColumnF=0;
				}
				else
				{
					
					cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
					cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
					cout<<"                    |P2- ";
					if (Player2_ColumnA<10)
					{
						cout<<"0"<<Player2_ColumnA<<" | ";
					}
					else
					{
						cout<<Player2_ColumnA<<" | ";
					}
					if (Player2_ColumnB<10)
					{
						cout<<"0"<<Player2_ColumnB<<" | ";
					}
					else
					{
						cout<<Player2_ColumnB<<" | ";
					}
					if (Player2_ColumnC<10)
					{
						cout<<"0"<<Player2_ColumnC<<" | ";
					}
					else
					{
						cout<<Player2_ColumnC<<" | ";
					}
					if (Player2_ColumnD<10)
					{
						cout<<"0"<<Player2_ColumnD<<" | ";
					}
					else
					{
						cout<<Player2_ColumnD<<" | ";
					}
					if (Player2_ColumnE<10)
					{
						cout<<"0"<<Player2_ColumnE<<" | ";
					}
					else
					{
						cout<<Player2_ColumnE<<" | ";
					}
					if (Player2_ColumnF<10)
					{
						cout<<"0"<<Player2_ColumnF<<" |---\n";
					}
					else
					{
						cout<<Player2_ColumnF<<" |---\n";
					}
					if (Player2_Pot<10)
					{
						cout<<"                   ( 0"<<Player2_Pot<<"+----+----+----+----+----+----+";
					}
					else
					{
						cout<<"                   ( "<<Player2_Pot<<"+----+----+----+----+----+----+";
					}
					if (Player1_Pot<10)
					{
						cout<<"0"<<Player1_Pot<<" )\n";
					}
					else
					{
						cout<<Player1_Pot<<" )\n";
					}
					cout<<"                    |--| ";
					if (Player1_ColumnA<10)
					{
						cout<<"0"<<Player1_ColumnA<<" | ";
					}
					else
					{
						cout<<Player1_ColumnA<<" | ";
					}
					if (Player1_ColumnB<10)
					{
						cout<<"0"<<Player1_ColumnB<<" | ";
					}
					else
					{
						cout<<Player1_ColumnB<<" | ";
					}
					if (Player1_ColumnC<10)
					{
						cout<<"0"<<Player1_ColumnC<<" | ";
					}
					else
					{
						cout<<Player1_ColumnC<<" | ";
					}
					if (Player1_ColumnD<10)
					{
					cout<<"0"<<Player1_ColumnD<<" | ";
					}
					else
					{
						cout<<Player1_ColumnD<<" | ";
					}
					if (Player1_ColumnE<10)
					{
					cout<<"0"<<Player1_ColumnE<<" | ";
					}
					else
					{
						cout<<Player1_ColumnE<<" | ";
					}
					if (Player1_ColumnF<10)
					{
						cout<<"0"<<Player1_ColumnF<<" -P1|\n";
					}
					else
					{
						cout<<Player1_ColumnF<<" -P1|\n";
					}
					cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
					cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
					cout<<"\nPlayer 1's Move: ";
					do
					{
						Turn1=0;
						cin>>Choose;
						switch (Choose)
						{
						case 'A': case 'a':
							if (Player1_ColumnA!=0)
							{							
								Grab=Player1_ColumnA;
								Player1_ColumnA=0;
								while (Grab>0)
								{
									if (Grab==1)
									{
										if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
										{
											Player1_ColumnB++;
											Grab--;
											Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
											Player1_ColumnB=0;
											Player2_ColumnB=0;
										}
										else
										{
											Player1_ColumnB++;
											Grab--;
										}
									}
									else if (Grab>1)
									{
										Player1_ColumnB++;
										Grab--;										
										if (Grab==1)
										{
											if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
											{
												Player1_ColumnC++;
												Grab--;
												Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
												Player1_ColumnC=0;
												Player2_ColumnC=0;
											}
											else
											{		
												Player1_ColumnC++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player1_ColumnC++;
											Grab--;
											if (Grab==1)
											{
												if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
												{
													Player1_ColumnD++;
													Grab--;
													Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
													Player1_ColumnD=0;
													Player2_ColumnE=0;
												}
												else
												{		
													Player1_ColumnD++;
													Grab--;
												}					
											}
											else if (Grab>1)
											{
												Player1_ColumnD++;
												Grab--;
												if (Grab==1)
												{
													if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
													{
														Player1_ColumnE++;
														Grab--;
														Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
														Player1_ColumnE=0;
														Player2_ColumnE=0;
													}
													else
													{		
														Player1_ColumnE++;
														Grab--;
													}
												}
												else if (Grab>1)
												{
													Player1_ColumnE++;
													Grab--;
													if (Grab==1)
													{
														if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
														{
															Player1_ColumnF++;
															Grab--;
															Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
															Player1_ColumnF=0;
															Player2_ColumnF=0;
														}
														else
														{		
															Player1_ColumnF++;
															Grab--;
														}															
													}
													else if (Grab>1)
													{
														Player1_ColumnF++;
															Grab--;
														if (Grab==1)
														{
															Player1_Turn=1;
															Player1_Pot++;
															Grab--;
														}
														else if (Grab>1)
														{
															Player1_Pot++;
															Grab--;
															if (Grab!=0)
															{
																Player2_ColumnF++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnE++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player2_ColumnD++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player2_ColumnC++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player2_ColumnB++;
																				Grab--;
																				if (Grab!=0)
																				{
																					Player2_ColumnA++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																						{
																							Player1_ColumnA++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																							Player1_ColumnA=0;
																							Player2_ColumnA=0;
																						}
																						else
																						{
																							Player1_ColumnA++;
																							Grab--;
																						}										
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnA++;
																						Grab--;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}													
											}
										}											
									}											
								}
							}
							else
							{
								cout<<"Invalid... Try Again...\n";
								Turn1=1;
							}
							break;
							case 'B': case 'b':
								if (Player1_ColumnB!=0)
								{
									Grab=Player1_ColumnB;
									Player1_ColumnB=0;
									while (Grab>0)
									{
										if (Grab==1)
										{
											if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
											{
												Player1_ColumnC++;
												Grab--;
												Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
												Player1_ColumnC=0;
												Player2_ColumnC=0;
											}
											else
											{	
												Player1_ColumnC++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player1_ColumnC++;
											Grab--;										
											if (Grab==1)
											{
												if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
												{
													Player1_ColumnD++;
													Grab--;
													Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
													Player1_ColumnE=0;
													Player2_ColumnE=0;
												}
												else
												{		
													Player1_ColumnD++;
													Grab--;
												}					
											}
											else if (Grab>1)
											{
												Player1_ColumnD++;
												Grab--;
												if (Grab==1)
												{
													if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
													{
														Player1_ColumnE++;
														Grab--;
														Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
														Player1_ColumnE=0;
														Player2_ColumnE=0;
													}
													else
													{		
														Player1_ColumnE++;
														Grab--;
													}
												}
												else if (Grab>1)
												{
													Player1_ColumnE++;
													Grab--;
													if (Grab==1)
													{
														if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
														{
															Player1_ColumnF++;
															Grab--;
															Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
															Player1_ColumnF=0;
															Player2_ColumnF=0;
														}
														else
														{		
															Player1_ColumnF++;
															Grab--;
														}														
													}
													else if (Grab>1)
													{
														Player1_ColumnF++;
														Grab--;
														if (Grab==1)
														{
															Player1_Turn=1;
															Player1_Pot++;
															Grab--;
														}
														else if (Grab>1)
														{
															Player1_Pot++;
															Grab--;								
															if (Grab!=0)
															{
																Player2_ColumnF++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnE++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player2_ColumnD++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player2_ColumnC++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player2_ColumnB++;
																				Grab--;
																				if (Grab!=0)
																				{
																					Player2_ColumnA++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																						{
																							Player1_ColumnA++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																							Player1_ColumnA=0;
																							Player2_ColumnA=0;
																						}
																						else
																						{
																							Player1_ColumnA++;
																							Grab--;
																						}									
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnA++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
																							{
																								Player1_ColumnB++;
																								Grab--;
																								Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
																								Player1_ColumnB=0;
																								Player2_ColumnB=0;
																							}
																							else
																							{
																								Player1_ColumnB++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player1_ColumnB++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}													
												}
											}											
										}											
									}
								}										
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn1=1;
								}
								break;
							case 'C': case 'c':
								if (Player1_ColumnC!=0)
								{
									Grab=Player1_ColumnC;
									Player1_ColumnC=0;
									while (Grab>0)
									{
										if (Grab==1)
										{
											if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
											{
												Player1_ColumnD++;
												Grab--;
												Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
												Player1_ColumnD=0;
												Player2_ColumnD=0;
											}
											else
											{		
												Player1_ColumnD++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player1_ColumnD++;
											Grab--;
											if (Grab==1)
											{
												if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
												{
													Player1_ColumnE++;
													Grab--;
													Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
													Player1_ColumnE=0;
													Player2_ColumnE=0;
												}
												else
												{		
													Player1_ColumnE++;
													Grab--;
												}
											}
											else if (Grab>1)
											{
												Player1_ColumnE++;
												Grab--;
												if (Grab==1)
												{
													if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
													{
														Player1_ColumnF++;
														Grab--;
														Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
														Player1_ColumnF=0;
														Player2_ColumnF=0;
													}
													else
													{		
														Player1_ColumnF++;
														Grab--;
													}														
												}
												else if (Grab>1)
												{
													Player1_ColumnF++;
													Grab--;
													if (Grab==1)
													{
														Player1_Turn=1;
														Player1_Pot++;
														Grab--;
													}
													else if (Grab>1)
													{
														Player1_Pot++;
														Grab--;
														if (Grab!=0)
														{
															Player2_ColumnF++;
															Grab--;
															if (Grab!=0)
															{
																Player2_ColumnE++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnD++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player2_ColumnC++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player2_ColumnB++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player2_ColumnA++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																					{
																						Player1_ColumnA++;
																						Grab--;
																						Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																						Player1_ColumnA=0;
																						Player2_ColumnA=0;
																					}
																					else
																					{
																						Player1_ColumnA++;
																						Grab--;
																					}									
																				}
																				else if (Grab>1)
																				{
																					Player1_ColumnA++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
																						{
																							Player1_ColumnB++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
																							Player1_ColumnB=0;
																							Player2_ColumnB=0;
																						}
																						else
																						{
																							Player1_ColumnB++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnB++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
																							{
																								Player1_ColumnC++;
																								Grab--;
																								Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
																								Player1_ColumnC=0;
																								Player2_ColumnC=0;
																							}
																							else
																							{	
																								Player1_ColumnC++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player1_ColumnC++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}													
														}
													}											
												}											
											}
										}
									}
								}	
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn1=1;
								}
								break;
							case 'D': case 'd':
								if (Player1_ColumnD!=0)
								{
									Grab=Player1_ColumnD;
									Player1_ColumnD=0;
									while (Grab>0)
									{
										if (Grab==1)
										{
											if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
											{
												Player1_ColumnE++;
												Grab--;
												Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
												Player1_ColumnE=0;
												Player2_ColumnE=0;
											}
											else
											{		
												Player1_ColumnE++;
												Grab--;
											}					
										}
										else if (Grab>1)
										{
											Player1_ColumnE++;
											Grab--;
											if (Grab==1)
											{
												if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
												{
													Player1_ColumnF++;
													Grab--;
													Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
													Player1_ColumnF=0;
													Player2_ColumnF=0;
												}
												else
												{		
													Player1_ColumnF++;
													Grab--;
												}														
											}
											else if (Grab>1)
											{
												Player1_ColumnF++;
												Grab--;
												if (Grab==1)
												{
													Player1_Turn=1;
													Player1_Pot++;
													Grab--;
												}
												else if (Grab>1)
												{
													Player1_Pot++;
													Grab--;
													if (Grab!=0)
													{
														Player2_ColumnF++;
														Grab--;
														if (Grab!=0)
														{
															Player2_ColumnE++;
															Grab--;
															if (Grab!=0)
															{
																Player2_ColumnD++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnC++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player2_ColumnB++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player2_ColumnA++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																				{
																					Player1_ColumnA++;
																					Grab--;
																					Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																					Player1_ColumnA=0;
																					Player2_ColumnA=0;
																				}
																				else
																				{
																					Player1_ColumnA++;
																					Grab--;
																				}									
																			}
																			else if (Grab>1)
																			{
																				Player1_ColumnA++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
																					{
																						Player1_ColumnB++;
																						Grab--;
																						Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
																						Player1_ColumnB=0;
																						Player2_ColumnB=0;
																					}
																					else
																					{
																						Player1_ColumnB++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player1_ColumnB++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
																						{
																							Player1_ColumnC++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
																							Player1_ColumnC=0;
																							Player2_ColumnC=0;
																						}
																						else
																						{	
																							Player1_ColumnC++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnC++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
																							{
																								Player1_ColumnD++;
																								Grab--;
																								Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
																								Player1_ColumnD=0;
																								Player2_ColumnD=0;
																							}
																							else
																							{		
																								Player1_ColumnD++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player1_ColumnD++;
																							Grab--;																								
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}													
														}
													}											
												}											
											}
										}		
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn1=1;
								}
								break;
							case 'E': case 'e':
								if (Player1_ColumnE!=0)
								{
									Grab=Player1_ColumnE;
									Player1_ColumnE=0;
									while (Grab>0)
									{
										if (Grab==1)
										{
											if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
											{
												Player1_ColumnF++;
												Grab--;
												Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
												Player1_ColumnF=0;
												Player2_ColumnF=0;
											}
											else
											{		
												Player1_ColumnF++;
												Grab--;
											}														
										}
										else if (Grab>1)
										{
											Player1_ColumnF++;
											Grab--;
											if (Grab==1)
											{
												Player1_Turn=1;
												Player1_Pot++;
												Grab--;
											}
											else if (Grab>1)
											{
												Player1_Pot++;
												Grab--;
												if (Grab!=0)
												{
													Player2_ColumnF++;
													Grab--;
													if (Grab!=0)
													{
														Player2_ColumnE++;
														Grab--;
														if (Grab!=0)
														{
															Player2_ColumnD++;
															Grab--;
															if (Grab!=0)
															{
																Player2_ColumnC++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnB++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player2_ColumnA++;
																		Grab--;
																		if (Grab==1)
																		{
																			if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																			{
																				Player1_ColumnA++;
																				Grab--;
																				Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																				Player1_ColumnA=0;
																				Player2_ColumnA=0;
																			}
																			else
																			{
																				Player1_ColumnA++;
																				Grab--;
																			}									
																		}
																		else if (Grab>1)
																		{
																			Player1_ColumnA++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
																				{
																					Player1_ColumnB++;
																					Grab--;
																					Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
																					Player1_ColumnB=0;
																					Player2_ColumnB=0;
																				}
																				else
																				{
																					Player1_ColumnB++;
																					Grab--;
																				}
																			}
																			else if (Grab>1)
																			{
																				Player1_ColumnB++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
																					{
																						Player1_ColumnC++;
																						Grab--;
																						Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
																						Player1_ColumnC=0;
																						Player2_ColumnC=0;
																					}
																					else
																					{	
																						Player1_ColumnC++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player1_ColumnC++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
																						{
																							Player1_ColumnD++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
																							Player1_ColumnD=0;
																							Player2_ColumnD=0;
																						}
																						else
																						{		
																							Player1_ColumnD++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnD++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
																							{
																								Player1_ColumnE++;
																								Grab--;
																								Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
																								Player1_ColumnE=0;
																								Player2_ColumnE=0;
																							}
																							else
																							{		
																								Player1_ColumnE++;
																								Grab--;
																							}					
																						}
																						else if (Grab>1)
																						{
																							Player1_ColumnE++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}													
														}
													}											
												}											
											}
										}
									}
								}	
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn1=1;
								}
								break;
							case 'F': case 'f':
								if (Player1_ColumnF!=0)
								{					
									Grab=Player1_ColumnF;
									Player1_ColumnF=0;
									while (Grab!=0)
									{
										if (Grab==1)
										{
											Player1_Turn=1;
											Player1_Pot++;
											Grab--;
										}
										else if (Grab>1)
										{
											Player1_Pot++;
											Grab--;
											if (Grab!=0)
											{
												Player2_ColumnF++;
												Grab--;
												if (Grab!=0)
												{
													Player2_ColumnE++;
													Grab--;
													if (Grab!=0)
													{
														Player2_ColumnD++;
														Grab--;
														if (Grab!=0)
														{
															Player2_ColumnC++;
															Grab--;
															if (Grab!=0)
															{
																Player2_ColumnB++;
																Grab--;
																if (Grab!=0)
																{
																	Player2_ColumnA++;
																	Grab--;
																	if (Grab==1)
																	{
																		if ((Player1_ColumnA==0)&&(Player2_ColumnA>0))
																		{
																			Player1_ColumnA++;
																			Grab--;
																			Player1_Pot+=Player1_ColumnA+Player2_ColumnA;
																			Player1_ColumnA=0;
																			Player2_ColumnA=0;
																		}
																		else
																		{
																			Player1_ColumnA++;
																			Grab--;
																		}									
																	}
																	else if (Grab>1)
																	{
																		Player1_ColumnA++;
																		Grab--;
																		if (Grab==1)
																		{
																			if ((Player1_ColumnB==0)&&(Player2_ColumnB>0))
																			{
																				Player1_ColumnB++;
																				Grab--;
																				Player1_Pot+=Player1_ColumnB+Player2_ColumnB;
																				Player1_ColumnB=0;
																				Player2_ColumnB=0;
																			}
																			else
																			{
																				Player1_ColumnB++;
																				Grab--;
																			}
																		}
																		else if (Grab>1)
																		{
																			Player1_ColumnB++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player1_ColumnC==0)&&(Player2_ColumnC>0))
																				{
																					Player1_ColumnC++;
																					Grab--;
																					Player1_Pot+=Player1_ColumnC+Player2_ColumnC;
																					Player1_ColumnC=0;
																					Player2_ColumnC=0;
																				}
																				else
																				{	
																					Player1_ColumnC++;
																					Grab--;
																				}
																			}
																			else if (Grab>1)
																			{
																				Player1_ColumnC++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player1_ColumnD==0)&&(Player2_ColumnD>0))
																					{
																						Player1_ColumnD++;
																						Grab--;
																						Player1_Pot+=Player1_ColumnD+Player2_ColumnD;
																						Player1_ColumnD=0;
																						Player2_ColumnD=0;
																					}
																					else
																					{		
																						Player1_ColumnD++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player1_ColumnD++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player1_ColumnE==0)&&(Player2_ColumnE>0))
																						{
																							Player1_ColumnE++;
																							Grab--;
																							Player1_Pot+=Player1_ColumnE+Player2_ColumnE;
																							Player1_ColumnE=0;
																							Player2_ColumnE=0;
																						}
																						else
																						{		
																							Player1_ColumnE++;
																							Grab--;
																						}					
																					}
																					else if (Grab>1)
																					{
																						Player1_ColumnE++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player1_ColumnF==0)&&(Player2_ColumnF>0))
																							{
																								Player1_ColumnF++;
																								Grab--;
																								Player1_Pot+=Player1_ColumnF+Player2_ColumnF;
																								Player1_ColumnF=0;
																								Player2_ColumnF=0;
																							}
																							else
																							{		
																								Player1_ColumnF++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player1_ColumnF++;
																							Grab--;																								
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}													
														}
													}											
												}											
											}
										}
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn1=1;
								}
								break;							
								default:
								cout<<"Invalid... Try Again...\n";
								Turn1=1;
							}
						}
						while (Turn1!=0);
					}
			}
			cout<<"________________________________________________________________________________\n";
		}
		while (Player1_Turn!=0);
		do
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n";
			Player2_Turn=0;
			if (Player1_Pot+Player2_Pot==48)
			{
				Player2_Turn=0;
				Game_Over=1;
			}
			else
			{
				if (Player2_ColumnA+Player2_ColumnB+Player2_ColumnC+Player2_ColumnD+Player2_ColumnE+Player2_ColumnF==0)
				{
					Player2_Turn=0;
					Game_Over=1;
					Player1_Pot+=Player1_ColumnA+Player1_ColumnB+Player1_ColumnC+Player1_ColumnD+Player1_ColumnE+Player1_ColumnF;
					Player1_ColumnA=0;
					Player1_ColumnB=0;
					Player1_ColumnC=0;
					Player1_ColumnD=0;
					Player1_ColumnE=0;
					Player1_ColumnF=0;					
				}
				else if (Player1_ColumnA+Player1_ColumnB+Player1_ColumnC+Player1_ColumnD+Player1_ColumnE+Player1_ColumnF==0)
				{
					Player2_Turn=0;
					Game_Over=1;
					Player2_Pot+=Player2_ColumnA+Player2_ColumnB+Player2_ColumnC+Player2_ColumnD+Player2_ColumnE+Player2_ColumnF;
					Player2_ColumnA=0;
					Player2_ColumnB=0;
					Player2_ColumnC=0;
					Player2_ColumnD=0;
					Player2_ColumnE=0;
					Player2_ColumnF=0;
				}
				else
				{
					cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
					cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
					cout<<"                    |P2- ";
					if (Player2_ColumnA<=9)
					{
						cout<<"0"<<Player2_ColumnA<<" | ";
					}
					else
					{
						cout<<Player2_ColumnA<<" | ";
					}
					if (Player2_ColumnB<=9)
					{
						cout<<"0"<<Player2_ColumnB<<" | ";
					}
					else
					{
						cout<<Player2_ColumnB<<" | ";
					}
					if (Player2_ColumnC<=9)
					{
						cout<<"0"<<Player2_ColumnC<<" | ";
					}
					else
					{
						cout<<Player2_ColumnC<<" | ";
					}
					if (Player2_ColumnD<=9)
					{
						cout<<"0"<<Player2_ColumnD<<" | ";
					}
					else
					{
						cout<<Player2_ColumnD<<" | ";
					}
					if (Player2_ColumnE<=9)
					{
						cout<<"0"<<Player2_ColumnE<<" | ";
					}
					else
					{
						cout<<Player2_ColumnE<<" | ";
					}
					if (Player2_ColumnF<=9)
					{
						cout<<"0"<<Player2_ColumnF<<" |---\n";
					}
					else
					{
						cout<<Player2_ColumnF<<" |---\n";
					}
					if (Player2_Pot<=9)
					{
						cout<<"                   ( 0"<<Player2_Pot<<"+----+----+----+----+----+----+";
					}
					else
					{
						cout<<"                   ( "<<Player2_Pot<<"+----+----+----+----+----+----+";
					}
					if (Player1_Pot<=9)
					{
						cout<<"0"<<Player1_Pot<<" )\n";
					}
					else
					{
						cout<<Player1_Pot<<" )\n";
					}
					cout<<"                    |--| ";
					if (Player1_ColumnA<=9)
					{
						cout<<"0"<<Player1_ColumnA<<" | ";
					}
					else
					{
						cout<<Player1_ColumnA<<" | ";
					}
					if (Player1_ColumnB<=9)
					{
						cout<<"0"<<Player1_ColumnB<<" | ";
					}
					else
					{
						cout<<Player1_ColumnB<<" | ";
					}
					if (Player1_ColumnC<=9)
					{
						cout<<"0"<<Player1_ColumnC<<" | ";
					}
					else
					{
						cout<<Player1_ColumnC<<" | ";
					}
					if (Player1_ColumnD<=9)
					{
					cout<<"0"<<Player1_ColumnD<<" | ";
					}
					else
					{
						cout<<Player1_ColumnD<<" | ";
					}
					if (Player1_ColumnE<10)
					{
					cout<<"0"<<Player1_ColumnE<<" | ";
					}
					else
					{
						cout<<Player1_ColumnE<<" | ";
					}
					if (Player1_ColumnF<10)
					{
						cout<<"0"<<Player1_ColumnF<<" -P1|\n";
					}
					else
					{
						cout<<Player1_ColumnF<<" -P1|\n";
					}
					cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
					cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
					cout<<"\nPlayer 2's Move: ";
					do
					{
						Turn2=0;
						cin>>Choose;
						switch (Choose)
						{							
							case 'F': case 'f':
								if (Player2_ColumnF!=0)
								{
									Grab=Player2_ColumnF;
									Player2_ColumnF=0;
									while (Grab>0)
									{										
										if (Grab==1)
										{
											if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
											{
												Player2_ColumnE++;
												Grab--;
												Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
												Player1_ColumnE=0;
												Player2_ColumnE=0;
											}
											else
											{	
												Player2_ColumnE++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player2_ColumnE++;
											Grab--;
											if (Grab==1)
											{
												if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
												{
													Player2_ColumnD++;
													Grab--;
													Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
													Player1_ColumnD=0;
													Player2_ColumnD=0;
												}
												else
												{		
													Player2_ColumnD++;
													Grab--;
												}
											}
											else if (Grab>1)
											{
												Player2_ColumnD++;
												Grab--;
												if (Grab==1)
												{
													if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
													{
														Player2_ColumnC++;
														Grab--;
														Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
														Player1_ColumnC=0;
														Player2_ColumnC=0;
													}
													else
													{		
														Player2_ColumnC++;
														Grab--;
													}					
												}
												else if (Grab>1)
												{
													Player2_ColumnC++;
													Grab--;
													if (Grab==1)
													{
														if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
														{
															Player2_ColumnB++;
															Grab--;
															Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
															Player1_ColumnB=0;
															Player2_ColumnB=0;
														}
														else
														{		
															Player2_ColumnB++;
															Grab--;
														}
													}
													else if (Grab>1)
													{
														Player2_ColumnB++;
														Grab--;
														if (Grab==1)
														{
															if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
															{
																Player2_ColumnA++;
																Grab--;
																Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
																Player1_ColumnA=0;
																Player2_ColumnA=0;
															}
															else
															{		
																Player2_ColumnA++;
																Grab--;
															}
															
														}
														else if (Grab>1)
														{
															Player2_ColumnA++;
															Grab--;
															if (Grab==1)
															{
																Player2_Turn=1;
																Player2_Pot++;
																Grab--;
															}
															else if (Grab>1)
															{
																Player2_Pot++;
																Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnA++;
						 											Grab--;
																	if (Grab!=0)
																	{
																		Player1_ColumnB++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player1_ColumnC++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player1_ColumnD++;
																				Grab--;
																				if (Grab!=0)
																				{
																					Player1_ColumnE++;
																					Grab--;
																					if (Grab!=0)
																					{
																						Player1_ColumnF++;
																						Grab--;																						
																						if (Grab==1)
																						{
																							if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																							{
																								Player2_ColumnF++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																								Player1_ColumnF=0;
																								Player2_ColumnF=0;
																							}
																							else
																							{
																								Player2_ColumnF++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnF++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}													
													}
												}											
											}											
										}
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn2=1;
								}
								break;
							case 'E': case 'e':
								if (Player2_ColumnE!=0)
								{
									Grab=Player2_ColumnE;
									Player2_ColumnE=0;
									while (Grab>0)
									{
										if (Grab==1)
										{
											if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
											{
												Player2_ColumnD++;
												Grab--;
												Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
												Player1_ColumnD=0;
												Player2_ColumnD=0;
											}
											else
											{		
												Player2_ColumnD++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player2_ColumnD++;
											Grab--;
											if (Grab==1)
											{
												if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
												{
													Player2_ColumnC++;
													Grab--;
													Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
													Player1_ColumnC=0;
													Player2_ColumnC=0;
												}
												else
												{		
													Player2_ColumnC++;
													Grab--;
												}					
											}
											else if (Grab>1)
											{
												Player2_ColumnC++;
												Grab--;
												if (Grab==1)
												{
													if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
													{
														Player2_ColumnB++;
														Grab--;
														Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
														Player1_ColumnB=0;
														Player2_ColumnB=0;
													}
													else
													{		
														Player2_ColumnB++;
														Grab--;
													}
												}
												else if (Grab>1)
												{
													Player2_ColumnB++;
													Grab--;
													if (Grab==1)
													{
														if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
														{
															Player2_ColumnA++;
															Grab--;
															Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
															Player1_ColumnA=0;
															Player2_ColumnA=0;
														}
														else
														{		
															Player2_ColumnA++;
															Grab--;
														}														
													}
													else if (Grab>1)
													{
														Player2_ColumnA++;
														Grab--;
														if (Grab==1)
														{
															Player2_Turn=1;
															Player2_Pot++;
															Grab--;
														}
														else if (Grab>1)
														{
															Player2_Pot++;
															Grab--;
															if (Grab!=0)
															{
																Player1_ColumnA++;
						 										Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnB++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player1_ColumnC++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player1_ColumnD++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player1_ColumnE++;
																				Grab--;
																				if (Grab!=0)
																				{
																					Player1_ColumnF++;
																					Grab--;																																									
																					if (Grab==1)
																					{
																						if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																						{
																							Player2_ColumnF++;
																							Grab--;
																							Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																							Player1_ColumnF=0;
																							Player2_ColumnF=0;
																						}
																						else
																						{
																							Player2_ColumnF++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player2_ColumnF++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
																							{
																								Player2_ColumnE++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
																								Player1_ColumnE=0;
																								Player2_ColumnE=0;
																							}
																							else
																							{	
																								Player2_ColumnE++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnE++;
																							Grab--;
																						}
																					}																						
																				}
																			}
																		}
																	}
																}
															}
														}
													}													
												}
											}											
										}											
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn2=1;
								}
								break;
							case 'D': case 'd':
								if (Player2_ColumnD!=0)
								{
									Grab=Player2_ColumnD;
									Player2_ColumnD=0;
									while (Grab>0)
									{										
										if (Grab==1)
										{
											if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
											{
												Player2_ColumnC++;
												Grab--;
												Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
												Player1_ColumnC=0;
												Player2_ColumnC=0;
											}
											else
											{		
												Player2_ColumnC++;
												Grab--;
											}					
										}
										else if (Grab>1)
										{
											Player2_ColumnC++;
											Grab--;
											if (Grab==1)
											{
												if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
												{
													Player2_ColumnB++;
													Grab--;
													Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
													Player1_ColumnB=0;
													Player2_ColumnB=0;
												}
												else
												{		
													Player2_ColumnB++;
													Grab--;
												}
											}
											else if (Grab>1)
											{
												Player2_ColumnB++;
												Grab--;
												if (Grab==1)
												{
													if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
													{
														Player2_ColumnA++;
														Grab--;
														Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
														Player1_ColumnA=0;
														Player2_ColumnA=0;
													}
													else
													{		
														Player2_ColumnA++;
														Grab--;
													}													
												}
												else if (Grab>1)
												{
													Player2_ColumnA++;
													Grab--;
													if (Grab==1)
													{
														Player2_Turn=1;
														Player2_Pot++;
														Grab--;
													}
													else if (Grab>1)
													{
														Player2_Pot++;
														Grab--;
														if (Grab!=0)
														{
															Player1_ColumnA++;
						 									Grab--;
															if (Grab!=0)
															{
																Player1_ColumnB++;
																Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnC++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player1_ColumnD++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player1_ColumnE++;
																			Grab--;
																			if (Grab!=0)
																			{
																				Player1_ColumnF++;
																				Grab--;																																									
																				if (Grab==1)
																				{
																					if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																					{
																						Player2_ColumnF++;
																						Grab--;
																						Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																						Player1_ColumnF=0;
																						Player2_ColumnF=0;
																					}
																					else
																					{
																						Player2_ColumnF++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player2_ColumnF++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
																						{
																							Player2_ColumnE++;
																							Grab--;
																							Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
																							Player1_ColumnE=0;
																							Player2_ColumnE=0;
																						}
																						else
																						{	
																							Player2_ColumnE++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player2_ColumnE++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
																							{
																								Player2_ColumnD++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
																								Player1_ColumnD=0;
																								Player2_ColumnD=0;
																							}
																							else
																							{		
																								Player2_ColumnD++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnD++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}													
												}
											}											
										}											
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn2=1;
								}
								break;
							case 'C': case 'c':
								if (Player2_ColumnC!=0)
								{
									Grab=Player2_ColumnC;
									Player2_ColumnC=0;
									while (Grab>0)
									{										
										if (Grab==1)
										{
											if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
											{
												Player2_ColumnB++;
												Grab--;
												Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
												Player1_ColumnB=0;
												Player2_ColumnB=0;
											}
											else
											{		
												Player2_ColumnB++;
												Grab--;
											}
										}
										else if (Grab>1)
										{
											Player2_ColumnB++;
											Grab--;
											if (Grab==1)
											{
												if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
												{
													Player2_ColumnA++;
													Grab--;
													Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
													Player1_ColumnA=0;
													Player2_ColumnA=0;
												}
												else
												{		
													Player2_ColumnA++;
													Grab--;
												}													
											}
											else if (Grab>1)
											{
												Player2_ColumnA++;
												Grab--;
												if (Grab==1)
												{
													Player2_Turn=1;
													Player2_Pot++;
													Grab--;
												}
												else if (Grab>1)
												{
													Player2_Pot++;
													Grab--;
													if (Grab!=0)
													{
														Player1_ColumnA++;
						 								Grab--;
														if (Grab!=0)
														{
															Player1_ColumnB++;
															Grab--;
															if (Grab!=0)
															{
																Player1_ColumnC++;
																Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnD++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player1_ColumnE++;
																		Grab--;
																		if (Grab!=0)
																		{
																			Player1_ColumnF++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																				{
																					Player2_ColumnF++;
																					Grab--;
																					Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																					Player1_ColumnF=0;
																					Player2_ColumnF=0;
																				}
																				else
																				{
																					Player2_ColumnF++;
																					Grab--;
																				}
																			}
																			else if (Grab>1)
																			{
																				Player2_ColumnF++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
																					{
																						Player2_ColumnE++;
																						Grab--;
																						Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
																						Player1_ColumnE=0;
																						Player2_ColumnE=0;
																					}
																					else
																					{	
																						Player2_ColumnE++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player2_ColumnE++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
																						{
																							Player2_ColumnD++;
																							Grab--;
																							Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
																							Player1_ColumnD=0;
																							Player2_ColumnD=0;
																						}
																						else
																						{		
																							Player2_ColumnD++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player2_ColumnD++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
																							{
																								Player2_ColumnC++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
																								Player1_ColumnC=0;
																								Player2_ColumnC=0;
																							}
																							else
																							{		
																								Player2_ColumnC++;
																								Grab--;
																							}					
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnC++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}													
												}
											}											
										}											
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn2=1;
								}
								break;
							case 'B': case 'b':
								if (Player2_ColumnB!=0)
								{
									Grab=Player2_ColumnB;
									Player2_ColumnB=0;
									while (Grab!=0)
									{									
										if (Grab==1)
										{
											if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
											{
												Player2_ColumnA++;
												Grab--;
												Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
												Player1_ColumnA=0;
												Player2_ColumnA=0;
											}
											else
											{		
												Player2_ColumnA++;
												Grab--;
											}															
										}
										else if (Grab>1)
										{
											Player2_ColumnA++;
											Grab--;
											if (Grab==1)
											{
												Player2_Turn=1;
												Player2_Pot++;
												Grab--;
											}
											else if (Grab>1)
											{
												Player2_Pot++;
												Grab--;
												if (Grab!=0)
												{
													Player1_ColumnA++;
						 							Grab--;
													if (Grab!=0)
													{
														Player1_ColumnB++;
														Grab--;
														if (Grab!=0)
														{
															Player1_ColumnC++;
															Grab--;
															if (Grab!=0)
															{
																Player1_ColumnD++;
																Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnE++;
																	Grab--;
																	if (Grab!=0)
																	{
																		Player1_ColumnF++;
																		Grab--;																		
																		if (Grab==1)
																		{
																			if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																			{
																				Player2_ColumnF++;
																				Grab--;
																				Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																				Player1_ColumnF=0;
																				Player2_ColumnF=0;
																			}
																			else
																			{
																				Player2_ColumnF++;																					Grab--;
																			}
																		}
																		else if (Grab>1)
																		{
																			Player2_ColumnF++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
																				{
																					Player2_ColumnE++;
																					Grab--;
																					Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
																					Player1_ColumnE=0;
																					Player2_ColumnE=0;
																				}
																				else
																				{	
																					Player2_ColumnE++;
																					Grab--;
																				}
																			}
																			else if (Grab>1)
																			{
																				Player2_ColumnE++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
																					{
																						Player2_ColumnD++;
																						Grab--;
																						Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
																						Player1_ColumnD=0;
																						Player2_ColumnD=0;
																					}
																					else
																					{		
																						Player2_ColumnD++;
																						Grab--;
																					}
																				}
																				else if (Grab>1)
																				{
																					Player2_ColumnD++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
																						{
																							Player2_ColumnC++;
																							Grab--;
																							Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
																							Player1_ColumnC=0;
																							Player2_ColumnC=0;
																						}
																						else
																						{		
																							Player2_ColumnC++;
																							Grab--;
																						}					
																					}
																					else if (Grab>1)
																					{
																						Player2_ColumnC++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
																							{
																								Player2_ColumnB++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
																								Player1_ColumnB=0;
																								Player2_ColumnB=0;
																							}
																							else
																							{		
																								Player2_ColumnB++;
																								Grab--;
																							}
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnB++;
																							Grab--;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}													
													}
												}											
											}											
										}
									}
								}
								else
								{
									cout<<"Invalid... Try Again...\n";
									Turn2=1;
								}
								break;
							case 'A': case 'a':
								if(Player2_ColumnA!=0)
								{
									Grab=Player2_ColumnA;
									Player2_ColumnA=0;
									while (Grab!=0)
									{										
										if (Grab==1)
										{
											Player2_Turn=1;
											Player2_Pot++;
											Grab--;
										}
										else if (Grab>1)
										{
											Player2_Pot++;
											Grab--;
											if (Grab!=0)
											{
												Player1_ColumnA++;
						 						Grab--;
												if (Grab!=0)
												{
													Player1_ColumnB++;
													Grab--;
													if (Grab!=0)
													{
														Player1_ColumnC++;
														Grab--;
														if (Grab!=0)
														{
															Player1_ColumnD++;
															Grab--;
															if (Grab!=0)
															{
																Player1_ColumnE++;
																Grab--;
																if (Grab!=0)
																{
																	Player1_ColumnF++;
																	Grab--;																	
																	if (Grab==1)
																	{
																		if ((Player2_ColumnF==0)&&(Player1_ColumnF>0))
																		{
																			Player2_ColumnF++;
																			Grab--;
																			Player2_Pot+=Player1_ColumnF+Player2_ColumnF;
																			Player1_ColumnF=0;
																			Player2_ColumnF=0;
																		}
																		else
																		{
																			Player2_ColumnF++;
																			Grab--;
																		}
																	}
																	else if (Grab>1)
																	{
																		Player2_ColumnF++;
																		Grab--;
																		if (Grab==1)
																		{
																			if ((Player2_ColumnE==0)&&(Player1_ColumnE>0))
																			{
																				Player2_ColumnE++;
																				Grab--;
																				Player2_Pot+=Player1_ColumnE+Player2_ColumnE;
																				Player1_ColumnE=0;
																				Player2_ColumnE=0;
																			}
																			else
																			{	
																				Player2_ColumnE++;
																				Grab--;
																			}
																		}
																		else if (Grab>1)
																		{
																			Player2_ColumnE++;
																			Grab--;
																			if (Grab==1)
																			{
																				if ((Player2_ColumnD==0)&&(Player1_ColumnD>0))
																				{
																					Player2_ColumnD++;
																					Grab--;
																					Player2_Pot+=Player1_ColumnD+Player2_ColumnD;
																					Player1_ColumnD=0;
																					Player2_ColumnD=0;
																				}
																				else
																				{		
																					Player2_ColumnD++;
																					Grab--;
																				}
																			}
																			else if (Grab>1)
																			{
																				Player2_ColumnD++;
																				Grab--;
																				if (Grab==1)
																				{
																					if ((Player2_ColumnC==0)&&(Player1_ColumnC>0))
																					{
																						Player2_ColumnC++;
																						Grab--;
																						Player2_Pot+=Player1_ColumnC+Player2_ColumnC;
																						Player1_ColumnC=0;
																									Player2_ColumnC=0;
																					}
																					else
																					{		
																						Player2_ColumnC++;
																						Grab--;
																					}					
																				}
																				else if (Grab>1)
																				{
																					Player2_ColumnC++;
																					Grab--;
																					if (Grab==1)
																					{
																						if ((Player2_ColumnB==0)&&(Player1_ColumnB>0))
																						{
																							Player2_ColumnB++;
																							Grab--;
																							Player2_Pot+=Player1_ColumnB+Player2_ColumnB;
																							Player1_ColumnB=0;
																							Player2_ColumnB=0;
																						}
																						else
																						{		
																							Player2_ColumnB++;
																							Grab--;
																						}
																					}
																					else if (Grab>1)
																					{
																						Player2_ColumnB++;
																						Grab--;
																						if (Grab==1)
																						{
																							if ((Player2_ColumnA==0)&&(Player1_ColumnA>0))
																							{
																								Player2_ColumnA++;
																								Grab--;
																								Player2_Pot+=Player1_ColumnA+Player2_ColumnA;
																								Player1_ColumnA=0;
																								Player2_ColumnA=0;
																							}
																							else
																							{		
																								Player2_ColumnA++;
																								Grab--;
																							}													
																						}
																						else if (Grab>1)
																						{
																							Player2_ColumnA++;
																							Grab--;																							
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}													
													}
												}											
											}											
										}
									}						
								}
								else
								{
									cout<<"Invalid... Try Again...";
									Turn1=1;
								}
								break;
							default:cout<<"Invalid... Try Again...\n";
									Turn2=1;
						}
					}
					while (Turn2!=0);
				}
			}
			cout<<"________________________________________________________________________________\n";
		}
		while (Player2_Turn!=0);
	}
	while (Game_Over!=1);
	cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
	cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
	cout<<"                    |P2- 00 | 00 | 00 | 00 | 00 | 00 |--|\n";
	if (Player2_Pot<10)
	{
		cout<<"                   ( 0"<<Player2_Pot<<"+----+----+----+----+----+----+";
	}
	else
	{
		cout<<"                   ( "<<Player2_Pot<<"+----+----+----+----+----+----+";
	}
	if (Player1_Pot<10)
	{
		cout<<"0"<<Player1_Pot<<" )\n";
	}
	else
	{
		cout<<Player1_Pot<<" )\n";
	}
	cout<<"                    |--| 00 | 00 | 00 | 00 | 00 | 00 -P1|\n";
	cout<<"                     ---|--|-|--|-|--|-|--|-|--|-|--|---\n";
	cout<<"                         Aa   Bb   Cc   Dd   Ee   Ff\n";
	cout<<"________________________________________________________________________________\n";
	if (Player1_Pot>Player2_Pot)
	{
		cout<<"\n\nPlayer 1 Wins...\n\n";
	}
	else if (Player1_Pot==Player2_Pot)
	{
		cout<<"\nIt's A Draw...\n";
	}
	else
	{
		cout<<"\n\nPlayer 2 Wins...\n\n";
	}
	return 0;
	system("pause");
}
