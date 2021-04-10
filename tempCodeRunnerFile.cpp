ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (n - i - 1 == j)
                {
                    cout << "*";
                }
                else
                {
                    cout << j + 1;
                }
            }
            cout << endl;
        }