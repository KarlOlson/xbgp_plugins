//
// Created by thomas on 15/02/22.
//

#ifndef XBGP_PLUGINS_COMMON_METRICS_H
#define XBGP_PLUGINS_COMMON_METRICS_H

#define SHM_KEY_TIE_BREAKER_STATS 65

#define TIE_BREAKER_COMMUNITY 65042


enum TIE_BREAKER {
    TIE_TOTAL_ROUTES = 0,
    TIE_INITIAL_RTE,
    TIE_LOCAL_PREF,
    TIE_AS_PATH,
    TIE_MED,
    TIE_ORIGIN,
    TIE_PREFER_EXTERNAL,
    TIE_IGP_COST,
    TIE_ROUTER_ID,
    TIE_BREAKER,
    TIE_OTHER,
    TIE_DEFAULT,
    TIE_MAX
};


#endif //XBGP_PLUGINS_COMMON_METRICS_H