#include<bits/stdc++.h>

using namespace std;


int main(){
    //********<pair>**********\\
  //pair<int,int>p={1,3};
  //cout<<p.first<<" "<<p.second;
  //pair<int,pair<int,int>> p={1,{1,3}};
  //cout<<p.first<<" "<<p.second.first;
  //********<vector>**********\\

   // vector<pair<int,int>> v;
    //v.push_back({1,3});
    //for(auto i : v){
        //cout<<i.first<<" ";
    //}
    //v.emplace_back(1,3);
    // for(auto i : v){
       // cout<<i.first<<" ";
    //} 
   //vector<int> v={14,454,5,554,54,54};
  // vector<int>:: iterator it;
   //it=v.begin();
   //it++;
   //cout<<*it; //454
  //vector<int> v={14,454,5,554,54,54};
  //cout<<v.back(); /// get last element without knowin size of vector
 // cout << "The vector elements in reverse order are:\n";
  //for (auto it = v.rbegin(); it != v.rend(); it++)
    //  //  cout << *it << " ";
 // v.erase(v.begin());
 // cout<<v[0]<<endl; // erase 14 give ans 454
  //v.erase(v.begin()+1,v.begin()+4);
 // for(auto it :v){
    // cout<<it<<" ";  // print 454 54 
 // } 
 // v.insert(v.begin(),300); 
  // for(auto it :v){
   //   cout<<it<<" ";  // print 300 454 54   
 // } 
  //v.insert(v.begin()+1,2,100);
 
  // for(auto it :v){
    //  cout<<it<<" ";  // print 300 100 100 454 54   
 // } 
 // v.pop_back();  // delete last element  print 300 100 100 454 
  // v1.swap(v2)--- swap v1 & v2
 // vector<int> v1={50,50};
  //v.insert(v.begin()+1,v1.begin(),v1.end());
  // for(auto it :v){
   //   cout<<it<<" ";  // print 300 50 50 100 100 454  
 // } 
 // v.clear(); //erase intire vector
  //for(auto it :v){
   //   cout<<it<<" ";  // print 454 54 
 // } 
  //cout<<v.empty(); // 1
  //********<list>**********\\
  // differernce bw list and vector is in list you can push_back in front also but in vector you only push_back in back
    // differernce in erasing of list and vector of given range//
  //list<int> ls={12,12,36,88,44};
   // ls.push_front(45);
   // ls.push_back(44);
    //for(auto it :ls){
    // cout<<it<<" ";  // print 45 12 12 36 88 44 44 
 // } 
  //cout<<endl;
  //ls.insert(ls.begin(),4,100); 
  //for(auto it :ls){
     //cout<<it<<" ";  // print 100 100 100 100 45 12 12 36 88 44 
  //} 
 // cout<<endl;
  //list<int> :: iterator it=ls.begin(),it2;
  //it2=ls.begin();
  //advance(it2,3);


  //ls.erase(it,it2);
  //for(auto it1 :ls){
    // cout<<it1<<" ";  // print 100 45 12 12 36 88 44
  //} 
     //********<dedue>**********\\
     // all the properties is same as the list//
    // deque<int> dq={12,45,55,45,63};
    // dq.push_front(74);
     //for(auto it : dq){
        // cout<<it<<" ";
     //}
      //********<stack>**********\\
      in this you can only add element in front only
      // and you can excess element from top only 
     // stack<int> st;
    // st.push(45); //{45}
     // st.push(14); // {14,45}
      // st.push(23);  //{23,14,45}
       // st.push(12);   //{12,23,14,45}
        // st.push(145);  //{145,12,23,14,45}
     // cout<<st.top();   //145
     // you can only excess top element;
    // cout<<st.size();
    // cout<<endl;
     // st1.swap(st2); you got swped stack;
    // cout<<st.empty();
    //*********<queue>*******  it same as stack but it store element like vector;
   // queue<int> q;
  //  q.push(45); //{45}
   // q.push(69);   //{45,69}
   // q.push(89);    //{45,69,89}
   // q.push(104);   //{45,69,89,104}
   // q.push(36);   //{45,69,89,104,36}
   // cout<<q.back()<<" "<<q.front();
   //fn like size swp empty same as stack;
   //*********<priorityqueue>******  it store element in sorted order default is in decreasing order 
  // priority_queue<int> pq;
  // pq.push(8); //{8}
   // pq.push(2); //{8,2}
    // pq.push(5);  //{8,5,2}
    //  pq.push(11);  //{11,8,5,2}
    //  cout<<pq.top()<<" ";  // print 11
     // cout<<endl;
     // priority_queue<int, vector<int> , greater<int>> pq1;  // now it store value in increasing order
     // pq1.push(8); //{8}
  //  pq1.push(2); //{2,8}
    // pq1.push(5);  //{2,5,8}
    //  pq1.push(11);  //{2,5,8,11}
    //  cout<<pq1.top();  // print 2//
    //**********<set>******  it take only unique element in increasing order 
   // set<int> st;
    //st.insert(3);  //                //SAME AS PRIORITY QUEUE
   // st.insert(8);
   // st.insert(3);          //
	                        // begin(), end(), rbegin(), rend(), size(),
                          // empty() and swap() are same as those of above
    //st.insert(12);
   // st.insert(78);
     //auto it=st.begin();
     //for(auto tr :st){
        // cout<<tr;   // print 3 8 12 78
     //}  
    // cout<<endl;
     // auto it1=st.find(12);
     // st.erase(it1); 
     // for(auto tr2 :st){
        // cout<<tr2;   // print 3 8  78
     //}
    // cout<<endl;
    // auto it3 = st.find(78);
	//auto it2 = st.find(3);
	//st.erase(it2, it3); // after erase {1, 4, 5} [first, last)
 // for(auto tr4 :st){
         //cout<<tr4<<" ";   // print 3 8  78
    // }


    // int cnt=st.count(78);
   //  cout<<cnt<<endl;//
   //auto it =st.lower_bound(9);
   //cout<<*it;  // print 12//      //
	                               // lower_bound() and upper_bound() function works in the same way
	                               // as in vector it does.
      //********<MULTISET>*****
      // Everything is same as set
	// only stores duplicate elements also  
    //multiset<int>ms;
	//ms.insert(1); // {1}
	//ms.insert(1); // {1, 1}
	//ms.insert(1); // {1, 1, 1}
   // ms.erase(1); // all 1's erased
   //ms.erase(ms.find(1)); // only single 1 is deleted
   //for(auto it: ms){
       // cout<<it<<" ";
    //} 
    //int cnt=ms.count(1);
    //cout<<cnt<<endl;
   // auto it=ms.find(1);
 // auto it1=it++;
//	ms.erase(it, it1);
    
   //for(auto it: ms){
       //// cout<<it<<" ";
    //} 
    //*************<unordered set>******* 
  //  unordered_set<int> st;
	// lower_bound and upper_bound function
	// does not works, rest all functions are same
	// as above,  it does not stores in any
	// particular order it has a better complexity
	// than set in most cases, except some when collision happens
//***********<MAP>************\\
it also store in sorted way as key
  map<int,int> mpp;
    mpp.insert({1,2});  // { { 1,2  }                                 
    mpp[2]=9;            //{2,9}
    mpp.emplace(4,8);    ///{4,8}
    mpp.insert({9,32});    //{9,32} }
    for(auto it : mpp){
       cout<<it.first<<" "<<it.second<<" ";
    }  
    cout<<endl;
    cout<<mpp[4];
    cout<<mpp[9];
    cout<<endl;
    auto it=mpp.find(4);
   cout <<(*it).second;
   // lower_bound and upper_bound works exactly in the 
	// same way as explained in the other video 
    
   auto it1 =mpp.lower_bound(5);       
   cout<<(*it1).second; 
   // erase, swap, size, empty, are same as above 
    return 0;
}