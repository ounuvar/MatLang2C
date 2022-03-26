#pragma once
#include <stdlib.h>

enum TokenType
{
  TKN_EOF,
  TKN_LINE_FEED,
  TKN_IDENT,
  TKN_INT_LITERAL,
  TKN_FLOAT_LITERAL,
  // Punctuation
  TKN_PN_DOT,
  TKN_PN_COMMA,
  TKN_PN_COLON,
  TKN_PN_OPENPAREN,
  TKN_PN_CLOSEPAREN,
  TKN_PN_OPENBRACKET,
  TKN_PN_CLOSEBRACKET,
  TKN_PN_OPENBRACE,
  TKN_PN_CLOSEBRACE,
  // Binary Ops
  TKN_PLUS,
  TKN_MULT,
  TKN_MINUS,
  // Keywords
  TKN_TYPE_SCALAR,
  TKN_TYPE_VECTOR,
  TKN_TYPE_MATRIX,
  TKN_KW_FOR,
  TKN_KW_IN,
  TKN_SPECIAL_PRINT,
  TKN_SPECIAL_PRINTSEP,
  TKN_ASSIGN,
  TKN_UNKNOWN
};

typedef enum TokenType TokenType;

struct Token
{
  TokenType type;
  char *contents;
  int line_num;
};

typedef struct Token Token;

Token *new_token(TokenType type, char *contents, int line_num);
void free_tokens(Token **token_arr);