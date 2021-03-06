#ifndef _SWAY_IPC_SERVER_H
#define _SWAY_IPC_SERVER_H
#include <sys/socket.h>
#include "sway/config.h"
#include "sway/tree/container.h"
#include "ipc.h"

struct sway_server;

void ipc_init(struct sway_server *server);

void ipc_terminate(void);

struct sockaddr_un *ipc_user_sockaddr(void);

void ipc_event_workspace(struct sway_container *old,
		struct sway_container *new, const char *change);
void ipc_event_window(struct sway_container *window, const char *change);
void ipc_event_barconfig_update(struct bar_config *bar);
void ipc_event_mode(const char *mode);

#endif
