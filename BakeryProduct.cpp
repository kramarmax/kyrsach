void BakeryProduct::recipe(const char *str, int s)
{
	/***************************************** ����� �� ����� ***************************************************/
	cout << str << endl;
	cout << "���� " << sort_of_flour->sort << " " << sort_of_flour->amount << " �;" << endl;
	cout << "����� " << oil_or_butter->maslo << ' ' << oil_or_butter->amount << " ��;" << endl;
	cout << "���� " << water->amount << " ��;" << endl;
	cout << "���� " << salt->amount << " �;" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << other_ingredients[i].ingredient << ' ' << other_ingredients[i].amount << ' ' << other_ingredients[i].measure << '.' << endl;
	}
	cout << endl;
	/***************************************** �����  ***************************************************/
	ofstream file("file.txt", ios::app);
	file << str << endl;
	file << "���� " << sort_of_flour->sort << " " << sort_of_flour->amount << " �;" << endl;
	file << "����� " << oil_or_butter->maslo << ' ' << oil_or_butter->amount << " ��;" << endl;
	file << "���� " << water->amount << " ��;" << endl;
	file << "���� " << salt->amount << " �;" << endl;
	for (int i = 0; i < s; i++)
	{
		file << other_ingredients[i].ingredient << ' ' << other_ingredients[i].amount << ' ' << other_ingredients[i].measure << '.' << endl;
	}
	file << endl;
	file.close();
}
