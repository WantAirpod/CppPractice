#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <functional>
#include <cmath>
//#include "add.h"
/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////������ϰ���///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//#incdlue <> : c++ ��Ÿ�� ���̺귯���� ��� ���Ϸν� �ü���� Ư���� ��ġ�� �����Ѵ�.
//#include "" : �Ϲ������� �ڻ��� �ۼ��� ��������� include �Ѵ�.
int addd(int x, int y)
{
	return x+y;
}
/*define ���� s�޸� ���� ���� �޸� ���� �߻� �� ��ġ�� �˷���*/
//#define new DEBUG_NEW

using namespace std; 



/*����ü�� ���Ϳ� �����ϴ� ����*/
struct Score
{
	string name;
	int korean;
	int english;
	int math;
};
 



/* sort ����ü ���� */
struct PP
{
	int x;
	int y;
};
/* ����ü�� Ŭ������ ����*/
struct point2D
{
	int x;
	int y;

};

class Point2D2
{
	
public :
	int x;
	int y;
	void Init()
	{
		x=12;
		y=12;
	}

};




/*�����Ϳ� ���۷����� ����*/
//1.NULL ��� ���� : �����ʹ� NULL�� ���������, ���۷����� NULL�� �� �� ����.
struct personer
{
	int birthday;

};


/*����ü �����ڷ� �ʱ�ȭ 202004029 */
typedef struct _MY_STRUCT
{
	char c;
	int i;
	char sz[100];
}MY_STRUCT;
/*�Ϲ����� ����ü ���� �� �ʱ�ȭ */
MY_STRUCT ast;
//memset(ast,0,sizeof(ast));

/*�����ڿ��� �ʱ�ȭ*/
typedef struct _MY_STR
{
	char c;
	int i ;
	char sz[100];
	_MY_STR()
	{
		memset(this,0x00,sizeof(struct _MY_STR));
	}
} MY_STRC;
MY_STRC sst; //����� ���ÿ� �ʱ�ȭ


/*typedef �Լ� ������ ���� */
void (*ptrfunc)(int) ; //�Լ� ������ : return���� �ڷ���(*������ �Լ��� �̸�)(���ڰ�)
void testprint(int n)
{
	printf("Number : %d \n" , n);

} 
typedef void (*ptrfunc2)(int);
void testprint2(int nn)
{
	printf("Number : %d \n" , nn);
}

/* sort ����ü ����  */

bool cmp (const Score &p1 , const Score &p2)
{
	if(p1.english == p2.english)
	{
		if(p1.korean < p2.korean)
		return true; //�������� 
	}else
	{
		true;
	}
	
}
bool Vcomp (const pair<int,int> &p1, const pair<int,int> &p2)
{
	if(p1.first < p2.first) //first �������� ����
		return true;
	else if ( p1.first==p2.first)
	{
		if(p1.second < p2.second) //second�� �������� ���� 
		{
			return true;
		}
	}

	return true;
}
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////MAIN///////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
int main ()
{  
/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////8(Octal), 10(Decimal), 16(Hexadecimal) Trans//////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	cout <<"/////////////////////////////////////////////////////////////////////// "  <<endl;
	cout <<"////////////8(Octal), 10(Decimal), 16(Hexadecimal) Trans/////////////// "  <<endl;
	cout <<"/////////////////////////////////////////////////////////////////////// "  <<endl;
	/*
		8������ 10������ 0�� �ٿ��ش�.
		10������ �״��
		16������ 10������ 0x�� �ٿ��ش�.

	*/
	int decimal = 41;
	int octal = 041;
	int hexadecimal = 0x41;
	//1. 10���� 41�� 8����, 16������ ǥ���ϱ�
	cout << "41(10) : " << decimal <<endl; //41
	cout << "41(8) : " << octal << endl; //33
	cout << "41(16) : " <<hexadecimal <<endl; //65 

	string ans = "FA92"; //16���� ��Ʈ������ ǥ�� 
	int res = pow(12.2,12);
	
	for(int i= 0 ; i< ans.size() ; i++)
	{
		int a;
		int b= ans.size()-i-1;
		a=pow(16.0, b);
		if(ans[i]-'0' <10)
		{
			a*=(ans[i]-'0');
		}else
		{
			a*=(ans[i]-'7');
		}
		res +=a;
	
	}

/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////�ڷᱸ��///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	/*
		Vector ����
	*/

	//Vector Pair ����
	vector<pair<int,int>> pair2;
	vector<pair<int,pair<int,int>>> pair3;
	/*
		pair2.push_back({1,2};
		pair3.push_back({1},{2,3});

		cout<< pair[0].first.first;
		cout<< pair[0].first.second;


		cout << pair3[0].second.first<< endl; -> 2
		cout << pair3[0].second.second <<endl; -> 3
		cout << pair3[0].first.first <<endl; ->1
	*/

	/*
		����ü�� ���Ϳ� �����ϴ� ����
		����ü �迭�� vv[0].english vv[1].korean ������ ����Ǵ� ����
		2���� ���Ͷ��� ���� ���̰��ִ�.
	*/

	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"///////////////VECTOR EX/////////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	vector<Score> vv;
	Score score1;
	score1.korean = 123;
	score1.english = 123;
	
	Score score2;
	score2.korean = 123;
	score2.english = 123;

	vv.push_back(score1);
	vv.push_back(score2); 

	//sort(vv.begin(),vv.end(),Vcomp);
	
	vector<Score> ss;
	Score temmm;
	//memset(ss,0,sizeof(ss));
	//*memset(temmm,0,sizeof(temmm));*/
	temmm.english =30 ;
	ss.push_back(temmm);
	
	/*
		2���� ���ʹ� Vec2D[0][1] Vec2D[0][2] �̷������� ���״�� 2�����迭��������
	*/
	//2�������� �������
	vector<int> vec1;
	vector<int> vec2;
	vector<vector<int>> Vec2D;

	vec1.push_back(0); //vec1 = 0,1
	vec1.push_back(1);
	vec2.push_back(0); //vec2 = 0,1,2,3
	vec2.push_back(1);
	vec2.push_back(2);
	vec2.push_back(3);

	Vec2D.push_back(vec1);
	Vec2D.push_back(vec2);	

	cout<< endl;
	//���
	/*
		Vec2D
		0-0,1
		1-0,1,2,3
	*/  
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"////////////2D VECTOR EX/////////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	
	for(int i =0 ; i<Vec2D.size() ; i++ )
	{
		for(int j = 0 ; j <Vec2D[i].size() ; j++)
		{
			cout<<"2D Vector : " <<Vec2D[i][j] <<  endl ;
			 
		}
			cout<<endl;
	}
	

	/*
		�ڷᱸ�� Map
		key, value�� ������ �ڷᱸ��
		key���� �ߺ���� X �ߺ� ��� �� map�� �ȴ���.
		���� ���� X 
		multimap�� key���� �ߺ����� ������ �ִ�.
	*/
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"/////////////////////Map/////////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	/*�ڷᱸ�� Map*/
	map<string,int> m;
	m.insert(make_pair("aaqwe",231));
	m.insert(make_pair("b",2123));
	m.insert(make_pair("c",333));
	m.insert(make_pair("d",4));
	m.insert(make_pair("e",5));
	m.insert(make_pair("e",5));

	map<int,int> :: iterator iter; 
	map<int,int> mm;
	mm[11]=200;  //key value ����
	mm[12]=200;	
	mm[0] =30;
	/*
		�߿�κ� Map ���
	*/ 

	for(iter=mm.begin(); iter!=mm.end();++iter)
	{

		cout <<"( " << iter->first <<", " <<iter->second << ")" << " "  ; 
	} 
	cout<< endl;
	map<string,int> :: iterator it; 
	for(it=m.begin();it!=m.end();++it)
	{
		cout <<"( " << it->first <<", " <<it->second << ")" << " "  ; 
		
	}
	cout<< endl;
	//count(key) 
 
	cout<<"Map a count :" <<m.count("a") << endl;
	cout <<"Map b count :" << m.count("b") <<endl;

  
 
	/*
		�ڷᱸ�� Set
		1) ��� ��� �����̳�
		2) ���� ����Ʈ���� ����
		3) key���� �ߺ�X
		4) ���Ұ� �ڵ����� ���ĵ�(��������)**

	*/
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"/////////////////////set/////////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	set<int> s1;
	set<pair<int,int>> ss2;

	//set�Է�
	s1.insert(9);
	s1.insert(8);
	s1.insert(7);
	s1.insert(6);
	s1.insert(5);
	s1.insert(4);
	s1.insert(4);
	s1.insert(4);

	//pair
	ss2.insert(make_pair(1,2)); 
	ss2.insert(make_pair(1,2)); 
	ss2.insert(make_pair(1,2)); 
	ss2.insert(make_pair(1,2)); 
	ss2.insert(make_pair(1,2)); 
 
	set<int> ::iterator ii;
	for(ii =s1.begin() ; s1.end()!=ii ; ii++)
	{
		cout<<"set value " << *ii<<endl; ;  //���� 4,5,6,7,8,9

	}
	set<int,int> :: iterator itrs; 
 
	//find 
	ii=s1.find(9);
	if(ii != s1.end())
	{	cout << " Have you 9 ? " <<endl;
		cout<<   *ii <<"is have"<<endl;

	}else
	{
		cout<<"have not" <<endl;

	}
 


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////����ü //////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

	cout <<"/////////////////////////////////////////////// "  <<endl;
	cout <<"////////////////struct & class///////////////// "  <<endl;
	cout <<"/////////////////////////////////////////////// "  <<endl;
	/* sort ����ü ���� */
	//PP a[100];
	//sort(a,a+100,cmp);  
	PP tem;
	PP tem2;
	tem.x = 10;
	tem.y = 10;
	tem2.x=20;
	tem2.y=30;
	//sort(tem,tem2,cmp);
	
	int test(300);
	//cout<<"test : " << test << endl;
	cout<<endl;
 
	/* 
		����ü�� Ŭ������ ���� : 
		��ü�� �������� �����ڸ� �������� ������ public���� Ŭ������ private�� ����
	*/
	Point2D2 p1;
	p1.Init();
	int temp = p1.x;
 
	cout << temp <<endl; 

	struct personer *peter = NULL; //�����߻�
	if(peter)
	{
		peter->birthday =1220;
	}
	else 
	{
		cout<<"peter is null" <<endl;
	} 

	/*
		����ü�Ҵ����
	*/
	struct P
	{

		int a;
		int b;
	};
	P* ptr =new P;

	delete ptr;
 
/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////���۷��� & ������/////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

	/*�����Ϳ� ���۷����� ����*/
	//2.���� ��� �Ҵ� �� ���� &������ ���� �ּҰ��� �Ҵ� 
	/* 
		��� :  ���۷����� �����͸� �߸� ����ؼ� ����� ������ 
				�������� �ּ�ȭ�ϱ����ػ���
				Use references when you can, and pointers when you have to
				����� �� �ִٸ� �����ڸ� ���, ��¿ �� ���ٸ� �����͸� ���
				��ó: https://gracefulprograming.tistory.com/11 [Peter�� ����� ���α׷���]
				int aaa=10;
				int *p = &aaa;
				int &p =aaa;
	*/
	cout<<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"////////////Function Pointer/////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;

	/*typedef �Լ� ������ ���� */
	testprint(100);
	ptrfunc =testprint; //�Լ� �����Ͱ� ����ϰ����ϴ� �Լ� ���� ������ �ϰԵ�
	ptrfunc(77);

	testprint2(100);
	ptrfunc2 elecs; // elecs = ptrfunc2 
	elecs = testprint2;
	elecs(77);

/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////���� ������ /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	/*
		������ : �����δ� �������� ��� �ּҸ� ���� �� ���� 
				 ������, �޸� �ּҴ� �Ϲ� �����Ϳ� ����X --> ���� �����Ϳ� ����
	*/
	int *numPtr1;  // ���� ������
	int **numPtr2;  //���� ������
	int num = 10;
	
	numPtr1 = &num; //num1�� �޸� �ּ� ����.
	numPtr2 = &numPtr1; //numptr1�� �޸� �ּ� ����

	cout<< numPtr2 <<endl;
	cout << **numPtr2 <<endl; //20 �����͸� �� �� ������ 

	int num1 = 10 , num2 = 20, num3=30;
	int *parr[3];

	parr[0] = &num1;
	parr[1] = &num2;
	parr[2] = &num3;
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"////////////////** Pointer///////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;

	for(int i = 0 ; i < 3 ; i++ )
	{
		cout<<i << " " << *parr[i] <<endl;

	}
 
/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////��� ���ϰ��� /////////////////////////////////////// 
/////////////////////////////////////////////////////////////////////////////////////////////
	cout <<"/////////////////////////////////////// "  <<endl;
	cout <<"////////////Header Method////////////// "  <<endl;
	cout <<"/////////////////////////////////////// "  <<endl;
	cout<< addd(3,4) <<endl;

/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////16���� �Է� ���/////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
	return 0;
}
