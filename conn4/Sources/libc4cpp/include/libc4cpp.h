#include <inttypes.h>

// typedef uint8_t(*cb_t)();

#ifdef __cplusplus
extern "C" {
#endif

void* new_game( void* player1 , void* player2 );
void start_game( void* );
void delete_game( void* );
void game_show_move( void*, uint8_t );

void* new_auto_player( uint8_t colour, uint8_t maxply);
void* new_manual_player( uint8_t colour);
void auto_player_set_ply( uint8_t maxply );
uint8_t auto_player_get_ply();
uint8_t auto_player_get_move( void* player , void* board  );
void delete_player( void* );

void delete_board( void* );
void* new_board();
void board_show(void*);
int board_push_counter(void*,uint8_t,int);
int board_win( void* );
void board_switch_player( void * );
uint8_t board_get_player( void*  );

// void callback( cb_t fn );

#ifdef __cplusplus
}
#endif


