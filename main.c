**
 * main - Entry point for the shell program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * @envp: An array of strings containing environment variables.
 * Return: Always returns 0.
 */
int main(int argc, char *argv[], char *envp[])
{
 
  /*if in file mode(task 16), open file*/
  code
  /* loop to get and execute commands*/
  while (1)
    {
    /* print prompt if in interactive mode */
    code
    /* get line from terminal/pipe/open file*/
    code
    /* remove comment from the line */
    code
    /* tokenizer function to store to a pointer array av[] */
    code
    /* check for exit, if yes call exit function */
    code 
    /* check for env,setenv,unsetenv, call env function */
    code
    /* execute function */
    code
    /*free av[]*/
    code
  }
  /*free line(from getline)*/
  code
}
