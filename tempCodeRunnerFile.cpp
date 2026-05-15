for (int i = 0; i < vec.size(); i++)
    {
        int first = vec[i];
        for (int j = i + 1; j < vec.size(); j++)
        {
            int second = vec[j];
            if (first + second == target)
            {
                cout << "found: " << first << "+" << second << "=" << target << endl;
                return 0;
            }
        }
    }