/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "apl.y"

#include<stdio.h>
#include<stdlib.h>
#include "apl.h"
extern FILE *yyin;


/* Line 268 of yacc.c  */
#line 79 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     OPER1 = 259,
     OPER2 = 260,
     ID = 261,
     INT = 262,
     STR = 263,
     STRING = 264,
     MAIN = 265,
     BEGN = 266,
     END = 267,
     DECL = 268,
     ENDDECL = 269,
     ASG = 270,
     READ = 271,
     PRINT = 272,
     RELOP = 273,
     LOGOP = 274,
     NEGOP = 275,
     IF = 276,
     ELSE = 277,
     THEN = 278,
     ENDIF = 279,
     WHILE = 280,
     DO = 281,
     ENDWHILE = 282,
     RETURN = 283,
     SYSCREA = 284,
     SYSOPEN = 285,
     SYSWRIT = 286,
     SYSSEEK = 287,
     SYSREAD = 288,
     SYSCLOS = 289,
     SYSDELE = 290,
     SYSFORK = 291,
     SYSEXEC = 292,
     SYSEXIT = 293,
     BREAK = 294,
     CONTINUE = 295,
     BREAKPOINT = 296,
     UMIN = 297
   };
#endif
/* Tokens.  */
#define NUM 258
#define OPER1 259
#define OPER2 260
#define ID 261
#define INT 262
#define STR 263
#define STRING 264
#define MAIN 265
#define BEGN 266
#define END 267
#define DECL 268
#define ENDDECL 269
#define ASG 270
#define READ 271
#define PRINT 272
#define RELOP 273
#define LOGOP 274
#define NEGOP 275
#define IF 276
#define ELSE 277
#define THEN 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define RETURN 283
#define SYSCREA 284
#define SYSOPEN 285
#define SYSWRIT 286
#define SYSSEEK 287
#define SYSREAD 288
#define SYSCLOS 289
#define SYSDELE 290
#define SYSFORK 291
#define SYSEXEC 292
#define SYSEXIT 293
#define BREAK 294
#define CONTINUE 295
#define BREAKPOINT 296
#define UMIN 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 8 "apl.y"

	struct tree *n;
	struct ArgStruct *arg;



/* Line 293 of yacc.c  */
#line 206 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 218 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  181

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
      47,    48,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    12,    14,    17,    21,    23,
      25,    27,    31,    33,    38,    43,    44,    47,    56,    58,
      60,    62,    64,    65,    67,    71,    74,    76,    78,    80,
      84,    86,    89,    97,    99,   103,   105,   109,   111,   114,
     116,   120,   123,   125,   130,   136,   142,   149,   158,   165,
     167,   172,   175,   178,   181,   183,   185,   189,   193,   197,
     201,   204,   208,   211,   213,   215,   217,   219,   221,   226,
     231,   232,   234,   238,   243,   248,   253,   258,   263,   268,
     273,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    60,    70,    -1,    -1,    13,    55,
      14,    -1,    56,    -1,    55,    56,    -1,    57,    58,    43,
      -1,     7,    -1,     8,    -1,    59,    -1,    58,    44,    59,
      -1,     6,    -1,     6,    45,     3,    46,    -1,     6,    47,
      65,    48,    -1,    -1,    60,    61,    -1,    62,    63,    47,
      64,    48,    49,    75,    50,    -1,     7,    -1,     8,    -1,
       6,    -1,    65,    -1,    -1,    66,    -1,    65,    43,    66,
      -1,    67,    68,    -1,     7,    -1,     8,    -1,    69,    -1,
      68,    44,    69,    -1,     6,    -1,    51,     6,    -1,     7,
      71,    47,    48,    49,    75,    50,    -1,    10,    -1,    57,
      73,    43,    -1,    74,    -1,    73,    44,    74,    -1,     6,
      -1,    77,    76,    -1,    76,    -1,    28,    81,    43,    -1,
      77,    78,    -1,    78,    -1,    82,    15,    81,    43,    -1,
      16,    47,    82,    48,    43,    -1,    17,    47,    81,    48,
      43,    -1,    79,    81,    23,    77,    24,    43,    -1,    79,
      81,    23,    77,    22,    77,    24,    43,    -1,    80,    81,
      26,    77,    27,    43,    -1,    72,    -1,    38,    47,    48,
      43,    -1,    39,    43,    -1,    40,    43,    -1,    41,    43,
      -1,    21,    -1,    25,    -1,    81,     4,    81,    -1,    81,
       5,    81,    -1,    81,    18,    81,    -1,    81,    19,    81,
      -1,    20,    81,    -1,    47,    81,    48,    -1,     4,    81,
      -1,    84,    -1,     3,    -1,     9,    -1,    82,    -1,     6,
      -1,     6,    45,    81,    46,    -1,     6,    47,    83,    48,
      -1,    -1,    81,    -1,    83,    44,    81,    -1,    29,    47,
      83,    48,    -1,    30,    47,    83,    48,    -1,    31,    47,
      83,    48,    -1,    32,    47,    83,    48,    -1,    33,    47,
      83,    48,    -1,    34,    47,    83,    48,    -1,    35,    47,
      83,    48,    -1,    36,    47,    48,    -1,    37,    47,    83,
      48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    26,    33,    41,    43,    46,    48,    50,
      53,    55,    58,    60,    62,    71,    73,    76,    87,    89,
      93,   100,   105,   107,   109,   113,   116,   118,   122,   124,
     128,   131,   135,   146,   158,   161,   163,   166,   170,   172,
     175,   179,   181,   185,   187,   189,   192,   194,   196,   198,
     200,   202,   209,   216,   220,   226,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   257,   259,   261,
     270,   272,   274,   278,   280,   282,   284,   286,   288,   290,
     292,   294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "OPER1", "OPER2", "ID", "INT",
  "STR", "STRING", "MAIN", "BEGN", "END", "DECL", "ENDDECL", "ASG", "READ",
  "PRINT", "RELOP", "LOGOP", "NEGOP", "IF", "ELSE", "THEN", "ENDIF",
  "WHILE", "DO", "ENDWHILE", "RETURN", "SYSCREA", "SYSOPEN", "SYSWRIT",
  "SYSSEEK", "SYSREAD", "SYSCLOS", "SYSDELE", "SYSFORK", "SYSEXEC",
  "SYSEXIT", "BREAK", "CONTINUE", "BREAKPOINT", "UMIN", "';'", "','",
  "'['", "']'", "'('", "')'", "'{'", "'}'", "'&'", "$accept", "prog",
  "GDefblock", "GDefList", "GDecl", "Type", "GIdList", "GId", "FDefList",
  "Fdef", "RType", "fID", "fArgList", "ArgList", "ArgDecl", "ArgType",
  "ArgIdList", "ArgId", "Mainblock", "fMAIN", "LDecl", "LIdList", "LId",
  "Body", "retstmt", "stmtlist", "stmt", "ifpad", "whilepad", "expr",
  "ids", "param", "SysCall", 0
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
     295,   296,   297,    59,    44,    91,    93,    40,    41,   123,
     125,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    61,    62,    62,
      63,    64,    65,    65,    65,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    72,    73,    73,    74,    75,    75,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     1,     2,     3,     1,     1,
       1,     3,     1,     4,     4,     0,     2,     8,     1,     1,
       1,     1,     0,     1,     3,     2,     1,     1,     1,     3,
       1,     2,     7,     1,     3,     1,     3,     1,     2,     1,
       3,     2,     1,     4,     5,     5,     6,     8,     6,     1,
       4,     2,     2,     2,     1,     1,     3,     3,     3,     3,
       2,     3,     2,     1,     1,     1,     1,     1,     4,     4,
       0,     1,     3,     4,     4,     4,     4,     4,     4,     4,
       3,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    15,     8,     9,     0,     5,     0,     1,
       0,     4,     6,    12,     0,    10,    18,    19,    16,     0,
       2,     0,    22,     7,     0,    33,     0,    20,     0,     0,
      26,    27,     0,    23,     0,    11,     0,    22,    13,     0,
      14,    30,     0,    25,    28,     0,     0,    21,    24,    31,
       0,     0,     0,    29,    67,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    49,     0,    39,     0,    42,
       0,     0,     0,     0,     0,    70,     0,     0,    64,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    63,     0,    51,    52,    53,    37,
       0,    35,    32,    38,    41,     0,     0,     0,     0,     0,
      71,     0,     0,     0,    62,    60,    70,    70,    70,    70,
      70,    70,    70,     0,    70,     0,     0,     0,     0,     0,
      40,     0,    34,     0,     0,     0,     0,    17,    68,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,    61,    56,    57,    58,    59,    50,    36,     0,
       0,    43,    72,    44,    45,    73,    74,    75,    76,    77,
      78,    79,    81,     0,     0,     0,     0,    46,    48,     0,
      47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    64,    14,    15,    10,    18,
      19,    28,    46,    32,    33,    34,    43,    44,    20,    26,
      65,   100,   101,    66,    67,    68,    69,    70,    71,   110,
      93,   111,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -131
static const yytype_int16 yypact[] =
{
      -2,   128,    18,  -131,  -131,  -131,     1,  -131,    26,  -131,
     135,  -131,  -131,    -1,    23,  -131,    14,  -131,  -131,    92,
    -131,    76,   144,  -131,    26,  -131,    54,  -131,    72,    60,
    -131,  -131,   -13,  -131,    -3,  -131,    79,   144,  -131,   144,
    -131,  -131,   115,   100,  -131,   121,   112,   113,  -131,  -131,
      -3,   133,   132,  -131,    73,   117,   136,  -131,  -131,    25,
     138,   139,   146,   147,   185,  -131,   143,  -131,   133,  -131,
      25,    25,   179,   133,    25,    25,   195,    25,  -131,    25,
    -131,    25,   155,   160,   161,   168,   169,   170,   172,   173,
     174,    25,    22,  -131,  -131,   158,  -131,  -131,  -131,  -131,
     119,  -131,  -131,  -131,  -131,    81,    71,    25,   181,    59,
      98,   -34,   175,    32,  -131,  -131,    25,    25,    25,    25,
      25,    25,    25,   186,    25,    34,    25,    25,    25,    25,
    -131,   190,  -131,   185,   197,   197,    69,  -131,  -131,    25,
    -131,   196,   198,    47,    48,    63,    82,    89,    90,   109,
    -131,   111,  -131,   235,  -131,   164,     2,  -131,  -131,   107,
     159,  -131,    98,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,   197,   199,   200,   171,  -131,  -131,   201,
    -131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,   239,    41,  -131,   222,  -131,  -131,
    -131,  -131,  -131,   210,   209,  -131,  -131,   202,  -131,  -131,
    -131,  -131,   116,   177,   183,  -130,   -66,  -131,  -131,   -58,
     -51,   108,  -131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      72,    92,   104,    41,   159,   160,   126,   127,     4,     5,
     139,     1,   105,   106,   140,    11,   109,    72,     9,   113,
     128,   114,    72,   115,    25,   112,   126,   127,    78,    79,
      39,    54,    13,   125,    80,    40,   126,   127,   126,   127,
     128,   129,     8,   176,    21,    81,    22,     8,    42,   136,
     128,   129,   128,   129,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   126,   127,   130,    23,    24,   153,   154,
     155,   156,    91,   126,   127,   126,   127,   128,   129,    29,
     142,   162,   152,    72,    72,   126,   127,   128,   129,   128,
     129,   139,   139,   104,   104,   165,   166,   135,    27,   128,
     129,    36,   126,   127,   134,   138,    38,   139,    72,    72,
     104,   167,   161,    54,     4,     5,   128,   129,    74,    37,
      75,    49,    72,    55,    56,    72,   139,    45,    57,   173,
     168,   174,    58,   139,   139,     4,     5,   169,   170,    54,
       4,     5,    16,    17,    50,    60,    61,    62,    63,    55,
      56,    30,    31,   139,    57,   139,    39,   171,    58,   172,
      52,    59,   132,   133,    76,    54,     4,     5,   126,   127,
      51,    60,    61,    62,    63,    55,    56,    54,     4,     5,
      57,    73,    96,    77,    58,    95,   175,    55,    56,    97,
      98,    99,    57,   102,   107,   179,    58,    60,    61,    62,
      63,    54,   116,    54,     4,     5,   131,   117,   118,    60,
      61,    62,    63,    55,    56,   119,   120,   121,    57,   122,
     123,   124,    58,   141,   143,   144,   145,   146,   147,   148,
     149,   137,   151,   157,   150,    60,    61,    62,    63,   163,
     127,   164,   177,   178,   180,    12,    35,    47,    48,   158,
     108,   103,    53
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-131))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      51,    59,    68,     6,   134,   135,     4,     5,     7,     8,
      44,    13,    70,    71,    48,    14,    74,    68,     0,    77,
      18,    79,    73,    81,    10,    76,     4,     5,     3,     4,
      43,     6,     6,    91,     9,    48,     4,     5,     4,     5,
      18,    19,     1,   173,    45,    20,    47,     6,    51,   107,
      18,    19,    18,    19,    29,    30,    31,    32,    33,    34,
      35,    36,    37,     4,     5,    43,    43,    44,   126,   127,
     128,   129,    47,     4,     5,     4,     5,    18,    19,     3,
      48,   139,    48,   134,   135,     4,     5,    18,    19,    18,
      19,    44,    44,   159,   160,    48,    48,    26,     6,    18,
      19,    47,     4,     5,    23,    46,    46,    44,   159,   160,
     176,    48,    43,     6,     7,     8,    18,    19,    45,    47,
      47,     6,   173,    16,    17,   176,    44,    48,    21,    22,
      48,    24,    25,    44,    44,     7,     8,    48,    48,     6,
       7,     8,     7,     8,    44,    38,    39,    40,    41,    16,
      17,     7,     8,    44,    21,    44,    43,    48,    25,    48,
      48,    28,    43,    44,    47,     6,     7,     8,     4,     5,
      49,    38,    39,    40,    41,    16,    17,     6,     7,     8,
      21,    49,    43,    47,    25,    47,    27,    16,    17,    43,
      43,     6,    21,    50,    15,    24,    25,    38,    39,    40,
      41,     6,    47,     6,     7,     8,    48,    47,    47,    38,
      39,    40,    41,    16,    17,    47,    47,    47,    21,    47,
      47,    47,    25,    48,   116,   117,   118,   119,   120,   121,
     122,    50,   124,    43,    48,    38,    39,    40,    41,    43,
       5,    43,    43,    43,    43,     6,    24,    37,    39,   133,
      73,    68,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    53,    54,     7,     8,    55,    56,    57,     0,
      60,    14,    56,     6,    58,    59,     7,     8,    61,    62,
      70,    45,    47,    43,    44,    10,    71,     6,    63,     3,
       7,     8,    65,    66,    67,    59,    47,    47,    46,    43,
      48,     6,    51,    68,    69,    48,    64,    65,    66,     6,
      44,    49,    48,    69,     6,    16,    17,    21,    25,    28,
      38,    39,    40,    41,    57,    72,    75,    76,    77,    78,
      79,    80,    82,    49,    45,    47,    47,    47,     3,     4,
       9,    20,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    47,    81,    82,    84,    47,    43,    43,    43,     6,
      73,    74,    50,    76,    78,    81,    81,    15,    75,    81,
      81,    83,    82,    81,    81,    81,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    81,     4,     5,    18,    19,
      43,    48,    43,    44,    23,    26,    81,    50,    46,    44,
      48,    48,    48,    83,    83,    83,    83,    83,    83,    83,
      48,    83,    48,    81,    81,    81,    81,    43,    74,    77,
      77,    43,    81,    43,    43,    48,    48,    48,    48,    48,
      48,    48,    48,    22,    24,    27,    77,    43,    43,    24,
      43
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1806 of yacc.c  */
#line 23 "apl.y"
    {}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 26 "apl.y"
    {
							fflush(fp);
							main_pos = ftell(fp);
							out_linecount++;
							fprintf(fp,"JMP 00000\n");
							}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 33 "apl.y"
    {
							fflush(fp);
							main_pos = ftell(fp);
							out_linecount++;
							fprintf(fp,"JMP 00000\n");
							}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 41 "apl.y"
    {}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 43 "apl.y"
    {}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 46 "apl.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 48 "apl.y"
    {m=0;
							}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 50 "apl.y"
    {m=3;
							}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 53 "apl.y"
    {}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 55 "apl.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 58 "apl.y"
    {install((yyvsp[(1) - (1)].n),m,1);
							}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 60 "apl.y"
    {install((yyvsp[(1) - (4)].n),m,(yyvsp[(3) - (4)].n)->value);
							}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 62 "apl.y"
    {finstall((yyvsp[(1) - (4)].n),m,(yyvsp[(3) - (4)].arg));
							/*while($3!=NULL)
							{
								printf(" %s-%d\n",$3->name,$3->type);
								$3=$3->next;
							}*/
							}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 71 "apl.y"
    {}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 73 "apl.y"
    {}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 76 "apl.y"
    {/*struct Lsymbol *temp=Lroot;
									while(temp!=NULL)
									{
										printf(" %s-%d-%d\n",temp->name,temp->type,temp->bind);
										temp=temp->next;
									}*/
									codegen((yyvsp[(7) - (8)].n));
									Lroot=NULL;
									funcid=NULL;										
									}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 87 "apl.y"
    {m3=0;
							}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 89 "apl.y"
    {m3=3;
							}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 93 "apl.y"
    {memcount=1;
							(yyvsp[(1) - (1)].n)->type=m3;
							funcid=(yyvsp[(1) - (1)].n);
							(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 100 "apl.y"
    {fdefcheck(funcid,(yyvsp[(1) - (1)].arg),m3);
							arglistinstall(funcid);
							}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 105 "apl.y"
    {(yyval.arg)=NULL;
							}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 107 "apl.y"
    {(yyval.arg)=(yyvsp[(1) - (1)].arg);							
							}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 109 "apl.y"
    {(yyval.arg)=makeargtree((yyvsp[(1) - (3)].arg),(yyvsp[(3) - (3)].arg));							
							}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 113 "apl.y"
    {(yyval.arg)=(yyvsp[(2) - (2)].arg);}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 116 "apl.y"
    {m2=0;
							}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 118 "apl.y"
    {m2=3;
							}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 122 "apl.y"
    {(yyval.arg)=(yyvsp[(1) - (1)].arg);
							}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 124 "apl.y"
    {(yyval.arg)=makeargtree((yyvsp[(1) - (3)].arg),(yyvsp[(3) - (3)].arg));
							}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 128 "apl.y"
    {
							(yyval.arg)=makearg((yyvsp[(1) - (1)].n)->name,m2,0);
							}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 131 "apl.y"
    {(yyval.arg)=makearg((yyvsp[(2) - (2)].n)->name,m2,1);
							}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 135 "apl.y"
    {codegen((yyvsp[(6) - (7)].n));
							out_linecount+=2;
							fprintf(fp, "MOV R0, 10\nPUSH R0\n");
							out_linecount++;
							fprintf(fp, "INT 7\n");;
							fclose(fp);						
				 			//printf("%d Lines Compiled\n",linecount);
							return(0);
							}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 146 "apl.y"
    {m3=0;
							memcount=1;
							funcid=NULL;
							fflush(fp);
							temp_pos = ftell(fp);
							fseek(fp,main_pos,SEEK_SET);
							fprintf(fp,"JMP %05d",out_linecount*2);
							fseek(fp,temp_pos,SEEK_SET);
							out_linecount+=2; fprintf(fp,"PUSH BP\nMOV BP,SP\n"); 
							}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 158 "apl.y"
    {}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 161 "apl.y"
    {}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 163 "apl.y"
    {}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 166 "apl.y"
    {Linstall((yyvsp[(1) - (1)].n),m,1);
							}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 170 "apl.y"
    {(yyval.n)=nontermcreate("Body",(yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n));			
							}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 172 "apl.y"
    {(yyval.n)=nontermcreate("Body",(yyvsp[(1) - (1)].n),NULL);			
							}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 175 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (3)].n),(yyvsp[(2) - (3)].n),NULL,NULL);
							}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 179 "apl.y"
    {(yyval.n)=nontermcreate("stmtlist",(yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n));
							}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 181 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 185 "apl.y"
    {(yyval.n)=maketree((yyvsp[(2) - (4)].n),(yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),NULL);
							}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 187 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (5)].n),(yyvsp[(3) - (5)].n),NULL,NULL);
							}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 189 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (5)].n),(yyvsp[(3) - (5)].n),NULL,NULL);
							}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 192 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (6)].n),(yyvsp[(2) - (6)].n),(yyvsp[(4) - (6)].n),NULL);flag_decl--;
										}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 194 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (8)].n),(yyvsp[(2) - (8)].n),(yyvsp[(4) - (8)].n),(yyvsp[(6) - (8)].n));flag_decl--;
										}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 196 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (6)].n),(yyvsp[(2) - (6)].n),(yyvsp[(4) - (6)].n),NULL);flag_decl--;flag_break=0;
										}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 198 "apl.y"
    {(yyval.n)=NULL;
							}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 200 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (4)].n);		
							}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 202 "apl.y"
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 209 "apl.y"
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[(1) - (2)].n);
							}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 216 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (2)].n);		
							}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 220 "apl.y"
    {
								flag_decl++;
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 226 "apl.y"
    {
								flag_decl++;
								flag_break=1;
								(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 233 "apl.y"
    {(yyval.n)=maketree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 235 "apl.y"
    {(yyval.n)=maketree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 237 "apl.y"
    {(yyval.n)=maketree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 239 "apl.y"
    {(yyval.n)=maketree((yyvsp[(2) - (3)].n),(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n),NULL);
							}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 241 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n),NULL,NULL);
							}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 243 "apl.y"
    {(yyval.n)=(yyvsp[(2) - (3)].n);
							}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 245 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (2)].n),(yyvsp[(2) - (2)].n),NULL,NULL);
							}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 247 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 249 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 251 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 253 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 257 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (1)].n),NULL,NULL,NULL);
							}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 259 "apl.y"
    {(yyval.n)=maketree((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),NULL,NULL);
							}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 261 "apl.y"
    {(yyval.n)=functioncall((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n));
							/*while($3!=NULL)
							{
								printf(" %s - %d\n",$3->name,$3->type);
								$3=$3->ptr3;
							}*/
							}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 270 "apl.y"
    {(yyval.n)=NULL;
							}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 272 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (1)].n);
							}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 274 "apl.y"
    {(yyval.n)=makeparam((yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n));
							}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 278 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),1);
							}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 280 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),1);
							}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 282 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),5);
							}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 284 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),3);
							}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 286 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),2);
							}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 288 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),4);
							}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 290 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),1);
							}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 292 "apl.y"
    {(yyval.n)=(yyvsp[(1) - (3)].n);
							}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 294 "apl.y"
    {(yyval.n)=syscheck((yyvsp[(1) - (4)].n),(yyvsp[(3) - (4)].n),1);
							}
    break;



/* Line 1806 of yacc.c  */
#line 2305 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 298 "apl.y"

int main (int argc, char **argv)
{	
	FILE *input_fp;
	char filename[200],ch;
	strcpy(filename,argv[1]);	
	if(argc < 2)
	{
		printf("Specify an input filename\n");
		return 0;
	}
	expandpath(filename);
	input_fp = fopen(filename,"r");
	if(!input_fp)
	{
		printf("Invalid input file\n");
		return 0;
	}
	yyin = input_fp;
	changeext(filename);
	fp=fopen(".temp","wb");
	out_linecount++; fprintf(fp,"START\n");
	out_linecount++; fprintf(fp,"MOV SP, 1536\n");
	out_linecount++; fprintf(fp,"MOV BP, 1536\n");
	yyparse();
	fclose(input_fp);
	input_fp = fopen(".temp","r");
	if(!input_fp)
	{
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	fp = fopen(filename,"wb");
	if(!fp)
	{
		fclose(input_fp);
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	while( ( ch = fgetc(input_fp) ) != EOF )
		fputc(ch, fp);
	fclose(input_fp);
	fclose(fp);	
	return 0;	
}
int yyerror (char *msg) 
{
	return fprintf (stderr, "%d: %s\n",linecount,msg);
}

