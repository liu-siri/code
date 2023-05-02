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

//不需要修成一个圈，按最小代价生成树，一个点到各点之间都有通路。 

typedef struct{
	int start;
	int end;
	int cost;
	int statue;
}Edge;

int findroot(int x){     //查找根节点 
	if(Tree[x] == -1){
		return x;
	}else{
		return findroot(Tree[x]);
	}
}

bool cmp(Edge e1,Edge e2){    //按修成，花费进行排序
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
		for(int i = 1; i <= n; i++){    //初始化树节点 
			Tree[i] = -1;
		}
		for(int i = 0; i < n*(n-1)/2; i++){
			cin >> edge[i].start >> edge[i].end >>edge[i].cost >>edge[i].statue;
			
		}
		sort(edge , edge+n*(n-1)/2 , cmp);  //按花修成，费进行排序 
		
		int rst = 0;
		for(int i = 0; i < n*(n-1)/2; i++){
			int a = findroot(edge[i].start);
			int b = findroot(edge[i].end);
			if(a != b){                    
				Tree[a] = b;                //更新节点的子节点 
				if(edge[i].statue == 0){    //畅通中有没有修的，就加上花费。 
					rst += edge[i].cost;
				}
			}
		}
		cout << rst << endl;
	}
    
    return 0;
       
}
