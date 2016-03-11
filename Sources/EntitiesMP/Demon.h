/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Demon_INCLUDED
#define _EntitiesMP_Demon_INCLUDED 1
#include <EntitiesMP/EnemyBase.h>
#include <EntitiesMP/BasicEffects.h>
extern "C" DECL_DLL CDLLEntityClass CDemon_DLLClass;
class CDemon : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  INDEX m_iCounter;
  CEntityPointer m_penFireFX;
   
#line 56 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
BOOL HandleEvent(const CEntityEvent & ee);
  
#line 74 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
virtual const CTFileName & GetComputerMessageName(void)const;
   
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void Precache(void);
   
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void * GetEntityInfo(void);
   
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
BOOL ForcesCannonballToExplode(void);
   
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
INDEX AnimForDamage(FLOAT fDamage);
   
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
INDEX AnimForDeath(void);
   
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
FLOAT WaitForDust(FLOAT3D & vStretch);
   
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void DeathNotify(void);
   
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void StandingAnim(void);
   
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void WalkingAnim(void);
   
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void RunningAnim(void);
   
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void RotatingAnim(void);
   
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void IdleSound(void);
   
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void SightSound(void);
   
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void WoundSound(void);
   
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void DeathSound(void);
   
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
void EnemyPostInit(void);
#define  STATE_CDemon_Fire 0x01500000
  BOOL 
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
Fire(const CEntityEvent &__eeInput);
  BOOL H0x01500001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01500002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01500003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01500004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01500005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01500006_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01500007_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01500008_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x01500009_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x0150000a_Fire_10(const CEntityEvent &__eeInput);
#define  STATE_CDemon_Hit 0x0150000b
  BOOL 
#line 265 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
Hit(const CEntityEvent &__eeInput);
  BOOL H0x0150000c_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x0150000d_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x0150000e_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x0150000f_Hit_04(const CEntityEvent &__eeInput);
  BOOL H0x01500010_Hit_05(const CEntityEvent &__eeInput);
  BOOL H0x01500011_Hit_06(const CEntityEvent &__eeInput);
#define  STATE_CDemon_Main 1
  BOOL 
#line 291 "D:/SE1_GPL/Sources/EntitiesMP/Demon.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Demon_INCLUDED