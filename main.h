#ifndef _MAIN_H_
#define _MAIN_H_

void prompt(void);
char *getlyne(void);
char *parser(char *buffer);
char **arg_token(char *token);
void exec(char *token, char **argv, char *envp[]);
#endif
