// Fill out your copyright notice in the Description page of Project Settings.


#include "ASGameplayTag.h"

namespace ASGameplayTags
{
	// Input Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Dash, "InputTag.Dash");

	// Player Tags
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitPause, "Player.Ability.HitPause");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Dash, "Player.Ability.Dash");

	// Player Status
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Dash, "Player.Status.Dash");

	// Player Anim Notify
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Axe, "Player.Event.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Axe, "Player.Event.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_HitPause, "Player.Event.HitPause");

	// Enemy Tags
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Melee, "Enemy.Ability.Melee");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Ranged, "Enemy.Ability.Ranged");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_HitPause, "Enemy.Ability.HitPause");

	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_Strafing, "Enemy.Status.Strafing");

	// Enemy Anim Notify
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Event_HitPause, "Enemy.Event.HitPause");

	// Shared Tags
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_HitReact, "Shared.Ability.HitReact");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Death, "Shared.Ability.Death");

	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_MeleeHit, "Shared.Event.MeleeHit");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_HitReact, "Shared.Event.HitReact");

	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_WeaponAttackPower, "Shared.SetByCaller.WeaponAttackPower");
	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseDamageFactor, "Shared.SetByCaller.BaseDamageFactor");
	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_RestoreValue, "Shared.SetByCaller.RestoreValue");
	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseRestoreFactor, "Shared.SetByCaller.BaseRestoreFactor");

	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_Death, "Shared.Status.Death");
}