#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class LRUCache{
	list <int> dq;  //list to store the elements
	unordered_map <int, list<int>::iterator> ma; //storing in unordered map to perform faster searches
	int csize;
	public:
		LRUCache(int max):csize(max){
		
		}
		void refer(int x);
		void display();
};
void LRUCache::refer(int x){
	//Step 1: check if value x is already present in the list. 
	//for this, list has search complexity of O(n), whereas unordered_map has complexity of O(1)
	//so unordered map is used here.
	if(ma.find(x)==ma.end()) //case when data not found in Cache
	{
		if(dq.size()==csize) 
		//Step 2:
		//if size of list is equal to max size, remove least recently used element from the list
		//the least recently used element shall be present at the back and most recently used at the front of the list
		{
			//removing last element from the list 
			int last=dq.back(); //copying value of last element.
			dq.pop_back(); //last element removed from the list
			ma.erase(last); //element with value last erased/removed from the unordered map also
			
			
		}
		
	}
	else 
	//Step 3:
	//when element found in the LRU, it is deleted from its present position in list and is shifted to front of the list
	{
		
		dq.erase(ma[x]);
	}
	//Step 4: insert the element to the front in the list
	dq.push_front(x);
	ma[x]=dq.begin();
}
void LRUCache::display()
{
	for(auto it=dq.begin(); it!=dq.end();it++)
	///for(auto it:dq)
	{
		cout<<(*it)<<" ";
	}
}
//Driver Functions
int main()
{
	//create LRU memory of size 3;
	LRUCache lc(4);
	lc.refer(1);
	lc.refer(2);
	lc.refer(3);
	lc.refer(1);
	lc.refer(4);
	lc.refer(5);
	lc.display();
	return 0;
	
}
