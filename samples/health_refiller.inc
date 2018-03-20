/*
 * Irresistible Gaming (c) 2018
 * Developed by Lorenc
 * Module: features/health_refiller.inc
 * Purpose: allow players to create their own health refill pickup (untested)
 */

/* ** Includes ** */
#include                             < zcmd >
#include                             < YSI\y_hooks >
#include                             < irresistible\main >

/* ** Variables ** */
new health_pickup                     = -1;

/* ** Hooks ** */
hook OnGameModeInit( )
{
    health_pickup = CreatePickup( 1240, 2, 0.0, 0.0, 9.0 );
    return 1;
}

hook OnPlayerPickUpPickup( playerid, pickupid )
{
    if ( pickupid == health_pickup ) {
        SetPlayerHealth( playerid, 100.0 );
        SendServerMessage( playerid, "You are now healed to %0.2f health.", 100.0 ); // just to show you can add parameters to this
    }
    return 1;
}

/* ** Commands ** */
CMD:newpickup( playerid, params[ ] )
{
    new
        Float: X, Float: Y, Float: Z;

    if ( GetPlayerPos( playerid, X, Y, Z ) ) {
        DestroyPickup( health_pickup );
        CreatePickup( 1240, 2, X, Y, Z );
        SendServerMessage( playerid, "You have created a new pickup." );
    } else {
        SendError( playerid, "There has an error creating your pickup." );
    }
    return 1;
}
