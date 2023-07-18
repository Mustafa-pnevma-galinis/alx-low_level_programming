 void print_alphabet_x10(){


        int val = 97;
        int count = 0;

        char array[26];

        while (val < 123){

            _putchar(val);

            val += 1;

            if (val == 123 && count <= 11){

                count++;
                val = 97;
                _putchar('\n');
            }

        }

        printf("\n");
          
    }
