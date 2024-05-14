TEST(VectorTest, BasicTest) {
    vector<long long> vec = {1, 2, 3, 4, 5};
    long long n = 10;
    vector<long long> e = {11, 12, 13, 14, 15};
    vector<long long> result = vect(vec, n);
    ASSERT_EQ(result, e);
}

TEST(VectorTest, NegativeN) {
    vector<long long> vec = {10, 20, 30, 40, 50};
    long long n = -5;
    vector<long long> e = {5, 15, 25, 35, 45};
    vector<long long> result = vect(vec, n);
    ASSERT_EQ(result, e);
}
