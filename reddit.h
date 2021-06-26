#ifndef REDDIT_H
#define REDDIT_H

#include <stdbool.h>
#include "json-actor-boxed.h"
#include "types.h"
#include "logconf.h"

/// @see specs/discord for generated code specs 
#include "specs-code/discord/all_opaque_struct.h"
#include "specs-code/reddit/all_enums.h"
#include "specs-code/reddit/all_structs.h"
#include "specs-code/reddit/all_functions.h"

struct reddit* reddit_init(const char username[], const char password[], const char client_id[], const char client_secret[]);
struct reddit* reddit_config_init(const char config_file[]);
void reddit_cleanup(struct reddit *client);

ORCAcode reddit_access_token(struct reddit *client, struct reddit_access_token_params *params, struct sized_buffer *p_resp_body);

ORCAcode reddit_comment(struct reddit *client, struct reddit_comment_params *params, struct sized_buffer *p_resp_body);
ORCAcode reddit_search(struct reddit *client, struct reddit_search_params *params, char subreddit[], struct sized_buffer *p_resp_body);

#endif // REDDIT_H
