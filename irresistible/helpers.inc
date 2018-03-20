/*
 * Irresistible Gaming (c) 2018
 * Developed by Lorenc_
 * Module: helpers.inc
 * Purpose: functions that help your scripting life
 */

/* ** Includes ** */
#include                                    < YSI\y_va >

/* ** Macros ** */
#define function%1(%2)                      forward%1(%2); public%1(%2)
#define RandomEx(%0,%1)                     (random((%1) - (%0)) + (%0))
#define HOLDING(%0)                         ((newkeys & (%0)) == (%0))
#define PRESSED(%0)                         (((newkeys & (%0)) == (%0)) && ((oldkeys & (%0)) != (%0)))
#define SendUsage(%0,%1)                    (SendClientMessageFormatted(%0,-1,"{FFAF00}[USAGE]{FFFFFF} " # %1))
#define SendError(%0,%1) 			        (SendClientMessageFormatted(%0,-1,"{F81414}[ERROR]{FFFFFF} " # %1))
#define SendServerMessage(%0,%1)            (SendClientMessageFormatted(%0,-1,"{C0C0C0}[SERVER]{FFFFFF} " # %1))
#define sprintf(%1)                         (format(szLargeString, sizeof(szLargeString), %1), szLargeString) // thanks Slice
#define strmatch(%1,%2)                     (!strcmp(%1,%2,true))
#define Beep(%1)                            PlayerPlaySound(%1, 1137, 0.0, 0.0, 0.0)
#define erase(%0)                           (%0[0]='\0')

/* ** Variables ** */
stock szSmallString 						[ 32 ];
stock szNormalString 						[ 144 ];
stock szBigString 							[ 256 ];
stock szLargeString							[ 1024 ];
stock szHugeString							[ 2048 ];
stock tmpVariable;

/* ** Functions ** */
stock SendClientMessageFormatted( playerid, colour, format[ ], va_args<> )
{
    static
		out[ 144 ];

    va_format( out, sizeof( out ), format, va_start<3> );

	if ( !IsPlayerConnected( playerid ) ) {
		SendClientMessageToAll( colour, out );
		return 0;
	}
 	return SendClientMessage( playerid, colour, out );
}
