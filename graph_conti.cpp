#include<bits/stdc++.h>
using namespace std;
bool have_cycle(vector<vecot<int>>&g,int src,int v,int p,vector<bool>&vis){
  vis[src]=1;
for(int i=0;i<v;i++){
if(g[src][i]==1){
if(vis[i]&&i!=p)return 1;
if(!vis[i] && have_cycle(g,i,v,src,vis))return 1;
}
}
return 0;
}
bool have_path(vector<vecot<int>>&g,int src,int v,int p,vector<bool>&vis){
  vis[src]=1;
  if(src == des)return 1;
  
for(int i=0;i<v;i++){
if(!vis[i] && g[src][i]){

if(have_path(g,i,des,v,vis))return 1;
}
}
return 0;
}
void operate(vector<vector<int>>&g,int v){
  vector<bool>vis(v,0);
bool f=0;
for(int i=0;i<v;i++){
if(!vis[i]){
if(have_cycle(g,i,v,=1,vis)){
f=1;
cout<<"Have cycle"<<endl;
break;
}
}
}
int main(){
  int v,e;
cin>>v>>e;
}
