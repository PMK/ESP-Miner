#ifndef NETWORK_H
#define NETWORK_H

#include "esp_err.h"
#include "global_state.h"
#include "connect.h"

EventBits_t Network_connect(GlobalState *);
void Network_AP_off(void);
void Network_set_wifi_status(GlobalState * GLOBAL_STATE, wifi_status_t status, uint16_t retry_count);

#endif // NETWORK_H