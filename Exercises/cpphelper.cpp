// Functions

//is space in string
isspace(str[i])

//lowercase
transform(str.begin(), str.end(), str.begin(), ::tolower);

//copy string to char
char caracters[expression.size()+1];
std::strcpy(caracters, expression.c_str());

//Read string from keyboard:
string input_string;
getline(cin, input_string);
result  = is_pangram(input_string);

//input to vector
vector<int> ar(n);
for(int ar_i = 0; ar_i < n; ar_i++){
    cin >> ar[ar_i];
}

//sorting vector
vector<long int>arr ;
for(long int i=0;i<n;i++){
  cin>>p ;
  arr.push_back(p) ;
}
sort(arr.begin(),arr.end()) ; // O(nlogn)

//function for printing the elements in a list
void showlist(list <int> g){
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

//sorting
for(long int i = 0; i < n/2; i++){
        int x;
        cin >> x;
        
        string s;
        cin >> s;
        
        ar[x] = ar[x] + "-" + " ";
        
    }

//STRUCTURES

    //Stack
stack <char> mystack;
mystack.push();
mystack.pop();
mystack.top();
mystack.empty();
//Hashmap
map <char, int> map;
map.insert(make_pair(str[i], i);
map.size();
!map[str[i]];
//Queue
queue <int> q;
q.push(int);
q.size();
q.front();
q.back();
//List
list <int> list1;
list1.front();
list1.back();
list1.pop_front();
list1.pop_back();
list1.reverse();
list1.sort();

class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

