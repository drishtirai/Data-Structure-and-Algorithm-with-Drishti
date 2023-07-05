void add_value(unordered_map<int,int> &m,int x,int y)
{
	//Your code here
	 m[x]=y;


}

/*Returns the value with key x from the map */
int find_value(unordered_map<int,int> &m,int x)
{
      //Your code here
        auto it=m.find(x);

      if(it==m.end()) {

          return -1;

      }

      else {

          return m[x];

      }
}

/*Returns the size of the map */
int getSize(unordered_map<int,int> &m)
{
	//Your code here
	//Your code here

 return m.size();
}

/*Removes the entry with key x from the map */
void removeKey(unordered_map<int,int> &m,int x)
{
	//Your code here
	auto it=m.find(x);

      if(it!=m.end()) {

          m.erase(x);

      }
}
