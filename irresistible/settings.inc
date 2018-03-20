/*
 * Irresistible Gaming (c) 2018
 * Developed by Lorenc_
 * Module: settings.inc
 * Purpose: defines general server settings
 */

/* ** MySQL Settings ** */
#if !defined DEBUG_MODE
	// PRODUCTION
	#define MYSQL_HOST				""
	#define MYSQL_USER				""
	#define MYSQL_PASS				""
	#define MYSQL_DATABASE			""
#else
	// LOCAL/DEVELOPMENT
	#define MYSQL_HOST				"{YOUR MYSQL HOST}"
	#define MYSQL_USER				"{YOUR MYSQL USER}"
	#define MYSQL_PASS				"{YOUR MYSQL PW}"
	#define MYSQL_DATABASE			"{YOUR MYSQL DATABASE}"
#endif
