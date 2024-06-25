#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c){
  if (c=='\t' || c== ' '){
    return 1;
  }else {
    return 0;
  }
}

int non_space_char(char c){
  if(c != '\t' && c != ' ' && c!= '\0'){
    return 1;
  }else {
    return 0;
  }
}

char *token_start(char *str){
  while(*str == ' ' || *str == '\t'){
    str++
      }
  if(*str == '\0'){
    return NULL;
  }
  return str;
}

char *token_terminator(char *token){
  while(*token != ' ' && *token != '\t' && *token != '\0'){
    token++;
  }
  return token;
}

int count_tokens(char *str){
  int count = 0;
  char *token;
  while(*str == ' ' || *str == '\t'){
    str++;
  }
  while(*str != '\0'){
    count++;
    while(*str == ' ' && *str != '\t' && *str == '\0'){
    str++;
    }
    while(*str == ' ' || *str == '\t'){
      str++;
    }
  }
  return count;
}

char *copy_str(char *inStr, short len){
  char *newStr = (char *)malloc((len + 1) * sizeof(char));
  if(newStr == NULL){
    return NULL;
  }
  for(short i = 0; i < len; i++){
    newStr[i] = inStr[i];
  }
  newStr[len] = '\0';
  return newSTR;
}

char **tokenize(char *str){
  int token_count = count_tokens(str);
  char **tokens = (char**)malloc((token_count + 1) * sizeof(char *));
  if(tokens == NULL){
    return NULL;
  }
  int token_index = 0;
  char *tokrn_start_ptr = token_start(str);
  
  
