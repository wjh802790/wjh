//vector���� set 
//vector<typename> name;
//typename ��Ȼ�������κλ������ͣ�
//����int, double, char, �ṹ��ȡ�
//������STL��׼������
//����vector, set, queue�ȡ�
//���typename ��һ��STL������
//��ô������Ҫ�ǵ���>>����֮����Ͽո�
//vector<int> name;
//vector<double> name;
//vector<char> name;
//vector<node> name;
//node�ǽṹ�������

//vector<vector<int> > name;
//ע��Ŷ��>>֮��Ҫ���Ͽո�
//�����Ļ������������뵽��ά����Ķ��壬��Ԫ��������һά��������顣
//��ôvector����Ҳ��һ������Arrayname[ ]�е�ÿһ��Ԫ�ض���һ��vector��
//��ѧ�߿��԰�vector���鵱������ά�����Ա䳤�Ķ�ά������⡣
//vector<typename> Arrayname[arraySize];
//���磺vector<int> vi[100]; 
//����Arrayname[0]~Arrayname[arraySize - 1]��ÿһ������һ��vector������
//��vector<vector<int> > name��ͬ���ǣ�
//����д����һά�����Ѿ��̶�ΪarraySize,
//��һά���ǡ��䳤���ģ�ע�����������д��������Ŷ

//vector������Ԫ�صķ���
//(1).ͨ���±���� 
//���壺vector<typename> vi
//(2).ͨ������������
//������(iterator)�������Ϊһ������ָ��Ķ������䶨���ǣ�
//vector<typename>::iterator it;

//vector���ú�������
/* 	push_back()		//push_back(x) ������vector�������һ��Ԫ��x,ʱ�临�Ӷ�ΪO(1)
	pop_back()		//pop_back()����ɾ��vector��βԪ�أ�ʱ�临�Ӷ�ΪO(1)
	size()			//size()�������vector��Ԫ�صĸ�����ʱ�临�Ӷ�ΪO(1)
	clear()			//clear()�������vector�е�����Ԫ�أ�ʱ�临�Ӷ�ΪO(n)
	insert()		//insert(it, x) ������vector�����������it������һ��Ԫ��x, ʱ�临�Ӷ�ΪO(n)
						�����Ԫ�غ�����Զ����� 
	erase()			//1.ɾ������Ԫ�أ�erase(it) ��ɾ��������Ϊit ����Ԫ��
	*/ 				//ɾ��һ�������ڵ�����Ԫ�أ�erase(first, last), 
					//��ɾ��[first, last)�ڵ�����Ԫ��,ע��Ŷ��
					//ɾ��vector�е�����Ԫ�أ����ǲ�����last
					//����������vector�ķ�����ʹ��vi.clear()
//void myprint(int val){
//	printf("%d",val);
//}
//int main(){
//	int n;
//	cin>>n;
//	vector<int> vi;
//	for(int i=1;i<=n;i++){
//		vi.push_back(i);
//	}
	//����ר�ŵı����㷨
//	for_each(vi.begin(),vi.end(),myprint); 
	//forѭ��
//	for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
//		printf("%d",*it);
//	} 
	//whileѭ�� 
//	vector<int>::iterator it=vi.begin();
//	vector<int>::iterator is=vi.end();
//	while(it!=is){
//		//vector�ĵ�������֧��it<vi.end(),���ѭ������ֻ����it!=vi.end()<=>is 
//		printf("%d",*(it));
//		it++;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",*(it + i));
//	}
//	return 0;
	//vi[i] �� *(vi.begin()+i)�ǵȼ۵� 
	//ֻ��������it��Ϊ��vi������Ԫ�ص�ָ�� 
//} 

//set �����÷���� 

//set����Ҫ���������Զ�ȥ�ز�����������
//��˵���������ȥ�ص��ǲ�����ֱ�ӿ��������������Գ�����set����� 

//set������Ԫ�صķ���
//ע��Ŷ��setֻ��ͨ����������iterator�����ʣ�
//set<typename>::iterator it;

//���� 
//set<int>::iterator:: it;
//set<char>::iterator it;
//���ҿ���ͨ��*it ������set ���Ԫ�ء�

//�����ڳ���vector �� string ֮���STL��������֧��*(it + i) �ķ��ʷ�ʽ��
//���ֻ�ܰ����·�ʽö�٣�
//int main()
//{
//	set<int> st;
//	st.insert(3);//insert(x)��x����set��
//	st.insert(5);
//	st.insert(2);
//	st.insert(3);
// 
//	//ע�⣬��֧��it < st.end()��д��
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		printf("%d ", *it);//���2 3 5
//	}
//	return 0;
//}
//���Է��֣�set�ڵ�Ԫ���Զ������������Զ�ȥ�����ظ�Ԫ��

//set���ú�������
//insert()
//insert(x),��x����set�����У����Զ����������ȥ�أ�ʱ�临�Ӷ�ΪO(logN)
//find()
//find(value), ����set�ж�ӦֵΪvalue�ĵ�������ʱ�临�Ӷ�ΪO(logN)
//erase()
//1.ɾ������Ԫ�أ�ɾ������Ԫ��Ҳ�����ַ���
	//����һ��st.erase(it), itΪ����Ҫɾ��Ԫ�صĵ�������
		//ʱ�临�Ӷ�ΪO(1)�����find()������ʹ��
			//st.erase(st.find(100)); //����find()�����ҵ�100��Ȼ����erase()ɾ����
			//st.erase(st.find(200));//����find()�����ҵ�200��Ȼ����erase()ɾ����
	//st.erase(value), valueΪ����Ҫɾ��Ԫ�ص�ֵ��
		//ʱ�临�Ӷ�ΪO(logn)
			//st.erase(100);
//2.ɾ��һ�������ڵ�����Ԫ��:ʱ�临�Ӷ�ΪO(last - first)
	//st.erase(first, last)����ɾ��һ�������ڵ�����Ԫ��
		//ɾ��set���������Ԫ�أ����ǲ�����last 
//size()	//����set�е�Ԫ�ظ��� 

//clear() 	//���set�е�Ԫ�� 

//int main()
//{
//	set<int> st;
//	st.insert(100);
//	st.insert(200);
//	st.insert(100);
//	st.insert(300);
// 	
//	st.erase(st.find(100));//����find()�����ҵ�100��Ȼ����erase()ɾ����
//	st.erase(st.find(200));//����find()�����ҵ�200��Ȼ����erase()ɾ����
// 	
//	st.erase(100);	//ɾ��set��ֵΪ100���� 
// 	
// 	set<int>::iterator it = st.find(300);
//	st.erase(it, st.end());//ɾ��Ԫ��300��ĩβ֮���Ԫ�أ���30��40
//	
//	printf("%d\n", st.size());
//	//���set�ڵ�Ԫ�ظ��� 
//	
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		printf("%d\n", *it);
//		
//	}
//	
//	st.clear();//���set
//	printf("%d\n", st.size());//���0
//	
//	return 0;
//}

