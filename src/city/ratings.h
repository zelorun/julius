#ifndef CITY_RATINGS_H
#define CITY_RATINGS_H

#include "building/type.h"

int city_rating_culture();
int city_rating_prosperity();
int city_rating_peace();
int city_rating_favor();

void city_ratings_reduce_prosperity_after_bailout();

void city_ratings_peace_building_destroyed(building_type type);

void city_ratings_peace_record_criminal();

void city_ratings_peace_record_rioter();

void city_ratings_change_favor(int amount);

void city_ratings_reduce_favor_missed_request(int penalty);

void city_ratings_limit_favor(int max_favor);

void city_ratings_update_favor_explanation();

void city_ratings_update_explanations();

void city_ratings_update(int is_yearly_update);

#endif // CITY_RATINGS_H
