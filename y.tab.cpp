/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     CONSTANT_INT = 262,
     CONSTANT_DOUBLE = 263,
     TRUE = 264,
     FALSE = 265,
     CHAR = 266,
     INT = 267,
     DOUBLE = 268,
     VOID = 269,
     BOOL = 270,
     CASE = 271,
     IF = 272,
     ELSE = 273,
     SWITCH = 274,
     WHILE = 275,
     DO = 276,
     FOR = 277,
     GOTO = 278,
     CONTINUE = 279,
     BREAK = 280,
     RETURN = 281,
     PTR_OP = 282,
     INC_OP = 283,
     DEC_OP = 284,
     LEFT_OP = 285,
     RIGHT_OP = 286,
     LE_OP = 287,
     GE_OP = 288,
     EQ_OP = 289,
     NE_OP = 290,
     AND_OP = 291,
     OR_OP = 292,
     SUB_ASSIGN = 293,
     LEFT_ASSIGN = 294,
     RIGHT_ASSIGN = 295,
     AND_ASSIGN = 296,
     MUL_ASSIGN = 297,
     DIV_ASSIGN = 298,
     MOD_ASSIGN = 299,
     ADD_ASSIGN = 300,
     XOR_ASSIGN = 301,
     OR_ASSIGN = 302,
     TYPE_NAME = 303,
     LOWER_THAN_ELSE = 304
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define TRUE 264
#define FALSE 265
#define CHAR 266
#define INT 267
#define DOUBLE 268
#define VOID 269
#define BOOL 270
#define CASE 271
#define IF 272
#define ELSE 273
#define SWITCH 274
#define WHILE 275
#define DO 276
#define FOR 277
#define GOTO 278
#define CONTINUE 279
#define BREAK 280
#define RETURN 281
#define PTR_OP 282
#define INC_OP 283
#define DEC_OP 284
#define LEFT_OP 285
#define RIGHT_OP 286
#define LE_OP 287
#define GE_OP 288
#define EQ_OP 289
#define NE_OP 290
#define AND_OP 291
#define OR_OP 292
#define SUB_ASSIGN 293
#define LEFT_ASSIGN 294
#define RIGHT_ASSIGN 295
#define AND_ASSIGN 296
#define MUL_ASSIGN 297
#define DIV_ASSIGN 298
#define MOD_ASSIGN 299
#define ADD_ASSIGN 300
#define XOR_ASSIGN 301
#define OR_ASSIGN 302
#define TYPE_NAME 303
#define LOWER_THAN_ELSE 304




/* Copy the first part of user declarations.  */
#line 1 "compiler.y"

    #include <cstdlib>
    #include <cstdio>
    #include <string>
    #include "ast.hpp"
    #include "block.hpp"
    /*#include "parser.hpp"*/
    using namespace std;
    
    extern char *yytext;
    extern int column;
    extern FILE * yyin;
    extern FILE * yyout;
    root_Node *root;
    extern int yylineno;
    
    int yylex(void);
    void yyerror(const char*);
    

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "compiler.y"
{
    struct root_Node* rootN;
    struct func_Node* funcN;
    struct ID_Node* IDN;
    struct declaration_Node* declarationN;
    struct declarator_Node* declaratorN;
    struct initializer_Node* initN;
    struct initial_list* initl;
    struct designator* design;
    struct param_Node* paraN;
    struct stat_Node* statN;
    struct block_item* block;
    struct exp_Node* expN;
    enum type_specifier_kind typekind;
    enum assign_kind assignkind;
    enum unary_kind arykind;
}
/* Line 193 of yacc.c.  */
#line 232 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    38,    41,    43,    47,    49,    52,
      55,    58,    60,    62,    64,    66,    68,    72,    76,    80,
      82,    86,    90,    92,    96,   100,   102,   106,   110,   114,
     118,   120,   124,   128,   130,   134,   136,   140,   142,   146,
     148,   152,   154,   158,   160,   164,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   192,   195,
     199,   201,   205,   207,   211,   213,   215,   217,   219,   221,
     223,   227,   232,   237,   241,   246,   251,   255,   257,   261,
     264,   266,   268,   272,   274,   278,   283,   285,   288,   292,
     297,   300,   302,   305,   309,   312,   314,   316,   318,   320,
     322,   324,   328,   333,   336,   340,   342,   345,   347,   349,
     351,   354,   360,   368,   374,   380,   388,   395,   403,   410,
     418,   422,   425,   428,   431,   435,   437,   440,   442,   444,
     449,   453,   455
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,   116,    -1,     3,    -1,     9,    -1,    10,
      -1,     7,    -1,     8,    -1,    71,    93,    72,    -1,    76,
      -1,    77,    53,    93,    54,    -1,    77,    71,    72,    -1,
      77,    71,    78,    72,    -1,    77,    28,    -1,    77,    29,
      -1,    91,    -1,    78,    50,    91,    -1,    77,    -1,    28,
      79,    -1,    29,    79,    -1,    80,    79,    -1,    60,    -1,
      59,    -1,    58,    -1,    57,    -1,    79,    -1,    81,    61,
      79,    -1,    81,    62,    79,    -1,    81,    63,    79,    -1,
      81,    -1,    82,    60,    81,    -1,    82,    59,    81,    -1,
      82,    -1,    83,    30,    82,    -1,    83,    31,    82,    -1,
      83,    -1,    84,    64,    83,    -1,    84,    65,    83,    -1,
      84,    32,    83,    -1,    84,    33,    83,    -1,    84,    -1,
      85,    34,    84,    -1,    85,    35,    84,    -1,    85,    -1,
      86,    56,    85,    -1,    86,    -1,    87,    66,    86,    -1,
      87,    -1,    88,    67,    87,    -1,    88,    -1,    89,    36,
      88,    -1,    89,    -1,    90,    37,    89,    -1,    90,    -1,
      79,    92,    91,    -1,    52,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    46,    -1,    47,    -1,    91,    -1,    93,    50,
      91,    -1,    97,    49,    -1,    97,    95,    49,    -1,    96,
      -1,    95,    50,    96,    -1,    98,    -1,    98,    52,   102,
      -1,    14,    -1,    11,    -1,    12,    -1,    13,    -1,    15,
      -1,     3,    -1,    71,    98,    72,    -1,    98,    53,    91,
      54,    -1,    98,    53,    61,    54,    -1,    98,    53,    54,
      -1,    98,    71,    99,    72,    -1,    98,    71,   101,    72,
      -1,    98,    71,    72,    -1,   100,    -1,    99,    50,   100,
      -1,    97,    98,    -1,    97,    -1,     3,    -1,   101,    50,
       3,    -1,    91,    -1,    69,   103,    70,    -1,    69,   103,
      50,    70,    -1,   102,    -1,   104,   102,    -1,   103,    50,
     102,    -1,   103,    50,   104,   102,    -1,   105,    52,    -1,
     106,    -1,   105,   106,    -1,    53,    90,    54,    -1,    55,
       3,    -1,   108,    -1,   109,    -1,   112,    -1,   113,    -1,
     114,    -1,   115,    -1,     3,    51,   107,    -1,    16,    90,
      51,   107,    -1,    69,    70,    -1,    69,   110,    70,    -1,
     111,    -1,   110,   111,    -1,    94,    -1,   107,    -1,    49,
      -1,    93,    49,    -1,    17,    71,    93,    72,   107,    -1,
      17,    71,    93,    72,   107,    18,   107,    -1,    19,    71,
      93,    72,   107,    -1,    20,    71,    93,    72,   107,    -1,
      21,   107,    20,    71,    93,    72,    49,    -1,    22,    71,
     112,   112,    72,   107,    -1,    22,    71,   112,   112,    93,
      72,   107,    -1,    22,    71,    94,   112,    72,   107,    -1,
      22,    71,    94,   112,    93,    72,   107,    -1,    23,     3,
      49,    -1,    24,    49,    -1,    25,    49,    -1,    26,    49,
      -1,    26,    93,    49,    -1,   117,    -1,   116,   117,    -1,
     118,    -1,    94,    -1,    97,    98,   119,   109,    -1,    97,
      98,   109,    -1,    94,    -1,   119,    94,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    78,    83,    87,    90,    94,    98,   106,
     113,   121,   130,   138,   146,   157,   164,   175,   183,   191,
     199,   210,   213,   216,   219,   226,   233,   240,   247,   258,
     265,   272,   283,   291,   299,   311,   318,   325,   332,   340,
     352,   359,   367,   378,   384,   394,   400,   410,   416,   426,
     432,   443,   449,   460,   468,   479,   482,   486,   490,   494,
     498,   502,   506,   510,   514,   518,   526,   533,   544,   547,
     556,   559,   568,   571,   580,   583,   586,   589,   592,   600,
     606,   610,   619,   627,   635,   643,   651,   664,   667,   676,
     680,   686,   689,   699,   703,   708,   716,   720,   725,   733,
     744,   750,   753,   762,   766,   774,   777,   780,   783,   786,
     789,   796,   802,   812,   817,   825,   829,   838,   842,   849,
     853,   861,   868,   875,   886,   895,   904,   913,   922,   931,
     944,   950,   956,   962,   968,   977,   980,   989,   996,  1006,
    1015,  1027,  1030
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "TRUE",
  "FALSE", "CHAR", "INT", "DOUBLE", "VOID", "BOOL", "CASE", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "';'", "','",
  "':'", "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'",
  "'('", "')'", "LOWER_THAN_ELSE", "$accept", "Program",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     3,     4,     4,     3,     1,     3,     2,
       1,     1,     3,     1,     3,     4,     1,     2,     3,     4,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     2,     3,     1,     2,     1,     1,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    76,    77,    74,    78,     0,   138,     0,     2,
     135,   137,     1,    79,    68,     0,     0,    70,    72,   136,
       0,    69,     0,     0,     0,     0,     0,   141,     0,   140,
       0,    80,    71,    72,     3,     6,     7,     4,     5,     0,
       0,    24,    23,    22,    21,     0,     0,     9,    17,    25,
       0,    29,    32,    35,    40,    43,    45,    47,    49,    51,
      53,    93,    73,    83,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   113,    66,
       0,   117,   118,   105,   106,     0,   115,   107,   108,   109,
     110,    91,    86,    90,     0,    87,     0,   142,   139,    18,
      19,     0,     0,    96,     0,     0,     0,   101,     0,    13,
      14,     0,     0,    60,    61,    62,    63,    56,    57,    58,
      59,    64,    65,    55,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    81,     0,    25,     0,     0,
       0,     0,     0,     0,     0,   131,   132,   133,     0,   120,
       0,   114,   116,    89,     0,    84,     0,    85,     0,   104,
       0,    94,    97,   100,   102,     8,     0,    11,     0,    15,
      54,    26,    27,    28,    31,    30,    33,    34,    38,    39,
      36,    37,    41,    42,    44,    46,    48,    50,    52,   111,
       0,     0,     0,     0,     0,     0,     0,   130,   134,    67,
      88,    92,   103,    95,    98,     0,    10,     0,    12,   112,
       0,     0,     0,     0,     0,     0,    99,    16,   121,   123,
     124,     0,     0,     0,     0,     0,     0,     0,   128,     0,
     126,     0,   122,   125,   129,   127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    47,    48,   178,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    79,   124,    80,
       7,    16,    17,    28,    33,    94,    95,    96,    62,   104,
     105,   106,   107,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     9,    10,    11,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
     176,  -144,  -144,  -144,  -144,  -144,    38,  -144,     4,   176,
    -144,  -144,  -144,  -144,  -144,     6,    89,  -144,   225,  -144,
      31,  -144,     6,   279,   214,   241,    14,  -144,     4,  -144,
     131,  -144,  -144,     3,  -144,  -144,  -144,  -144,  -144,   551,
     551,  -144,  -144,  -144,  -144,   455,   551,  -144,   -17,   525,
     551,   134,    90,   168,    16,   167,    42,   -33,    -7,    40,
      63,  -144,  -144,  -144,    50,   109,    80,   551,    64,    96,
      99,   364,   101,   172,   116,   137,   491,  -144,  -144,  -144,
     160,  -144,  -144,  -144,  -144,   306,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,     6,   -31,  -144,   -30,  -144,  -144,  -144,
    -144,   551,   190,  -144,    29,   279,    81,  -144,   -29,  -144,
    -144,   551,    37,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   551,  -144,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,  -144,  -144,   364,  -144,    21,   551,
     551,   551,   198,   388,   178,  -144,  -144,  -144,   162,  -144,
     551,  -144,  -144,    77,   176,  -144,   226,  -144,    34,  -144,
     422,  -144,  -144,  -144,  -144,  -144,    33,  -144,   -20,  -144,
    -144,  -144,  -144,  -144,   134,   134,    90,    90,   168,   168,
     168,   168,    16,    16,   167,    42,   -33,    -7,    40,  -144,
     364,   -15,   -13,   -11,   157,   524,   524,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,   279,  -144,   551,  -144,  -144,
     364,   364,   364,   551,   148,   175,  -144,  -144,   212,  -144,
    -144,    18,   364,    19,   364,    20,   364,   182,  -144,   364,
    -144,   364,  -144,  -144,  -144,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,   -16,  -144,    84,    94,    26,
      78,   102,   105,   118,   138,   133,   -51,   -23,  -144,   -44,
     -12,  -144,   257,     5,     0,  -144,   117,  -144,   -41,  -144,
     113,  -144,   185,   -68,  -144,   110,  -144,   199,  -143,  -144,
    -144,  -144,  -144,   283,  -144,  -144
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    65,   108,   152,   103,     8,    27,    13,    18,    13,
     206,   109,   110,    81,     8,    20,   148,    91,    97,   164,
     166,   160,    61,    99,   100,     1,     2,     3,     4,     5,
     217,    93,   158,   140,   125,   160,   111,   160,    12,   160,
      34,   165,   167,   175,    35,    36,    37,    38,   133,   134,
     168,   147,   218,    14,   112,    23,    24,   220,   143,   221,
     141,   222,   224,   225,   172,    39,    40,   176,   160,   160,
     160,   143,   200,    81,    26,    15,   142,    15,   199,   170,
     135,   136,    61,   160,    24,   147,    92,   216,   212,   179,
     237,   239,   241,   163,    41,    42,    43,    44,   139,   171,
     143,   180,    26,    31,   144,   201,   202,   203,    46,   177,
     181,   182,   183,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,    29,   214,
      24,   146,   219,   173,   101,   149,   102,   209,    21,    22,
      98,   205,     1,     2,     3,     4,     5,    61,    26,   129,
     130,    34,   228,   229,   230,    35,    36,    37,    38,   188,
     189,   190,   191,   145,   238,   155,   240,   150,   242,    93,
     151,   244,   153,   245,   226,   154,    39,    40,    34,   231,
     233,   235,    35,    36,    37,    38,   156,     1,     2,     3,
       4,     5,    61,   169,   227,   126,   127,   128,   131,   132,
      25,   137,   138,    39,    40,    41,    42,    43,    44,   159,
     160,   208,   160,   184,   185,   192,   193,    34,   204,    46,
     232,    35,    36,    37,    38,   186,   187,   207,   223,   211,
     236,   243,    41,    42,    43,    44,     1,     2,     3,     4,
       5,   194,    39,    40,    66,   195,    46,   234,    35,    36,
      37,    38,     1,     2,     3,     4,     5,    67,    68,   196,
      69,    70,    71,    72,    73,    74,    75,    76,    63,    39,
      40,    41,    42,    43,    44,    64,   198,    23,    24,    32,
     197,   210,    34,   215,   162,    46,    35,    36,    37,    38,
      77,   174,    19,     0,    25,     0,    26,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    39,    40,    66,
      25,    78,    46,    35,    36,    37,    38,     1,     2,     3,
       4,     5,    67,    68,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    66,     0,     0,
       0,    35,    36,    37,    38,    25,   161,    46,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    34,    39,    40,     0,    35,    36,    37,    38,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,    39,    40,     0,     0,
       0,    41,    42,    43,    44,    34,     0,     0,     0,    35,
      36,    37,    38,    25,     0,    46,     0,    77,     0,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    44,     0,
      39,    40,     0,     0,     0,     0,     0,     0,    34,    46,
       0,     0,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,   102,     0,    41,
      42,    43,    44,    39,    40,     0,     0,     0,     0,     0,
       0,    45,   213,    46,    34,     0,     0,     0,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,   101,     0,
     102,     0,    41,    42,    43,    44,     0,     0,     0,    39,
      40,     0,     0,     0,    45,     0,    46,    34,     0,     0,
       0,    35,    36,    37,    38,     0,     0,     0,     0,     0,
     157,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    39,    40,    34,     0,     0,     0,    35,    36,
      37,    38,    46,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    77,     0,     0,     0,   123,     0,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      23,    24,    46,    71,    45,     0,    18,     3,     8,     3,
     153,    28,    29,    25,     9,    15,    67,     3,    30,    50,
      50,    50,    45,    39,    40,    11,    12,    13,    14,    15,
      50,    26,    76,    66,    50,    50,    53,    50,     0,    50,
       3,    72,    72,    72,     7,     8,     9,    10,    32,    33,
     101,    67,    72,    49,    71,    52,    53,    72,    37,    72,
      67,    72,   205,   206,   105,    28,    29,   111,    50,    50,
      50,    37,    51,    85,    71,    71,    36,    71,   146,    50,
      64,    65,   105,    50,    53,   101,    72,    54,    54,   112,
      72,    72,    72,    93,    57,    58,    59,    60,    56,    70,
      37,   124,    71,    72,    54,   149,   150,   151,    71,    72,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    18,   170,
      53,    51,   200,    52,    53,    71,    55,   160,    49,    50,
      30,   153,    11,    12,    13,    14,    15,   170,    71,    59,
      60,     3,   220,   221,   222,     7,     8,     9,    10,   133,
     134,   135,   136,    54,   232,    49,   234,    71,   236,   164,
      71,   239,    71,   241,   215,     3,    28,    29,     3,   223,
     224,   225,     7,     8,     9,    10,    49,    11,    12,    13,
      14,    15,   215,     3,   217,    61,    62,    63,    30,    31,
      69,    34,    35,    28,    29,    57,    58,    59,    60,    49,
      50,    49,    50,   129,   130,   137,   138,     3,    20,    71,
      72,     7,     8,     9,    10,   131,   132,    49,    71,     3,
      18,    49,    57,    58,    59,    60,    11,    12,    13,    14,
      15,   139,    28,    29,     3,   140,    71,    72,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   141,
      19,    20,    21,    22,    23,    24,    25,    26,    54,    28,
      29,    57,    58,    59,    60,    61,   143,    52,    53,    22,
     142,   164,     3,   170,    85,    71,     7,     8,     9,    10,
      49,   106,     9,    -1,    69,    -1,    71,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    28,    29,     3,
      69,    70,    71,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,     3,    -1,    -1,
      -1,     7,     8,     9,    10,    69,    70,    71,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,     3,    28,    29,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    28,    29,    -1,    -1,
      -1,    57,    58,    59,    60,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    69,    -1,    71,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,    71,
      -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,
      58,    59,    60,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    -1,    57,    58,    59,    60,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    69,    -1,    71,     3,    -1,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    28,    29,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    49,    -1,    -1,    -1,    52,    -1,    28,
      29,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    14,    15,    75,    94,    97,   116,
     117,   118,     0,     3,    49,    71,    95,    96,    98,   117,
      98,    49,    50,    52,    53,    69,    71,    94,    97,   109,
     119,    72,    96,    98,     3,     7,     8,     9,    10,    28,
      29,    57,    58,    59,    60,    69,    71,    76,    77,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,   102,    54,    61,    91,     3,    16,    17,    19,
      20,    21,    22,    23,    24,    25,    26,    49,    70,    91,
      93,    94,   107,   108,   109,   110,   111,   112,   113,   114,
     115,     3,    72,    97,    99,   100,   101,    94,   109,    79,
      79,    53,    55,   102,   103,   104,   105,   106,    93,    28,
      29,    53,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    52,    92,    79,    61,    62,    63,    59,
      60,    30,    31,    32,    33,    64,    65,    34,    35,    56,
      66,    67,    36,    37,    54,    54,    51,    79,    90,    71,
      71,    71,   107,    71,     3,    49,    49,    49,    93,    49,
      50,    70,   111,    98,    50,    72,    50,    72,    90,     3,
      50,    70,   102,    52,   106,    72,    93,    72,    78,    91,
      91,    79,    79,    79,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    86,    87,    88,    89,   107,
      51,    93,    93,    93,    20,    94,   112,    49,    49,    91,
     100,     3,    54,    70,   102,   104,    54,    50,    72,   107,
      72,    72,    72,    71,   112,   112,   102,    91,   107,   107,
     107,    93,    72,    93,    72,    93,    18,    72,   107,    72,
     107,    72,   107,    49,   107,   107
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 71 "compiler.y"
    {//创建一个根节点
    root = (yyvsp[(1) - (1)].rootN);
}
    break;

  case 3:
#line 78 "compiler.y"
    {
    (yyval.expN) = create_exp_tree((yyvsp[(1) - (1)].IDN)->line,0);//$1是ID_Node
    (yyval.expN)->info.prim_info.detail.ID = (yyvsp[(1) - (1)].IDN);
}
    break;

  case 4:
#line 83 "compiler.y"
    {
    (yyval.expN) = (yyvsp[(1) - (1)].expN);
}
    break;

  case 5:
#line 87 "compiler.y"
    {
    (yyval.expN) = (yyvsp[(1) - (1)].expN);
}
    break;

  case 6:
#line 90 "compiler.y"
    {
    (yyval.expN) = (yyvsp[(1) - (1)].expN);
    
}
    break;

  case 7:
#line 94 "compiler.y"
    {
    (yyval.expN) = (yyvsp[(1) - (1)].expN);
}
    break;

  case 8:
#line 98 "compiler.y"
    {
    (yyval.expN) = create_exp_tree((yyvsp[(2) - (3)].expN)->line,5);
    (yyval.expN) ->info.prim_info.detail.exp = (yyvsp[(2) - (3)].expN);
}
    break;

  case 9:
#line 106 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.type2 = post_NA;
    (yyval.expN)->info.post_info.arg_list = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->info.post_info.post_exp = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 10:
#line 113 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.post_exp = (yyvsp[(1) - (4)].expN);
    (yyval.expN)->info.post_info.arg_list = (yyvsp[(3) - (4)].expN);
    (yyval.expN)->info.post_info.type2 = ARRAY_CALL;
    (yyval.expN)->line = (yyvsp[(1) - (4)].expN)->line;
    //数组调用
}
    break;

  case 11:
#line 122 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.type2 = FUNC_CALL;
    (yyval.expN)->info.post_info.post_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.post_info.arg_list = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
    //函数调用
}
    break;

  case 12:
#line 130 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.type2 = FUNC_CALL;
    (yyval.expN)->info.post_info.post_exp = (yyvsp[(1) - (4)].expN);
    (yyval.expN)->info.post_info.arg_list = (yyvsp[(3) - (4)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (4)].expN)->line;
    //函数调用
}
    break;

  case 13:
#line 138 "compiler.y"
    {
    //++
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.type2 = INC;
    (yyval.expN)->info.post_info.post_exp = (yyvsp[(1) - (2)].expN);
    (yyval.expN)->info.post_info.arg_list = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (2)].expN)->line;
}
    break;

  case 14:
#line 146 "compiler.y"
    {
    //--
    (yyval.expN) = create_exp_tree(1);
    (yyval.expN)->info.post_info.type2 = DEC;
    (yyval.expN)->info.post_info.post_exp = (yyvsp[(1) - (2)].expN);
    (yyval.expN)->info.post_info.arg_list = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (2)].expN)->line;
}
    break;

  case 15:
#line 157 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(14);
    (yyval.expN)->info.argument_info.type2 = SINGLE;
    (yyval.expN)->info.argument_info.argu_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->info.argument_info.assig_exp = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 16:
#line 164 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(14);
    (yyval.expN)->info.argument_info.type2 = GROUP;
    (yyval.expN)->info.argument_info.argu_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.argument_info.assig_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 17:
#line 175 "compiler.y"
    {
    //printf("postfix");
    (yyval.expN) = create_exp_tree(13);
    (yyval.expN)->info.unary_info.type2 = unary_NA;
    (yyval.expN)->info.unary_info.post_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->info.unary_info.unary_exp = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 18:
#line 183 "compiler.y"
    {
    //++
    (yyval.expN) = create_exp_tree(13);
    (yyval.expN)->info.unary_info.type2 = t_INC_OP;
    (yyval.expN)->info.unary_info.unary_exp = (yyvsp[(2) - (2)].expN);
    (yyval.expN)->info.unary_info.post_exp = NULL;
    (yyval.expN)->line = (yyvsp[(2) - (2)].expN)->line;
}
    break;

  case 19:
#line 191 "compiler.y"
    {
    //--
    (yyval.expN) = create_exp_tree(13);
    (yyval.expN)->info.unary_info.type2 = t_DEC_OP;
    (yyval.expN)->info.unary_info.unary_exp = (yyvsp[(2) - (2)].expN);
    (yyval.expN)->info.unary_info.post_exp = NULL;
    (yyval.expN)->line = (yyvsp[(2) - (2)].expN)->line;
}
    break;

  case 20:
#line 199 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(13);
    (yyval.expN)->info.unary_info.type2 = (yyvsp[(1) - (2)].arykind);
    (yyval.expN)->info.unary_info.post_exp = NULL;
    (yyval.expN)->info.unary_info.unary_exp = (yyvsp[(2) - (2)].expN);
    (yyval.expN)->line = (yyvsp[(2) - (2)].expN)->line;
}
    break;

  case 21:
#line 210 "compiler.y"
    {
    (yyval.arykind) = POS;
}
    break;

  case 22:
#line 213 "compiler.y"
    {
    (yyval.arykind) = NEG;
}
    break;

  case 23:
#line 216 "compiler.y"
    {
    (yyval.arykind) = BIT_NEG;
}
    break;

  case 24:
#line 219 "compiler.y"
    {
    (yyval.arykind) = FEI;
}
    break;

  case 25:
#line 226 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(12);
    (yyval.expN)->info.mul_info.type2 = mul_NA;
    (yyval.expN)->info.mul_info.unary_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->info.mul_info.mul_exp = NULL;
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 26:
#line 233 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(12);
    (yyval.expN)->info.mul_info.type2 = MUL_OP;
    (yyval.expN)->info.mul_info.unary_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->info.mul_info.mul_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 27:
#line 240 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(12);
    (yyval.expN)->info.mul_info.type2 = DIV_OP;
    (yyval.expN)->info.mul_info.unary_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->info.mul_info.mul_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 28:
#line 247 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(12);
    (yyval.expN)->info.mul_info.type2 = MOD;
    (yyval.expN)->info.mul_info.unary_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->info.mul_info.mul_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 29:
#line 258 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(11);
    (yyval.expN)->info.add_info.type2 = add_NA;
    (yyval.expN)->info.add_info.add_exp = NULL;
    (yyval.expN)->info.add_info.mul_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 30:
#line 265 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(11);
    (yyval.expN)->info.add_info.type2 = ADD_OP;
    (yyval.expN)->info.add_info.add_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.add_info.mul_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 31:
#line 272 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(11);
    (yyval.expN)->info.add_info.type2 = MINUS_OP;
    (yyval.expN)->info.add_info.add_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.add_info.mul_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 32:
#line 283 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(10);
    (yyval.expN)->info.shift_info.type2 = shift_NA;
    (yyval.expN)->info.shift_info.shift_exp = NULL;
    (yyval.expN)->info.shift_info.addtive_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
    
}
    break;

  case 33:
#line 291 "compiler.y"
    {
    //<<
    (yyval.expN) = create_exp_tree(10);
    (yyval.expN)->info.shift_info.type2 = LEFT;
    (yyval.expN)->info.shift_info.shift_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.shift_info.addtive_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 34:
#line 299 "compiler.y"
    {
    //>>
    (yyval.expN) = create_exp_tree(10);
    (yyval.expN)->info.shift_info.type2 = RIGHT;
    (yyval.expN)->info.shift_info.shift_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.shift_info.addtive_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 35:
#line 311 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(9);
    (yyval.expN)->info.rela_info.type2 = relation_NA;
    (yyval.expN)->info.rela_info.relation_exp = NULL;
    (yyval.expN)->info.rela_info.shift_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 36:
#line 318 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(9);
    (yyval.expN)->info.rela_info.type2 = LES;
    (yyval.expN)->info.rela_info.relation_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.rela_info.shift_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 37:
#line 325 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(9);
    (yyval.expN)->info.rela_info.type2 = GT;
    (yyval.expN)->info.rela_info.relation_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.rela_info.shift_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 38:
#line 332 "compiler.y"
    {
    // <=
    (yyval.expN) = create_exp_tree(9);
    (yyval.expN)->info.rela_info.type2 = LE;
    (yyval.expN)->info.rela_info.relation_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.rela_info.shift_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 39:
#line 340 "compiler.y"
    {
    // >=
    (yyval.expN) = create_exp_tree(9);
    (yyval.expN)->info.rela_info.type2 = GE;
    (yyval.expN)->info.rela_info.relation_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.rela_info.shift_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 40:
#line 352 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(8);
    (yyval.expN)->info.equal_info.type2 = equal_NA;
    (yyval.expN)->info.equal_info.equal_exp = NULL;
    (yyval.expN)->info.equal_info.relation_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 41:
#line 359 "compiler.y"
    {
    // ==
    (yyval.expN) = create_exp_tree(8);
    (yyval.expN)->info.equal_info.type2 = EQ;
    (yyval.expN)->info.equal_info.equal_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.equal_info.relation_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 42:
#line 367 "compiler.y"
    {
    // !=
    (yyval.expN) = create_exp_tree(8);
    (yyval.expN)->info.equal_info.type2 = NE;
    (yyval.expN)->info.equal_info.equal_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.equal_info.relation_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 43:
#line 378 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(7);
    (yyval.expN)->info.and_info.and_exp = NULL;
    (yyval.expN)->info.and_info.equal_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 44:
#line 384 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(7);
    (yyval.expN)->info.and_info.and_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.and_info.equal_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 45:
#line 394 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(6);
    (yyval.expN)->info.excl_or_info.exclusive_or_exp = NULL;
    (yyval.expN)->info.excl_or_info.and_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 46:
#line 400 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(6);
    (yyval.expN)->info.excl_or_info.exclusive_or_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.excl_or_info.and_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 47:
#line 410 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(5);
    (yyval.expN)->info.incl_or_info.inclusive_or_exp = NULL;
    (yyval.expN)->info.incl_or_info.exclusive_or_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 48:
#line 416 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(5);
    (yyval.expN)->info.incl_or_info.inclusive_or_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.incl_or_info.exclusive_or_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 49:
#line 426 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(4);
    (yyval.expN)->info.logi_and_info.logical_and_exp = NULL;
    (yyval.expN)->info.logi_and_info.inclusive_or_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 50:
#line 432 "compiler.y"
    {
    //&&
    (yyval.expN) = create_exp_tree(4);
    (yyval.expN)->info.logi_and_info.logical_and_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.logi_and_info.inclusive_or_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 51:
#line 443 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(3);
    (yyval.expN)->info.logi_or_info.logical_or_exp = NULL;
    (yyval.expN)->info.logi_or_info.logical_and_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 52:
#line 449 "compiler.y"
    {
    //||
    (yyval.expN) = create_exp_tree(3);
    (yyval.expN)->info.logi_or_info.logical_or_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.logi_or_info.logical_and_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 53:
#line 460 "compiler.y"
    {
    //条件表达式
    (yyval.expN) = create_exp_tree(2);
    (yyval.expN)->info.assign_info.type2 = assign_NA;
    (yyval.expN)->info.assign_info.unary_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->info.assign_info.assign_exp =  NULL;
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 54:
#line 468 "compiler.y"
    {
    (yyval.expN) = create_exp_tree(2);
    (yyval.expN)->info.assign_info.type2 = (yyvsp[(2) - (3)].assignkind);
    (yyval.expN)->info.assign_info.unary_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.assign_info.assign_exp =  (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (3)].expN)->line;
}
    break;

  case 55:
#line 479 "compiler.y"
    {
    (yyval.assignkind) = t_ASSIGNMENT;
}
    break;

  case 56:
#line 482 "compiler.y"
    {
    //*=
    (yyval.assignkind) = t_MUL_ASSIGN;
}
    break;

  case 57:
#line 486 "compiler.y"
    {
    // /=
    (yyval.assignkind) = t_DIV_ASSIGN;
}
    break;

  case 58:
#line 490 "compiler.y"
    {
    // %=
    (yyval.assignkind) = t_MOD_ASSIGN;
}
    break;

  case 59:
#line 494 "compiler.y"
    {
    // +=
    (yyval.assignkind) = t_ADD_ASSIGN;
}
    break;

  case 60:
#line 498 "compiler.y"
    {
    // -=
    (yyval.assignkind) = t_SUB_ASSIGN;
}
    break;

  case 61:
#line 502 "compiler.y"
    {
    // <<=
    (yyval.assignkind) = t_LEFT_ASSIGN;
}
    break;

  case 62:
#line 506 "compiler.y"
    {
    // >>=
    (yyval.assignkind) = t_RIGHT_ASSIGN;
}
    break;

  case 63:
#line 510 "compiler.y"
    {
    // &=
    (yyval.assignkind) = t_AND_ASSIGN;
}
    break;

  case 64:
#line 514 "compiler.y"
    {
    // ^=
    (yyval.assignkind) = t_XOR_ASSIGN;
}
    break;

  case 65:
#line 518 "compiler.y"
    {
    // |=
    (yyval.assignkind) = t_OR_ASSIGN;
}
    break;

  case 66:
#line 526 "compiler.y"
    {
    //赋值表达式
    (yyval.expN) = create_exp_tree(15);
    (yyval.expN)->info.exp_root.next_exp = NULL;
    (yyval.expN)->info.exp_root.assign_exp = (yyvsp[(1) - (1)].expN);
    (yyval.expN)->line = (yyvsp[(1) - (1)].expN)->line;
}
    break;

  case 67:
#line 533 "compiler.y"
    {
    //逗号表达式
    (yyval.expN) = create_exp_tree(15);
    (yyval.expN)->info.exp_root.next_exp = (yyvsp[(1) - (3)].expN);
    (yyval.expN)->info.exp_root.assign_exp = (yyvsp[(3) - (3)].expN);
    (yyval.expN)->line = (yyvsp[(3) - (3)].expN)->line;
}
    break;

  case 68:
#line 544 "compiler.y"
    {
    (yyval.declarationN) = create_declaration_tree((yyvsp[(1) - (2)].typekind));
}
    break;

  case 69:
#line 547 "compiler.y"
    {
    (yyval.declarationN) = create_declaration_tree((yyvsp[(1) - (3)].typekind));
    (yyval.declarationN)->decl_list = (yyvsp[(2) - (3)].declaratorN);
    (yyval.declarationN)->line = (yyvsp[(2) - (3)].declaratorN)->line;
}
    break;

  case 70:
#line 556 "compiler.y"
    {
    (yyval.declaratorN) = (yyvsp[(1) - (1)].declaratorN);
}
    break;

  case 71:
#line 559 "compiler.y"
    {
    (yyval.declaratorN) = (yyvsp[(1) - (3)].declaratorN);
    while((yyvsp[(1) - (3)].declaratorN)->next != NULL)
    (yyvsp[(1) - (3)].declaratorN) = (yyvsp[(1) - (3)].declaratorN)->next;
    (yyvsp[(1) - (3)].declaratorN)->next = (yyvsp[(3) - (3)].declaratorN);
}
    break;

  case 72:
#line 568 "compiler.y"
    {
    (yyval.declaratorN) = (yyvsp[(1) - (1)].declaratorN);
}
    break;

  case 73:
#line 571 "compiler.y"
    {
    (yyval.declaratorN) = create_declarator_tree((yyvsp[(1) - (3)].declaratorN),(yyvsp[(3) - (3)].initN));
    (yyval.declaratorN)->line = (yyvsp[(1) - (3)].declaratorN)->line;
}
    break;

  case 74:
#line 580 "compiler.y"
    {
    (yyval.typekind) = t_VOID;
}
    break;

  case 75:
#line 583 "compiler.y"
    {
    (yyval.typekind) = t_CHAR;
}
    break;

  case 76:
#line 586 "compiler.y"
    {
    (yyval.typekind) = t_INT;
}
    break;

  case 77:
#line 589 "compiler.y"
    {
    (yyval.typekind) = t_DOUBLE;
}
    break;

  case 78:
#line 592 "compiler.y"
    {
    (yyval.typekind) = t_BOOL;
}
    break;

  case 79:
#line 600 "compiler.y"
    {
    //变量
    (yyval.declaratorN) = create_declarator_tree(0);
    (yyval.declaratorN)->info.decl_info.detail.ID_info.ID_list = (yyvsp[(1) - (1)].IDN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (1)].IDN)->line;
}
    break;

  case 80:
#line 606 "compiler.y"
    {
    //.....
    (yyval.declaratorN) = (yyvsp[(2) - (3)].declaratorN);
}
    break;

  case 81:
#line 610 "compiler.y"
    {
    //数组
    //printf("assignment_expression");
    (yyval.declaratorN) = create_declarator_tree(1);
    (yyval.declaratorN)->info.decl_info.detail.arr_info.arr_type = ASSIGN_EXP;
    (yyval.declaratorN)->info.decl_info.detail.arr_info.assig_exp = (yyvsp[(3) - (4)].expN);
    (yyval.declaratorN)->info.decl_info.detail.arr_info.decl_tree = (yyvsp[(1) - (4)].declaratorN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (4)].declaratorN)->line;
}
    break;

  case 82:
#line 619 "compiler.y"
    {
    //....
    (yyval.declaratorN) = create_declarator_tree(1);
    (yyval.declaratorN)->info.decl_info.detail.arr_info.arr_type = STAR;
    (yyval.declaratorN)->info.decl_info.detail.arr_info.assig_exp = NULL;
    (yyval.declaratorN)->info.decl_info.detail.arr_info.decl_tree = (yyvsp[(1) - (4)].declaratorN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (4)].declaratorN)->line;
}
    break;

  case 83:
#line 627 "compiler.y"
    {
    //数组
    (yyval.declaratorN) = create_declarator_tree(1);
    (yyval.declaratorN)->info.decl_info.detail.arr_info.arr_type = arr_NA;
    (yyval.declaratorN)->info.decl_info.detail.arr_info.assig_exp = NULL;
    (yyval.declaratorN)->info.decl_info.detail.arr_info.decl_tree = (yyvsp[(1) - (3)].declaratorN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (3)].declaratorN)->line;
}
    break;

  case 84:
#line 635 "compiler.y"
    {
    //函数
    (yyval.declaratorN) = create_declarator_tree(2);
    (yyval.declaratorN)->info.decl_info.detail.func_info.func_type = PARAM;
    (yyval.declaratorN)->info.decl_info.detail.func_info.decl_tree = (yyvsp[(1) - (4)].declaratorN);
    (yyval.declaratorN)->info.decl_info.detail.func_info.list.param_list = (yyvsp[(3) - (4)].paraN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (4)].declaratorN)->line;
}
    break;

  case 85:
#line 643 "compiler.y"
    {
    //函数
    (yyval.declaratorN) = create_declarator_tree(2);
    (yyval.declaratorN)->info.decl_info.detail.func_info.func_type = IDENT;
    (yyval.declaratorN)->info.decl_info.detail.func_info.decl_tree = (yyvsp[(1) - (4)].declaratorN);
    (yyval.declaratorN)->info.decl_info.detail.func_info.list.ID_list = (yyvsp[(3) - (4)].IDN);
    (yyval.declaratorN)->line = (yyvsp[(1) - (4)].declaratorN)->line;
}
    break;

  case 86:
#line 651 "compiler.y"
    {
    //函数
    (yyval.declaratorN) = create_declarator_tree(2);
    (yyval.declaratorN)->info.decl_info.detail.func_info.func_type = func_NA;
    (yyval.declaratorN)->info.decl_info.detail.func_info.decl_tree = (yyvsp[(1) - (3)].declaratorN);
    (yyval.declaratorN)->info.decl_info.detail.func_info.list.param_list = NULL;
    (yyval.declaratorN)->line = (yyvsp[(1) - (3)].declaratorN)->line;
}
    break;

  case 87:
#line 664 "compiler.y"
    {
    (yyval.paraN) = (yyvsp[(1) - (1)].paraN);
}
    break;

  case 88:
#line 667 "compiler.y"
    {
    (yyval.paraN) = (yyvsp[(1) - (3)].paraN);
    while((yyvsp[(1) - (3)].paraN)->next != NULL)
    (yyvsp[(1) - (3)].paraN) = (yyvsp[(1) - (3)].paraN)->next;
    (yyvsp[(1) - (3)].paraN)->next = (yyvsp[(3) - (3)].paraN);
}
    break;

  case 89:
#line 676 "compiler.y"
    {
    (yyval.paraN) = create_param_tree((yyvsp[(1) - (2)].typekind));
    (yyval.paraN)->declarator = (yyvsp[(2) - (2)].declaratorN);
}
    break;

  case 90:
#line 680 "compiler.y"
    {
    (yyval.paraN) = create_param_tree((yyvsp[(1) - (1)].typekind));
}
    break;

  case 91:
#line 686 "compiler.y"
    {
    (yyval.IDN) = (yyvsp[(1) - (1)].IDN);
}
    break;

  case 92:
#line 689 "compiler.y"
    {
    (yyval.IDN) = (yyvsp[(1) - (3)].IDN);
    while((yyvsp[(1) - (3)].IDN)->next != NULL)
    (yyvsp[(1) - (3)].IDN) = (yyvsp[(1) - (3)].IDN)->next;
    (yyvsp[(1) - (3)].IDN)->next = (yyvsp[(3) - (3)].IDN);
}
    break;

  case 93:
#line 699 "compiler.y"
    {
    (yyval.initN) = create_initializer_tree(0);
    (yyval.initN)->info.assign_exp = (yyvsp[(1) - (1)].expN);
}
    break;

  case 94:
#line 703 "compiler.y"
    {
    //列表初始化 {1,1,1}
    (yyval.initN) = create_initializer_tree(1);
    (yyval.initN)->info.init_list = (yyvsp[(2) - (3)].initl);
}
    break;

  case 95:
#line 708 "compiler.y"
    {//init_list->next
    //列表初始化 {1,1,1,}
    (yyval.initN) = create_initializer_tree(1);
    (yyval.initN)->info.init_list = (yyvsp[(2) - (4)].initl);
}
    break;

  case 96:
#line 716 "compiler.y"
    {
    (yyval.initl) = create_initial_list_tree(0);
    (yyval.initl)->initer = (yyvsp[(1) - (1)].initN);
}
    break;

  case 97:
#line 720 "compiler.y"
    {
    (yyval.initl) = create_initial_list_tree(1);
    (yyval.initl)->initer = (yyvsp[(2) - (2)].initN);
    (yyval.initl)->design_list = (yyvsp[(1) - (2)].design);
}
    break;

  case 98:
#line 725 "compiler.y"
    {// 在分析时需要判断next == NULL来确定是否到这个list的结尾
    (yyval.initl) = (yyvsp[(1) - (3)].initl);
    while((yyvsp[(1) - (3)].initl)->next != NULL)
    (yyvsp[(1) - (3)].initl) = (yyvsp[(1) - (3)].initl)->next;
    (yyvsp[(1) - (3)].initl)->next = create_initial_list_tree(0);
    (yyvsp[(1) - (3)].initl)->next->initer = (yyvsp[(3) - (3)].initN);
    
}
    break;

  case 99:
#line 733 "compiler.y"
    {
    (yyval.initl) = (yyvsp[(1) - (4)].initl);
    while((yyvsp[(1) - (4)].initl)->next != NULL)
    (yyvsp[(1) - (4)].initl) = (yyvsp[(1) - (4)].initl)->next;
    (yyvsp[(1) - (4)].initl)->next = create_initial_list_tree(1);
    (yyvsp[(1) - (4)].initl)->next->initer = (yyvsp[(4) - (4)].initN);
    (yyvsp[(1) - (4)].initl)->next->design_list = (yyvsp[(3) - (4)].design);
}
    break;

  case 100:
#line 744 "compiler.y"
    {
    (yyval.design) = (yyvsp[(1) - (2)].design);
}
    break;

  case 101:
#line 750 "compiler.y"
    {
    (yyval.design) = (yyvsp[(1) - (1)].design);
}
    break;

  case 102:
#line 753 "compiler.y"
    {
    (yyval.design) = (yyvsp[(1) - (2)].design);
    while((yyvsp[(1) - (2)].design)->next != NULL)
    (yyvsp[(1) - (2)].design)=(yyvsp[(1) - (2)].design)->next;
    (yyvsp[(1) - (2)].design)->next = (yyvsp[(2) - (2)].design);
}
    break;

  case 103:
#line 762 "compiler.y"
    {
    (yyval.design) = create_design_tree(0);
    (yyval.design)->info.logical_or_exp = (yyvsp[(2) - (3)].expN);
}
    break;

  case 104:
#line 766 "compiler.y"
    {
    (yyval.design) = create_design_tree(1);
    (yyval.design)->info.ID = (yyvsp[(2) - (2)].IDN);
}
    break;

  case 105:
#line 774 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 106:
#line 777 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 107:
#line 780 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 108:
#line 783 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 109:
#line 786 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 110:
#line 789 "compiler.y"
    {
    (yyval.statN) = (yyvsp[(1) - (1)].statN);
}
    break;

  case 111:
#line 796 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(0);
    (yyval.statN)->stat_info.label_info.ID = (yyvsp[(1) - (3)].IDN);
    (yyval.statN)->stat_info.label_info.exp = NULL;
    (yyval.statN)->stat_info.label_info.stat = (yyvsp[(3) - (3)].statN);
}
    break;

  case 112:
#line 802 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(0);
    (yyval.statN)->stat_info.label_info.ID = NULL;
    (yyval.statN)->stat_info.label_info.exp = (yyvsp[(2) - (4)].expN);
    (yyval.statN)->stat_info.label_info.stat = (yyvsp[(4) - (4)].statN);
}
    break;

  case 113:
#line 812 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(1);
    (yyval.statN)->stat_info.compound_info.type2 = SINGLE;
    (yyval.statN)->stat_info.compound_info.blist = NULL;
}
    break;

  case 114:
#line 817 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(1);
    (yyval.statN)->stat_info.compound_info.type2 = GROUP;
    (yyval.statN)->stat_info.compound_info.blist = (yyvsp[(2) - (3)].block);
}
    break;

  case 115:
#line 825 "compiler.y"
    {
    (yyval.block) = (yyvsp[(1) - (1)].block);
    
}
    break;

  case 116:
#line 829 "compiler.y"
    {
    (yyval.block) = (yyvsp[(1) - (2)].block);
    while((yyvsp[(1) - (2)].block)->next != NULL)
    (yyvsp[(1) - (2)].block) = (yyvsp[(1) - (2)].block)->next;
    (yyvsp[(1) - (2)].block)->next = (yyvsp[(2) - (2)].block);
}
    break;

  case 117:
#line 838 "compiler.y"
    {
    (yyval.block) = create_block_tree();
    (yyval.block)->declaration = (yyvsp[(1) - (1)].declarationN);
}
    break;

  case 118:
#line 842 "compiler.y"
    {
    (yyval.block) = create_block_tree();
    (yyval.block)->statement = (yyvsp[(1) - (1)].statN);
}
    break;

  case 119:
#line 849 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(2);
    (yyval.statN)->stat_info.exp_info.exp = NULL;
}
    break;

  case 120:
#line 853 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(2);
    (yyval.statN)->stat_info.exp_info.exp = (yyvsp[(1) - (2)].expN);
}
    break;

  case 121:
#line 861 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(3);
    (yyval.statN)->stat_info.select_info.type2 = t_IF;
    (yyval.statN)->stat_info.select_info.exp = (yyvsp[(3) - (5)].expN);
    (yyval.statN)->stat_info.select_info.stat1 = (yyvsp[(5) - (5)].statN);
    (yyval.statN)->stat_info.select_info.stat2 = NULL;
}
    break;

  case 122:
#line 868 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(3);
    (yyval.statN)->stat_info.select_info.type2 = t_IF_ELSE;
    (yyval.statN)->stat_info.select_info.exp = (yyvsp[(3) - (7)].expN);
    (yyval.statN)->stat_info.select_info.stat1 = (yyvsp[(5) - (7)].statN);
    (yyval.statN)->stat_info.select_info.stat2 = (yyvsp[(7) - (7)].statN);
}
    break;

  case 123:
#line 875 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(3);
    (yyval.statN)->stat_info.select_info.type2 = t_SWITCH;
    (yyval.statN)->stat_info.select_info.exp = (yyvsp[(3) - (5)].expN);
    (yyval.statN)->stat_info.select_info.stat1 = (yyvsp[(5) - (5)].statN);
    (yyval.statN)->stat_info.select_info.stat2 = NULL;
}
    break;

  case 124:
#line 886 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = t_WHILE;
    (yyval.statN)->stat_info.iter_info.exp = (yyvsp[(3) - (5)].expN);
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(5) - (5)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = NULL;
    (yyval.statN)->stat_info.iter_info.stat3 = NULL;
    (yyval.statN)->stat_info.iter_info.decl = NULL;
}
    break;

  case 125:
#line 895 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = t_DO_WHILE;
    (yyval.statN)->stat_info.iter_info.exp = (yyvsp[(5) - (7)].expN);
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(2) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = NULL;
    (yyval.statN)->stat_info.iter_info.stat3 = NULL;
    (yyval.statN)->stat_info.iter_info.decl = NULL;
}
    break;

  case 126:
#line 904 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = FOR1;
    (yyval.statN)->stat_info.iter_info.exp = NULL;
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(3) - (6)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = (yyvsp[(4) - (6)].statN);
    (yyval.statN)->stat_info.iter_info.stat3 = (yyvsp[(6) - (6)].statN);
    (yyval.statN)->stat_info.iter_info.decl = NULL;
}
    break;

  case 127:
#line 913 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = FOR2;
    (yyval.statN)->stat_info.iter_info.exp = (yyvsp[(5) - (7)].expN);
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(3) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = (yyvsp[(4) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.stat3 = (yyvsp[(7) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.decl = NULL;
}
    break;

  case 128:
#line 922 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = FOR3;
    (yyval.statN)->stat_info.iter_info.exp = NULL;
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(4) - (6)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = (yyvsp[(6) - (6)].statN);
    (yyval.statN)->stat_info.iter_info.stat3 = NULL;
    (yyval.statN)->stat_info.iter_info.decl = (yyvsp[(3) - (6)].declarationN);
}
    break;

  case 129:
#line 931 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(4);
    (yyval.statN)->stat_info.iter_info.type2 = FOR4;
    (yyval.statN)->stat_info.iter_info.exp = (yyvsp[(5) - (7)].expN);
    (yyval.statN)->stat_info.iter_info.stat1 = (yyvsp[(4) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.stat2 = (yyvsp[(7) - (7)].statN);
    (yyval.statN)->stat_info.iter_info.stat3 = NULL;
    (yyval.statN)->stat_info.iter_info.decl = (yyvsp[(3) - (7)].declarationN);
}
    break;

  case 130:
#line 944 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(5);
    (yyval.statN)->stat_info.jump_info.type2 = t_GOTO;
    (yyval.statN)->stat_info.jump_info.ID = (yyvsp[(2) - (3)].IDN);
    (yyval.statN)->stat_info.jump_info.exp = NULL;
}
    break;

  case 131:
#line 950 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(5);
    (yyval.statN)->stat_info.jump_info.type2 = t_CONTINUE;
    (yyval.statN)->stat_info.jump_info.ID = NULL;
    (yyval.statN)->stat_info.jump_info.exp = NULL;
}
    break;

  case 132:
#line 956 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(5);
    (yyval.statN)->stat_info.jump_info.type2 = t_BREAK;
    (yyval.statN)->stat_info.jump_info.ID = NULL;
    (yyval.statN)->stat_info.jump_info.exp = NULL;
}
    break;

  case 133:
#line 962 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(5);
    (yyval.statN)->stat_info.jump_info.type2 = RETURN1;
    (yyval.statN)->stat_info.jump_info.ID = NULL;
    (yyval.statN)->stat_info.jump_info.exp = NULL;
}
    break;

  case 134:
#line 968 "compiler.y"
    {
    (yyval.statN) = create_stat_tree(5);
    (yyval.statN)->stat_info.jump_info.type2 = RETURN2;
    (yyval.statN)->stat_info.jump_info.ID = NULL;
    (yyval.statN)->stat_info.jump_info.exp = (yyvsp[(2) - (3)].expN);
}
    break;

  case 135:
#line 977 "compiler.y"
    {
    (yyval.rootN) = (yyvsp[(1) - (1)].rootN);
}
    break;

  case 136:
#line 980 "compiler.y"
    {
    (yyval.rootN) = (yyvsp[(1) - (2)].rootN);
    while((yyvsp[(1) - (2)].rootN)->next != NULL)
    (yyvsp[(1) - (2)].rootN) = (yyvsp[(1) - (2)].rootN)->next;
    (yyvsp[(1) - (2)].rootN)->next = (yyvsp[(2) - (2)].rootN);
}
    break;

  case 137:
#line 989 "compiler.y"
    {
    (yyval.rootN) = create_root_tree();
    (yyval.rootN)->type = Func_T;
    (yyval.rootN)->son.func_tree = (yyvsp[(1) - (1)].funcN);
    //函数定义
    //printf("function_definition");
}
    break;

  case 138:
#line 996 "compiler.y"
    {
    (yyval.rootN) = create_root_tree();
    (yyval.rootN)->type = Decl_T;
    (yyval.rootN)->son.decl_tree = (yyvsp[(1) - (1)].declarationN);
    //变量声明
    //printf("declaration");
}
    break;

  case 139:
#line 1006 "compiler.y"
    {
    (yyval.funcN) = create_func_tree((yyvsp[(1) - (4)].typekind));
    (yyval.funcN)->func_name = (yyvsp[(2) - (4)].declaratorN);
    (yyval.funcN)->decl_list = (yyvsp[(3) - (4)].declarationN);
    (yyval.funcN)->stat_list = (yyvsp[(4) - (4)].statN);
    (yyval.funcN)->beg_line = (yyvsp[(2) - (4)].declaratorN)->line;
    //结束的行数得找一下
    (yyval.funcN)->beg_line = (yyvsp[(4) - (4)].statN)->line;
}
    break;

  case 140:
#line 1015 "compiler.y"
    {
    (yyval.funcN) = create_func_tree((yyvsp[(1) - (3)].typekind));
    (yyval.funcN)->func_name = (yyvsp[(2) - (3)].declaratorN);
    (yyval.funcN)->decl_list = NULL;
    (yyval.funcN)->stat_list = (yyvsp[(3) - (3)].statN);
    (yyval.funcN)->beg_line = (yyvsp[(2) - (3)].declaratorN)->line;
    //结束的行数得找一下
    (yyval.funcN)->beg_line = (yyvsp[(3) - (3)].statN)->line;
}
    break;

  case 141:
#line 1027 "compiler.y"
    {
    (yyval.declarationN) = (yyvsp[(1) - (1)].declarationN);
}
    break;

  case 142:
#line 1030 "compiler.y"
    {
    (yyval.declarationN) = (yyvsp[(1) - (2)].declarationN);
    while((yyvsp[(1) - (2)].declarationN)->next != NULL)
    (yyvsp[(1) - (2)].declarationN) = (yyvsp[(1) - (2)].declarationN)->next;
    (yyvsp[(1) - (2)].declarationN)->next = (yyvsp[(2) - (2)].declarationN);
}
    break;


/* Line 1267 of yacc.c.  */
#line 3127 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1038 "compiler.y"



void yyerror(char const *s)
{
    fflush(stdout);
    printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {
    
    yyin = fopen(argv[1],"r");
    
    //freopen("output/output.txt","w", stdout);
    yyparse();
    printf("\n");
    
    fclose(yyin);
    return 0;
}


