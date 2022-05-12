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
    AND = 281,
    OR = 282,
    NOT = 283,
    TRUE = 284,
    FALSE = 285,
    RETURN = 286,
    SUB = 287,
    ADD = 288,
    MULT = 289,
    DIV = 290,
    MOD = 291,
    EQ = 292,
    NEQ = 293,
    LT = 294,
    GT = 295,
    LTE = 296,
    GTE = 297,
    SEMICOLON = 298,
    COLON = 299,
    COMMA = 300,
    L_PAREN = 301,
    R_PAREN = 302,
    L_SQUARE_BRACKET = 303,
    R_SQUARE_BRACKET = 304,
    ASSIGN = 305,
    NUMBER = 306,
    IDENT = 307
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

#line 176 "y.tab.c" /* yacc.c:355  */
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

#line 207 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    36,    39,    43,    46,    51,    55,    59,
      62,    65,    69,    73,    76,    79,    82,    86,    89,    93,
      96,    99,   102,   105,   108,   111,   114,   118,   122,   125,
     129,   133,   137,   141,   144,   148,   152,   156,   160,   164,
     168,   171,   175,   179,   182,   186,   189,   192,   195,   199,
     203,   206,   209,   212,   215,   218,   221,   225,   229,   232,
     236,   239,   243,   246,   249,   253,   256,   259,   262,   265,
     269,   273,   276,   279,   283,   286,   289
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
  "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR",
  "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "NUMBER", "IDENT", "$accept", "program", "functions", "functions_spec",
  "function", "declarations", "declarations_spec", "statements",
  "statementsEnding", "declaration", "identifiers", "statement", "svar",
  "sif", "swhile", "sdo", "sread", "vars", "swrite", "scontinue",
  "sreturn", "bool_expr", "bool_exprs", "relation_and_expr",
  "relation_and_exprs", "relation_expr", "relation_expr_ending", "nots",
  "comp", "expression", "expression_operators", "multiplicative_expr",
  "multiplicative_operators", "term", "subs", "expressions", "var", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      45,   -61,   -34,    16,   -61,    19,   -17,   -61,   -61,   -61,
      40,    -2,     7,    75,    38,    39,    -2,    76,    -2,    44,
     -61,    -2,   -61,   -61,   -61,    36,    41,    78,    35,    -2,
      80,    42,    43,    18,    79,   -61,    61,    61,    72,   -61,
      47,    47,   -24,    46,    86,    53,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,    50,    87,   -61,    88,    74,    81,
     -23,    83,    18,   -61,    57,   -61,   -61,    59,   -61,   -20,
      30,   -31,   -24,   -61,    18,   -24,   -61,    18,    61,   -61,
      61,   -61,   -61,   -61,    61,   -61,    21,    18,    84,    47,
     -22,   -24,   -24,   -61,   -24,   -24,   -24,   -61,   -24,   -61,
     -61,    60,   -61,   -61,   -61,    23,    74,    81,    63,   -61,
     -61,   -61,   -61,   -61,   -61,   -24,    89,    93,   -61,    68,
      67,   -20,   -20,    30,    30,    30,    69,   -61,   -61,    18,
     -61,   -61,   -61,   -61,   -61,    61,   -22,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,    92,   -61,   -61,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     5,     0,     1,     6,     4,
       0,     9,    18,     0,     0,     0,     0,     0,     9,     0,
      17,     9,    10,     8,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    50,    50,     0,    36,
       0,     0,    71,    75,     0,     0,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    49,     0,    40,    43,
      71,     0,     0,    32,    33,    35,    70,     0,    37,    60,
      65,     0,    71,     7,    13,    71,    15,     0,    50,    38,
      50,    41,    46,    47,    50,    44,     0,     0,     0,     0,
      71,    71,    71,    57,    71,    71,    71,    61,    71,    67,
      66,     0,    12,    11,    27,     0,    40,    43,     0,    51,
      52,    53,    54,    55,    56,    71,     0,     0,    34,    73,
       0,    60,    60,    65,    65,    65,     0,    76,    28,     0,
      39,    42,    48,    45,    30,    50,    71,    69,    59,    58,
      64,    63,    62,    68,     0,    31,    72,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   110,   -61,   -61,    15,   -61,   -60,   -61,   -61,
      -5,   -61,   -61,   -61,   -61,   -61,   -61,   -38,   -61,   -61,
     -61,   -37,    11,    48,    12,    49,   -61,   -61,   -61,   -41,
     -54,   -13,   -52,   -19,   -61,   -18,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     9,     5,    13,    23,    44,   103,    14,
      15,    45,    46,    47,    48,    49,    50,    63,    51,    52,
      53,    57,    79,    58,    81,    59,    85,    60,   115,   119,
      93,    69,    97,    70,    71,   120,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    68,    88,    65,    64,    64,    82,    83,    66,    66,
      66,    20,    91,    92,   102,    98,     7,   105,     6,    86,
      99,    43,     2,    84,    32,   -74,    10,   116,    67,    67,
      67,   101,    36,    22,   104,   100,    27,    37,    38,   128,
     129,    39,    40,    41,    11,    -5,     1,   108,     2,    42,
      12,   118,    16,    64,    24,    25,    26,   126,   109,   110,
     111,   112,   113,   114,    94,    95,    96,   138,   139,   144,
      43,   140,   141,   142,   133,   123,   124,   125,   121,   122,
      17,    18,    21,    19,    28,    30,    31,    29,    33,    56,
      35,    34,    55,    62,    72,    73,    74,    76,   145,    43,
      75,    78,    89,    77,    87,    90,   117,    80,   147,   127,
     132,   134,   135,   136,   137,     8,   143,   130,   146,   131,
       0,     0,     0,     0,     0,     0,   106,     0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      37,    42,    62,    41,    40,    41,    29,    30,    32,    32,
      32,    16,    32,    33,    74,    46,     0,    77,    52,    60,
      51,    52,     3,    46,    29,    47,    43,    87,    52,    52,
      52,    72,    14,    18,    75,    71,    21,    19,    20,    16,
      17,    23,    24,    25,     4,     0,     1,    84,     3,    31,
      52,    89,    45,    89,    10,    11,    12,    98,    37,    38,
      39,    40,    41,    42,    34,    35,    36,   121,   122,   129,
      52,   123,   124,   125,   115,    94,    95,    96,    91,    92,
       5,    43,     6,    44,    48,     7,    51,    46,     8,    28,
      47,    49,    13,    21,    48,     9,    43,    10,   135,    52,
      50,    27,    45,    15,    21,    46,    22,    26,    16,    49,
      47,    22,    19,    45,    47,     5,    47,   106,   136,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    54,    55,    57,    52,     0,    55,    56,
      43,     4,    52,    58,    62,    63,    45,     5,    43,    44,
      63,     6,    58,    59,    10,    11,    12,    58,    48,    46,
       7,    51,    63,     8,    49,    47,    14,    19,    20,    23,
      24,    25,    31,    52,    60,    64,    65,    66,    67,    68,
      69,    71,    72,    73,    89,    13,    28,    74,    76,    78,
      80,    74,    21,    70,    89,    70,    32,    52,    82,    84,
      86,    87,    48,     9,    43,    50,    10,    15,    27,    75,
      26,    77,    29,    30,    46,    79,    82,    21,    60,    45,
      46,    32,    33,    83,    34,    35,    36,    85,    46,    51,
      89,    82,    60,    61,    82,    60,    76,    78,    74,    37,
      38,    39,    40,    41,    42,    81,    60,    22,    70,    82,
      88,    84,    84,    86,    86,    86,    82,    49,    16,    17,
      75,    77,    47,    82,    22,    19,    45,    47,    83,    83,
      85,    85,    85,    47,    60,    74,    88,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    57,    58,    58,
      59,    60,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    66,    66,
      67,    68,    69,    70,    70,    71,    72,    73,    74,    75,
      75,    76,    77,    77,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    82,    83,    83,
      83,    84,    85,    85,    85,    85,    86,    86,    86,    86,
      87,    87,    88,    88,    88,    89,    89
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
       0,     2,     3,     3,     3,     0,     2,     2,     4,     4,
       1,     0,     3,     1,     0,     1,     4
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
#line 34 "miniL.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "miniL.y" /* yacc.c:1646  */
    {yyerrok; yyclearin;}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 40 "miniL.y" /* yacc.c:1646  */
    {printf("functions->function functions_spec\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 43 "miniL.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "miniL.y" /* yacc.c:1646  */
    {printf("functions_spec->functions\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "miniL.y" /* yacc.c:1646  */
    {printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "miniL.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations_spec\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "miniL.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "miniL.y" /* yacc.c:1646  */
    {printf("declarations_spec->declarations\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "miniL.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON statementsEnding\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "miniL.y" /* yacc.c:1646  */
    {printf("statementsEnding->statements\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "miniL.y" /* yacc.c:1646  */
    {printf("statementsEnding->epsilon\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 77 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON INTEGER\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 80 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "miniL.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ENUM L_PAREN identifiers R_PAREN\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "miniL.y" /* yacc.c:1646  */
    {printf("identifiers->IDENT COMMA identifiers\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "miniL.y" /* yacc.c:1646  */
    {printf("identifiers->IDENT\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 94 "miniL.y" /* yacc.c:1646  */
    {printf("statement->svar\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sif\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "miniL.y" /* yacc.c:1646  */
    {printf("statement->swhile\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sdo\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 106 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sread\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "miniL.y" /* yacc.c:1646  */
    {printf("statement->swrite\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "miniL.y" /* yacc.c:1646  */
    {printf("statement->scontinue\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "miniL.y" /* yacc.c:1646  */
    {printf("statement->sreturn\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 119 "miniL.y" /* yacc.c:1646  */
    {printf("svar->var ASSIGN expression\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 123 "miniL.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ENDIF\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "miniL.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "miniL.y" /* yacc.c:1646  */
    {printf("swhile->WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 134 "miniL.y" /* yacc.c:1646  */
    {printf("sdo->DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 138 "miniL.y" /* yacc.c:1646  */
    {printf("sread->READ vars\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "miniL.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "miniL.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "miniL.y" /* yacc.c:1646  */
    {printf("swrite->WRITE vars\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "miniL.y" /* yacc.c:1646  */
    {printf("scontinue->CONTINUE\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 157 "miniL.y" /* yacc.c:1646  */
    {printf("sreturn->RETURN expression\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 161 "miniL.y" /* yacc.c:1646  */
    {printf("bool_expr->relation_and_expr bool_exprs\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "miniL.y" /* yacc.c:1646  */
    {printf("bool_exprs->OR relation_and_expr bool_exprs\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 168 "miniL.y" /* yacc.c:1646  */
    {printf("bool_exprs->epsilon\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_expr->relation_expr relation_and_exprs\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 176 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_exprs->AND relation_expr relation_and_exprs\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_exprs->epsilon\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 183 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr->nots relation_expr_ending\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 187 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->expression comp expression\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->TRUE\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 193 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->FALSE\n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 196 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr_ending->L_PAREN bool_expr R_PAREN\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 200 "miniL.y" /* yacc.c:1646  */
    {printf("nots->NOT\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 203 "miniL.y" /* yacc.c:1646  */
    {printf("nots->epsilon\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 207 "miniL.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 210 "miniL.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "miniL.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 216 "miniL.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 219 "miniL.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 222 "miniL.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 226 "miniL.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expr expression_operators\n");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 230 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->ADD multiplicative_expr expression_operators\n");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 233 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->SUB multiplicative_expr expression_operators\n");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 236 "miniL.y" /* yacc.c:1646  */
    {printf("expression_operators->epsilon\n");}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 240 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_expr->term multiplicative_operators\n");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 244 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->MOD term multiplicative_operators\n");}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 247 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->DIV term multiplicative_operators\n");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 250 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->MULT term multiplicative_operators\n");}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 253 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_operators->epsilon\n");}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 257 "miniL.y" /* yacc.c:1646  */
    {printf("term->subs var\n");}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 260 "miniL.y" /* yacc.c:1646  */
    {printf("term->subs NUMBER\n");}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 263 "miniL.y" /* yacc.c:1646  */
    {printf("term->subs L_PAREN expression R_PAREN\n");}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 266 "miniL.y" /* yacc.c:1646  */
    {printf("term->IDENT L_PAREN expressions R_PAREN\n");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "miniL.y" /* yacc.c:1646  */
    {printf("subs->SUB\n");}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 273 "miniL.y" /* yacc.c:1646  */
    {printf("subs->epsilon\n");}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->expression COMMA expressions\n");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 280 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "miniL.y" /* yacc.c:1646  */
    {printf("expressions->epsilon\n");}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 287 "miniL.y" /* yacc.c:1646  */
    {printf("var->IDENT\n");}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 290 "miniL.y" /* yacc.c:1646  */
    {printf("var->IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1931 "y.tab.c" /* yacc.c:1646  */
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
#line 293 "miniL.y" /* yacc.c:1906  */
 

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