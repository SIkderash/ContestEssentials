	for(int k = 0; k <= 26; k++)
		for(int i = 0; i <= 26; i++)
			for(int j = 0; j <= 26; j++)
				e[i][j] |= e[i][k] & e[k][j];
	bool haveCycle = false;
	for(int i = 0; i <= 26; i++)
		haveCycle |= e[i][i];
	if(haveCycle)
		cout << "Impossible" << endl;
