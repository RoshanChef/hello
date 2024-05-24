#include <iostream>
#include <deque>
using namespace std;

int main()
{

  deque<int> dq;

  dq.push_back(3);
  dq.push_front(1);

  for (int ele : dq)
  {
    cout << ele << " ";
  }
  cout << endl;

  // cout << dq.front() << endl;
  // cout << dq.back() << endl;

  cout << dq.at(1) << endl;
  cout << dq.empty();

  dq.push_back(4);
  cout << endl;

  for (int i : dq)
  {
    cout << i << " ";
  }
  cout << endl;
  // dq.erase(dq.begin(), dq.begin()+1);
  cout<<"max size " << dq.max_size();
  dq.erase(dq.end()-1, dq.end());

  for (int i : dq)
  {
    cout << i << " ";
  }
  cout << endl;
  cout<<dq.size();
  cout<<"max size " << dq.max_size();

  return 0;
}