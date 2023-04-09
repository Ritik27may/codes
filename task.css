#include <iostream>
#include<vector>
using namespace std;
bool issafe(int i,int j,int row,int col,int maze[4][4],int visited[4][4]){
  if((i>=0 && i<row) &&(j>=0 && j<col)&&(maze[i][j]==1 && visited[i][j]==0)){
    return true;
  }
  return false;
}
void pathfinder(int maze[4][4],int row,int col,int i,int j,vector<string>&path,string output,int visited[4][4]){
   if(i==row-1 && j==col-1){
     path.push_back(output);
     return;
   }
   // down
   if(issafe(i+1,j,row,col,maze,visited)){
     visited[i+1][j]=1;
    pathfinder(maze,row,col,i+1,j,path,output+"D",visited);
     visited[i+1][j]=0;
   }
   //left
   if(issafe(i,j-1,row,col,maze,visited)){
     visited[i][j-1]=1;
    pathfinder(maze,row,col,i,j-1,path,output+'L',visited);
     visited[i][j-1]=0;
   }
   //right
    if(issafe(i,j+1,row,col,maze,visited)){
     visited[i][j+1]=1;
    pathfinder(maze,row,col,i,j+1,path,output+'R',visited);
     visited[i][j+1]=0;
   }
   //up
   if(issafe(i-1,j,row,col,maze,visited)){
     visited[i-1][j]=1;
    pathfinder(maze,row,col,i-1,j,path,output+'U',visited);
     visited[i-1][j]=0;
   }
}
int main() {
  int maze[4][4]={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
  int visited[4][4]={{1,0,0},{0,0,0},{0,0,0},{0,0,0}};
  int row=4;
  int col=4;
  vector<string>path;
  string output="";
  pathfinder(maze,row,col,0,0,path,output,visited);
  if(path.size()==0){
    cout<<"no path exist"<<endl;
  }
  for(auto& n:path){
    cout<<n<<" ";
  }
  cout<<endl;
  return 0;
}
