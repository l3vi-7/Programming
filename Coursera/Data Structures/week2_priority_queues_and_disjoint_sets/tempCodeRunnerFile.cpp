for (ll i = 0; i < m; i++) {
        pair <ll, ll> curr = threads.top();
        threads.pop();
        assigned[i] = curr.second;
        //cout << curr.first << " " << curr.second << endl;
        start_time[i] = curr.first;
        curr.first += times[i];
        //cout << " i " << i << " " << " curr " <<  curr.first << times[i] << endl;
        threads.push(curr);
    }

    for (ll i = 0; i < m; i++) {
        cout << assigned[i] << " " << start_time[i] << endl;
    }