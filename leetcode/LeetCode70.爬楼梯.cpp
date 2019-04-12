
//利用数组实现斐波那契数列
int climbStairs(int n) {
	vector<int> s;
	s.push_back(1);
	s.push_back(2);//先把头两个元素放进数组
	if (n == 1)
		return 1;
	if(n == 2)
		return 2;
	for (int i = 2; i < n; i++)
	{
		s.push_back(s[i - 1] + s[i - 2]); //用数组存储的方法去找F(n)
	}
	return s[n - 1];
}
