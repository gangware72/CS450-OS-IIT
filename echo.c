
int main(int argc, char *argv[])
{

  int i;

  for(i = 0; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");

}

//stdout means standard output
