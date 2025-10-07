vector<string> split(const string& s, char delim) {
    stringstream ss(s);
    string extracted;
    vector<string> ans;

    while (getline(ss, extracted, delim)) {
        ans.push_back(extracted);
    }

    return ans;
}

vector<string> secureSplit(const string& s, char delim) {
    stringstream ss(s);
    string extracted;
    vector<string> ans;

    while (getline(ss, extracted, delim)) {
        if (!extracted.empty()) { // Check for empty tokens
            ans.push_back(extracted);
        }
    }

    return ans;
}
