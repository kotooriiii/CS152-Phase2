/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "miniL.y" /* yacc.c:339  */

#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos; 
void yyerror(const char * errorMessage)
{
	printf("Error: On line %d, column %d: %s\n", currLine, currPos, errorMessage);
}

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    ENUM = 267,
    OF = 268,
    IF = 269,
    THEN = 270,
    ENDIF = 271,
    ELSE = 272,
    FOR = 273,
    WHILE = 274,
    DO = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    RETURN = 283,
    SEMICOLON = 284,
    COLON = 285,
    COMMA = 286,
    ASSIGN = 287,
    OR = 288,
    AND = 289,
    NOT = 290,
    NEQ = 291,
    EQ = 292,
    GTE = 293,
    GT = 294,
    LTE = 295,
    LT = 296,
    ADD = 297,
    SUB = 298,
    MULT = 299,
    DIV = 300,
    MOD = 301,
    UMINUS = 302,
    L_SQUARE_BRACKET = 303,
    R_SQUARE_BRACKET = 304,
    L_PAREN = 305,
    R_PAREN = 306,
    IDENT = 307,
    NUMBER = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "miniL.y" /* yacc.c:355  */

  /* put your types here */
  char* identifierVal;
  int numberVal;

#line 177 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 208 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    60,    63,    67,    70,    74,    78,    82,
      85,    88,    92,    96,    99,   102,   105,   109,   112,   116,
     119,   122,   125,   128,   131,   134,   137,   141,   145,   148,
     152,   156,   160,   164,   167,   171,   175,   179,   183,   187,
     191,   194,   198,   202,   205,   209,   212,   215,   218,   222,
     226,   229,   232,   235,   238,   241,   244,   248,   252,   255,
     259,   262,   266,   269,   272,   276,   279,   282,   285,   289,
     293,   297,   300,   303,   307,   310,   314,   317,   321,   325,
     328,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "ENUM", "OF", "IF", "THEN", "ENDIF", "ELSE", "FOR", "WHILE",
  "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE",
  "FALSE", "RETURN", "SEMICOLON", "COLON", "COMMA", "ASSIGN", "OR", "AND",
  "NOT", "NEQ", "EQ", "GTE", "GT", "LTE", "LT", "ADD", "SUB", "MULT",
  "DIV", "MOD", "UMINUS", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "L_PAREN", "R_PAREN", "IDENT", "NUMBER", "$accept", "program",
  "functions", "functions_spec", "function", "declarations",
  "declarations_spec", "statements", "statementsEnding", "declaration",
  "identifiers", "statement", "svar", "sif", "swhile", "sdo", "sread",
  "vars", "swrite", "scontinue", "sreturn", "bool_expr", "bool_exprs",
  "relation_and_expr", "relation_and_exprs", "relation_expr",
  "relation_expr_ending", "nots", "comp", "expression",
  "expression_operators", "multiplicative_expr",
  "multiplicative_operators", "term", "term_spec", "subs", "expressions",
  "var", "var_or_bottom", "var_spec", "ident", "number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      25,   -60,   -29,    29,   -60,    42,   -60,     3,   -60,   -60,
     -60,    49,   -29,    53,    54,    48,    56,    78,   -29,    55,
     -29,   -29,   -60,   -60,   -60,    37,    39,   -60,    79,    38,
     -29,    82,   -60,    43,    44,    36,    80,   -60,    59,    59,
      75,   -60,   -29,   -29,    57,    88,    69,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,    70,    58,    91,   -60,    89,
      72,    73,   -19,    87,    36,   -60,    81,   -60,   -60,   -60,
     -28,    24,   -60,    -6,   -60,    36,    57,    57,   -60,   -60,
      36,    59,   -60,    59,   -60,   -60,   -60,    59,   -60,     2,
      36,    92,   -29,    57,    57,   -60,    57,    57,    57,   -60,
      57,     1,   -60,   -60,   -60,   -60,    60,    19,    72,    73,
      52,   -60,   -60,   -60,   -60,   -60,   -60,    57,    93,    94,
     -60,   -28,   -28,    24,    24,    24,    65,   -34,   -60,   -60,
     -60,   -60,    36,   -60,   -60,   -60,   -60,   -60,    59,   -60,
     -60,   -60,   -60,   -60,   -60,    86,    67,    95,   -60,   -34,
     -60,   -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     5,    80,     0,     1,     6,
       4,     0,     9,     0,     0,     0,    18,     0,     9,     0,
       0,     9,    10,     8,    14,     0,     0,    17,     0,     0,
       0,     0,    81,     0,     0,     0,     0,    16,    50,    50,
       0,    36,     0,     0,    71,     0,     0,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    79,     0,    49,     0,
      40,    43,    71,     0,     0,    32,    33,    35,    70,    37,
      60,    65,    66,     0,     7,    13,    71,    71,    75,    15,
       0,    50,    38,    50,    41,    46,    47,    50,    44,     0,
       0,     0,     0,    71,    71,    57,    71,    71,    71,    61,
      71,    79,    67,    12,    11,    27,     0,     0,    40,    43,
       0,    52,    51,    56,    54,    55,    53,    71,     0,     0,
      34,    60,    60,    65,    65,    65,     0,    71,    69,    76,
      78,    28,     0,    39,    42,    48,    45,    30,    50,    58,
      59,    64,    63,    62,    68,    73,     0,     0,    31,    71,
      77,    29,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   105,   -60,   -60,    -8,   -60,   -53,   -60,   -60,
     -14,   -60,   -60,   -60,   -60,   -60,   -60,   -40,   -60,   -60,
     -60,   -39,    11,    40,    13,    41,   -60,   -60,   -60,   -43,
     -59,   -22,   -48,   -16,   -60,   -60,   -26,   -38,   -60,    26,
       0,    47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    10,     5,    13,    23,    45,   104,    14,
      15,    46,    47,    48,    49,    50,    51,    65,    52,    53,
      54,    59,    82,    60,    84,    61,    88,    62,   117,   145,
      95,    70,    99,    71,    72,    73,   146,    55,   128,    78,
      56,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    69,     7,    67,    66,    66,    27,    85,    86,    68,
      22,    91,    16,    28,    93,    94,    34,   -74,    16,    89,
      16,    16,   103,     6,    68,    -5,     1,   107,     2,     8,
      16,    87,    11,   105,   106,   131,   132,   118,   111,   112,
     113,   114,   115,   116,   100,     2,     6,    32,   110,    77,
      38,   127,   120,    12,    66,    39,    40,   126,    17,    41,
      42,    43,   139,   140,    44,    24,    25,    26,    96,    97,
      98,   121,   122,   101,   136,   141,   142,   143,    19,   147,
     123,   124,   125,    18,    21,    29,    31,    20,     6,    30,
      35,    32,    36,    57,    58,    37,    64,    74,    75,   148,
      68,    79,    76,   135,    80,    81,    77,    83,    90,   130,
       9,   151,    92,   138,   119,   137,   144,   149,   150,   133,
     102,   108,   134,   152,   109,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
      39,    44,     2,    43,    42,    43,    20,    26,    27,    43,
      18,    64,    12,    21,    42,    43,    30,    51,    18,    62,
      20,    21,    75,    52,    43,     0,     1,    80,     3,     0,
      30,    50,    29,    76,    77,    16,    17,    90,    36,    37,
      38,    39,    40,    41,    50,     3,    52,    53,    87,    48,
      14,    50,    92,     4,    92,    19,    20,   100,     5,    23,
      24,    25,   121,   122,    28,    10,    11,    12,    44,    45,
      46,    93,    94,    73,   117,   123,   124,   125,    30,   132,
      96,    97,    98,    29,     6,    48,     7,    31,    52,    50,
       8,    53,    49,    13,    35,    51,    21,     9,    29,   138,
      43,    10,    32,    51,    15,    33,    48,    34,    21,    49,
       5,    16,    31,    19,    22,    22,    51,    31,    51,   108,
      73,    81,   109,   149,    83,    -1,    -1,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    55,    56,    58,    52,    94,     0,    56,
      57,    29,     4,    59,    63,    64,    94,     5,    29,    30,
      31,     6,    59,    60,    10,    11,    12,    64,    59,    48,
      50,     7,    53,    95,    64,     8,    49,    51,    14,    19,
      20,    23,    24,    25,    28,    61,    65,    66,    67,    68,
      69,    70,    72,    73,    74,    91,    94,    13,    35,    75,
      77,    79,    81,    75,    21,    71,    91,    71,    43,    83,
      85,    87,    88,    89,     9,    29,    32,    48,    93,    10,
      15,    33,    76,    34,    78,    26,    27,    50,    80,    83,
      21,    61,    31,    42,    43,    84,    44,    45,    46,    86,
      50,    94,    95,    61,    62,    83,    83,    61,    77,    79,
      75,    36,    37,    38,    39,    40,    41,    82,    61,    22,
      71,    85,    85,    87,    87,    87,    83,    50,    92,    93,
      49,    16,    17,    76,    78,    51,    83,    22,    19,    84,
      84,    86,    86,    86,    51,    83,    90,    61,    75,    31,
      51,    16,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    67,    67,
      68,    69,    70,    71,    71,    72,    73,    74,    75,    76,
      76,    77,    78,    78,    79,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    84,    84,
      84,    85,    86,    86,    86,    86,    87,    87,    87,    88,
      89,    89,    90,    90,    90,    91,    92,    92,    93,    93,
      94,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     1,    12,     3,     0,
       1,     3,     1,     0,     3,     8,     6,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     7,
       5,     6,     2,     1,     3,     2,     1,     2,     2,     3,
       0,     2,     3,     0,     2,     3,     1,     1,     3,     1,
       0,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       0,     2,     3,     3,     3,     0,     1,     2,     4,     3,
       1,     0,     3,     1,     0,     2,     1,     3,     3,     0,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 58 "miniL.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "miniL.y" /* yacc.c:1646  */
    {yyerrok; yyclearin;}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "miniL.y" /* yacc.c:1646  */
    {printf("functions->function functions_spec\n");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "miniL.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 71 "miniL.y" /* yacc.c:1646  */
    {printf("functions_spec->functions\n");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "miniL.y" /* yacc.c:1646  */
    {printf("function->FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "miniL.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations_spec\n");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "miniL.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "miniL.y" /* yacc.c:1646  */
    {printf("declarations_spec->declarations\n");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "miniL.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON statementsEnding\n");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "miniL.y" /* yacc.c:1646  */
    {printf("statementsEnding->statements\n");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "miniL.y" /* yacc.c:1646  */
    {printf("statementsEnding->epsilon\n");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON INTEGER\n");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER\n");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ENUM L_PAREN identifiers R_PAREN\n");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "miniL.y" /* yacc.c:1646  */
    {printf("identifiers->ident COMMA identifiers\n");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 113 "miniL.y" /* yacc.c:1646  */
    {printf("identifiers->ident\n");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 117 "miniL.y" /* yacc.c:1646  */
    {printf("statement->svar\n");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sif\n");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "miniL.y" /* yacc.c:1646  */
    {printf("statement->swhile\n");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 126 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sdo\n");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 129 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sread\n");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 132 "miniL.y" /* yacc.c:1646  */
    {printf("statement->swrite\n");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 135 "miniL.y" /* yacc.c:1646  */
    {printf("statement->scontinue\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 138 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sreturn\n");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "miniL.y" /* yacc.c:1646  */
    {printf("svar->var ASSIGN expression\n");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "miniL.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ENDIF\n");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "miniL.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "miniL.y" /* yacc.c:1646  */
    {printf("swhile->WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 157 "miniL.y" /* yacc.c:1646  */
    {printf("sdo->DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 161 "miniL.y" /* yacc.c:1646  */
    {printf("sread->READ vars\n");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "miniL.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 168 "miniL.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "miniL.y" /* yacc.c:1646  */
    {printf("swrite->WRITE vars\n");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 176 "miniL.y" /* yacc.c:1646  */
    {printf("scontinue->CONTINUE\n");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "miniL.y" /* yacc.c:1646  */
    {printf("sreturn->RETURN expression\n");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 184 "miniL.y" /* yacc.c:1646  */
    {printf("bool_expr->relation_and_expr bool_exprs\n");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 188 "miniL.y" /* yacc.c:1646  */
    {printf("bool_exprs->OR relation_and_expr bool_exprs\n");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 191 "miniL.y" /* yacc.c:1646  */
    {printf("bool_exprs->epsilon\n");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_expr->relation_expr relation_and_exprs\n");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_exprs->AND relation_expr relation_and_exprs\n");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 202 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_exprs->epsilon\n");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 206 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr->nots relation_expr_ending\n");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 210 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->expression comp expression\n");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 213 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->TRUE\n");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 216 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->FALSE\n");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 219 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->L_PAREN bool_expr R_PAREN\n");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 223 "miniL.y" /* yacc.c:1646  */
    {printf("nots->NOT\n");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 226 "miniL.y" /* yacc.c:1646  */
    {printf("nots->epsilon\n");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 230 "miniL.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "miniL.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 236 "miniL.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 239 "miniL.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 242 "miniL.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 245 "miniL.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 249 "miniL.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expr expression_operators\n");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 253 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->ADD multiplicative_expr expression_operators\n");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 256 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->SUB multiplicative_expr expression_operators\n");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 259 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->epsilon\n");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 263 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_expr->term multiplicative_operators\n");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 267 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->MOD term multiplicative_operators\n");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 270 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->DIV term multiplicative_operators\n");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 273 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->MULT term multiplicative_operators\n");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 276 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->epsilon\n");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 280 "miniL.y" /* yacc.c:1646  */
    {printf("term->term_spec\n");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 283 "miniL.y" /* yacc.c:1646  */
    {printf("term->subs number\n");}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 286 "miniL.y" /* yacc.c:1646  */
    {printf("term->subs L_PAREN expression R_PAREN\n");}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 290 "miniL.y" /* yacc.c:1646  */
    {printf("term_spec->subs ident var_or_bottom\n");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 294 "miniL.y" /* yacc.c:1646  */
    {printf("subs->SUB\n");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 297 "miniL.y" /* yacc.c:1646  */
    {printf("subs->epsilon\n");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 301 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->expression COMMA expressions\n");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 304 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 307 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->epsilon\n");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 311 "miniL.y" /* yacc.c:1646  */
    {printf("var->ident var_spec\n");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 315 "miniL.y" /* yacc.c:1646  */
    {printf("var_or_bottom->var_spec\n");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 318 "miniL.y" /* yacc.c:1646  */
    {printf("var_or_bottom->L_PAREN expressions R_PAREN\n");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 322 "miniL.y" /* yacc.c:1646  */
    {printf("var_spec->L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 325 "miniL.y" /* yacc.c:1646  */
    {printf("var_spec->epsilon\n");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 329 "miniL.y" /* yacc.c:1646  */
    {printf("ident->IDENT %s\n", (yyvsp[0].identifierVal));}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 333 "miniL.y" /* yacc.c:1646  */
    {printf("number->NUMBER %d\n", (yyvsp[0].numberVal));}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1972 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 336 "miniL.y" /* yacc.c:1906  */
 

int main(int argc, char ** argv) 
{
	if (argc >= 2) 
  {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) 
    {
			yyin = stdin;
		}
	}
	else 
  {
		yyin = stdin;
	}
	yyparse();
	return 1;
}
