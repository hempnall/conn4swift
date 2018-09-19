#include <inttypes.h>

typedef void(*cb_t)();

#ifdef __cplusplus
extern "C" {
#endif

void* new_game( void* player1 , void* player2 );
void start_game( void* );
void delete_game( void* );

void* new_auto_player( uint8_t colour, uint8_t maxply);
void* new_manual_player( uint8_t colour);
void auto_player_set_ply( uint8_t maxply );
uint8_t auto_player_get_ply();
void delete_player( void* );

void callback( cb_t fn );

#ifdef __cplusplus
}
#endif


