#include "blockchain.h"

/**
 * block_destroy - deletes an existing block
 *
 * @block: Block to delete
 */
void block_destroy(block_t *block)
{
	if (block)
		free(block);
}
