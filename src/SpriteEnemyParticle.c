#pragma bank=2
#include "SpriteEnemyParticle.h"
UINT8 bank_SPRITE_EPARTICLE = 2;

#include "../res/src/enemyexplosion.h"
#include "SpriteManager.h"

extern UINT8 enemy_particle_idx;
const UINT8 eparticle_anim[] = {5, 0, 1, 2, 3, 3};

void Start_SPRITE_EPARTICLE(struct Sprite* sprite) {
	InitSprite(sprite, FRAME_16x16, enemy_particle_idx >> 2);
	SetSpriteAnim(sprite, eparticle_anim, 33);
}

void Update_SPRITE_EPARTICLE() {
	if(sprite_manager_current_sprite->current_frame == 4) {
		SpriteManagerRemove(sprite_manager_current_index);
	}
}

void Destroy_SPRITE_EPARTICLE () {
}