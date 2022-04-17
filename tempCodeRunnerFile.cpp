
	// {
	// 	int nn = INT_MAX, u = -1;
	// 	for (int i = 0; i < n; i++)
	// 		if (kt[i] && d[i] < nn)
	// 		{
	// 			nn = d[i];
	// 			u = i;
	// 		}
	// 	kt[u] = false;
	// 	if (u == -1)
	// 		break;
	// 	for (int i = 0; i < a[u].size(); i++)
	// 		if (kt[i] && d[u] + a[u][i].second < d[i])
	// 			d[i] = d[u] + a[u][i].second;
	// }