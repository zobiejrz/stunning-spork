int main()
{

  int stats[6];
  for (int pos = 1, pos <= 6, pos ++)
  {
    int rolls[4];
      for (int i = 0; i < 4; i++)
        {
          rolls[i] = rand()%6 + 1;
          std::cout << rolls[i] << std::endl;
        }
      std::sort(std::begin(rolls), std::end(rolls));

        int stat = 0;
        for (int i = 3; i > 0; i--)
        {
          stat+=rolls[i];
        }

          //std::cout << "Stat: " << stat << std::endl;
  stats[pos] = stat;
  std::cout << "Stat: " << stat << std::endl;

  return 0;
}
