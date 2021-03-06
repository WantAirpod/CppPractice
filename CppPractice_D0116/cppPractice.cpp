#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
//#include "add.h"
/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////헤더파일개념///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//#incdlue <> : c++ 런타임 라이브러리의 헤더 파일로써 운영체제의 특별한 위치에 존재한다.
//#include "" : 일반적으로 자산이 작성한 헤더파일을 include 한다.
int addd(int x, int y)
{
	return x+y;
}
/*define 관련 s메모리 누수 방지 메모리 릭이 발생 시 위치를 알려줌*/
//#define new DEBUG_NEW

using namespace std; 



/*구조체를 벡터에 저장하는 예제*/
struct Score
{
	string name;
	int korean;
	int english;
	int math;
};
 

/*자료구조 Map*/
map<string,int> m;


/* sort 구조체 정렬 */
struct PP
{
	int x;
	int y;
};
/* 구조체와 클래스의 차이*/
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




/*포인터와 레퍼런스의 차이*/
//1.NULL 허용 여부 : 포인터는 NULL을 허용하지만, 레퍼런스는 NULL이 될 수 없다.
struct personer
{
	int birthday;

};


/*구조체 생성자로 초기화 202004029 */
typedef struct _MY_STRUCT
{
	char c;
	int i;
	char sz[100];
}MY_STRUCT;
/*일반적인 구조체 선언 후 초기화 */
MY_STRUCT ast;
//memset(ast,0,sizeof(ast));

/*생성자에서 초기화*/
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
MY_STRC sst; //선언과 동시에 초기화


/*typedef 함수 포인터 구현 */
void (*ptrfunc)(int) ; //함수 포인터 : return값의 자료형(*포인터 함수의 이름)(인자값)
void testprint(int n)
{
	printf("Number : %d \n" , n);

} 
typedef void (*ptrfunc2)(int);
void testprint2(int nn)
{
	printf("Number : %d \n" , nn);
}

/* sort 구조체 정렬  */

bool cmp (const PP &p1 , const PP &p2)
{
	if(p1.x <p2.x)
	{
		return true; //오름차순
	}
	else if (p1.x == p2.x)
	{
		if(p1.y <p2.y) return true; //x끼리같을때 y로 오름차순
	}
	else
	{
		return false;  
	}
}
 
int main ()
{  
/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////// 자료구조 ///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	cout <<"/////////////////////////////////////////////////////////////////////// "  <<endl;
	cout <<"////////////8(Octal), 10(Decimal), 16(Hexadecimal) Trans/////////////// "  <<endl;
	cout <<"/////////////////////////////////////////////////////////////////////// "  <<endl;
	/*
		8진수는 10진수에 0을 붙여준다.
		10진수는 그대로
		16진수는 10진수에 0x를 붙여준다.

	*/
	int decimal = 41;
	int octal = 041;
	int hexadecimal = 0x41;
	//1. 10진수 41을 8진수, 16진수로 표현하기
	cout << "41(10) : " << decimal <<endl; //41
	cout << "41(8) : " << octal << endl; //33
	cout << "41(16) : " <<hexadecimal <<endl; //65 

	//16진수로 출력하기
	cout<< "8->16 : " << hex << octal << endl; 
	cout<< "10->16 : " << hex << decimal << endl; 



/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////// 자료구조 ///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	/*
		자료구조 Map
		key, value를 가지는 자료구조
		multimap은 key값을 중복으로 가질수 있다.
	*/
	cout <<" ////////////////////////////// "  <<endl;
	cout <<" ////////////Map/////////////// "  <<endl;
	cout <<" ////////////////////////////// "  <<endl;
	m.insert(make_pair("a",1));
	m.insert(make_pair("b",2));
	m.insert(make_pair("c",3));
	m.insert(make_pair("d",4));
	m.insert(make_pair("e",5));
	m.insert(make_pair("e,",5));
	
	map<int,int> mm;

	mm[11]=200;  //key value 삽입
	mm[12]=200;	
	mm[0] =30;

	/*
		중요부분 Map 출력
	*/
	map<int,int> :: iterator iter;
	

	for(iter=mm.begin(); iter!=mm.end();++iter)
	{

		cout <<" ( " << iter->first <<", " <<iter->second << ")" << " "  ; 
		
	} 
	cout<< endl;
	//count(key) 
	cout <<" ////////////////////////////// "  <<endl;
	cout <<" ////////////map count/////////////// "  <<endl;
	cout <<" ////////////////////////////// "  <<endl;
	cout<<"a count :" <<m.count("a") << endl;
	cout <<"b count :" << m.count("b") <<endl;

	//begin(), end()
	cout<<"traverse" << endl;
	map<string,int> :: iterator it;

 
	/*
		자료구조 Set
		1) 노드 기반 컨테이너
		2) 균형 이진트리로 구현
		3) key값은 중복X
		4) 원소가 자동으로 정렬됨(오름차순)**

	*/

	set<int> s1;
	set<pair<int,int>> ss2;

	//set입력
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


	//출력
	cout <<" ////////////////////////////// "  <<endl;
	cout <<" ////////////set/////////////// "  <<endl;
	cout <<" ////////////////////////////// "  <<endl;

	set<int> ::iterator ii;
	for(ii =s1.begin() ; s1.end()!=ii ; ii++)
	{
		cout<<*ii<<" " ;  //예상 4,5,6,7,8,9

	}
	set<int,int> :: iterator itrs;

	
 

 
	//find 
	cout <<" ////////////////////////////// "  <<endl;
	cout <<" ////////////set.find/////////////// "  <<endl;
	cout <<" ////////////////////////////// "  <<endl;
	ii=s1.find(9);
	if(ii != s1.end())
	{
		cout<<   *ii <<"have"<<endl;

	}else
	{
		cout<<"have not" <<endl;

	}

	cout << endl;
	cout << endl;
	cout << endl;
	


//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////구조체/////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


	/* sort 구조체 정렬 */
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
	cout<<"test : " << test << endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	/* 구조체와 클래스의 차이 : 
	구체는 접근제어 지시자를 선언하지 않으면 public으로 클래스는 private로 선언
	*/
	Point2D2 p1;
	p1.Init();
	int temp = p1.x;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout << temp <<endl; 

	struct personer *peter = NULL; //에러발생
	if(peter)
	{
		peter->birthday =1220;
	}
	else 
	{
		cout<<"peter is null" <<endl;
	} 
	cout<< endl;
	cout<< endl;
	cout<< endl;
	/*구조체를 벡터에 저장하는 예제*/
	vector<Score> vv;
	Score score;
	for(int i = 0 ; i < 3 ; i++)
	{
		cout<<" NAME : " ;
		cin >> score.name;
		cout << "KOREAN : "  ;
		cin >> score.korean;

		vv.push_back(score);
	}
	
	vector<Score> ss;
	Score temmm;
	//memset(ss,0,sizeof(ss));
	//*memset(temmm,0,sizeof(temmm));*/
	temmm.english =30 ;
	ss.push_back(temmm);
	cout<<ss.front().korean; 

	//2차원벡터 생성방법
	vector<int> vec1;
	vector<int> vec2;
	vector<vector<int>> Vec2D;

	vec1.push_back(0); //vec1 = 0,1
	vec1.push_back(1);
	vec2.push_back(0);//vec2 = 0,1,2,3
	vec2.push_back(1);
	vec2.push_back(2);
	vec2.push_back(3);

	Vec2D.push_back(vec1);
	Vec2D.push_back(vec2);	

	cout<< endl;
	//출력
	/*
	Vec2D
	0-0,1
	1-0,1,2,3
	*/
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	for(int i =0 ; i<Vec2D.size() ; i++ )
	{
		for(int j = 0 ; j <Vec2D.size() ; j++)
		{
			cout<<Vec2D[i][j]<< " " ;
		}
			cout<<endl;
	}


	/*
		구조체할당관련
	*/
	struct P
	{

		int a;
		int b;
	};
	P* ptr =new P;

	delete ptr;
 
/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////레퍼런스 & 포인터/////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

	/*포인터와 레퍼런스의 차이*/
	//2.참조 대상 할당 및 접근 &연산을 통해 주소값을 할당 
	/* 
		결론 :  레퍼런스는 포인터를 잘못 사용해서 생기는 수많은 
				문제들을 최소화하기위해생김
				Use references when you can, and pointers when you have to
				사용할 수 있다면 참조자를 써라, 어쩔 수 없다면 포인터를 써라
				출처: https://gracefulprograming.tistory.com/11 [Peter의 우아한 프로그래밍]
				int aaa=10;
				int *p = &aaa;
				int &p =aaa;
	*/
	cout<<endl;
	cout<<endl;
	cout<<endl;

	/*typedef 함수 포인터 구현 */
	testprint(100);
	ptrfunc =testprint; //함수 포인터가 사용하고자하는 함수 같은 동작을 하게됨
	ptrfunc(77);

	testprint2(100);
	ptrfunc2 elecs; // elecs = ptrfunc2 
	elecs = testprint2;
	elecs(77);

/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////이중 포인터 /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

	/*
		포인터 : 실제로는 변수여서 멤모리 주소를 구할 수 있음 
				 하지만, 메모리 주소는 일반 포인터에 저장X --> 이중 포인터에 저장
	*/
	int *numPtr1;  // 단일 포인터
	int **numPtr2;  //이중 포인터
	int num = 10;
	
	numPtr1 = &num; //num1의 메모리 주소 저장.
	numPtr2 = &numPtr1; //numptr1의 메모리 주소 저장

	cout<< numPtr2 <<endl;
	cout << **numPtr2 <<endl; //20 포인터를 두 번 역참조 

	int num1 = 10 , num2 = 20, num3=30;
	int *parr[3];

	parr[0] = &num1;
	parr[1] = &num2;
	parr[2] = &num3;

	for(int i = 0 ; i < 3 ; i++ )
	{
		cout<<i << " " << *parr[i] <<endl;

	}
 
/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////헤더 파일개념 /////////////////////////////////////// 
/////////////////////////////////////////////////////////////////////////////////////////////
	cout <<" ////////////////////////////// "  <<endl;
	cout <<" ////////////header 메서드 작성 "  <<endl;
	cout <<" ////////////////////////////// "  <<endl;
	cout<< addd(3,4) <<endl;

/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////16진수 입력 방법/////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
	return 0;
}