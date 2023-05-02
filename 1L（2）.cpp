#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<stack>
#include<queue>
using namespace std;
const int N = 5000;
int Tree[100];

//����Ҫ�޳�һ��Ȧ������С������������һ���㵽����֮�䶼��ͨ·�� 

typedef struct{
	int start;
	int end;
	int cost;
	int statue;
}Edge;

int findroot(int x){     //���Ҹ��ڵ� 
	if(Tree[x] == -1){
		return x;
	}else{
		return findroot(Tree[x]);
	}
}

bool cmp(Edge e1,Edge e2){    //���޳ɣ����ѽ�������
	if(e1.statue != e2.statue){
		return e1.statue > e2.statue;
	}else{
		return e1.cost < e2.cost;
	}
}

int main(){
	int n;
	Edge edge[N];
	while(cin>>n,n){
		for(int i = 1; i <= n; i++){    //��ʼ�����ڵ� 
			Tree[i] = -1;
		}
		for(int i = 0; i < n*(n-1)/2; i++){
			cin >> edge[i].start >> edge[i].end >>edge[i].cost >>edge[i].statue;
			
		}
		sort(edge , edge+n*(n-1)/2 , cmp);  //�����޳ɣ��ѽ������� 
		
		int rst = 0;
		for(int i = 0; i < n*(n-1)/2; i++){
			int a = findroot(edge[i].start);
			int b = findroot(edge[i].end);
			if(a != b){                    
				Tree[a] = b;                //���½ڵ���ӽڵ� 
				if(edge[i].statue == 0){    //��ͨ����û���޵ģ��ͼ��ϻ��ѡ� 
					rst += edge[i].cost;
				}
			}
		}
		cout << rst << endl;
	}
    
    return 0;
       
}
