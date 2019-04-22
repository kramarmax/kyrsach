void BakeryProduct::recipe(const char *str, int s)
{
	/***************************************** вывод на экран ***************************************************/
	cout << str << endl;
	cout << "мука " << sort_of_flour->sort << " " << sort_of_flour->amount << " г;" << endl;
	cout << "масло " << oil_or_butter->maslo << ' ' << oil_or_butter->amount << " мл;" << endl;
	cout << "вода " << water->amount << " мл;" << endl;
	cout << "соль " << salt->amount << " г;" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << other_ingredients[i].ingredient << ' ' << other_ingredients[i].amount << ' ' << other_ingredients[i].measure << '.' << endl;
	}
	cout << endl;
	/***************************************** вывод  ***************************************************/
	ofstream file("file.txt", ios::app);
	file << str << endl;
	file << "мука " << sort_of_flour->sort << " " << sort_of_flour->amount << " г;" << endl;
	file << "масло " << oil_or_butter->maslo << ' ' << oil_or_butter->amount << " мл;" << endl;
	file << "вода " << water->amount << " мл;" << endl;
	file << "соль " << salt->amount << " г;" << endl;
	for (int i = 0; i < s; i++)
	{
		file << other_ingredients[i].ingredient << ' ' << other_ingredients[i].amount << ' ' << other_ingredients[i].measure << '.' << endl;
	}
	file << endl;
	file.close();
}
