#include <stdio.h>

class MikanBox {
public:
  MikanBox();
  void Add(int addmikan);
  void Del(int delmikan);
  void Empty();
  int GetTotal(){
    return total;
  }
private:
  int total;
};

MikanBox::MikanBox()
{
  Empty();
}

void MikanBox::Add(int addmikan)
{
  total += addmikan;
}

void MikanBox::Del(int delmikan)
{
  total -= delmikan;
  if(total < 0) Empty();
}

void MikanBox::Empty()
{
  total = 0;
}

int main()
{
  MikanBox myMikanBox;

  myMikanBox.Empty();
  myMikanBox.Add(5);
  myMikanBox.Del(3);

  printf("箱の中のみかん：%d個", myMikanBox.GetTotal());
  return 0;
}
