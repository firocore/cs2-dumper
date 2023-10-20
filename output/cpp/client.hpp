#pragma once

#include <cstddef>

using namespace std;

namespace C_TriggerBuoyancy {

   constexpr ptrdiff_t m_BuoyancyHelper = 0xcc8;
   constexpr ptrdiff_t m_flFluidDensity = 0xce8;

}

namespace CFuncWater {

   constexpr ptrdiff_t m_BuoyancyHelper = 0xcc0;

}

namespace CCSPlayerController {

   constexpr ptrdiff_t m_pInGameMoneyServices = 0x6d0;
   constexpr ptrdiff_t m_pInventoryServices = 0x6d8;
   constexpr ptrdiff_t m_pActionTrackingServices = 0x6e0;
   constexpr ptrdiff_t m_pDamageServices = 0x6e8;
   constexpr ptrdiff_t m_iPing = 0x6f0;
   constexpr ptrdiff_t m_bHasCommunicationAbuseMute = 0x6f4;
   constexpr ptrdiff_t m_szCrosshairCodes = 0x6f8;
   constexpr ptrdiff_t m_iPendingTeamNum = 0x700;
   constexpr ptrdiff_t m_flForceTeamTime = 0x704;
   constexpr ptrdiff_t m_iCompTeammateColor = 0x708;
   constexpr ptrdiff_t m_bEverPlayedOnTeam = 0x70c;
   constexpr ptrdiff_t m_flPreviousForceJoinTeamTime = 0x710;
   constexpr ptrdiff_t m_szClan = 0x718;
   constexpr ptrdiff_t m_sSanitizedPlayerName = 0x720;
   constexpr ptrdiff_t m_iCoachingTeam = 0x728;
   constexpr ptrdiff_t m_nPlayerDominated = 0x730;
   constexpr ptrdiff_t m_nPlayerDominatingMe = 0x738;
   constexpr ptrdiff_t m_iCompetitiveRanking = 0x740;
   constexpr ptrdiff_t m_iCompetitiveWins = 0x744;
   constexpr ptrdiff_t m_iCompetitiveRankType = 0x748;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x74c;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x750;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x754;
   constexpr ptrdiff_t m_nEndMatchNextMapVote = 0x758;
   constexpr ptrdiff_t m_unActiveQuestId = 0x75c;
   constexpr ptrdiff_t m_nQuestProgressReason = 0x760;
   constexpr ptrdiff_t m_unPlayerTvControlFlags = 0x764;
   constexpr ptrdiff_t m_iDraftIndex = 0x790;
   constexpr ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x794;
   constexpr ptrdiff_t m_uiAbandonRecordedReason = 0x798;
   constexpr ptrdiff_t m_bEverFullyConnected = 0x79c;
   constexpr ptrdiff_t m_bAbandonAllowsSurrender = 0x79d;
   constexpr ptrdiff_t m_bAbandonOffersInstantSurrender = 0x79e;
   constexpr ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x79f;
   constexpr ptrdiff_t m_bScoreReported = 0x7a0;
   constexpr ptrdiff_t m_nDisconnectionTick = 0x7a4;
   constexpr ptrdiff_t m_bControllingBot = 0x7b0;
   constexpr ptrdiff_t m_bHasControlledBotThisRound = 0x7b1;
   constexpr ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7b2;
   constexpr ptrdiff_t m_nBotsControlledThisRound = 0x7b4;
   constexpr ptrdiff_t m_bCanControlObservedBot = 0x7b8;
   constexpr ptrdiff_t m_hPlayerPawn = 0x7bc;
   constexpr ptrdiff_t m_hObserverPawn = 0x7c0;
   constexpr ptrdiff_t m_bPawnIsAlive = 0x7c4;
   constexpr ptrdiff_t m_iPawnHealth = 0x7c8;
   constexpr ptrdiff_t m_iPawnArmor = 0x7cc;
   constexpr ptrdiff_t m_bPawnHasDefuser = 0x7d0;
   constexpr ptrdiff_t m_bPawnHasHelmet = 0x7d1;
   constexpr ptrdiff_t m_nPawnCharacterDefIndex = 0x7d2;
   constexpr ptrdiff_t m_iPawnLifetimeStart = 0x7d4;
   constexpr ptrdiff_t m_iPawnLifetimeEnd = 0x7d8;
   constexpr ptrdiff_t m_iPawnBotDifficulty = 0x7dc;
   constexpr ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x7e0;
   constexpr ptrdiff_t m_iScore = 0x7e4;
   constexpr ptrdiff_t m_vecKills = 0x7e8;
   constexpr ptrdiff_t m_iMVPs = 0x800;
   constexpr ptrdiff_t m_bIsPlayerNameDirty = 0x804;

}

namespace C_FootstepControl {

   constexpr ptrdiff_t m_source = 0xcc8;
   constexpr ptrdiff_t m_destination = 0xcd0;

}

namespace CCSWeaponBaseVData {

   constexpr ptrdiff_t m_WeaponType = 0x240;
   constexpr ptrdiff_t m_WeaponCategory = 0x244;
   constexpr ptrdiff_t m_szViewModel = 0x248;
   constexpr ptrdiff_t m_szPlayerModel = 0x328;
   constexpr ptrdiff_t m_szWorldDroppedModel = 0x408;
   constexpr ptrdiff_t m_szAimsightLensMaskModel = 0x4e8;
   constexpr ptrdiff_t m_szMagazineModel = 0x5c8;
   constexpr ptrdiff_t m_szHeatEffect = 0x6a8;
   constexpr ptrdiff_t m_szEjectBrassEffect = 0x788;
   constexpr ptrdiff_t m_szMuzzleFlashParticleAlt = 0x868;
   constexpr ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x948;
   constexpr ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xa28;
   constexpr ptrdiff_t m_szTracerParticle = 0xb08;
   constexpr ptrdiff_t m_GearSlot = 0xbe8;
   constexpr ptrdiff_t m_GearSlotPosition = 0xbec;
   constexpr ptrdiff_t m_DefaultLoadoutSlot = 0xbf0;
   constexpr ptrdiff_t m_sWrongTeamMsg = 0xbf8;
   constexpr ptrdiff_t m_nPrice = 0xc00;
   constexpr ptrdiff_t m_nKillAward = 0xc04;
   constexpr ptrdiff_t m_nPrimaryReserveAmmoMax = 0xc08;
   constexpr ptrdiff_t m_nSecondaryReserveAmmoMax = 0xc0c;
   constexpr ptrdiff_t m_bMeleeWeapon = 0xc10;
   constexpr ptrdiff_t m_bHasBurstMode = 0xc11;
   constexpr ptrdiff_t m_bIsRevolver = 0xc12;
   constexpr ptrdiff_t m_bCannotShootUnderwater = 0xc13;
   constexpr ptrdiff_t m_szName = 0xc18;
   constexpr ptrdiff_t m_szAnimExtension = 0xc20;
   constexpr ptrdiff_t m_eSilencerType = 0xc28;
   constexpr ptrdiff_t m_nCrosshairMinDistance = 0xc2c;
   constexpr ptrdiff_t m_nCrosshairDeltaDistance = 0xc30;
   constexpr ptrdiff_t m_flCycleTime = 0xc34;
   constexpr ptrdiff_t m_flMaxSpeed = 0xc3c;
   constexpr ptrdiff_t m_flSpread = 0xc44;
   constexpr ptrdiff_t m_flInaccuracyCrouch = 0xc4c;
   constexpr ptrdiff_t m_flInaccuracyStand = 0xc54;
   constexpr ptrdiff_t m_flInaccuracyJump = 0xc5c;
   constexpr ptrdiff_t m_flInaccuracyLand = 0xc64;
   constexpr ptrdiff_t m_flInaccuracyLadder = 0xc6c;
   constexpr ptrdiff_t m_flInaccuracyFire = 0xc74;
   constexpr ptrdiff_t m_flInaccuracyMove = 0xc7c;
   constexpr ptrdiff_t m_flRecoilAngle = 0xc84;
   constexpr ptrdiff_t m_flRecoilAngleVariance = 0xc8c;
   constexpr ptrdiff_t m_flRecoilMagnitude = 0xc94;
   constexpr ptrdiff_t m_flRecoilMagnitudeVariance = 0xc9c;
   constexpr ptrdiff_t m_nTracerFrequency = 0xca4;
   constexpr ptrdiff_t m_flInaccuracyJumpInitial = 0xcac;
   constexpr ptrdiff_t m_flInaccuracyJumpApex = 0xcb0;
   constexpr ptrdiff_t m_flInaccuracyReload = 0xcb4;
   constexpr ptrdiff_t m_nRecoilSeed = 0xcb8;
   constexpr ptrdiff_t m_nSpreadSeed = 0xcbc;
   constexpr ptrdiff_t m_flTimeToIdleAfterFire = 0xcc0;
   constexpr ptrdiff_t m_flIdleInterval = 0xcc4;
   constexpr ptrdiff_t m_flAttackMovespeedFactor = 0xcc8;
   constexpr ptrdiff_t m_flHeatPerShot = 0xccc;
   constexpr ptrdiff_t m_flInaccuracyPitchShift = 0xcd0;
   constexpr ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xcd4;
   constexpr ptrdiff_t m_flBotAudibleRange = 0xcd8;
   constexpr ptrdiff_t m_szUseRadioSubtitle = 0xce0;
   constexpr ptrdiff_t m_bUnzoomsAfterShot = 0xce8;
   constexpr ptrdiff_t m_bHideViewModelWhenZoomed = 0xce9;
   constexpr ptrdiff_t m_nZoomLevels = 0xcec;
   constexpr ptrdiff_t m_nZoomFOV1 = 0xcf0;
   constexpr ptrdiff_t m_nZoomFOV2 = 0xcf4;
   constexpr ptrdiff_t m_flZoomTime0 = 0xcf8;
   constexpr ptrdiff_t m_flZoomTime1 = 0xcfc;
   constexpr ptrdiff_t m_flZoomTime2 = 0xd00;
   constexpr ptrdiff_t m_flIronSightPullUpSpeed = 0xd04;
   constexpr ptrdiff_t m_flIronSightPutDownSpeed = 0xd08;
   constexpr ptrdiff_t m_flIronSightFOV = 0xd0c;
   constexpr ptrdiff_t m_flIronSightPivotForward = 0xd10;
   constexpr ptrdiff_t m_flIronSightLooseness = 0xd14;
   constexpr ptrdiff_t m_angPivotAngle = 0xd18;
   constexpr ptrdiff_t m_vecIronSightEyePos = 0xd24;
   constexpr ptrdiff_t m_nDamage = 0xd30;
   constexpr ptrdiff_t m_flHeadshotMultiplier = 0xd34;
   constexpr ptrdiff_t m_flArmorRatio = 0xd38;
   constexpr ptrdiff_t m_flPenetration = 0xd3c;
   constexpr ptrdiff_t m_flRange = 0xd40;
   constexpr ptrdiff_t m_flRangeModifier = 0xd44;
   constexpr ptrdiff_t m_flFlinchVelocityModifierLarge = 0xd48;
   constexpr ptrdiff_t m_flFlinchVelocityModifierSmall = 0xd4c;
   constexpr ptrdiff_t m_flRecoveryTimeCrouch = 0xd50;
   constexpr ptrdiff_t m_flRecoveryTimeStand = 0xd54;
   constexpr ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xd58;
   constexpr ptrdiff_t m_flRecoveryTimeStandFinal = 0xd5c;
   constexpr ptrdiff_t m_nRecoveryTransitionStartBullet = 0xd60;
   constexpr ptrdiff_t m_nRecoveryTransitionEndBullet = 0xd64;
   constexpr ptrdiff_t m_flThrowVelocity = 0xd68;
   constexpr ptrdiff_t m_vSmokeColor = 0xd6c;
   constexpr ptrdiff_t m_szAnimClass = 0xd78;

}

namespace C_PlayerSprayDecal {

   constexpr ptrdiff_t m_nUniqueID = 0xcc0;
   constexpr ptrdiff_t m_unAccountID = 0xcc4;
   constexpr ptrdiff_t m_unTraceID = 0xcc8;
   constexpr ptrdiff_t m_rtGcTime = 0xccc;
   constexpr ptrdiff_t m_vecEndPos = 0xcd0;
   constexpr ptrdiff_t m_vecStart = 0xcdc;
   constexpr ptrdiff_t m_vecLeft = 0xce8;
   constexpr ptrdiff_t m_vecNormal = 0xcf4;
   constexpr ptrdiff_t m_nPlayer = 0xd00;
   constexpr ptrdiff_t m_nEntity = 0xd04;
   constexpr ptrdiff_t m_nHitbox = 0xd08;
   constexpr ptrdiff_t m_flCreationTime = 0xd0c;
   constexpr ptrdiff_t m_nTintID = 0xd10;
   constexpr ptrdiff_t m_nVersion = 0xd14;
   constexpr ptrdiff_t m_ubSignature = 0xd15;
   constexpr ptrdiff_t m_SprayRenderHelper = 0xda0;

}

namespace C_FuncConveyor {

   constexpr ptrdiff_t m_vecMoveDirEntitySpace = 0xcc8;
   constexpr ptrdiff_t m_flTargetSpeed = 0xcd4;
   constexpr ptrdiff_t m_nTransitionStartTick = 0xcd8;
   constexpr ptrdiff_t m_nTransitionDurationTicks = 0xcdc;
   constexpr ptrdiff_t m_flTransitionStartSpeed = 0xce0;
   constexpr ptrdiff_t m_hConveyorModels = 0xce8;
   constexpr ptrdiff_t m_flCurrentConveyorOffset = 0xd00;
   constexpr ptrdiff_t m_flCurrentConveyorSpeed = 0xd04;

}

namespace CGrenadeTracer {

   constexpr ptrdiff_t m_flTracerDuration = 0xce0;
   constexpr ptrdiff_t m_nType = 0xce4;

}

namespace C_Inferno {

   constexpr ptrdiff_t m_nfxFireDamageEffect = 0xd00;
   constexpr ptrdiff_t m_firePositions = 0xd04;
   constexpr ptrdiff_t m_fireParentPositions = 0x1004;
   constexpr ptrdiff_t m_bFireIsBurning = 0x1304;
   constexpr ptrdiff_t m_BurnNormal = 0x1344;
   constexpr ptrdiff_t m_fireCount = 0x1644;
   constexpr ptrdiff_t m_nInfernoType = 0x1648;
   constexpr ptrdiff_t m_nFireLifetime = 0x164c;
   constexpr ptrdiff_t m_bInPostEffectTime = 0x1650;
   constexpr ptrdiff_t m_lastFireCount = 0x1654;
   constexpr ptrdiff_t m_nFireEffectTickBegin = 0x1658;
   constexpr ptrdiff_t m_drawableCount = 0x8260;
   constexpr ptrdiff_t m_blosCheck = 0x8264;
   constexpr ptrdiff_t m_nlosperiod = 0x8268;
   constexpr ptrdiff_t m_maxFireHalfWidth = 0x826c;
   constexpr ptrdiff_t m_maxFireHeight = 0x8270;
   constexpr ptrdiff_t m_minBounds = 0x8274;
   constexpr ptrdiff_t m_maxBounds = 0x8280;
   constexpr ptrdiff_t m_flLastGrassBurnThink = 0x828c;

}

namespace C_BarnLight {

   constexpr ptrdiff_t m_bEnabled = 0xcc0;
   constexpr ptrdiff_t m_nColorMode = 0xcc4;
   constexpr ptrdiff_t m_Color = 0xcc8;
   constexpr ptrdiff_t m_flColorTemperature = 0xccc;
   constexpr ptrdiff_t m_flBrightness = 0xcd0;
   constexpr ptrdiff_t m_flBrightnessScale = 0xcd4;
   constexpr ptrdiff_t m_nDirectLight = 0xcd8;
   constexpr ptrdiff_t m_nBakedShadowIndex = 0xcdc;
   constexpr ptrdiff_t m_nLuminaireShape = 0xce0;
   constexpr ptrdiff_t m_flLuminaireSize = 0xce4;
   constexpr ptrdiff_t m_flLuminaireAnisotropy = 0xce8;
   constexpr ptrdiff_t m_LightStyleString = 0xcf0;
   constexpr ptrdiff_t m_flLightStyleStartTime = 0xcf8;
   constexpr ptrdiff_t m_QueuedLightStyleStrings = 0xd00;
   constexpr ptrdiff_t m_LightStyleEvents = 0xd18;
   constexpr ptrdiff_t m_LightStyleTargets = 0xd30;
   constexpr ptrdiff_t m_StyleEvent = 0xd48;
   constexpr ptrdiff_t m_hLightCookie = 0xde8;
   constexpr ptrdiff_t m_flShape = 0xdf0;
   constexpr ptrdiff_t m_flSoftX = 0xdf4;
   constexpr ptrdiff_t m_flSoftY = 0xdf8;
   constexpr ptrdiff_t m_flSkirt = 0xdfc;
   constexpr ptrdiff_t m_flSkirtNear = 0xe00;
   constexpr ptrdiff_t m_vSizeParams = 0xe04;
   constexpr ptrdiff_t m_flRange = 0xe10;
   constexpr ptrdiff_t m_vShear = 0xe14;
   constexpr ptrdiff_t m_nBakeSpecularToCubemaps = 0xe20;
   constexpr ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xe24;
   constexpr ptrdiff_t m_nCastShadows = 0xe30;
   constexpr ptrdiff_t m_nShadowMapSize = 0xe34;
   constexpr ptrdiff_t m_nShadowPriority = 0xe38;
   constexpr ptrdiff_t m_bContactShadow = 0xe3c;
   constexpr ptrdiff_t m_nBounceLight = 0xe40;
   constexpr ptrdiff_t m_flBounceScale = 0xe44;
   constexpr ptrdiff_t m_flMinRoughness = 0xe48;
   constexpr ptrdiff_t m_vAlternateColor = 0xe4c;
   constexpr ptrdiff_t m_fAlternateColorBrightness = 0xe58;
   constexpr ptrdiff_t m_nFog = 0xe5c;
   constexpr ptrdiff_t m_flFogStrength = 0xe60;
   constexpr ptrdiff_t m_nFogShadows = 0xe64;
   constexpr ptrdiff_t m_flFogScale = 0xe68;
   constexpr ptrdiff_t m_flFadeSizeStart = 0xe6c;
   constexpr ptrdiff_t m_flFadeSizeEnd = 0xe70;
   constexpr ptrdiff_t m_flShadowFadeSizeStart = 0xe74;
   constexpr ptrdiff_t m_flShadowFadeSizeEnd = 0xe78;
   constexpr ptrdiff_t m_bPrecomputedFieldsValid = 0xe7c;
   constexpr ptrdiff_t m_vPrecomputedBoundsMins = 0xe80;
   constexpr ptrdiff_t m_vPrecomputedBoundsMaxs = 0xe8c;
   constexpr ptrdiff_t m_vPrecomputedOBBOrigin = 0xe98;
   constexpr ptrdiff_t m_vPrecomputedOBBAngles = 0xea4;
   constexpr ptrdiff_t m_vPrecomputedOBBExtent = 0xeb0;

}

namespace C_RectLight {

   constexpr ptrdiff_t m_bShowLight = 0xf08;

}

namespace C_OmniLight {

   constexpr ptrdiff_t m_flInnerAngle = 0xf08;
   constexpr ptrdiff_t m_flOuterAngle = 0xf0c;
   constexpr ptrdiff_t m_bShowLight = 0xf10;

}

namespace C_CSTeam {

   constexpr ptrdiff_t m_szTeamMatchStat = 0x5f8;
   constexpr ptrdiff_t m_numMapVictories = 0x7f8;
   constexpr ptrdiff_t m_bSurrendered = 0x7fc;
   constexpr ptrdiff_t m_scoreFirstHalf = 0x800;
   constexpr ptrdiff_t m_scoreSecondHalf = 0x804;
   constexpr ptrdiff_t m_scoreOvertime = 0x808;
   constexpr ptrdiff_t m_szClanTeamname = 0x80c;
   constexpr ptrdiff_t m_iClanID = 0x890;
   constexpr ptrdiff_t m_szTeamFlagImage = 0x894;
   constexpr ptrdiff_t m_szTeamLogoImage = 0x89c;

}

namespace CInfoDynamicShadowHint {

   constexpr ptrdiff_t m_bDisabled = 0x540;
   constexpr ptrdiff_t m_flRange = 0x544;
   constexpr ptrdiff_t m_nImportance = 0x548;
   constexpr ptrdiff_t m_nLightChoice = 0x54c;
   constexpr ptrdiff_t m_hLight = 0x550;

}

namespace CInfoDynamicShadowHintBox {

   constexpr ptrdiff_t m_vBoxMins = 0x558;
   constexpr ptrdiff_t m_vBoxMaxs = 0x564;

}

namespace C_EnvSky {

   constexpr ptrdiff_t m_hSkyMaterial = 0xcc0;
   constexpr ptrdiff_t m_hSkyMaterialLightingOnly = 0xcc8;
   constexpr ptrdiff_t m_bStartDisabled = 0xcd0;
   constexpr ptrdiff_t m_vTintColor = 0xcd1;
   constexpr ptrdiff_t m_vTintColorLightingOnly = 0xcd5;
   constexpr ptrdiff_t m_flBrightnessScale = 0xcdc;
   constexpr ptrdiff_t m_nFogType = 0xce0;
   constexpr ptrdiff_t m_flFogMinStart = 0xce4;
   constexpr ptrdiff_t m_flFogMinEnd = 0xce8;
   constexpr ptrdiff_t m_flFogMaxStart = 0xcec;
   constexpr ptrdiff_t m_flFogMaxEnd = 0xcf0;
   constexpr ptrdiff_t m_bEnabled = 0xcf4;

}

namespace C_LightEntity {

   constexpr ptrdiff_t m_CLightComponent = 0xcc0;

}

namespace C_PostProcessingVolume {

   constexpr ptrdiff_t m_hPostSettings = 0xcd8;
   constexpr ptrdiff_t m_flFadeDuration = 0xce0;
   constexpr ptrdiff_t m_flMinLogExposure = 0xce4;
   constexpr ptrdiff_t m_flMaxLogExposure = 0xce8;
   constexpr ptrdiff_t m_flMinExposure = 0xcec;
   constexpr ptrdiff_t m_flMaxExposure = 0xcf0;
   constexpr ptrdiff_t m_flExposureCompensation = 0xcf4;
   constexpr ptrdiff_t m_flExposureFadeSpeedUp = 0xcf8;
   constexpr ptrdiff_t m_flExposureFadeSpeedDown = 0xcfc;
   constexpr ptrdiff_t m_flTonemapEVSmoothingRange = 0xd00;
   constexpr ptrdiff_t m_bMaster = 0xd04;
   constexpr ptrdiff_t m_bExposureControl = 0xd05;
   constexpr ptrdiff_t m_flRate = 0xd08;
   constexpr ptrdiff_t m_flTonemapPercentTarget = 0xd0c;
   constexpr ptrdiff_t m_flTonemapPercentBrightPixels = 0xd10;
   constexpr ptrdiff_t m_flTonemapMinAvgLum = 0xd14;

}

namespace C_EnvParticleGlow {

   constexpr ptrdiff_t m_flAlphaScale = 0x1270;
   constexpr ptrdiff_t m_flRadiusScale = 0x1274;
   constexpr ptrdiff_t m_flSelfIllumScale = 0x1278;
   constexpr ptrdiff_t m_ColorTint = 0x127c;
   constexpr ptrdiff_t m_hTextureOverride = 0x1280;

}

namespace C_TextureBasedAnimatable {

   constexpr ptrdiff_t m_bLoop = 0xcc0;
   constexpr ptrdiff_t m_flFPS = 0xcc4;
   constexpr ptrdiff_t m_hPositionKeys = 0xcc8;
   constexpr ptrdiff_t m_hRotationKeys = 0xcd0;
   constexpr ptrdiff_t m_vAnimationBoundsMin = 0xcd8;
   constexpr ptrdiff_t m_vAnimationBoundsMax = 0xce4;
   constexpr ptrdiff_t m_flStartTime = 0xcf0;
   constexpr ptrdiff_t m_flStartFrame = 0xcf4;

}

namespace CBaseAnimGraph {

   constexpr ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xcc0;
   constexpr ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0xcc1;
   constexpr ptrdiff_t m_bSuppressAnimEventSounds = 0xcc3;
   constexpr ptrdiff_t m_bAnimGraphUpdateEnabled = 0xcd0;
   constexpr ptrdiff_t m_flMaxSlopeDistance = 0xcd4;
   constexpr ptrdiff_t m_vLastSlopeCheckPos = 0xcd8;
   constexpr ptrdiff_t m_vecForce = 0xce8;
   constexpr ptrdiff_t m_nForceBone = 0xcf4;
   constexpr ptrdiff_t m_pClientsideRagdoll = 0xcf8;
   constexpr ptrdiff_t m_bBuiltRagdoll = 0xd00;
   constexpr ptrdiff_t m_pRagdollPose = 0xd18;
   constexpr ptrdiff_t m_bClientRagdoll = 0xd20;
   constexpr ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xd30;

}

namespace CBaseProp {

   constexpr ptrdiff_t m_bModelOverrodeBlockLOS = 0xe80;
   constexpr ptrdiff_t m_iShapeType = 0xe84;
   constexpr ptrdiff_t m_bConformToCollisionBounds = 0xe88;
   constexpr ptrdiff_t m_mPreferredCatchTransform = 0xe8c;

}

namespace C_BreakableProp {

   constexpr ptrdiff_t m_OnBreak = 0xec8;
   constexpr ptrdiff_t m_OnHealthChanged = 0xef0;
   constexpr ptrdiff_t m_OnTakeDamage = 0xf18;
   constexpr ptrdiff_t m_impactEnergyScale = 0xf40;
   constexpr ptrdiff_t m_iMinHealthDmg = 0xf44;
   constexpr ptrdiff_t m_flPressureDelay = 0xf48;
   constexpr ptrdiff_t m_hBreaker = 0xf4c;
   constexpr ptrdiff_t m_PerformanceMode = 0xf50;
   constexpr ptrdiff_t m_flDmgModBullet = 0xf54;
   constexpr ptrdiff_t m_flDmgModClub = 0xf58;
   constexpr ptrdiff_t m_flDmgModExplosive = 0xf5c;
   constexpr ptrdiff_t m_flDmgModFire = 0xf60;
   constexpr ptrdiff_t m_iszPhysicsDamageTableName = 0xf68;
   constexpr ptrdiff_t m_iszBasePropData = 0xf70;
   constexpr ptrdiff_t m_iInteractions = 0xf78;
   constexpr ptrdiff_t m_flPreventDamageBeforeTime = 0xf7c;
   constexpr ptrdiff_t m_bHasBreakPiecesOrCommands = 0xf80;
   constexpr ptrdiff_t m_explodeDamage = 0xf84;
   constexpr ptrdiff_t m_explodeRadius = 0xf88;
   constexpr ptrdiff_t m_explosionDelay = 0xf90;
   constexpr ptrdiff_t m_explosionBuildupSound = 0xf98;
   constexpr ptrdiff_t m_explosionCustomEffect = 0xfa0;
   constexpr ptrdiff_t m_explosionCustomSound = 0xfa8;
   constexpr ptrdiff_t m_explosionModifier = 0xfb0;
   constexpr ptrdiff_t m_hPhysicsAttacker = 0xfb8;
   constexpr ptrdiff_t m_flLastPhysicsInfluenceTime = 0xfbc;
   constexpr ptrdiff_t m_flDefaultFadeScale = 0xfc0;
   constexpr ptrdiff_t m_hLastAttacker = 0xfc4;
   constexpr ptrdiff_t m_hFlareEnt = 0xfc8;
   constexpr ptrdiff_t m_noGhostCollision = 0xfcc;

}

namespace C_DynamicProp {

   constexpr ptrdiff_t m_bUseHitboxesForRenderBox = 0xfd0;
   constexpr ptrdiff_t m_bUseAnimGraph = 0xfd1;
   constexpr ptrdiff_t m_pOutputAnimBegun = 0xfd8;
   constexpr ptrdiff_t m_pOutputAnimOver = 0x1000;
   constexpr ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1028;
   constexpr ptrdiff_t m_OnAnimReachedStart = 0x1050;
   constexpr ptrdiff_t m_OnAnimReachedEnd = 0x1078;
   constexpr ptrdiff_t m_iszDefaultAnim = 0x10a0;
   constexpr ptrdiff_t m_nDefaultAnimLoopMode = 0x10a8;
   constexpr ptrdiff_t m_bAnimateOnServer = 0x10ac;
   constexpr ptrdiff_t m_bRandomizeCycle = 0x10ad;
   constexpr ptrdiff_t m_bStartDisabled = 0x10ae;
   constexpr ptrdiff_t m_bScriptedMovement = 0x10af;
   constexpr ptrdiff_t m_bFiredStartEndOutput = 0x10b0;
   constexpr ptrdiff_t m_bForceNpcExclude = 0x10b1;
   constexpr ptrdiff_t m_bCreateNonSolid = 0x10b2;
   constexpr ptrdiff_t m_bIsOverrideProp = 0x10b3;
   constexpr ptrdiff_t m_iInitialGlowState = 0x10b4;
   constexpr ptrdiff_t m_nGlowRange = 0x10b8;
   constexpr ptrdiff_t m_nGlowRangeMin = 0x10bc;
   constexpr ptrdiff_t m_glowColor = 0x10c0;
   constexpr ptrdiff_t m_nGlowTeam = 0x10c4;
   constexpr ptrdiff_t m_iCachedFrameCount = 0x10c8;
   constexpr ptrdiff_t m_vecCachedRenderMins = 0x10cc;
   constexpr ptrdiff_t m_vecCachedRenderMaxs = 0x10d8;

}

namespace C_ColorCorrectionVolume {

   constexpr ptrdiff_t m_LastEnterWeight = 0xcc8;
   constexpr ptrdiff_t m_LastEnterTime = 0xccc;
   constexpr ptrdiff_t m_LastExitWeight = 0xcd0;
   constexpr ptrdiff_t m_LastExitTime = 0xcd4;
   constexpr ptrdiff_t m_bEnabled = 0xcd8;
   constexpr ptrdiff_t m_MaxWeight = 0xcdc;
   constexpr ptrdiff_t m_FadeDuration = 0xce0;
   constexpr ptrdiff_t m_Weight = 0xce4;
   constexpr ptrdiff_t m_lookupFilename = 0xce8;

}

namespace C_FuncMonitor {

   constexpr ptrdiff_t m_targetCamera = 0xcc0;
   constexpr ptrdiff_t m_nResolutionEnum = 0xcc8;
   constexpr ptrdiff_t m_bRenderShadows = 0xccc;
   constexpr ptrdiff_t m_bUseUniqueColorTarget = 0xccd;
   constexpr ptrdiff_t m_brushModelName = 0xcd0;
   constexpr ptrdiff_t m_hTargetCamera = 0xcd8;
   constexpr ptrdiff_t m_bEnabled = 0xcdc;
   constexpr ptrdiff_t m_bDraw3DSkybox = 0xcdd;

}

namespace C_PhysMagnet {

   constexpr ptrdiff_t m_aAttachedObjectsFromServer = 0xe80;
   constexpr ptrdiff_t m_aAttachedObjects = 0xe98;

}

namespace C_PointCommentaryNode {

   constexpr ptrdiff_t m_bActive = 0xe88;
   constexpr ptrdiff_t m_bWasActive = 0xe89;
   constexpr ptrdiff_t m_flEndTime = 0xe8c;
   constexpr ptrdiff_t m_flStartTime = 0xe90;
   constexpr ptrdiff_t m_flStartTimeInCommentary = 0xe94;
   constexpr ptrdiff_t m_iszCommentaryFile = 0xe98;
   constexpr ptrdiff_t m_iszTitle = 0xea0;
   constexpr ptrdiff_t m_iszSpeakers = 0xea8;
   constexpr ptrdiff_t m_iNodeNumber = 0xeb0;
   constexpr ptrdiff_t m_iNodeNumberMax = 0xeb4;
   constexpr ptrdiff_t m_bListenedTo = 0xeb8;
   constexpr ptrdiff_t m_hViewPosition = 0xec8;
   constexpr ptrdiff_t m_bRestartAfterRestore = 0xecc;

}

namespace C_BaseDoor {

   constexpr ptrdiff_t m_bIsUsable = 0xcc0;

}

namespace C_BaseFlex {

   constexpr ptrdiff_t m_flexWeight = 0xe90;
   constexpr ptrdiff_t m_vLookTargetPosition = 0xea8;
   constexpr ptrdiff_t m_blinktoggle = 0xec0;
   constexpr ptrdiff_t m_nLastFlexUpdateFrameCount = 0xf20;
   constexpr ptrdiff_t m_CachedViewTarget = 0xf24;
   constexpr ptrdiff_t m_nNextSceneEventId = 0xf30;
   constexpr ptrdiff_t m_iBlink = 0xf34;
   constexpr ptrdiff_t m_blinktime = 0xf38;
   constexpr ptrdiff_t m_prevblinktoggle = 0xf3c;
   constexpr ptrdiff_t m_iJawOpen = 0xf40;
   constexpr ptrdiff_t m_flJawOpenAmount = 0xf44;
   constexpr ptrdiff_t m_flBlinkAmount = 0xf48;
   constexpr ptrdiff_t m_iMouthAttachment = 0xf4c;
   constexpr ptrdiff_t m_iEyeAttachment = 0xf4d;
   constexpr ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xf4e;
   constexpr ptrdiff_t m_nEyeOcclusionRendererBone = 0xf68;
   constexpr ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xf6c;
   constexpr ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xf9c;
   constexpr ptrdiff_t m_PhonemeClasses = 0xfb8;

}

namespace C_ClientRagdoll {

   constexpr ptrdiff_t m_bFadeOut = 0xe80;
   constexpr ptrdiff_t m_bImportant = 0xe81;
   constexpr ptrdiff_t m_flEffectTime = 0xe84;
   constexpr ptrdiff_t m_gibDespawnTime = 0xe88;
   constexpr ptrdiff_t m_iCurrentFriction = 0xe8c;
   constexpr ptrdiff_t m_iMinFriction = 0xe90;
   constexpr ptrdiff_t m_iMaxFriction = 0xe94;
   constexpr ptrdiff_t m_iFrictionAnimState = 0xe98;
   constexpr ptrdiff_t m_bReleaseRagdoll = 0xe9c;
   constexpr ptrdiff_t m_iEyeAttachment = 0xe9d;
   constexpr ptrdiff_t m_bFadingOut = 0xe9e;
   constexpr ptrdiff_t m_flScaleEnd = 0xea0;
   constexpr ptrdiff_t m_flScaleTimeStart = 0xec8;
   constexpr ptrdiff_t m_flScaleTimeEnd = 0xef0;

}

namespace C_Precipitation {

   constexpr ptrdiff_t m_flDensity = 0xcc8;
   constexpr ptrdiff_t m_flParticleInnerDist = 0xcd8;
   constexpr ptrdiff_t m_pParticleDef = 0xce0;
   constexpr ptrdiff_t m_tParticlePrecipTraceTimer = 0xd08;
   constexpr ptrdiff_t m_bActiveParticlePrecipEmitter = 0xd10;
   constexpr ptrdiff_t m_bParticlePrecipInitialized = 0xd11;
   constexpr ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xd12;
   constexpr ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xd14;

}

namespace C_FireSprite {

   constexpr ptrdiff_t m_vecMoveDir = 0xdf0;
   constexpr ptrdiff_t m_bFadeFromAbove = 0xdfc;

}

namespace C_Fish {

   constexpr ptrdiff_t m_pos = 0xe80;
   constexpr ptrdiff_t m_vel = 0xe8c;
   constexpr ptrdiff_t m_angles = 0xe98;
   constexpr ptrdiff_t m_localLifeState = 0xea4;
   constexpr ptrdiff_t m_deathDepth = 0xea8;
   constexpr ptrdiff_t m_deathAngle = 0xeac;
   constexpr ptrdiff_t m_buoyancy = 0xeb0;
   constexpr ptrdiff_t m_wiggleTimer = 0xeb8;
   constexpr ptrdiff_t m_wigglePhase = 0xed0;
   constexpr ptrdiff_t m_wiggleRate = 0xed4;
   constexpr ptrdiff_t m_actualPos = 0xed8;
   constexpr ptrdiff_t m_actualAngles = 0xee4;
   constexpr ptrdiff_t m_poolOrigin = 0xef0;
   constexpr ptrdiff_t m_waterLevel = 0xefc;
   constexpr ptrdiff_t m_gotUpdate = 0xf00;
   constexpr ptrdiff_t m_x = 0xf04;
   constexpr ptrdiff_t m_y = 0xf08;
   constexpr ptrdiff_t m_z = 0xf0c;
   constexpr ptrdiff_t m_angle = 0xf10;
   constexpr ptrdiff_t m_errorHistory = 0xf14;
   constexpr ptrdiff_t m_errorHistoryIndex = 0xf64;
   constexpr ptrdiff_t m_errorHistoryCount = 0xf68;
   constexpr ptrdiff_t m_averageError = 0xf6c;

}

namespace C_PhysicsProp {

   constexpr ptrdiff_t m_bAwake = 0xfd0;

}

namespace C_BasePropDoor {

   constexpr ptrdiff_t m_eDoorState = 0x10f8;
   constexpr ptrdiff_t m_modelChanged = 0x10fc;
   constexpr ptrdiff_t m_bLocked = 0x10fd;
   constexpr ptrdiff_t m_closedPosition = 0x1100;
   constexpr ptrdiff_t m_closedAngles = 0x110c;
   constexpr ptrdiff_t m_hMaster = 0x1118;
   constexpr ptrdiff_t m_vWhereToSetLightingOrigin = 0x111c;

}

namespace C_PhysPropClientside {

   constexpr ptrdiff_t m_flTouchDelta = 0xfd0;
   constexpr ptrdiff_t m_fDeathTime = 0xfd4;
   constexpr ptrdiff_t m_impactEnergyScale = 0xfd8;
   constexpr ptrdiff_t m_inertiaScale = 0xfdc;
   constexpr ptrdiff_t m_flDmgModBullet = 0xfe0;
   constexpr ptrdiff_t m_flDmgModClub = 0xfe4;
   constexpr ptrdiff_t m_flDmgModExplosive = 0xfe8;
   constexpr ptrdiff_t m_flDmgModFire = 0xfec;
   constexpr ptrdiff_t m_iszPhysicsDamageTableName = 0xff0;
   constexpr ptrdiff_t m_iszBasePropData = 0xff8;
   constexpr ptrdiff_t m_iInteractions = 0x1000;
   constexpr ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1004;
   constexpr ptrdiff_t m_vecDamagePosition = 0x1008;
   constexpr ptrdiff_t m_vecDamageDirection = 0x1014;
   constexpr ptrdiff_t m_nDamageType = 0x1020;

}

namespace C_RagdollProp {

   constexpr ptrdiff_t m_ragPos = 0xe88;
   constexpr ptrdiff_t m_ragAngles = 0xea0;
   constexpr ptrdiff_t m_flBlendWeight = 0xeb8;
   constexpr ptrdiff_t m_hRagdollSource = 0xebc;
   constexpr ptrdiff_t m_iEyeAttachment = 0xec0;
   constexpr ptrdiff_t m_flBlendWeightCurrent = 0xec4;
   constexpr ptrdiff_t m_parentPhysicsBoneIndices = 0xec8;
   constexpr ptrdiff_t m_worldSpaceBoneComputationOrder = 0xee0;

}

namespace C_LocalTempEntity {

   constexpr ptrdiff_t flags = 0xe98;
   constexpr ptrdiff_t die = 0xe9c;
   constexpr ptrdiff_t m_flFrameMax = 0xea0;
   constexpr ptrdiff_t x = 0xea4;
   constexpr ptrdiff_t y = 0xea8;
   constexpr ptrdiff_t fadeSpeed = 0xeac;
   constexpr ptrdiff_t bounceFactor = 0xeb0;
   constexpr ptrdiff_t hitSound = 0xeb4;
   constexpr ptrdiff_t priority = 0xeb8;
   constexpr ptrdiff_t tentOffset = 0xebc;
   constexpr ptrdiff_t m_vecTempEntAngVelocity = 0xec8;
   constexpr ptrdiff_t tempent_renderamt = 0xed4;
   constexpr ptrdiff_t m_vecNormal = 0xed8;
   constexpr ptrdiff_t m_flSpriteScale = 0xee4;
   constexpr ptrdiff_t m_nFlickerFrame = 0xee8;
   constexpr ptrdiff_t m_flFrameRate = 0xeec;
   constexpr ptrdiff_t m_flFrame = 0xef0;
   constexpr ptrdiff_t m_pszImpactEffect = 0xef8;
   constexpr ptrdiff_t m_pszParticleEffect = 0xf00;
   constexpr ptrdiff_t m_bParticleCollision = 0xf08;
   constexpr ptrdiff_t m_iLastCollisionFrame = 0xf0c;
   constexpr ptrdiff_t m_vLastCollisionOrigin = 0xf10;
   constexpr ptrdiff_t m_vecTempEntVelocity = 0xf1c;
   constexpr ptrdiff_t m_vecPrevAbsOrigin = 0xf28;
   constexpr ptrdiff_t m_vecTempEntAcceleration = 0xf34;

}

namespace C_ShatterGlassShardPhysics {

   constexpr ptrdiff_t m_ShardDesc = 0xfe0;

}

namespace C_EconEntity {

   constexpr ptrdiff_t m_flFlexDelayTime = 0x1028;
   constexpr ptrdiff_t m_flFlexDelayedWeight = 0x1030;
   constexpr ptrdiff_t m_bAttributesInitialized = 0x1038;
   constexpr ptrdiff_t m_AttributeManager = 0x1040;
   constexpr ptrdiff_t m_OriginalOwnerXuidLow = 0x14e8;
   constexpr ptrdiff_t m_OriginalOwnerXuidHigh = 0x14ec;
   constexpr ptrdiff_t m_nFallbackPaintKit = 0x14f0;
   constexpr ptrdiff_t m_nFallbackSeed = 0x14f4;
   constexpr ptrdiff_t m_flFallbackWear = 0x14f8;
   constexpr ptrdiff_t m_nFallbackStatTrak = 0x14fc;
   constexpr ptrdiff_t m_bClientside = 0x1500;
   constexpr ptrdiff_t m_bParticleSystemsCreated = 0x1501;
   constexpr ptrdiff_t m_vecAttachedParticles = 0x1508;
   constexpr ptrdiff_t m_hViewmodelAttachment = 0x1520;
   constexpr ptrdiff_t m_iOldTeam = 0x1524;
   constexpr ptrdiff_t m_bAttachmentDirty = 0x1528;
   constexpr ptrdiff_t m_nUnloadedModelIndex = 0x152c;
   constexpr ptrdiff_t m_iNumOwnerValidationRetries = 0x1530;
   constexpr ptrdiff_t m_hOldProvidee = 0x1540;
   constexpr ptrdiff_t m_vecAttachedModels = 0x1548;

}

namespace C_EconWearable {

   constexpr ptrdiff_t m_nForceSkin = 0x1560;
   constexpr ptrdiff_t m_bAlwaysAllow = 0x1564;

}

namespace C_BaseGrenade {

   constexpr ptrdiff_t m_bHasWarnedAI = 0x1018;
   constexpr ptrdiff_t m_bIsSmokeGrenade = 0x1019;
   constexpr ptrdiff_t m_bIsLive = 0x101a;
   constexpr ptrdiff_t m_DmgRadius = 0x101c;
   constexpr ptrdiff_t m_flDetonateTime = 0x1020;
   constexpr ptrdiff_t m_flWarnAITime = 0x1024;
   constexpr ptrdiff_t m_flDamage = 0x1028;
   constexpr ptrdiff_t m_iszBounceSound = 0x1030;
   constexpr ptrdiff_t m_ExplosionSound = 0x1038;
   constexpr ptrdiff_t m_hThrower = 0x1044;
   constexpr ptrdiff_t m_flNextAttack = 0x105c;
   constexpr ptrdiff_t m_hOriginalThrower = 0x1060;

}

namespace C_ViewmodelWeapon {

   constexpr ptrdiff_t m_worldModel = 0xe80;

}

namespace C_BaseViewModel {

   constexpr ptrdiff_t m_vecLastFacing = 0xe88;
   constexpr ptrdiff_t m_nViewModelIndex = 0xe94;
   constexpr ptrdiff_t m_nAnimationParity = 0xe98;
   constexpr ptrdiff_t m_flAnimationStartTime = 0xe9c;
   constexpr ptrdiff_t m_hWeapon = 0xea0;
   constexpr ptrdiff_t m_sVMName = 0xea8;
   constexpr ptrdiff_t m_sAnimationPrefix = 0xeb0;
   constexpr ptrdiff_t m_hWeaponModel = 0xeb8;
   constexpr ptrdiff_t m_iCameraAttachment = 0xebc;
   constexpr ptrdiff_t m_vecLastCameraAngles = 0xec0;
   constexpr ptrdiff_t m_previousElapsedDuration = 0xecc;
   constexpr ptrdiff_t m_previousCycle = 0xed0;
   constexpr ptrdiff_t m_nOldAnimationParity = 0xed4;
   constexpr ptrdiff_t m_hOldLayerSequence = 0xed8;
   constexpr ptrdiff_t m_oldLayer = 0xedc;
   constexpr ptrdiff_t m_oldLayerStartTime = 0xee0;
   constexpr ptrdiff_t m_hControlPanel = 0xee4;

}

namespace C_PredictedViewModel {

   constexpr ptrdiff_t m_LagAnglesHistory = 0xee8;
   constexpr ptrdiff_t m_vPredictedOffset = 0xf00;

}

namespace C_BaseCSGrenadeProjectile {

   constexpr ptrdiff_t m_vInitialVelocity = 0x1068;
   constexpr ptrdiff_t m_nBounces = 0x1074;
   constexpr ptrdiff_t m_nExplodeEffectIndex = 0x1078;
   constexpr ptrdiff_t m_nExplodeEffectTickBegin = 0x1080;
   constexpr ptrdiff_t m_vecExplodeEffectOrigin = 0x1084;
   constexpr ptrdiff_t m_flSpawnTime = 0x1090;
   constexpr ptrdiff_t vecLastTrailLinePos = 0x1094;
   constexpr ptrdiff_t flNextTrailLineTime = 0x10a0;
   constexpr ptrdiff_t m_bExplodeEffectBegan = 0x10a4;
   constexpr ptrdiff_t m_bCanCreateGrenadeTrail = 0x10a5;
   constexpr ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x10a8;
   constexpr ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x10b0;
   constexpr ptrdiff_t m_arrTrajectoryTrailPoints = 0x10b8;
   constexpr ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x10d0;
   constexpr ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x10e8;

}

namespace C_CSGO_PreviewModel {

   constexpr ptrdiff_t m_animgraph = 0x1018;
   constexpr ptrdiff_t m_animgraphCharacterModeString = 0x1020;
   constexpr ptrdiff_t m_defaultAnim = 0x1028;
   constexpr ptrdiff_t m_nDefaultAnimLoopMode = 0x1030;
   constexpr ptrdiff_t m_flInitialModelScale = 0x1034;

}

namespace C_BulletHitModel {

   constexpr ptrdiff_t m_matLocal = 0xe80;
   constexpr ptrdiff_t m_iBoneIndex = 0xeb0;
   constexpr ptrdiff_t m_hPlayerParent = 0xeb4;
   constexpr ptrdiff_t m_bIsHit = 0xeb8;
   constexpr ptrdiff_t m_flTimeCreated = 0xebc;
   constexpr ptrdiff_t m_vecStartPos = 0xec0;

}

namespace C_PickUpModelSlerper {

   constexpr ptrdiff_t m_hPlayerParent = 0xe80;
   constexpr ptrdiff_t m_hItem = 0xe84;
   constexpr ptrdiff_t m_flTimePickedUp = 0xe88;
   constexpr ptrdiff_t m_angOriginal = 0xe8c;
   constexpr ptrdiff_t m_vecPosOriginal = 0xe98;
   constexpr ptrdiff_t m_angRandom = 0xea8;

}

namespace C_Multimeter {

   constexpr ptrdiff_t m_hTargetC4 = 0xe88;

}

namespace C_PlantedC4 {

   constexpr ptrdiff_t m_bBombTicking = 0xe80;
   constexpr ptrdiff_t m_nBombSite = 0xe84;
   constexpr ptrdiff_t m_nSourceSoundscapeHash = 0xe88;
   constexpr ptrdiff_t m_entitySpottedState = 0xe90;
   constexpr ptrdiff_t m_flNextGlow = 0xea8;
   constexpr ptrdiff_t m_flNextBeep = 0xeac;
   constexpr ptrdiff_t m_flC4Blow = 0xeb0;
   constexpr ptrdiff_t m_bCannotBeDefused = 0xeb4;
   constexpr ptrdiff_t m_bHasExploded = 0xeb5;
   constexpr ptrdiff_t m_flTimerLength = 0xeb8;
   constexpr ptrdiff_t m_bBeingDefused = 0xebc;
   constexpr ptrdiff_t m_bTriggerWarning = 0xec0;
   constexpr ptrdiff_t m_bExplodeWarning = 0xec4;
   constexpr ptrdiff_t m_bC4Activated = 0xec8;
   constexpr ptrdiff_t m_bTenSecWarning = 0xec9;
   constexpr ptrdiff_t m_flDefuseLength = 0xecc;
   constexpr ptrdiff_t m_flDefuseCountDown = 0xed0;
   constexpr ptrdiff_t m_bBombDefused = 0xed4;
   constexpr ptrdiff_t m_hBombDefuser = 0xed8;
   constexpr ptrdiff_t m_hControlPanel = 0xedc;
   constexpr ptrdiff_t m_hDefuserMultimeter = 0xee0;
   constexpr ptrdiff_t m_flNextRadarFlashTime = 0xee4;
   constexpr ptrdiff_t m_bRadarFlash = 0xee8;
   constexpr ptrdiff_t m_pBombDefuser = 0xeec;
   constexpr ptrdiff_t m_fLastDefuseTime = 0xef0;
   constexpr ptrdiff_t m_pPredictionOwner = 0xef8;

}

namespace C_Item {

   constexpr ptrdiff_t m_bShouldGlow = 0x1560;
   constexpr ptrdiff_t m_pReticleHintTextName = 0x1561;

}

namespace C_Chicken {

   constexpr ptrdiff_t m_hHolidayHatAddon = 0x10f0;
   constexpr ptrdiff_t m_jumpedThisFrame = 0x10f4;
   constexpr ptrdiff_t m_leader = 0x10f8;
   constexpr ptrdiff_t m_AttributeManager = 0x1100;
   constexpr ptrdiff_t m_OriginalOwnerXuidLow = 0x15a8;
   constexpr ptrdiff_t m_OriginalOwnerXuidHigh = 0x15ac;
   constexpr ptrdiff_t m_bAttributesInitialized = 0x15b0;
   constexpr ptrdiff_t m_hWaterWakeParticles = 0x15b4;

}

namespace C_BasePlayerWeapon {

   constexpr ptrdiff_t m_nNextPrimaryAttackTick = 0x1560;
   constexpr ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x1564;
   constexpr ptrdiff_t m_nNextSecondaryAttackTick = 0x1568;
   constexpr ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x156c;
   constexpr ptrdiff_t m_iClip1 = 0x1570;
   constexpr ptrdiff_t m_iClip2 = 0x1574;
   constexpr ptrdiff_t m_pReserveAmmo = 0x1578;

}

namespace C_RagdollPropAttached {

   constexpr ptrdiff_t m_boneIndexAttached = 0xef8;
   constexpr ptrdiff_t m_ragdollAttachedObjectIndex = 0xefc;
   constexpr ptrdiff_t m_attachmentPointBoneSpace = 0xf00;
   constexpr ptrdiff_t m_attachmentPointRagdollSpace = 0xf0c;
   constexpr ptrdiff_t m_vecOffset = 0xf18;
   constexpr ptrdiff_t m_parentTime = 0xf24;
   constexpr ptrdiff_t m_bHasParent = 0xf28;

}

namespace C_BaseCombatCharacter {

   constexpr ptrdiff_t m_hMyWearables = 0x1018;
   constexpr ptrdiff_t m_bloodColor = 0x1030;
   constexpr ptrdiff_t m_leftFootAttachment = 0x1034;
   constexpr ptrdiff_t m_rightFootAttachment = 0x1035;
   constexpr ptrdiff_t m_nWaterWakeMode = 0x1038;
   constexpr ptrdiff_t m_flWaterWorldZ = 0x103c;
   constexpr ptrdiff_t m_flWaterNextTraceTime = 0x1040;
   constexpr ptrdiff_t m_flFieldOfView = 0x1044;

}

namespace C_BasePlayerPawn {

   constexpr ptrdiff_t m_pWeaponServices = 0x10a8;
   constexpr ptrdiff_t m_pItemServices = 0x10b0;
   constexpr ptrdiff_t m_pAutoaimServices = 0x10b8;
   constexpr ptrdiff_t m_pObserverServices = 0x10c0;
   constexpr ptrdiff_t m_pWaterServices = 0x10c8;
   constexpr ptrdiff_t m_pUseServices = 0x10d0;
   constexpr ptrdiff_t m_pFlashlightServices = 0x10d8;
   constexpr ptrdiff_t m_pCameraServices = 0x10e0;
   constexpr ptrdiff_t m_pMovementServices = 0x10e8;
   constexpr ptrdiff_t m_ServerViewAngleChanges = 0x10f8;
   constexpr ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1148;
   constexpr ptrdiff_t v_angle = 0x114c;
   constexpr ptrdiff_t v_anglePrevious = 0x1158;
   constexpr ptrdiff_t m_iHideHUD = 0x1164;
   constexpr ptrdiff_t m_skybox3d = 0x1168;
   constexpr ptrdiff_t m_flDeathTime = 0x11f8;
   constexpr ptrdiff_t m_vecPredictionError = 0x11fc;
   constexpr ptrdiff_t m_flPredictionErrorTime = 0x1208;
   constexpr ptrdiff_t m_flFOVSensitivityAdjust = 0x120c;
   constexpr ptrdiff_t m_flMouseSensitivity = 0x1210;
   constexpr ptrdiff_t m_vOldOrigin = 0x1214;
   constexpr ptrdiff_t m_flOldSimulationTime = 0x1220;
   constexpr ptrdiff_t m_nLastExecutedCommandNumber = 0x1224;
   constexpr ptrdiff_t m_nLastExecutedCommandTick = 0x1228;
   constexpr ptrdiff_t m_hController = 0x122c;
   constexpr ptrdiff_t m_bIsSwappingToPredictableController = 0x1230;

}

namespace C_CSGOViewModel {

   constexpr ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xf10;
   constexpr ptrdiff_t m_nWeaponParity = 0xf14;
   constexpr ptrdiff_t m_nOldWeaponParity = 0xf18;
   constexpr ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xf1c;
   constexpr ptrdiff_t m_bNeedToQueueHighResComposite = 0xf20;
   constexpr ptrdiff_t m_vLoweredWeaponOffset = 0xf64;

}

namespace C_CSWeaponBase {

   constexpr ptrdiff_t m_flFireSequenceStartTime = 0x15d0;
   constexpr ptrdiff_t m_nFireSequenceStartTimeChange = 0x15d4;
   constexpr ptrdiff_t m_nFireSequenceStartTimeAck = 0x15d8;
   constexpr ptrdiff_t m_bPlayerFireEventIsPrimary = 0x15dc;
   constexpr ptrdiff_t m_seqIdle = 0x15e0;
   constexpr ptrdiff_t m_seqFirePrimary = 0x15e4;
   constexpr ptrdiff_t m_seqFireSecondary = 0x15e8;
   constexpr ptrdiff_t m_ClientPreviousWeaponState = 0x1600;
   constexpr ptrdiff_t m_iState = 0x1604;
   constexpr ptrdiff_t m_flCrosshairDistance = 0x1608;
   constexpr ptrdiff_t m_iAmmoLastCheck = 0x160c;
   constexpr ptrdiff_t m_iAlpha = 0x1610;
   constexpr ptrdiff_t m_iScopeTextureID = 0x1614;
   constexpr ptrdiff_t m_iCrosshairTextureID = 0x1618;
   constexpr ptrdiff_t m_flGunAccuracyPosition = 0x161c;
   constexpr ptrdiff_t m_nViewModelIndex = 0x1620;
   constexpr ptrdiff_t m_bReloadsWithClips = 0x1624;
   constexpr ptrdiff_t m_flTimeWeaponIdle = 0x1628;
   constexpr ptrdiff_t m_bFireOnEmpty = 0x162c;
   constexpr ptrdiff_t m_OnPlayerPickup = 0x1630;
   constexpr ptrdiff_t m_weaponMode = 0x1658;
   constexpr ptrdiff_t m_flTurningInaccuracyDelta = 0x165c;
   constexpr ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1660;
   constexpr ptrdiff_t m_flTurningInaccuracy = 0x166c;
   constexpr ptrdiff_t m_fAccuracyPenalty = 0x1670;
   constexpr ptrdiff_t m_flLastAccuracyUpdateTime = 0x1674;
   constexpr ptrdiff_t m_fAccuracySmoothedForZoom = 0x1678;
   constexpr ptrdiff_t m_fScopeZoomEndTime = 0x167c;
   constexpr ptrdiff_t m_iRecoilIndex = 0x1680;
   constexpr ptrdiff_t m_flRecoilIndex = 0x1684;
   constexpr ptrdiff_t m_bBurstMode = 0x1688;
   constexpr ptrdiff_t m_flPostponeFireReadyTime = 0x168c;
   constexpr ptrdiff_t m_bInReload = 0x1690;
   constexpr ptrdiff_t m_bReloadVisuallyComplete = 0x1691;
   constexpr ptrdiff_t m_flDroppedAtTime = 0x1694;
   constexpr ptrdiff_t m_bIsHauledBack = 0x1698;
   constexpr ptrdiff_t m_bSilencerOn = 0x1699;
   constexpr ptrdiff_t m_flTimeSilencerSwitchComplete = 0x169c;
   constexpr ptrdiff_t m_iOriginalTeamNumber = 0x16a0;
   constexpr ptrdiff_t m_flNextAttackRenderTimeOffset = 0x16a4;
   constexpr ptrdiff_t m_bVisualsDataSet = 0x1728;
   constexpr ptrdiff_t m_bOldFirstPersonSpectatedState = 0x1729;
   constexpr ptrdiff_t m_hOurPing = 0x172c;
   constexpr ptrdiff_t m_nOurPingIndex = 0x1730;
   constexpr ptrdiff_t m_vecOurPingPos = 0x1734;
   constexpr ptrdiff_t m_bGlowForPing = 0x1740;
   constexpr ptrdiff_t m_bUIWeapon = 0x1741;
   constexpr ptrdiff_t m_hPrevOwner = 0x1750;
   constexpr ptrdiff_t m_nDropTick = 0x1754;
   constexpr ptrdiff_t m_donated = 0x1774;
   constexpr ptrdiff_t m_fLastShotTime = 0x1778;
   constexpr ptrdiff_t m_bWasOwnedByCT = 0x177c;
   constexpr ptrdiff_t m_bWasOwnedByTerrorist = 0x177d;
   constexpr ptrdiff_t m_gunHeat = 0x1780;
   constexpr ptrdiff_t m_smokeAttachments = 0x1784;
   constexpr ptrdiff_t m_lastSmokeTime = 0x1788;
   constexpr ptrdiff_t m_flLastClientFireBulletTime = 0x178c;
   constexpr ptrdiff_t m_IronSightController = 0x1840;
   constexpr ptrdiff_t m_iIronSightMode = 0x18f0;
   constexpr ptrdiff_t m_flLastLOSTraceFailureTime = 0x1900;
   constexpr ptrdiff_t m_iNumEmptyAttacks = 0x1904;

}

namespace C_CSWeaponBaseGun {

   constexpr ptrdiff_t m_zoomLevel = 0x1940;
   constexpr ptrdiff_t m_iBurstShotsRemaining = 0x1944;
   constexpr ptrdiff_t m_iSilencerBodygroup = 0x1948;
   constexpr ptrdiff_t m_silencedModelIndex = 0x1958;
   constexpr ptrdiff_t m_inPrecache = 0x195c;
   constexpr ptrdiff_t m_bNeedsBoltAction = 0x195d;

}

namespace C_C4 {

   constexpr ptrdiff_t m_szScreenText = 0x1940;
   constexpr ptrdiff_t m_bombdroppedlightParticleIndex = 0x1960;
   constexpr ptrdiff_t m_bStartedArming = 0x1964;
   constexpr ptrdiff_t m_fArmedTime = 0x1968;
   constexpr ptrdiff_t m_bBombPlacedAnimation = 0x196c;
   constexpr ptrdiff_t m_bIsPlantingViaUse = 0x196d;
   constexpr ptrdiff_t m_entitySpottedState = 0x1970;
   constexpr ptrdiff_t m_nSpotRules = 0x1988;
   constexpr ptrdiff_t m_bPlayedArmingBeeps = 0x198c;
   constexpr ptrdiff_t m_bBombPlanted = 0x1993;
   constexpr ptrdiff_t m_bDroppedFromDeath = 0x1994;

}

namespace C_WeaponTaser {

   constexpr ptrdiff_t m_fFireTime = 0x1960;

}

namespace C_Melee {

   constexpr ptrdiff_t m_flThrowAt = 0x1940;

}

namespace C_WeaponShield {

   constexpr ptrdiff_t m_flDisplayHealth = 0x1960;

}

namespace C_MolotovProjectile {

   constexpr ptrdiff_t m_bIsIncGrenade = 0x10f0;

}

namespace C_DecoyProjectile {

   constexpr ptrdiff_t m_flTimeParticleEffectSpawn = 0x1110;

}

namespace C_SmokeGrenadeProjectile {

   constexpr ptrdiff_t m_nSmokeEffectTickBegin = 0x10f8;
   constexpr ptrdiff_t m_bDidSmokeEffect = 0x10fc;
   constexpr ptrdiff_t m_nRandomSeed = 0x1100;
   constexpr ptrdiff_t m_vSmokeColor = 0x1104;
   constexpr ptrdiff_t m_vSmokeDetonationPos = 0x1110;
   constexpr ptrdiff_t m_VoxelFrameData = 0x1120;
   constexpr ptrdiff_t m_bSmokeVolumeDataReceived = 0x1138;
   constexpr ptrdiff_t m_bSmokeEffectSpawned = 0x1139;

}

namespace C_BaseCSGrenade {

   constexpr ptrdiff_t m_bClientPredictDelete = 0x1940;
   constexpr ptrdiff_t m_bRedraw = 0x1968;
   constexpr ptrdiff_t m_bIsHeldByPlayer = 0x1969;
   constexpr ptrdiff_t m_bPinPulled = 0x196a;
   constexpr ptrdiff_t m_bJumpThrow = 0x196b;
   constexpr ptrdiff_t m_eThrowStatus = 0x196c;
   constexpr ptrdiff_t m_fThrowTime = 0x1970;
   constexpr ptrdiff_t m_flThrowStrength = 0x1974;
   constexpr ptrdiff_t m_flThrowStrengthApproach = 0x1978;
   constexpr ptrdiff_t m_fDropTime = 0x197c;

}

namespace C_WeaponBaseItem {

   constexpr ptrdiff_t m_SequenceCompleteTimer = 0x1940;
   constexpr ptrdiff_t m_bRedraw = 0x1958;

}

namespace C_ItemDogtags {

   constexpr ptrdiff_t m_OwningPlayer = 0x1668;
   constexpr ptrdiff_t m_KillingPlayer = 0x166c;

}

namespace C_Fists {

   constexpr ptrdiff_t m_bPlayingUninterruptableAct = 0x1940;
   constexpr ptrdiff_t m_nUninterruptableActivity = 0x1944;

}

namespace C_CSPlayerPawnBase {

   constexpr ptrdiff_t m_pPingServices = 0x1250;
   constexpr ptrdiff_t m_pViewModelServices = 0x1258;
   constexpr ptrdiff_t m_fRenderingClipPlane = 0x1260;
   constexpr ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1270;
   constexpr ptrdiff_t m_vecLastClipCameraPos = 0x1274;
   constexpr ptrdiff_t m_vecLastClipCameraForward = 0x1280;
   constexpr ptrdiff_t m_bClipHitStaticWorld = 0x128c;
   constexpr ptrdiff_t m_bCachedPlaneIsValid = 0x128d;
   constexpr ptrdiff_t m_pClippingWeapon = 0x1290;
   constexpr ptrdiff_t m_previousPlayerState = 0x1298;
   constexpr ptrdiff_t m_flLastCollisionCeiling = 0x129c;
   constexpr ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x12a0;
   constexpr ptrdiff_t m_grenadeParameterStashTime = 0x12c0;
   constexpr ptrdiff_t m_bGrenadeParametersStashed = 0x12c4;
   constexpr ptrdiff_t m_angStashedShootAngles = 0x12c8;
   constexpr ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x12d4;
   constexpr ptrdiff_t m_vecStashedVelocity = 0x12e0;
   constexpr ptrdiff_t m_angShootAngleHistory = 0x12ec;
   constexpr ptrdiff_t m_vecThrowPositionHistory = 0x1304;
   constexpr ptrdiff_t m_vecVelocityHistory = 0x131c;
   constexpr ptrdiff_t m_thirdPersonHeading = 0x1338;
   constexpr ptrdiff_t m_flSlopeDropOffset = 0x1350;
   constexpr ptrdiff_t m_flSlopeDropHeight = 0x1360;
   constexpr ptrdiff_t m_vHeadConstraintOffset = 0x1370;
   constexpr ptrdiff_t m_bIsScoped = 0x1388;
   constexpr ptrdiff_t m_bIsWalking = 0x1389;
   constexpr ptrdiff_t m_bResumeZoom = 0x138a;
   constexpr ptrdiff_t m_iPlayerState = 0x138c;
   constexpr ptrdiff_t m_bIsDefusing = 0x1390;
   constexpr ptrdiff_t m_bIsGrabbingHostage = 0x1391;
   constexpr ptrdiff_t m_iBlockingUseActionInProgress = 0x1394;
   constexpr ptrdiff_t m_bIsRescuing = 0x1398;
   constexpr ptrdiff_t m_fImmuneToGunGameDamageTime = 0x139c;
   constexpr ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x13a0;
   constexpr ptrdiff_t m_bGunGameImmunity = 0x13a4;
   constexpr ptrdiff_t m_bHasMovedSinceSpawn = 0x13a5;
   constexpr ptrdiff_t m_fMolotovUseTime = 0x13a8;
   constexpr ptrdiff_t m_fMolotovDamageTime = 0x13ac;
   constexpr ptrdiff_t m_nWhichBombZone = 0x13b0;
   constexpr ptrdiff_t m_bInNoDefuseArea = 0x13b4;
   constexpr ptrdiff_t m_iThrowGrenadeCounter = 0x13b8;
   constexpr ptrdiff_t m_bWaitForNoAttack = 0x13bc;
   constexpr ptrdiff_t m_flGuardianTooFarDistFrac = 0x13c0;
   constexpr ptrdiff_t m_flDetectedByEnemySensorTime = 0x13c4;
   constexpr ptrdiff_t m_flNextGuardianTooFarWarning = 0x13c8;
   constexpr ptrdiff_t m_bSuppressGuardianTooFarWarningAudio = 0x13cc;
   constexpr ptrdiff_t m_bKilledByTaser = 0x13cd;
   constexpr ptrdiff_t m_iMoveState = 0x13d0;
   constexpr ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x13d4;
   constexpr ptrdiff_t m_flLowerBodyYawTarget = 0x13d8;
   constexpr ptrdiff_t m_bStrafing = 0x13dc;
   constexpr ptrdiff_t m_flLastSpawnTimeIndex = 0x13e0;
   constexpr ptrdiff_t m_flEmitSoundTime = 0x13e4;
   constexpr ptrdiff_t m_iAddonBits = 0x13e8;
   constexpr ptrdiff_t m_iPrimaryAddon = 0x13ec;
   constexpr ptrdiff_t m_iSecondaryAddon = 0x13f0;
   constexpr ptrdiff_t m_iProgressBarDuration = 0x13f4;
   constexpr ptrdiff_t m_flProgressBarStartTime = 0x13f8;
   constexpr ptrdiff_t m_iDirection = 0x13fc;
   constexpr ptrdiff_t m_iShotsFired = 0x1400;
   constexpr ptrdiff_t m_bNightVisionOn = 0x1404;
   constexpr ptrdiff_t m_bHasNightVision = 0x1405;
   constexpr ptrdiff_t m_flVelocityModifier = 0x1408;
   constexpr ptrdiff_t m_flHitHeading = 0x140c;
   constexpr ptrdiff_t m_nHitBodyPart = 0x1410;
   constexpr ptrdiff_t m_iStartAccount = 0x1414;
   constexpr ptrdiff_t m_vecIntroStartEyePosition = 0x1418;
   constexpr ptrdiff_t m_vecIntroStartPlayerForward = 0x1424;
   constexpr ptrdiff_t m_flClientDeathTime = 0x1430;
   constexpr ptrdiff_t m_flNightVisionAlpha = 0x1434;
   constexpr ptrdiff_t m_bScreenTearFrameCaptured = 0x1438;
   constexpr ptrdiff_t m_flFlashBangTime = 0x143c;
   constexpr ptrdiff_t m_flFlashScreenshotAlpha = 0x1440;
   constexpr ptrdiff_t m_flFlashOverlayAlpha = 0x1444;
   constexpr ptrdiff_t m_bFlashBuildUp = 0x1448;
   constexpr ptrdiff_t m_bFlashDspHasBeenCleared = 0x1449;
   constexpr ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x144a;
   constexpr ptrdiff_t m_flFlashMaxAlpha = 0x144c;
   constexpr ptrdiff_t m_flFlashDuration = 0x1450;
   constexpr ptrdiff_t m_lastStandingPos = 0x1454;
   constexpr ptrdiff_t m_vecLastMuzzleFlashPos = 0x1460;
   constexpr ptrdiff_t m_angLastMuzzleFlashAngle = 0x146c;
   constexpr ptrdiff_t m_hMuzzleFlashShape = 0x1478;
   constexpr ptrdiff_t m_iHealthBarRenderMaskIndex = 0x147c;
   constexpr ptrdiff_t m_flHealthFadeValue = 0x1480;
   constexpr ptrdiff_t m_flHealthFadeAlpha = 0x1484;
   constexpr ptrdiff_t m_nMyCollisionGroup = 0x1488;
   constexpr ptrdiff_t m_ignoreLadderJumpTime = 0x148c;
   constexpr ptrdiff_t m_ladderSurpressionTimer = 0x1490;
   constexpr ptrdiff_t m_lastLadderNormal = 0x14a8;
   constexpr ptrdiff_t m_lastLadderPos = 0x14b4;
   constexpr ptrdiff_t m_flDeathCCWeight = 0x14c8;
   constexpr ptrdiff_t m_bOldIsScoped = 0x14cc;
   constexpr ptrdiff_t m_flPrevRoundEndTime = 0x14d0;
   constexpr ptrdiff_t m_flPrevMatchEndTime = 0x14d4;
   constexpr ptrdiff_t m_unCurrentEquipmentValue = 0x14d8;
   constexpr ptrdiff_t m_unRoundStartEquipmentValue = 0x14da;
   constexpr ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x14dc;
   constexpr ptrdiff_t m_vecThirdPersonViewPositionOverride = 0x14e0;
   constexpr ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x14ec;
   constexpr ptrdiff_t m_ArmorValue = 0x14f0;
   constexpr ptrdiff_t m_angEyeAngles = 0x14f8;
   constexpr ptrdiff_t m_fNextThinkPushAway = 0x1510;
   constexpr ptrdiff_t m_bShouldAutobuyDMWeapons = 0x1514;
   constexpr ptrdiff_t m_bShouldAutobuyNow = 0x1515;
   constexpr ptrdiff_t m_bHud_MiniScoreHidden = 0x1516;
   constexpr ptrdiff_t m_bHud_RadarHidden = 0x1517;
   constexpr ptrdiff_t m_nLastKillerIndex = 0x1518;
   constexpr ptrdiff_t m_nLastConcurrentKilled = 0x151c;
   constexpr ptrdiff_t m_nDeathCamMusic = 0x1520;
   constexpr ptrdiff_t m_iIDEntIndex = 0x1524;
   constexpr ptrdiff_t m_delayTargetIDTimer = 0x1528;
   constexpr ptrdiff_t m_iTargetedWeaponEntIndex = 0x1540;
   constexpr ptrdiff_t m_iOldIDEntIndex = 0x1544;
   constexpr ptrdiff_t m_holdTargetIDTimer = 0x1548;
   constexpr ptrdiff_t m_flCurrentMusicStartTime = 0x1564;
   constexpr ptrdiff_t m_flMusicRoundStartTime = 0x1568;
   constexpr ptrdiff_t m_bDeferStartMusicOnWarmup = 0x156c;
   constexpr ptrdiff_t m_cycleLatch = 0x1570;
   constexpr ptrdiff_t m_serverIntendedCycle = 0x1574;
   constexpr ptrdiff_t m_vecPlayerPatchEconIndices = 0x1578;
   constexpr ptrdiff_t m_bHideTargetID = 0x1594;
   constexpr ptrdiff_t m_nextTaserShakeTime = 0x1598;
   constexpr ptrdiff_t m_firstTaserShakeTime = 0x159c;
   constexpr ptrdiff_t m_flLastSmokeOverlayAlpha = 0x15a0;
   constexpr ptrdiff_t m_vLastSmokeOverlayColor = 0x15a4;
   constexpr ptrdiff_t m_nPlayerSmokedFx = 0x15b0;
   constexpr ptrdiff_t m_flNextMagDropTime = 0x15b4;
   constexpr ptrdiff_t m_nLastMagDropAttachmentIndex = 0x15b8;
   constexpr ptrdiff_t m_vecBulletHitModels = 0x15c0;
   constexpr ptrdiff_t m_vecPickupModelSlerpers = 0x15d8;
   constexpr ptrdiff_t m_vecLastAliveLocalVelocity = 0x15f0;
   constexpr ptrdiff_t m_entitySpottedState = 0x1618;
   constexpr ptrdiff_t m_nSurvivalTeamNumber = 0x1630;
   constexpr ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x1634;
   constexpr ptrdiff_t m_bHasDeathInfo = 0x1635;
   constexpr ptrdiff_t m_flDeathInfoTime = 0x1638;
   constexpr ptrdiff_t m_vecDeathInfoOrigin = 0x163c;
   constexpr ptrdiff_t m_bKilledByHeadshot = 0x1648;
   constexpr ptrdiff_t m_hOriginalController = 0x164c;

}

namespace C_CSObserverPawn {

   constexpr ptrdiff_t m_hDetectParentChange = 0x1698;

}

namespace C_CSPlayerPawn {

   constexpr ptrdiff_t m_pBulletServices = 0x1698;
   constexpr ptrdiff_t m_pHostageServices = 0x16a0;
   constexpr ptrdiff_t m_pBuyServices = 0x16a8;
   constexpr ptrdiff_t m_pGlowServices = 0x16b0;
   constexpr ptrdiff_t m_pActionTrackingServices = 0x16b8;
   constexpr ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16c0;
   constexpr ptrdiff_t m_flLastFiredWeaponTime = 0x16c4;
   constexpr ptrdiff_t m_bHasFemaleVoice = 0x16c8;
   constexpr ptrdiff_t m_flLandseconds = 0x16cc;
   constexpr ptrdiff_t m_flOldFallVelocity = 0x16d0;
   constexpr ptrdiff_t m_szLastPlaceName = 0x16d4;
   constexpr ptrdiff_t m_bPrevDefuser = 0x16e6;
   constexpr ptrdiff_t m_bPrevHelmet = 0x16e7;
   constexpr ptrdiff_t m_nPrevArmorVal = 0x16e8;
   constexpr ptrdiff_t m_nPrevGrenadeAmmoCount = 0x16ec;
   constexpr ptrdiff_t m_unPreviousWeaponHash = 0x16f0;
   constexpr ptrdiff_t m_unWeaponHash = 0x16f4;
   constexpr ptrdiff_t m_bInBuyZone = 0x16f8;
   constexpr ptrdiff_t m_bPreviouslyInBuyZone = 0x16f9;
   constexpr ptrdiff_t m_aimPunchAngle = 0x16fc;
   constexpr ptrdiff_t m_aimPunchAngleVel = 0x1708;
   constexpr ptrdiff_t m_aimPunchTickBase = 0x1714;
   constexpr ptrdiff_t m_aimPunchTickFraction = 0x1718;
   constexpr ptrdiff_t m_aimPunchCache = 0x1720;
   constexpr ptrdiff_t m_bInLanding = 0x1740;
   constexpr ptrdiff_t m_flLandingTime = 0x1744;
   constexpr ptrdiff_t m_bInHostageRescueZone = 0x1748;
   constexpr ptrdiff_t m_bInBombZone = 0x1749;
   constexpr ptrdiff_t m_bIsBuyMenuOpen = 0x174a;
   constexpr ptrdiff_t m_flTimeOfLastInjury = 0x174c;
   constexpr ptrdiff_t m_flNextSprayDecalTime = 0x1750;
   constexpr ptrdiff_t m_iRetakesOffering = 0x1868;
   constexpr ptrdiff_t m_iRetakesOfferingCard = 0x186c;
   constexpr ptrdiff_t m_bRetakesHasDefuseKit = 0x1870;
   constexpr ptrdiff_t m_bRetakesMVPLastRound = 0x1871;
   constexpr ptrdiff_t m_iRetakesMVPBoostItem = 0x1874;
   constexpr ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1878;
   constexpr ptrdiff_t m_bNeedToReApplyGloves = 0x1898;
   constexpr ptrdiff_t m_EconGloves = 0x18a0;
   constexpr ptrdiff_t m_bMustSyncRagdollState = 0x1ce8;
   constexpr ptrdiff_t m_nRagdollDamageBone = 0x1cec;
   constexpr ptrdiff_t m_vRagdollDamageForce = 0x1cf0;
   constexpr ptrdiff_t m_vRagdollDamagePosition = 0x1cfc;
   constexpr ptrdiff_t m_szRagdollDamageWeaponName = 0x1d08;
   constexpr ptrdiff_t m_bRagdollDamageHeadshot = 0x1d48;
   constexpr ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2288;
   constexpr ptrdiff_t m_lastLandTime = 0x228c;
   constexpr ptrdiff_t m_bOnGroundLastTick = 0x2290;
   constexpr ptrdiff_t m_qDeathEyeAngles = 0x22ac;
   constexpr ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x22b8;

}

namespace C_Hostage {

   constexpr ptrdiff_t m_entitySpottedState = 0x10a8;
   constexpr ptrdiff_t m_leader = 0x10c0;
   constexpr ptrdiff_t m_reuseTimer = 0x10c8;
   constexpr ptrdiff_t m_vel = 0x10e0;
   constexpr ptrdiff_t m_isRescued = 0x10ec;
   constexpr ptrdiff_t m_jumpedThisFrame = 0x10ed;
   constexpr ptrdiff_t m_nHostageState = 0x10f0;
   constexpr ptrdiff_t m_bHandsHaveBeenCut = 0x10f4;
   constexpr ptrdiff_t m_hHostageGrabber = 0x10f8;
   constexpr ptrdiff_t m_fLastGrabTime = 0x10fc;
   constexpr ptrdiff_t m_vecGrabbedPos = 0x1100;
   constexpr ptrdiff_t m_flRescueStartTime = 0x110c;
   constexpr ptrdiff_t m_flGrabSuccessTime = 0x1110;
   constexpr ptrdiff_t m_flDropStartTime = 0x1114;
   constexpr ptrdiff_t m_flDeadOrRescuedTime = 0x1118;
   constexpr ptrdiff_t m_blinkTimer = 0x1120;
   constexpr ptrdiff_t m_lookAt = 0x1138;
   constexpr ptrdiff_t m_lookAroundTimer = 0x1148;
   constexpr ptrdiff_t m_isInit = 0x1160;
   constexpr ptrdiff_t m_eyeAttachment = 0x1161;
   constexpr ptrdiff_t m_chestAttachment = 0x1162;
   constexpr ptrdiff_t m_pPredictionOwner = 0x1168;
   constexpr ptrdiff_t m_fNewestAlphaThinkTime = 0x1170;

}

namespace C_CSGO_PreviewPlayer {

   constexpr ptrdiff_t m_animgraph = 0x22c0;
   constexpr ptrdiff_t m_animgraphCharacterModeString = 0x22c8;
   constexpr ptrdiff_t m_flInitialModelScale = 0x22d0;

}

namespace CEntityIdentity {

   constexpr ptrdiff_t m_nameStringableIndex = 0x14;
   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_designerName = 0x20;
   constexpr ptrdiff_t m_flags = 0x30;
   constexpr ptrdiff_t m_worldGroupId = 0x38;
   constexpr ptrdiff_t m_fDataObjectTypes = 0x3c;
   constexpr ptrdiff_t m_PathIndex = 0x40;
   constexpr ptrdiff_t m_pPrev = 0x58;
   constexpr ptrdiff_t m_pNext = 0x60;
   constexpr ptrdiff_t m_pPrevByClass = 0x68;
   constexpr ptrdiff_t m_pNextByClass = 0x70;

}

namespace CEntityInstance {

   constexpr ptrdiff_t m_iszPrivateVScripts = 0x8;
   constexpr ptrdiff_t m_pEntity = 0x10;
   constexpr ptrdiff_t m_CScriptComponent = 0x28;

}

namespace CScriptComponent {

   constexpr ptrdiff_t m_scriptClassName = 0x30;

}

namespace CBodyComponent {

   constexpr ptrdiff_t m_pSceneNode = 0x8;
   constexpr ptrdiff_t __m_pChainEntity = 0x20;

}

namespace CBodyComponentPoint {

   constexpr ptrdiff_t m_sceneNode = 0x50;
   constexpr ptrdiff_t __m_pChainEntity = 0x1a0;

}

namespace CBodyComponentSkeletonInstance {

   constexpr ptrdiff_t m_skeletonInstance = 0x50;
   constexpr ptrdiff_t __m_pChainEntity = 0x440;

}

namespace CHitboxComponent {

   constexpr ptrdiff_t m_bvDisabledHitGroups = 0x24;

}

namespace CLightComponent {

   constexpr ptrdiff_t __m_pChainEntity = 0x48;
   constexpr ptrdiff_t m_Color = 0x85;
   constexpr ptrdiff_t m_SecondaryColor = 0x89;
   constexpr ptrdiff_t m_flBrightness = 0x90;
   constexpr ptrdiff_t m_flBrightnessScale = 0x94;
   constexpr ptrdiff_t m_flBrightnessMult = 0x98;
   constexpr ptrdiff_t m_flRange = 0x9c;
   constexpr ptrdiff_t m_flFalloff = 0xa0;
   constexpr ptrdiff_t m_flAttenuation0 = 0xa4;
   constexpr ptrdiff_t m_flAttenuation1 = 0xa8;
   constexpr ptrdiff_t m_flAttenuation2 = 0xac;
   constexpr ptrdiff_t m_flTheta = 0xb0;
   constexpr ptrdiff_t m_flPhi = 0xb4;
   constexpr ptrdiff_t m_hLightCookie = 0xb8;
   constexpr ptrdiff_t m_nCascades = 0xc0;
   constexpr ptrdiff_t m_nCastShadows = 0xc4;
   constexpr ptrdiff_t m_nShadowWidth = 0xc8;
   constexpr ptrdiff_t m_nShadowHeight = 0xcc;
   constexpr ptrdiff_t m_bRenderDiffuse = 0xd0;
   constexpr ptrdiff_t m_nRenderSpecular = 0xd4;
   constexpr ptrdiff_t m_bRenderTransmissive = 0xd8;
   constexpr ptrdiff_t m_flOrthoLightWidth = 0xdc;
   constexpr ptrdiff_t m_flOrthoLightHeight = 0xe0;
   constexpr ptrdiff_t m_nStyle = 0xe4;
   constexpr ptrdiff_t m_Pattern = 0xe8;
   constexpr ptrdiff_t m_nCascadeRenderStaticObjects = 0xf0;
   constexpr ptrdiff_t m_flShadowCascadeCrossFade = 0xf4;
   constexpr ptrdiff_t m_flShadowCascadeDistanceFade = 0xf8;
   constexpr ptrdiff_t m_flShadowCascadeDistance0 = 0xfc;
   constexpr ptrdiff_t m_flShadowCascadeDistance1 = 0x100;
   constexpr ptrdiff_t m_flShadowCascadeDistance2 = 0x104;
   constexpr ptrdiff_t m_flShadowCascadeDistance3 = 0x108;
   constexpr ptrdiff_t m_nShadowCascadeResolution0 = 0x10c;
   constexpr ptrdiff_t m_nShadowCascadeResolution1 = 0x110;
   constexpr ptrdiff_t m_nShadowCascadeResolution2 = 0x114;
   constexpr ptrdiff_t m_nShadowCascadeResolution3 = 0x118;
   constexpr ptrdiff_t m_bUsesBakedShadowing = 0x11c;
   constexpr ptrdiff_t m_nShadowPriority = 0x120;
   constexpr ptrdiff_t m_nBakedShadowIndex = 0x124;
   constexpr ptrdiff_t m_bRenderToCubemaps = 0x128;
   constexpr ptrdiff_t m_LightGroups = 0x130;
   constexpr ptrdiff_t m_nDirectLight = 0x138;
   constexpr ptrdiff_t m_nIndirectLight = 0x13c;
   constexpr ptrdiff_t m_flFadeMinDist = 0x140;
   constexpr ptrdiff_t m_flFadeMaxDist = 0x144;
   constexpr ptrdiff_t m_flShadowFadeMinDist = 0x148;
   constexpr ptrdiff_t m_flShadowFadeMaxDist = 0x14c;
   constexpr ptrdiff_t m_bEnabled = 0x150;
   constexpr ptrdiff_t m_bFlicker = 0x151;
   constexpr ptrdiff_t m_bPrecomputedFieldsValid = 0x152;
   constexpr ptrdiff_t m_vPrecomputedBoundsMins = 0x154;
   constexpr ptrdiff_t m_vPrecomputedBoundsMaxs = 0x160;
   constexpr ptrdiff_t m_vPrecomputedOBBOrigin = 0x16c;
   constexpr ptrdiff_t m_vPrecomputedOBBAngles = 0x178;
   constexpr ptrdiff_t m_vPrecomputedOBBExtent = 0x184;
   constexpr ptrdiff_t m_flPrecomputedMaxRange = 0x190;
   constexpr ptrdiff_t m_nFogLightingMode = 0x194;
   constexpr ptrdiff_t m_flFogContributionStength = 0x198;
   constexpr ptrdiff_t m_flNearClipPlane = 0x19c;
   constexpr ptrdiff_t m_SkyColor = 0x1a0;
   constexpr ptrdiff_t m_flSkyIntensity = 0x1a4;
   constexpr ptrdiff_t m_SkyAmbientBounce = 0x1a8;
   constexpr ptrdiff_t m_bUseSecondaryColor = 0x1ac;
   constexpr ptrdiff_t m_bMixedShadows = 0x1ad;
   constexpr ptrdiff_t m_flLightStyleStartTime = 0x1b0;
   constexpr ptrdiff_t m_flCapsuleLength = 0x1b4;
   constexpr ptrdiff_t m_flMinRoughness = 0x1b8;

}

namespace CRenderComponent {

   constexpr ptrdiff_t __m_pChainEntity = 0x10;
   constexpr ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
   constexpr ptrdiff_t m_nSplitscreenFlags = 0x54;
   constexpr ptrdiff_t m_bEnableRendering = 0x60;
   constexpr ptrdiff_t m_bInterpolationReadyToDraw = 0xb0;

}

namespace CBuoyancyHelper {

   constexpr ptrdiff_t m_flFluidDensity = 0x18;

}

namespace C_CommandContext {

   constexpr ptrdiff_t needsprocessing = 0x0;
   constexpr ptrdiff_t command_number = 0x78;

}

namespace ViewAngleServerChange_t {

   constexpr ptrdiff_t nType = 0x30;
   constexpr ptrdiff_t qAngle = 0x34;
   constexpr ptrdiff_t nIndex = 0x40;

}

namespace audioparams_t {

   constexpr ptrdiff_t localSound = 0x8;
   constexpr ptrdiff_t soundscapeIndex = 0x68;
   constexpr ptrdiff_t localBits = 0x6c;
   constexpr ptrdiff_t soundscapeEntityListIndex = 0x70;
   constexpr ptrdiff_t soundEventHash = 0x74;

}

namespace CPlayer_CameraServices {

   constexpr ptrdiff_t m_vecCsViewPunchAngle = 0x40;
   constexpr ptrdiff_t m_nCsViewPunchAngleTick = 0x4c;
   constexpr ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50;
   constexpr ptrdiff_t m_PlayerFog = 0x58;
   constexpr ptrdiff_t m_hColorCorrectionCtrl = 0x98;
   constexpr ptrdiff_t m_hViewEntity = 0x9c;
   constexpr ptrdiff_t m_hTonemapController = 0xa0;
   constexpr ptrdiff_t m_audio = 0xa8;
   constexpr ptrdiff_t m_PostProcessingVolumes = 0x120;
   constexpr ptrdiff_t m_flOldPlayerZ = 0x138;
   constexpr ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13c;
   constexpr ptrdiff_t m_CurrentFog = 0x140;
   constexpr ptrdiff_t m_hOldFogController = 0x1a8;
   constexpr ptrdiff_t m_bOverrideFogColor = 0x1ac;
   constexpr ptrdiff_t m_OverrideFogColor = 0x1b1;
   constexpr ptrdiff_t m_bOverrideFogStartEnd = 0x1c5;
   constexpr ptrdiff_t m_fOverrideFogStart = 0x1cc;
   constexpr ptrdiff_t m_fOverrideFogEnd = 0x1e0;
   constexpr ptrdiff_t m_hActivePostProcessingVolume = 0x1f4;
   constexpr ptrdiff_t m_angDemoViewAngles = 0x1f8;

}

namespace CPlayer_MovementServices {

   constexpr ptrdiff_t m_nImpulse = 0x40;
   constexpr ptrdiff_t m_nButtons = 0x48;
   constexpr ptrdiff_t m_nQueuedButtonDownMask = 0x68;
   constexpr ptrdiff_t m_nQueuedButtonChangeMask = 0x70;
   constexpr ptrdiff_t m_nButtonDoublePressed = 0x78;
   constexpr ptrdiff_t m_pButtonPressedCmdNumber = 0x80;
   constexpr ptrdiff_t m_nLastCommandNumberProcessed = 0x180;
   constexpr ptrdiff_t m_nToggleButtonDownMask = 0x188;
   constexpr ptrdiff_t m_flMaxspeed = 0x190;
   constexpr ptrdiff_t m_arrForceSubtickMoveWhen = 0x194;
   constexpr ptrdiff_t m_flForwardMove = 0x1a4;
   constexpr ptrdiff_t m_flLeftMove = 0x1a8;
   constexpr ptrdiff_t m_flUpMove = 0x1ac;
   constexpr ptrdiff_t m_vecLastMovementImpulses = 0x1b0;
   constexpr ptrdiff_t m_vecOldViewAngles = 0x1bc;

}

namespace CPlayer_MovementServices_Humanoid {

   constexpr ptrdiff_t m_flStepSoundTime = 0x1d0;
   constexpr ptrdiff_t m_flFallVelocity = 0x1d4;
   constexpr ptrdiff_t m_bInCrouch = 0x1d8;
   constexpr ptrdiff_t m_nCrouchState = 0x1dc;
   constexpr ptrdiff_t m_flCrouchTransitionStartTime = 0x1e0;
   constexpr ptrdiff_t m_bDucked = 0x1e4;
   constexpr ptrdiff_t m_bDucking = 0x1e5;
   constexpr ptrdiff_t m_bInDuckJump = 0x1e6;
   constexpr ptrdiff_t m_groundNormal = 0x1e8;
   constexpr ptrdiff_t m_flSurfaceFriction = 0x1f4;
   constexpr ptrdiff_t m_surfaceProps = 0x1f8;
   constexpr ptrdiff_t m_nStepside = 0x208;

}

namespace CPlayer_ObserverServices {

   constexpr ptrdiff_t m_iObserverMode = 0x40;
   constexpr ptrdiff_t m_hObserverTarget = 0x44;
   constexpr ptrdiff_t m_iObserverLastMode = 0x48;
   constexpr ptrdiff_t m_bForcedObserverMode = 0x4c;
   constexpr ptrdiff_t m_flObserverChaseDistance = 0x50;
   constexpr ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54;

}

namespace CPlayer_WeaponServices {

   constexpr ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40;
   constexpr ptrdiff_t m_hMyWeapons = 0x48;
   constexpr ptrdiff_t m_hActiveWeapon = 0x60;
   constexpr ptrdiff_t m_hLastWeapon = 0x64;
   constexpr ptrdiff_t m_iAmmo = 0x68;

}

namespace CBodyComponentBaseAnimGraph {

   constexpr ptrdiff_t m_animationController = 0x470;
   constexpr ptrdiff_t __m_pChainEntity = 0x18b0;

}

namespace EntityRenderAttribute_t {

   constexpr ptrdiff_t m_ID = 0x30;
   constexpr ptrdiff_t m_Values = 0x34;

}

namespace ActiveModelConfig_t {

   constexpr ptrdiff_t m_Handle = 0x28;
   constexpr ptrdiff_t m_Name = 0x30;
   constexpr ptrdiff_t m_AssociatedEntities = 0x38;
   constexpr ptrdiff_t m_AssociatedEntityNames = 0x50;

}

namespace CBodyComponentBaseModelEntity {

   constexpr ptrdiff_t __m_pChainEntity = 0x470;

}

namespace CGameSceneNodeHandle {

   constexpr ptrdiff_t m_hOwner = 0x8;
   constexpr ptrdiff_t m_name = 0xc;

}

namespace CGameSceneNode {

   constexpr ptrdiff_t m_nodeToWorld = 0x10;
   constexpr ptrdiff_t m_pOwner = 0x30;
   constexpr ptrdiff_t m_pParent = 0x38;
   constexpr ptrdiff_t m_pChild = 0x40;
   constexpr ptrdiff_t m_pNextSibling = 0x48;
   constexpr ptrdiff_t m_hParent = 0x70;
   constexpr ptrdiff_t m_vecOrigin = 0x80;
   constexpr ptrdiff_t m_angRotation = 0xb8;
   constexpr ptrdiff_t m_flScale = 0xc4;
   constexpr ptrdiff_t m_vecAbsOrigin = 0xc8;
   constexpr ptrdiff_t m_angAbsRotation = 0xd4;
   constexpr ptrdiff_t m_flAbsScale = 0xe0;
   constexpr ptrdiff_t m_nParentAttachmentOrBone = 0xe4;
   constexpr ptrdiff_t m_bDebugAbsOriginChanges = 0xe6;
   constexpr ptrdiff_t m_bDormant = 0xe7;
   constexpr ptrdiff_t m_bForceParentToBeNetworked = 0xe8;
   constexpr ptrdiff_t m_bDirtyHierarchy = 0x0;
   constexpr ptrdiff_t m_bDirtyBoneMergeInfo = 0x0;
   constexpr ptrdiff_t m_bNetworkedPositionChanged = 0x0;
   constexpr ptrdiff_t m_bNetworkedAnglesChanged = 0x0;
   constexpr ptrdiff_t m_bNetworkedScaleChanged = 0x0;
   constexpr ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0;
   constexpr ptrdiff_t m_bNotifyBoneTransformsChanged = 0x0;
   constexpr ptrdiff_t m_bBoneMergeFlex = 0x0;
   constexpr ptrdiff_t m_nLatchAbsOrigin = 0x0;
   constexpr ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0;
   constexpr ptrdiff_t m_nHierarchicalDepth = 0xeb;
   constexpr ptrdiff_t m_nHierarchyType = 0xec;
   constexpr ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xed;
   constexpr ptrdiff_t m_name = 0xf0;
   constexpr ptrdiff_t m_hierarchyAttachName = 0x130;
   constexpr ptrdiff_t m_flZOffset = 0x134;
   constexpr ptrdiff_t m_vRenderOrigin = 0x138;

}

namespace CNetworkedSequenceOperation {

   constexpr ptrdiff_t m_hSequence = 0x8;
   constexpr ptrdiff_t m_flPrevCycle = 0xc;
   constexpr ptrdiff_t m_flCycle = 0x10;
   constexpr ptrdiff_t m_flWeight = 0x14;
   constexpr ptrdiff_t m_bSequenceChangeNetworked = 0x1c;
   constexpr ptrdiff_t m_bDiscontinuity = 0x1d;
   constexpr ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;
   constexpr ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;

}

namespace CModelState {

   constexpr ptrdiff_t m_hModel = 0xa0;
   constexpr ptrdiff_t m_ModelName = 0xa8;
   constexpr ptrdiff_t m_bClientClothCreationSuppressed = 0xe8;
   constexpr ptrdiff_t m_MeshGroupMask = 0x180;
   constexpr ptrdiff_t m_nIdealMotionType = 0x222;
   constexpr ptrdiff_t m_nForceLOD = 0x223;
   constexpr ptrdiff_t m_nClothUpdateFlags = 0x224;

}

namespace CSkeletonInstance {

   constexpr ptrdiff_t m_modelState = 0x160;
   constexpr ptrdiff_t m_bIsAnimationEnabled = 0x390;
   constexpr ptrdiff_t m_bUseParentRenderBounds = 0x391;
   constexpr ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392;
   constexpr ptrdiff_t m_bDirtyMotionType = 0x0;
   constexpr ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
   constexpr ptrdiff_t m_materialGroup = 0x394;
   constexpr ptrdiff_t m_nHitboxSet = 0x398;

}

namespace IntervalTimer {

   constexpr ptrdiff_t m_timestamp = 0x8;
   constexpr ptrdiff_t m_nWorldGroupId = 0xc;

}

namespace CountdownTimer {

   constexpr ptrdiff_t m_duration = 0x8;
   constexpr ptrdiff_t m_timestamp = 0xc;
   constexpr ptrdiff_t m_timescale = 0x10;
   constexpr ptrdiff_t m_nWorldGroupId = 0x14;

}

namespace EngineCountdownTimer {

   constexpr ptrdiff_t m_duration = 0x8;
   constexpr ptrdiff_t m_timestamp = 0xc;
   constexpr ptrdiff_t m_timescale = 0x10;

}

namespace CTimeline {

   constexpr ptrdiff_t m_flValues = 0x10;
   constexpr ptrdiff_t m_nValueCounts = 0x110;
   constexpr ptrdiff_t m_nBucketCount = 0x210;
   constexpr ptrdiff_t m_flInterval = 0x214;
   constexpr ptrdiff_t m_flFinalValue = 0x218;
   constexpr ptrdiff_t m_nCompressionType = 0x21c;
   constexpr ptrdiff_t m_bStopped = 0x220;

}

namespace CAnimGraphNetworkedVariables {

   constexpr ptrdiff_t m_PredNetBoolVariables = 0x8;
   constexpr ptrdiff_t m_PredNetByteVariables = 0x20;
   constexpr ptrdiff_t m_PredNetUInt16Variables = 0x38;
   constexpr ptrdiff_t m_PredNetIntVariables = 0x50;
   constexpr ptrdiff_t m_PredNetUInt32Variables = 0x68;
   constexpr ptrdiff_t m_PredNetUInt64Variables = 0x80;
   constexpr ptrdiff_t m_PredNetFloatVariables = 0x98;
   constexpr ptrdiff_t m_PredNetVectorVariables = 0xb0;
   constexpr ptrdiff_t m_PredNetQuaternionVariables = 0xc8;
   constexpr ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xe0;
   constexpr ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0xf8;
   constexpr ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x110;
   constexpr ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x128;
   constexpr ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x140;
   constexpr ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x158;
   constexpr ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x170;
   constexpr ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x188;
   constexpr ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1a0;
   constexpr ptrdiff_t m_nBoolVariablesCount = 0x1b8;
   constexpr ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1bc;
   constexpr ptrdiff_t m_nRandomSeedOffset = 0x1c0;
   constexpr ptrdiff_t m_flLastTeleportTime = 0x1c4;

}

namespace C_BaseEntity {

   constexpr ptrdiff_t m_CBodyComponent = 0x30;
   constexpr ptrdiff_t m_NetworkTransmitComponent = 0x38;
   constexpr ptrdiff_t m_nLastThinkTick = 0x308;
   constexpr ptrdiff_t m_pGameSceneNode = 0x310;
   constexpr ptrdiff_t m_pRenderComponent = 0x318;
   constexpr ptrdiff_t m_pCollision = 0x320;
   constexpr ptrdiff_t m_iMaxHealth = 0x328;
   constexpr ptrdiff_t m_iHealth = 0x32c;
   constexpr ptrdiff_t m_lifeState = 0x330;
   constexpr ptrdiff_t m_bTakesDamage = 0x331;
   constexpr ptrdiff_t m_nTakeDamageFlags = 0x334;
   constexpr ptrdiff_t m_ubInterpolationFrame = 0x338;
   constexpr ptrdiff_t m_hSceneObjectController = 0x33c;
   constexpr ptrdiff_t m_nNoInterpolationTick = 0x340;
   constexpr ptrdiff_t m_nVisibilityNoInterpolationTick = 0x344;
   constexpr ptrdiff_t m_flProxyRandomValue = 0x348;
   constexpr ptrdiff_t m_iEFlags = 0x34c;
   constexpr ptrdiff_t m_nWaterType = 0x350;
   constexpr ptrdiff_t m_bInterpolateEvenWithNoModel = 0x351;
   constexpr ptrdiff_t m_bPredictionEligible = 0x352;
   constexpr ptrdiff_t m_bApplyLayerMatchIDToModel = 0x353;
   constexpr ptrdiff_t m_tokLayerMatchID = 0x354;
   constexpr ptrdiff_t m_nSubclassID = 0x358;
   constexpr ptrdiff_t m_nSimulationTick = 0x368;
   constexpr ptrdiff_t m_iCurrentThinkContext = 0x36c;
   constexpr ptrdiff_t m_aThinkFunctions = 0x370;
   constexpr ptrdiff_t m_flAnimTime = 0x388;
   constexpr ptrdiff_t m_flSimulationTime = 0x38c;
   constexpr ptrdiff_t m_nSceneObjectOverrideFlags = 0x390;
   constexpr ptrdiff_t m_bHasSuccessfullyInterpolated = 0x391;
   constexpr ptrdiff_t m_bHasAddedVarsToInterpolation = 0x392;
   constexpr ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393;
   constexpr ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x394;
   constexpr ptrdiff_t m_ListEntry = 0x39c;
   constexpr ptrdiff_t m_flCreateTime = 0x3b4;
   constexpr ptrdiff_t m_flSpeed = 0x3b8;
   constexpr ptrdiff_t m_EntClientFlags = 0x3bc;
   constexpr ptrdiff_t m_bClientSideRagdoll = 0x3be;
   constexpr ptrdiff_t m_iTeamNum = 0x3bf;
   constexpr ptrdiff_t m_spawnflags = 0x3c0;
   constexpr ptrdiff_t m_nNextThinkTick = 0x3c4;
   constexpr ptrdiff_t m_fFlags = 0x3c8;
   constexpr ptrdiff_t m_vecAbsVelocity = 0x3cc;
   constexpr ptrdiff_t m_vecVelocity = 0x3d8;
   constexpr ptrdiff_t m_vecBaseVelocity = 0x408;
   constexpr ptrdiff_t m_hEffectEntity = 0x414;
   constexpr ptrdiff_t m_hOwnerEntity = 0x418;
   constexpr ptrdiff_t m_MoveCollide = 0x41c;
   constexpr ptrdiff_t m_MoveType = 0x41d;
   constexpr ptrdiff_t m_flWaterLevel = 0x420;
   constexpr ptrdiff_t m_fEffects = 0x424;
   constexpr ptrdiff_t m_hGroundEntity = 0x428;
   constexpr ptrdiff_t m_flFriction = 0x42c;
   constexpr ptrdiff_t m_flElasticity = 0x430;
   constexpr ptrdiff_t m_flGravityScale = 0x434;
   constexpr ptrdiff_t m_flTimeScale = 0x438;
   constexpr ptrdiff_t m_bSimulatedEveryTick = 0x43c;
   constexpr ptrdiff_t m_bAnimatedEveryTick = 0x43d;
   constexpr ptrdiff_t m_flNavIgnoreUntilTime = 0x440;
   constexpr ptrdiff_t m_hThink = 0x444;
   constexpr ptrdiff_t m_fBBoxVisFlags = 0x450;
   constexpr ptrdiff_t m_bPredictable = 0x451;
   constexpr ptrdiff_t m_bRenderWithViewModels = 0x452;
   constexpr ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x454;
   constexpr ptrdiff_t m_nFirstPredictableCommand = 0x458;
   constexpr ptrdiff_t m_nLastPredictableCommand = 0x45c;
   constexpr ptrdiff_t m_hOldMoveParent = 0x460;
   constexpr ptrdiff_t m_Particles = 0x468;
   constexpr ptrdiff_t m_vecPredictedScriptFloats = 0x490;
   constexpr ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4a8;
   constexpr ptrdiff_t m_nNextScriptVarRecordID = 0x4d8;
   constexpr ptrdiff_t m_vecAngVelocity = 0x4e8;
   constexpr ptrdiff_t m_DataChangeEventRef = 0x4f4;
   constexpr ptrdiff_t m_dependencies = 0x4f8;
   constexpr ptrdiff_t m_nCreationTick = 0x510;
   constexpr ptrdiff_t m_bAnimTimeChanged = 0x529;
   constexpr ptrdiff_t m_bSimulationTimeChanged = 0x52a;
   constexpr ptrdiff_t m_sUniqueHammerID = 0x538;

}

namespace C_BaseFlex::Emphasized_Phoneme {

   constexpr ptrdiff_t m_sClassName = 0x0;
   constexpr ptrdiff_t m_flAmount = 0x18;
   constexpr ptrdiff_t m_bRequired = 0x1c;
   constexpr ptrdiff_t m_bBasechecked = 0x1d;
   constexpr ptrdiff_t m_bValid = 0x1e;

}

namespace C_ColorCorrection {

   constexpr ptrdiff_t m_vecOrigin = 0x540;
   constexpr ptrdiff_t m_MinFalloff = 0x54c;
   constexpr ptrdiff_t m_MaxFalloff = 0x550;
   constexpr ptrdiff_t m_flFadeInDuration = 0x554;
   constexpr ptrdiff_t m_flFadeOutDuration = 0x558;
   constexpr ptrdiff_t m_flMaxWeight = 0x55c;
   constexpr ptrdiff_t m_flCurWeight = 0x560;
   constexpr ptrdiff_t m_netlookupFilename = 0x564;
   constexpr ptrdiff_t m_bEnabled = 0x764;
   constexpr ptrdiff_t m_bMaster = 0x765;
   constexpr ptrdiff_t m_bClientSide = 0x766;
   constexpr ptrdiff_t m_bExclusive = 0x767;
   constexpr ptrdiff_t m_bEnabledOnClient = 0x768;
   constexpr ptrdiff_t m_flCurWeightOnClient = 0x76c;
   constexpr ptrdiff_t m_bFadingIn = 0x770;
   constexpr ptrdiff_t m_flFadeStartWeight = 0x774;
   constexpr ptrdiff_t m_flFadeStartTime = 0x778;
   constexpr ptrdiff_t m_flFadeDuration = 0x77c;

}

namespace C_EnvWindClientside {

   constexpr ptrdiff_t m_EnvWindShared = 0x540;

}

namespace C_EntityFlame {

   constexpr ptrdiff_t m_hEntAttached = 0x540;
   constexpr ptrdiff_t m_hOldAttached = 0x568;
   constexpr ptrdiff_t m_bCheapEffect = 0x56c;

}

namespace CProjectedTextureBase {

   constexpr ptrdiff_t m_hTargetEntity = 0xc;
   constexpr ptrdiff_t m_bState = 0x10;
   constexpr ptrdiff_t m_bAlwaysUpdate = 0x11;
   constexpr ptrdiff_t m_flLightFOV = 0x14;
   constexpr ptrdiff_t m_bEnableShadows = 0x18;
   constexpr ptrdiff_t m_bSimpleProjection = 0x19;
   constexpr ptrdiff_t m_bLightOnlyTarget = 0x1a;
   constexpr ptrdiff_t m_bLightWorld = 0x1b;
   constexpr ptrdiff_t m_bCameraSpace = 0x1c;
   constexpr ptrdiff_t m_flBrightnessScale = 0x20;
   constexpr ptrdiff_t m_LightColor = 0x24;
   constexpr ptrdiff_t m_flIntensity = 0x28;
   constexpr ptrdiff_t m_flLinearAttenuation = 0x2c;
   constexpr ptrdiff_t m_flQuadraticAttenuation = 0x30;
   constexpr ptrdiff_t m_bVolumetric = 0x34;
   constexpr ptrdiff_t m_flVolumetricIntensity = 0x38;
   constexpr ptrdiff_t m_flNoiseStrength = 0x3c;
   constexpr ptrdiff_t m_flFlashlightTime = 0x40;
   constexpr ptrdiff_t m_nNumPlanes = 0x44;
   constexpr ptrdiff_t m_flPlaneOffset = 0x48;
   constexpr ptrdiff_t m_flColorTransitionTime = 0x4c;
   constexpr ptrdiff_t m_flAmbient = 0x50;
   constexpr ptrdiff_t m_SpotlightTextureName = 0x54;
   constexpr ptrdiff_t m_nSpotlightTextureFrame = 0x254;
   constexpr ptrdiff_t m_nShadowQuality = 0x258;
   constexpr ptrdiff_t m_flNearZ = 0x25c;
   constexpr ptrdiff_t m_flFarZ = 0x260;
   constexpr ptrdiff_t m_flProjectionSize = 0x264;
   constexpr ptrdiff_t m_flRotation = 0x268;
   constexpr ptrdiff_t m_bFlipHorizontal = 0x26c;

}

namespace C_BaseFire {

   constexpr ptrdiff_t m_flScale = 0x540;
   constexpr ptrdiff_t m_flStartScale = 0x544;
   constexpr ptrdiff_t m_flScaleTime = 0x548;
   constexpr ptrdiff_t m_nFlags = 0x54c;

}

namespace C_FireSmoke {

   constexpr ptrdiff_t m_nFlameModelIndex = 0x550;
   constexpr ptrdiff_t m_nFlameFromAboveModelIndex = 0x554;
   constexpr ptrdiff_t m_flScaleRegister = 0x558;
   constexpr ptrdiff_t m_flScaleStart = 0x55c;
   constexpr ptrdiff_t m_flScaleEnd = 0x560;
   constexpr ptrdiff_t m_flScaleTimeStart = 0x564;
   constexpr ptrdiff_t m_flScaleTimeEnd = 0x568;
   constexpr ptrdiff_t m_flChildFlameSpread = 0x56c;
   constexpr ptrdiff_t m_flClipPerc = 0x580;
   constexpr ptrdiff_t m_bClipTested = 0x584;
   constexpr ptrdiff_t m_bFadingOut = 0x585;
   constexpr ptrdiff_t m_tParticleSpawn = 0x588;
   constexpr ptrdiff_t m_pFireOverlay = 0x590;

}

namespace C_RopeKeyframe::CPhysicsDelegate {

   constexpr ptrdiff_t m_pKeyframe = 0x8;

}

namespace C_SceneEntity::QueuedEvents_t {

   constexpr ptrdiff_t starttime = 0x0;

}

namespace CFlashlightEffect {

   constexpr ptrdiff_t m_bIsOn = 0x10;
   constexpr ptrdiff_t m_bMuzzleFlashEnabled = 0x20;
   constexpr ptrdiff_t m_flMuzzleFlashBrightness = 0x24;
   constexpr ptrdiff_t m_quatMuzzleFlashOrientation = 0x30;
   constexpr ptrdiff_t m_vecMuzzleFlashOrigin = 0x40;
   constexpr ptrdiff_t m_flFov = 0x4c;
   constexpr ptrdiff_t m_flFarZ = 0x50;
   constexpr ptrdiff_t m_flLinearAtten = 0x54;
   constexpr ptrdiff_t m_bCastsShadows = 0x58;
   constexpr ptrdiff_t m_flCurrentPullBackDist = 0x5c;
   constexpr ptrdiff_t m_FlashlightTexture = 0x60;
   constexpr ptrdiff_t m_MuzzleFlashTexture = 0x68;
   constexpr ptrdiff_t m_textureName = 0x70;

}

namespace CInterpolatedValue {

   constexpr ptrdiff_t m_flStartTime = 0x0;
   constexpr ptrdiff_t m_flEndTime = 0x4;
   constexpr ptrdiff_t m_flStartValue = 0x8;
   constexpr ptrdiff_t m_flEndValue = 0xc;
   constexpr ptrdiff_t m_nInterpType = 0x10;

}

namespace CGlowSprite {

   constexpr ptrdiff_t m_vColor = 0x0;
   constexpr ptrdiff_t m_flHorzSize = 0xc;
   constexpr ptrdiff_t m_flVertSize = 0x10;
   constexpr ptrdiff_t m_hMaterial = 0x18;

}

namespace CGlowOverlay {

   constexpr ptrdiff_t m_vPos = 0x8;
   constexpr ptrdiff_t m_bDirectional = 0x14;
   constexpr ptrdiff_t m_vDirection = 0x18;
   constexpr ptrdiff_t m_bInSky = 0x24;
   constexpr ptrdiff_t m_skyObstructionScale = 0x28;
   constexpr ptrdiff_t m_Sprites = 0x30;
   constexpr ptrdiff_t m_nSprites = 0xb0;
   constexpr ptrdiff_t m_flProxyRadius = 0xb4;
   constexpr ptrdiff_t m_flHDRColorScale = 0xb8;
   constexpr ptrdiff_t m_flGlowObstructionScale = 0xbc;
   constexpr ptrdiff_t m_bCacheGlowObstruction = 0xc0;
   constexpr ptrdiff_t m_bCacheSkyObstruction = 0xc1;
   constexpr ptrdiff_t m_bActivated = 0xc2;
   constexpr ptrdiff_t m_ListIndex = 0xc4;
   constexpr ptrdiff_t m_queryHandle = 0xc8;

}

namespace CSkyboxReference {

   constexpr ptrdiff_t m_worldGroupId = 0x540;
   constexpr ptrdiff_t m_hSkyCamera = 0x544;

}

namespace C_SkyCamera {

   constexpr ptrdiff_t m_skyboxData = 0x540;
   constexpr ptrdiff_t m_skyboxSlotToken = 0x5d0;
   constexpr ptrdiff_t m_bUseAngles = 0x5d4;
   constexpr ptrdiff_t m_pNext = 0x5d8;

}

namespace TimedEvent {

   constexpr ptrdiff_t m_TimeBetweenEvents = 0x0;
   constexpr ptrdiff_t m_fNextEvent = 0x4;

}

namespace VPhysicsCollisionAttribute_t {

   constexpr ptrdiff_t m_nInteractsAs = 0x8;
   constexpr ptrdiff_t m_nInteractsWith = 0x10;
   constexpr ptrdiff_t m_nInteractsExclude = 0x18;
   constexpr ptrdiff_t m_nEntityId = 0x20;
   constexpr ptrdiff_t m_nOwnerId = 0x24;
   constexpr ptrdiff_t m_nHierarchyId = 0x28;
   constexpr ptrdiff_t m_nCollisionGroup = 0x2a;
   constexpr ptrdiff_t m_nCollisionFunctionMask = 0x2b;

}

namespace CCollisionProperty {

   constexpr ptrdiff_t m_collisionAttribute = 0x10;
   constexpr ptrdiff_t m_vecMins = 0x40;
   constexpr ptrdiff_t m_vecMaxs = 0x4c;
   constexpr ptrdiff_t m_usSolidFlags = 0x5a;
   constexpr ptrdiff_t m_nSolidType = 0x5b;
   constexpr ptrdiff_t m_triggerBloat = 0x5c;
   constexpr ptrdiff_t m_nSurroundType = 0x5d;
   constexpr ptrdiff_t m_CollisionGroup = 0x5e;
   constexpr ptrdiff_t m_nEnablePhysics = 0x5f;
   constexpr ptrdiff_t m_flBoundingRadius = 0x60;
   constexpr ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;
   constexpr ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;
   constexpr ptrdiff_t m_vecSurroundingMaxs = 0x7c;
   constexpr ptrdiff_t m_vecSurroundingMins = 0x88;
   constexpr ptrdiff_t m_vCapsuleCenter1 = 0x94;
   constexpr ptrdiff_t m_vCapsuleCenter2 = 0xa0;
   constexpr ptrdiff_t m_flCapsuleRadius = 0xac;

}

namespace CDecalInfo {

   constexpr ptrdiff_t m_flAnimationScale = 0x0;
   constexpr ptrdiff_t m_flAnimationLifeSpan = 0x4;
   constexpr ptrdiff_t m_flPlaceTime = 0x8;
   constexpr ptrdiff_t m_flFadeStartTime = 0xc;
   constexpr ptrdiff_t m_flFadeDuration = 0x10;
   constexpr ptrdiff_t m_nVBSlot = 0x14;
   constexpr ptrdiff_t m_nBoneIndex = 0x18;
   constexpr ptrdiff_t m_pNext = 0x28;
   constexpr ptrdiff_t m_pPrev = 0x30;
   constexpr ptrdiff_t m_nDecalMaterialIndex = 0x90;

}

namespace CEffectData {

   constexpr ptrdiff_t m_vOrigin = 0x8;
   constexpr ptrdiff_t m_vStart = 0x14;
   constexpr ptrdiff_t m_vNormal = 0x20;
   constexpr ptrdiff_t m_vAngles = 0x2c;
   constexpr ptrdiff_t m_hEntity = 0x38;
   constexpr ptrdiff_t m_hOtherEntity = 0x3c;
   constexpr ptrdiff_t m_flScale = 0x40;
   constexpr ptrdiff_t m_flMagnitude = 0x44;
   constexpr ptrdiff_t m_flRadius = 0x48;
   constexpr ptrdiff_t m_nSurfaceProp = 0x4c;
   constexpr ptrdiff_t m_nEffectIndex = 0x50;
   constexpr ptrdiff_t m_nDamageType = 0x58;
   constexpr ptrdiff_t m_nPenetrate = 0x5c;
   constexpr ptrdiff_t m_nMaterial = 0x5e;
   constexpr ptrdiff_t m_nHitBox = 0x60;
   constexpr ptrdiff_t m_nColor = 0x62;
   constexpr ptrdiff_t m_fFlags = 0x63;
   constexpr ptrdiff_t m_nAttachmentIndex = 0x64;
   constexpr ptrdiff_t m_nAttachmentName = 0x68;
   constexpr ptrdiff_t m_iEffectName = 0x6c;
   constexpr ptrdiff_t m_nExplosionType = 0x6e;

}

namespace C_EnvDetailController {

   constexpr ptrdiff_t m_flFadeStartDist = 0x540;
   constexpr ptrdiff_t m_flFadeEndDist = 0x544;

}

namespace C_EnvWindShared {

   constexpr ptrdiff_t m_flStartTime = 0x8;
   constexpr ptrdiff_t m_iWindSeed = 0xc;
   constexpr ptrdiff_t m_iMinWind = 0x10;
   constexpr ptrdiff_t m_iMaxWind = 0x12;
   constexpr ptrdiff_t m_windRadius = 0x14;
   constexpr ptrdiff_t m_iMinGust = 0x18;
   constexpr ptrdiff_t m_iMaxGust = 0x1a;
   constexpr ptrdiff_t m_flMinGustDelay = 0x1c;
   constexpr ptrdiff_t m_flMaxGustDelay = 0x20;
   constexpr ptrdiff_t m_flGustDuration = 0x24;
   constexpr ptrdiff_t m_iGustDirChange = 0x28;
   constexpr ptrdiff_t m_location = 0x2c;
   constexpr ptrdiff_t m_iszGustSound = 0x38;
   constexpr ptrdiff_t m_iWindDir = 0x3c;
   constexpr ptrdiff_t m_flWindSpeed = 0x40;
   constexpr ptrdiff_t m_currentWindVector = 0x44;
   constexpr ptrdiff_t m_CurrentSwayVector = 0x50;
   constexpr ptrdiff_t m_PrevSwayVector = 0x5c;
   constexpr ptrdiff_t m_iInitialWindDir = 0x68;
   constexpr ptrdiff_t m_flInitialWindSpeed = 0x6c;
   constexpr ptrdiff_t m_flVariationTime = 0x70;
   constexpr ptrdiff_t m_flSwayTime = 0x74;
   constexpr ptrdiff_t m_flSimTime = 0x78;
   constexpr ptrdiff_t m_flSwitchTime = 0x7c;
   constexpr ptrdiff_t m_flAveWindSpeed = 0x80;
   constexpr ptrdiff_t m_bGusting = 0x84;
   constexpr ptrdiff_t m_flWindAngleVariation = 0x88;
   constexpr ptrdiff_t m_flWindSpeedVariation = 0x8c;
   constexpr ptrdiff_t m_iEntIndex = 0x90;

}

namespace C_EnvWindShared::WindAveEvent_t {

   constexpr ptrdiff_t m_flStartWindSpeed = 0x0;
   constexpr ptrdiff_t m_flAveWindSpeed = 0x4;

}

namespace C_EnvWindShared::WindVariationEvent_t {

   constexpr ptrdiff_t m_flWindAngleVariation = 0x0;
   constexpr ptrdiff_t m_flWindSpeedVariation = 0x4;

}

namespace shard_model_desc_t {

   constexpr ptrdiff_t m_nModelID = 0x8;
   constexpr ptrdiff_t m_hMaterial = 0x10;
   constexpr ptrdiff_t m_solid = 0x18;
   constexpr ptrdiff_t m_ShatterPanelMode = 0x19;
   constexpr ptrdiff_t m_vecPanelSize = 0x1c;
   constexpr ptrdiff_t m_vecStressPositionA = 0x24;
   constexpr ptrdiff_t m_vecStressPositionB = 0x2c;
   constexpr ptrdiff_t m_vecPanelVertices = 0x38;
   constexpr ptrdiff_t m_flGlassHalfThickness = 0x50;
   constexpr ptrdiff_t m_bHasParent = 0x54;
   constexpr ptrdiff_t m_bParentFrozen = 0x55;
   constexpr ptrdiff_t m_SurfacePropStringToken = 0x58;
   constexpr ptrdiff_t m_LightGroup = 0x5c;

}

namespace CGlowProperty {

   constexpr ptrdiff_t m_fGlowColor = 0x8;
   constexpr ptrdiff_t m_iGlowType = 0x30;
   constexpr ptrdiff_t m_iGlowTeam = 0x34;
   constexpr ptrdiff_t m_nGlowRange = 0x38;
   constexpr ptrdiff_t m_nGlowRangeMin = 0x3c;
   constexpr ptrdiff_t m_glowColorOverride = 0x40;
   constexpr ptrdiff_t m_bFlashing = 0x44;
   constexpr ptrdiff_t m_flGlowTime = 0x48;
   constexpr ptrdiff_t m_flGlowStartTime = 0x4c;
   constexpr ptrdiff_t m_bEligibleForScreenHighlight = 0x50;
   constexpr ptrdiff_t m_bGlowing = 0x51;

}

namespace fogparams_t {

   constexpr ptrdiff_t dirPrimary = 0x8;
   constexpr ptrdiff_t colorPrimary = 0x14;
   constexpr ptrdiff_t colorSecondary = 0x18;
   constexpr ptrdiff_t colorPrimaryLerpTo = 0x1c;
   constexpr ptrdiff_t colorSecondaryLerpTo = 0x20;
   constexpr ptrdiff_t start = 0x24;
   constexpr ptrdiff_t end = 0x28;
   constexpr ptrdiff_t farz = 0x2c;
   constexpr ptrdiff_t maxdensity = 0x30;
   constexpr ptrdiff_t exponent = 0x34;
   constexpr ptrdiff_t HDRColorScale = 0x38;
   constexpr ptrdiff_t skyboxFogFactor = 0x3c;
   constexpr ptrdiff_t skyboxFogFactorLerpTo = 0x40;
   constexpr ptrdiff_t startLerpTo = 0x44;
   constexpr ptrdiff_t endLerpTo = 0x48;
   constexpr ptrdiff_t maxdensityLerpTo = 0x4c;
   constexpr ptrdiff_t lerptime = 0x50;
   constexpr ptrdiff_t duration = 0x54;
   constexpr ptrdiff_t blendtobackground = 0x58;
   constexpr ptrdiff_t scattering = 0x5c;
   constexpr ptrdiff_t locallightscale = 0x60;
   constexpr ptrdiff_t enable = 0x64;
   constexpr ptrdiff_t blend = 0x65;
   constexpr ptrdiff_t m_bNoReflectionFog = 0x66;
   constexpr ptrdiff_t m_bPadding = 0x67;

}

namespace C_fogplayerparams_t {

   constexpr ptrdiff_t m_hCtrl = 0x8;
   constexpr ptrdiff_t m_flTransitionTime = 0xc;
   constexpr ptrdiff_t m_OldColor = 0x10;
   constexpr ptrdiff_t m_flOldStart = 0x14;
   constexpr ptrdiff_t m_flOldEnd = 0x18;
   constexpr ptrdiff_t m_flOldMaxDensity = 0x1c;
   constexpr ptrdiff_t m_flOldHDRColorScale = 0x20;
   constexpr ptrdiff_t m_flOldFarZ = 0x24;
   constexpr ptrdiff_t m_NewColor = 0x28;
   constexpr ptrdiff_t m_flNewStart = 0x2c;
   constexpr ptrdiff_t m_flNewEnd = 0x30;
   constexpr ptrdiff_t m_flNewMaxDensity = 0x34;
   constexpr ptrdiff_t m_flNewHDRColorScale = 0x38;
   constexpr ptrdiff_t m_flNewFarZ = 0x3c;

}

namespace sky3dparams_t {

   constexpr ptrdiff_t scale = 0x8;
   constexpr ptrdiff_t origin = 0xc;
   constexpr ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;
   constexpr ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1c;
   constexpr ptrdiff_t fog = 0x20;
   constexpr ptrdiff_t m_nWorldGroupID = 0x88;

}

namespace PhysicsRagdollPose_t {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;
   constexpr ptrdiff_t m_Transforms = 0x30;
   constexpr ptrdiff_t m_hOwner = 0x48;
   constexpr ptrdiff_t m_bDirty = 0x68;

}

namespace C_SoundOpvarSetPointBase {

   constexpr ptrdiff_t m_iszStackName = 0x540;
   constexpr ptrdiff_t m_iszOperatorName = 0x548;
   constexpr ptrdiff_t m_iszOpvarName = 0x550;
   constexpr ptrdiff_t m_iOpvarIndex = 0x558;
   constexpr ptrdiff_t m_bUseAutoCompare = 0x55c;

}

namespace C_TeamRoundTimer {

   constexpr ptrdiff_t m_bTimerPaused = 0x540;
   constexpr ptrdiff_t m_flTimeRemaining = 0x544;
   constexpr ptrdiff_t m_flTimerEndTime = 0x548;
   constexpr ptrdiff_t m_bIsDisabled = 0x54c;
   constexpr ptrdiff_t m_bShowInHUD = 0x54d;
   constexpr ptrdiff_t m_nTimerLength = 0x550;
   constexpr ptrdiff_t m_nTimerInitialLength = 0x554;
   constexpr ptrdiff_t m_nTimerMaxLength = 0x558;
   constexpr ptrdiff_t m_bAutoCountdown = 0x55c;
   constexpr ptrdiff_t m_nSetupTimeLength = 0x560;
   constexpr ptrdiff_t m_nState = 0x564;
   constexpr ptrdiff_t m_bStartPaused = 0x568;
   constexpr ptrdiff_t m_bInCaptureWatchState = 0x569;
   constexpr ptrdiff_t m_flTotalTime = 0x56c;
   constexpr ptrdiff_t m_bStopWatchTimer = 0x570;
   constexpr ptrdiff_t m_bFireFinished = 0x571;
   constexpr ptrdiff_t m_bFire5MinRemain = 0x572;
   constexpr ptrdiff_t m_bFire4MinRemain = 0x573;
   constexpr ptrdiff_t m_bFire3MinRemain = 0x574;
   constexpr ptrdiff_t m_bFire2MinRemain = 0x575;
   constexpr ptrdiff_t m_bFire1MinRemain = 0x576;
   constexpr ptrdiff_t m_bFire30SecRemain = 0x577;
   constexpr ptrdiff_t m_bFire10SecRemain = 0x578;
   constexpr ptrdiff_t m_bFire5SecRemain = 0x579;
   constexpr ptrdiff_t m_bFire4SecRemain = 0x57a;
   constexpr ptrdiff_t m_bFire3SecRemain = 0x57b;
   constexpr ptrdiff_t m_bFire2SecRemain = 0x57c;
   constexpr ptrdiff_t m_bFire1SecRemain = 0x57d;
   constexpr ptrdiff_t m_nOldTimerLength = 0x580;
   constexpr ptrdiff_t m_nOldTimerState = 0x584;

}

namespace CComicBook {

   constexpr ptrdiff_t m_CoverImage = 0x8;
   constexpr ptrdiff_t m_XmlFile = 0x18;

}

namespace CAttributeList {

   constexpr ptrdiff_t m_Attributes = 0x8;
   constexpr ptrdiff_t m_pManager = 0x58;

}

namespace CEconItemAttribute {

   constexpr ptrdiff_t m_iAttributeDefinitionIndex = 0x30;
   constexpr ptrdiff_t m_flValue = 0x34;
   constexpr ptrdiff_t m_flInitialValue = 0x38;
   constexpr ptrdiff_t m_nRefundableCurrency = 0x3c;
   constexpr ptrdiff_t m_bSetBonus = 0x40;

}

namespace CAttributeManager {

   constexpr ptrdiff_t m_Providers = 0x8;
   constexpr ptrdiff_t m_iReapplyProvisionParity = 0x20;
   constexpr ptrdiff_t m_hOuter = 0x24;
   constexpr ptrdiff_t m_bPreventLoopback = 0x28;
   constexpr ptrdiff_t m_ProviderType = 0x2c;
   constexpr ptrdiff_t m_CachedResults = 0x30;

}

namespace CAttributeManager::cached_attribute_float_t {

   constexpr ptrdiff_t flIn = 0x0;
   constexpr ptrdiff_t iAttribHook = 0x8;
   constexpr ptrdiff_t flOut = 0x10;

}

namespace C_AttributeContainer {

   constexpr ptrdiff_t m_Item = 0x50;
   constexpr ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x498;
   constexpr ptrdiff_t m_ullRegisteredAsItemID = 0x4a0;

}

namespace C_EconEntity::AttachedModelData_t {

   constexpr ptrdiff_t m_iModelDisplayFlags = 0x0;

}

namespace EntitySpottedState_t {

   constexpr ptrdiff_t m_bSpotted = 0x8;
   constexpr ptrdiff_t m_bSpottedByMask = 0xc;

}

namespace C_CSGameRulesProxy {

   constexpr ptrdiff_t m_pGameRules = 0x540;

}

namespace C_CSGameRules {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;
   constexpr ptrdiff_t m_bFreezePeriod = 0x30;
   constexpr ptrdiff_t m_bWarmupPeriod = 0x31;
   constexpr ptrdiff_t m_fWarmupPeriodEnd = 0x34;
   constexpr ptrdiff_t m_fWarmupPeriodStart = 0x38;
   constexpr ptrdiff_t m_nTotalPausedTicks = 0x3c;
   constexpr ptrdiff_t m_nPauseStartTick = 0x40;
   constexpr ptrdiff_t m_bServerPaused = 0x44;
   constexpr ptrdiff_t m_bGamePaused = 0x45;
   constexpr ptrdiff_t m_bTerroristTimeOutActive = 0x46;
   constexpr ptrdiff_t m_bCTTimeOutActive = 0x47;
   constexpr ptrdiff_t m_flTerroristTimeOutRemaining = 0x48;
   constexpr ptrdiff_t m_flCTTimeOutRemaining = 0x4c;
   constexpr ptrdiff_t m_nTerroristTimeOuts = 0x50;
   constexpr ptrdiff_t m_nCTTimeOuts = 0x54;
   constexpr ptrdiff_t m_bTechnicalTimeOut = 0x58;
   constexpr ptrdiff_t m_bMatchWaitingForResume = 0x59;
   constexpr ptrdiff_t m_iRoundTime = 0x5c;
   constexpr ptrdiff_t m_fMatchStartTime = 0x60;
   constexpr ptrdiff_t m_fRoundStartTime = 0x64;
   constexpr ptrdiff_t m_flRestartRoundTime = 0x68;
   constexpr ptrdiff_t m_bGameRestart = 0x6c;
   constexpr ptrdiff_t m_flGameStartTime = 0x70;
   constexpr ptrdiff_t m_timeUntilNextPhaseStarts = 0x74;
   constexpr ptrdiff_t m_gamePhase = 0x78;
   constexpr ptrdiff_t m_totalRoundsPlayed = 0x7c;
   constexpr ptrdiff_t m_nRoundsPlayedThisPhase = 0x80;
   constexpr ptrdiff_t m_nOvertimePlaying = 0x84;
   constexpr ptrdiff_t m_iHostagesRemaining = 0x88;
   constexpr ptrdiff_t m_bAnyHostageReached = 0x8c;
   constexpr ptrdiff_t m_bMapHasBombTarget = 0x8d;
   constexpr ptrdiff_t m_bMapHasRescueZone = 0x8e;
   constexpr ptrdiff_t m_bMapHasBuyZone = 0x8f;
   constexpr ptrdiff_t m_bIsQueuedMatchmaking = 0x90;
   constexpr ptrdiff_t m_nQueuedMatchmakingMode = 0x94;
   constexpr ptrdiff_t m_bIsValveDS = 0x98;
   constexpr ptrdiff_t m_bLogoMap = 0x99;
   constexpr ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9a;
   constexpr ptrdiff_t m_iSpectatorSlotCount = 0x9c;
   constexpr ptrdiff_t m_MatchDevice = 0xa0;
   constexpr ptrdiff_t m_bHasMatchStarted = 0xa4;
   constexpr ptrdiff_t m_nNextMapInMapgroup = 0xa8;
   constexpr ptrdiff_t m_szTournamentEventName = 0xac;
   constexpr ptrdiff_t m_szTournamentEventStage = 0x2ac;
   constexpr ptrdiff_t m_szMatchStatTxt = 0x4ac;
   constexpr ptrdiff_t m_szTournamentPredictionsTxt = 0x6ac;
   constexpr ptrdiff_t m_nTournamentPredictionsPct = 0x8ac;
   constexpr ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8b0;
   constexpr ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8b4;
   constexpr ptrdiff_t m_bIsDroppingItems = 0x8b8;
   constexpr ptrdiff_t m_bIsQuestEligible = 0x8b9;
   constexpr ptrdiff_t m_bIsHltvActive = 0x8ba;
   constexpr ptrdiff_t m_nGuardianModeWaveNumber = 0x8bc;
   constexpr ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x8c0;
   constexpr ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x8c4;
   constexpr ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x8c8;
   constexpr ptrdiff_t m_nNumHeaviesToSpawn = 0x8cc;
   constexpr ptrdiff_t m_numGlobalGiftsGiven = 0x8d0;
   constexpr ptrdiff_t m_numGlobalGifters = 0x8d4;
   constexpr ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x8d8;
   constexpr ptrdiff_t m_arrFeaturedGiftersAccounts = 0x8dc;
   constexpr ptrdiff_t m_arrFeaturedGiftersGifts = 0x8ec;
   constexpr ptrdiff_t m_arrProhibitedItemIndices = 0x8fc;
   constexpr ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x9c4;
   constexpr ptrdiff_t m_numBestOfMaps = 0x9d4;
   constexpr ptrdiff_t m_nHalloweenMaskListSeed = 0x9d8;
   constexpr ptrdiff_t m_bBombDropped = 0x9dc;
   constexpr ptrdiff_t m_bBombPlanted = 0x9dd;
   constexpr ptrdiff_t m_iRoundWinStatus = 0x9e0;
   constexpr ptrdiff_t m_eRoundWinReason = 0x9e4;
   constexpr ptrdiff_t m_bTCantBuy = 0x9e8;
   constexpr ptrdiff_t m_bCTCantBuy = 0x9e9;
   constexpr ptrdiff_t m_flGuardianBuyUntilTime = 0x9ec;
   constexpr ptrdiff_t m_iMatchStats_RoundResults = 0x9f0;
   constexpr ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xa68;
   constexpr ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xae0;
   constexpr ptrdiff_t m_TeamRespawnWaveTimes = 0xb58;
   constexpr ptrdiff_t m_flNextRespawnWave = 0xbd8;
   constexpr ptrdiff_t m_nServerQuestID = 0xc58;
   constexpr ptrdiff_t m_vMinimapMins = 0xc5c;
   constexpr ptrdiff_t m_vMinimapMaxs = 0xc68;
   constexpr ptrdiff_t m_MinimapVerticalSectionHeights = 0xc74;
   constexpr ptrdiff_t m_bDontIncrementCoopWave = 0xc94;
   constexpr ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xc95;
   constexpr ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xc98;
   constexpr ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xcc0;
   constexpr ptrdiff_t m_nEndMatchMapVoteWinner = 0xce8;
   constexpr ptrdiff_t m_iNumConsecutiveCTLoses = 0xcec;
   constexpr ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xcf0;
   constexpr ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xd10;
   constexpr ptrdiff_t m_bMatchAbortedDueToPlayerBan = 0xd68;
   constexpr ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xd69;
   constexpr ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0xd6a;
   constexpr ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xd6b;
   constexpr ptrdiff_t m_pGameModeRules = 0xd88;
   constexpr ptrdiff_t m_RetakeRules = 0xd90;
   constexpr ptrdiff_t m_nMatchEndCount = 0xea8;
   constexpr ptrdiff_t m_nTTeamIntroVariant = 0xeac;
   constexpr ptrdiff_t m_nCTTeamIntroVariant = 0xeb0;
   constexpr ptrdiff_t m_bTeamIntroPeriod = 0xeb4;
   constexpr ptrdiff_t m_flLastPerfSampleTime = 0x4ec0;

}

namespace CCSGameModeRules {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;

}

namespace CCSGameModeRules_Deathmatch {

   constexpr ptrdiff_t m_bFirstThink = 0x30;
   constexpr ptrdiff_t m_bFirstThinkAfterConnected = 0x31;
   constexpr ptrdiff_t m_flDMBonusStartTime = 0x34;
   constexpr ptrdiff_t m_flDMBonusTimeLength = 0x38;
   constexpr ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x3c;

}

namespace C_RetakeGameRules {

   constexpr ptrdiff_t m_nMatchSeed = 0xf8;
   constexpr ptrdiff_t m_bBlockersPresent = 0xfc;
   constexpr ptrdiff_t m_bRoundInProgress = 0xfd;
   constexpr ptrdiff_t m_iFirstSecondHalfRound = 0x100;
   constexpr ptrdiff_t m_iBombSite = 0x104;

}

namespace CSPerRoundStats_t {

   constexpr ptrdiff_t m_iKills = 0x30;
   constexpr ptrdiff_t m_iDeaths = 0x34;
   constexpr ptrdiff_t m_iAssists = 0x38;
   constexpr ptrdiff_t m_iDamage = 0x3c;
   constexpr ptrdiff_t m_iEquipmentValue = 0x40;
   constexpr ptrdiff_t m_iMoneySaved = 0x44;
   constexpr ptrdiff_t m_iKillReward = 0x48;
   constexpr ptrdiff_t m_iLiveTime = 0x4c;
   constexpr ptrdiff_t m_iHeadShotKills = 0x50;
   constexpr ptrdiff_t m_iObjective = 0x54;
   constexpr ptrdiff_t m_iCashEarned = 0x58;
   constexpr ptrdiff_t m_iUtilityDamage = 0x5c;
   constexpr ptrdiff_t m_iEnemiesFlashed = 0x60;

}

namespace CSMatchStats_t {

   constexpr ptrdiff_t m_iEnemy5Ks = 0x68;
   constexpr ptrdiff_t m_iEnemy4Ks = 0x6c;
   constexpr ptrdiff_t m_iEnemy3Ks = 0x70;

}

namespace C_CSGO_TeamPreviewCharacterPosition {

   constexpr ptrdiff_t m_nVariant = 0x540;
   constexpr ptrdiff_t m_nRandom = 0x544;
   constexpr ptrdiff_t m_nOrdinal = 0x548;
   constexpr ptrdiff_t m_sWeaponName = 0x550;
   constexpr ptrdiff_t m_xuid = 0x558;
   constexpr ptrdiff_t m_agentItem = 0x560;
   constexpr ptrdiff_t m_glovesItem = 0x9a8;
   constexpr ptrdiff_t m_weaponItem = 0xdf0;

}

namespace C_PlayerPing {

   constexpr ptrdiff_t m_hPlayer = 0x570;
   constexpr ptrdiff_t m_hPingedEntity = 0x574;
   constexpr ptrdiff_t m_iType = 0x578;
   constexpr ptrdiff_t m_bUrgent = 0x57c;
   constexpr ptrdiff_t m_szPlaceName = 0x57d;

}

namespace CCSPlayer_PingServices {

   constexpr ptrdiff_t m_hPlayerPing = 0x40;

}

namespace C_CSPlayerResource {

   constexpr ptrdiff_t m_bHostageAlive = 0x540;
   constexpr ptrdiff_t m_isHostageFollowingSomeone = 0x54c;
   constexpr ptrdiff_t m_iHostageEntityIDs = 0x558;
   constexpr ptrdiff_t m_bombsiteCenterA = 0x588;
   constexpr ptrdiff_t m_bombsiteCenterB = 0x594;
   constexpr ptrdiff_t m_hostageRescueX = 0x5a0;
   constexpr ptrdiff_t m_hostageRescueY = 0x5b0;
   constexpr ptrdiff_t m_hostageRescueZ = 0x5c0;
   constexpr ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5d0;
   constexpr ptrdiff_t m_foundGoalPositions = 0x5d1;

}

namespace CCSPlayerBase_CameraServices {

   constexpr ptrdiff_t m_iFOV = 0x210;
   constexpr ptrdiff_t m_iFOVStart = 0x214;
   constexpr ptrdiff_t m_flFOVTime = 0x218;
   constexpr ptrdiff_t m_flFOVRate = 0x21c;
   constexpr ptrdiff_t m_hZoomOwner = 0x220;
   constexpr ptrdiff_t m_flLastShotFOV = 0x224;

}

namespace WeaponPurchaseCount_t {

   constexpr ptrdiff_t m_nItemDefIndex = 0x30;
   constexpr ptrdiff_t m_nCount = 0x32;

}

namespace WeaponPurchaseTracker_t {

   constexpr ptrdiff_t m_weaponPurchases = 0x8;

}

namespace CCSPlayer_ActionTrackingServices {

   constexpr ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40;
   constexpr ptrdiff_t m_bIsRescuing = 0x44;
   constexpr ptrdiff_t m_weaponPurchasesThisMatch = 0x48;
   constexpr ptrdiff_t m_weaponPurchasesThisRound = 0xa0;

}

namespace CCSPlayer_BulletServices {

   constexpr ptrdiff_t m_totalHitsOnServer = 0x40;

}

namespace SellbackPurchaseEntry_t {

   constexpr ptrdiff_t m_unDefIdx = 0x30;
   constexpr ptrdiff_t m_nCost = 0x34;
   constexpr ptrdiff_t m_nPrevArmor = 0x38;
   constexpr ptrdiff_t m_bPrevHelmet = 0x3c;
   constexpr ptrdiff_t m_hItem = 0x40;

}

namespace CCSPlayer_BuyServices {

   constexpr ptrdiff_t m_vecSellbackPurchaseEntries = 0x40;

}

namespace CCSPlayer_CameraServices {

   constexpr ptrdiff_t m_flDeathCamTilt = 0x228;

}

namespace CCSPlayer_HostageServices {

   constexpr ptrdiff_t m_hCarriedHostage = 0x40;
   constexpr ptrdiff_t m_hCarriedHostageProp = 0x44;

}

namespace CCSPlayer_ItemServices {

   constexpr ptrdiff_t m_bHasDefuser = 0x40;
   constexpr ptrdiff_t m_bHasHelmet = 0x41;
   constexpr ptrdiff_t m_bHasHeavyArmor = 0x42;

}

namespace CCSPlayer_MovementServices {

   constexpr ptrdiff_t m_flMaxFallVelocity = 0x210;
   constexpr ptrdiff_t m_vecLadderNormal = 0x214;
   constexpr ptrdiff_t m_nLadderSurfacePropIndex = 0x220;
   constexpr ptrdiff_t m_flDuckAmount = 0x224;
   constexpr ptrdiff_t m_flDuckSpeed = 0x228;
   constexpr ptrdiff_t m_bDuckOverride = 0x22c;
   constexpr ptrdiff_t m_bDesiresDuck = 0x22d;
   constexpr ptrdiff_t m_flDuckOffset = 0x230;
   constexpr ptrdiff_t m_nDuckTimeMsecs = 0x234;
   constexpr ptrdiff_t m_nDuckJumpTimeMsecs = 0x238;
   constexpr ptrdiff_t m_nJumpTimeMsecs = 0x23c;
   constexpr ptrdiff_t m_flLastDuckTime = 0x240;
   constexpr ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250;
   constexpr ptrdiff_t m_duckUntilOnGround = 0x258;
   constexpr ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259;
   constexpr ptrdiff_t m_bInStuckTest = 0x25a;
   constexpr ptrdiff_t m_flStuckCheckTime = 0x268;
   constexpr ptrdiff_t m_nTraceCount = 0x468;
   constexpr ptrdiff_t m_StuckLast = 0x46c;
   constexpr ptrdiff_t m_bSpeedCropped = 0x470;
   constexpr ptrdiff_t m_nOldWaterLevel = 0x474;
   constexpr ptrdiff_t m_flWaterEntryTime = 0x478;
   constexpr ptrdiff_t m_vecForward = 0x47c;
   constexpr ptrdiff_t m_vecLeft = 0x488;
   constexpr ptrdiff_t m_vecUp = 0x494;
   constexpr ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4a0;
   constexpr ptrdiff_t m_bOldJumpPressed = 0x4ac;
   constexpr ptrdiff_t m_flJumpPressedTime = 0x4b0;
   constexpr ptrdiff_t m_flJumpUntil = 0x4b4;
   constexpr ptrdiff_t m_flJumpVel = 0x4b8;
   constexpr ptrdiff_t m_fStashGrenadeParameterWhen = 0x4bc;
   constexpr ptrdiff_t m_nButtonDownMaskPrev = 0x4c0;
   constexpr ptrdiff_t m_flOffsetTickCompleteTime = 0x4c8;
   constexpr ptrdiff_t m_flOffsetTickStashedSpeed = 0x4cc;
   constexpr ptrdiff_t m_flStamina = 0x4d0;
   constexpr ptrdiff_t m_bUpdatePredictedOriginAfterDataUpdate = 0x4d4;

}

namespace CCSPlayer_ViewModelServices {

   constexpr ptrdiff_t m_hViewModel = 0x40;

}

namespace CCSPlayer_WaterServices {

   constexpr ptrdiff_t m_flWaterJumpTime = 0x40;
   constexpr ptrdiff_t m_vecWaterJumpVel = 0x44;
   constexpr ptrdiff_t m_flSwimSoundTime = 0x50;

}

namespace CCSPlayer_WeaponServices {

   constexpr ptrdiff_t m_flNextAttack = 0xa8;
   constexpr ptrdiff_t m_bIsLookingAtWeapon = 0xac;
   constexpr ptrdiff_t m_bIsHoldingLookAtWeapon = 0xad;

}

namespace CCSObserver_ObserverServices {

   constexpr ptrdiff_t m_hLastObserverTarget = 0x58;
   constexpr ptrdiff_t m_vecObserverInterpolateOffset = 0x5c;
   constexpr ptrdiff_t m_vecObserverInterpStartPos = 0x68;
   constexpr ptrdiff_t m_flObsInterp_PathLength = 0x74;
   constexpr ptrdiff_t m_qObsInterp_OrientationStart = 0x80;
   constexpr ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90;
   constexpr ptrdiff_t m_obsInterpState = 0xa0;
   constexpr ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xa4;

}

namespace CCSPlayerController_ActionTrackingServices {

   constexpr ptrdiff_t m_perRoundStats = 0x40;
   constexpr ptrdiff_t m_matchStats = 0x90;
   constexpr ptrdiff_t m_iNumRoundKills = 0x108;
   constexpr ptrdiff_t m_iNumRoundKillsHeadshots = 0x10c;
   constexpr ptrdiff_t m_unTotalRoundDamageDealt = 0x110;

}

namespace CDamageRecord {

   constexpr ptrdiff_t m_PlayerDamager = 0x28;
   constexpr ptrdiff_t m_PlayerRecipient = 0x2c;
   constexpr ptrdiff_t m_hPlayerControllerDamager = 0x30;
   constexpr ptrdiff_t m_hPlayerControllerRecipient = 0x34;
   constexpr ptrdiff_t m_szPlayerDamagerName = 0x38;
   constexpr ptrdiff_t m_szPlayerRecipientName = 0x40;
   constexpr ptrdiff_t m_DamagerXuid = 0x48;
   constexpr ptrdiff_t m_RecipientXuid = 0x50;
   constexpr ptrdiff_t m_iDamage = 0x58;
   constexpr ptrdiff_t m_iActualHealthRemoved = 0x5c;
   constexpr ptrdiff_t m_iNumHits = 0x60;
   constexpr ptrdiff_t m_iLastBulletUpdate = 0x64;
   constexpr ptrdiff_t m_bIsOtherEnemy = 0x68;
   constexpr ptrdiff_t m_killType = 0x69;

}

namespace CCSPlayerController_DamageServices {

   constexpr ptrdiff_t m_nSendUpdate = 0x40;
   constexpr ptrdiff_t m_DamageList = 0x48;

}

namespace CCSPlayerController_InGameMoneyServices {

   constexpr ptrdiff_t m_iAccount = 0x40;
   constexpr ptrdiff_t m_iStartAccount = 0x44;
   constexpr ptrdiff_t m_iTotalCashSpent = 0x48;
   constexpr ptrdiff_t m_iCashSpentThisRound = 0x4c;
   constexpr ptrdiff_t m_nPreviousAccount = 0x50;

}

namespace ServerAuthoritativeWeaponSlot_t {

   constexpr ptrdiff_t unClass = 0x28;
   constexpr ptrdiff_t unSlot = 0x2a;
   constexpr ptrdiff_t unItemDefIdx = 0x2c;

}

namespace CCSPlayerController_InventoryServices {

   constexpr ptrdiff_t m_unMusicID = 0x40;
   constexpr ptrdiff_t m_rank = 0x44;
   constexpr ptrdiff_t m_nPersonaDataPublicLevel = 0x5c;
   constexpr ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60;
   constexpr ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64;
   constexpr ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68;
   constexpr ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70;

}

namespace C_IronSightController {

   constexpr ptrdiff_t m_bIronSightAvailable = 0x10;
   constexpr ptrdiff_t m_flIronSightAmount = 0x14;
   constexpr ptrdiff_t m_flIronSightAmountGained = 0x18;
   constexpr ptrdiff_t m_flIronSightAmountBiased = 0x1c;
   constexpr ptrdiff_t m_flIronSightAmount_Interpolated = 0x20;
   constexpr ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24;
   constexpr ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28;
   constexpr ptrdiff_t m_flInterpolationLastUpdated = 0x2c;
   constexpr ptrdiff_t m_angDeltaAverage = 0x30;
   constexpr ptrdiff_t m_angViewLast = 0x90;
   constexpr ptrdiff_t m_vecDotCoords = 0x9c;
   constexpr ptrdiff_t m_flDotBlur = 0xa4;
   constexpr ptrdiff_t m_flSpeedRatio = 0xa8;

}

namespace CompositeMaterialMatchFilter_t {

   constexpr ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0;
   constexpr ptrdiff_t m_strMatchFilter = 0x8;
   constexpr ptrdiff_t m_strMatchValue = 0x10;
   constexpr ptrdiff_t m_bPassWhenTrue = 0x18;

}

namespace CompositeMaterialInputLooseVariable_t {

   constexpr ptrdiff_t m_strName = 0x0;
   constexpr ptrdiff_t m_bExposeExternally = 0x8;
   constexpr ptrdiff_t m_strExposedFriendlyName = 0x10;
   constexpr ptrdiff_t m_strExposedFriendlyGroupName = 0x18;
   constexpr ptrdiff_t m_bExposedVariableIsFixedRange = 0x20;
   constexpr ptrdiff_t m_strExposedVisibleWhenTrue = 0x28;
   constexpr ptrdiff_t m_strExposedHiddenWhenTrue = 0x30;
   constexpr ptrdiff_t m_nVariableType = 0x38;
   constexpr ptrdiff_t m_bValueBoolean = 0x3c;
   constexpr ptrdiff_t m_nValueIntX = 0x40;
   constexpr ptrdiff_t m_nValueIntY = 0x44;
   constexpr ptrdiff_t m_nValueIntZ = 0x48;
   constexpr ptrdiff_t m_nValueIntW = 0x4c;
   constexpr ptrdiff_t m_bHasFloatBounds = 0x50;
   constexpr ptrdiff_t m_flValueFloatX = 0x54;
   constexpr ptrdiff_t m_flValueFloatX_Min = 0x58;
   constexpr ptrdiff_t m_flValueFloatX_Max = 0x5c;
   constexpr ptrdiff_t m_flValueFloatY = 0x60;
   constexpr ptrdiff_t m_flValueFloatY_Min = 0x64;
   constexpr ptrdiff_t m_flValueFloatY_Max = 0x68;
   constexpr ptrdiff_t m_flValueFloatZ = 0x6c;
   constexpr ptrdiff_t m_flValueFloatZ_Min = 0x70;
   constexpr ptrdiff_t m_flValueFloatZ_Max = 0x74;
   constexpr ptrdiff_t m_flValueFloatW = 0x78;
   constexpr ptrdiff_t m_flValueFloatW_Min = 0x7c;
   constexpr ptrdiff_t m_flValueFloatW_Max = 0x80;
   constexpr ptrdiff_t m_cValueColor4 = 0x84;
   constexpr ptrdiff_t m_nValueSystemVar = 0x88;
   constexpr ptrdiff_t m_strResourceMaterial = 0x90;
   constexpr ptrdiff_t m_strTextureContentAssetPath = 0x170;
   constexpr ptrdiff_t m_strTextureRuntimeResourcePath = 0x178;
   constexpr ptrdiff_t m_strTextureCompilationVtexTemplate = 0x258;
   constexpr ptrdiff_t m_nTextureType = 0x260;
   constexpr ptrdiff_t m_strString = 0x268;

}

namespace CompMatMutatorCondition_t {

   constexpr ptrdiff_t m_nMutatorCondition = 0x0;
   constexpr ptrdiff_t m_strMutatorConditionContainerName = 0x8;
   constexpr ptrdiff_t m_strMutatorConditionContainerVarName = 0x10;
   constexpr ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18;
   constexpr ptrdiff_t m_bPassWhenTrue = 0x20;

}

namespace CompMatPropertyMutator_t {

   constexpr ptrdiff_t m_bEnabled = 0x0;
   constexpr ptrdiff_t m_nMutatorCommandType = 0x4;
   constexpr ptrdiff_t m_strInitWith_Container = 0x8;
   constexpr ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10;
   constexpr ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18;
   constexpr ptrdiff_t m_strCopyProperty_TargetProperty = 0x20;
   constexpr ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28;
   constexpr ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30;
   constexpr ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48;
   constexpr ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50;
   constexpr ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58;
   constexpr ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60;
   constexpr ptrdiff_t m_nSetValue_Value = 0x68;
   constexpr ptrdiff_t m_strGenerateTexture_TargetParam = 0x2d8;
   constexpr ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2e0;
   constexpr ptrdiff_t m_nResolution = 0x2e8;
   constexpr ptrdiff_t m_bIsScratchTarget = 0x2ec;
   constexpr ptrdiff_t m_bSplatDebugInfo = 0x2ed;
   constexpr ptrdiff_t m_bCaptureInRenderDoc = 0x2ee;
   constexpr ptrdiff_t m_vecTexGenInstructions = 0x2f0;
   constexpr ptrdiff_t m_vecConditionalMutators = 0x308;
   constexpr ptrdiff_t m_strPopInputQueue_Container = 0x320;
   constexpr ptrdiff_t m_strDrawText_InputContainerSrc = 0x328;
   constexpr ptrdiff_t m_strDrawText_InputContainerProperty = 0x330;
   constexpr ptrdiff_t m_vecDrawText_Position = 0x338;
   constexpr ptrdiff_t m_colDrawText_Color = 0x340;
   constexpr ptrdiff_t m_strDrawText_Font = 0x348;
   constexpr ptrdiff_t m_vecConditions = 0x350;

}

namespace CompositeMaterialInputContainer_t {

   constexpr ptrdiff_t m_bEnabled = 0x0;
   constexpr ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4;
   constexpr ptrdiff_t m_strSpecificContainerMaterial = 0x8;
   constexpr ptrdiff_t m_strAttrName = 0xe8;
   constexpr ptrdiff_t m_strAlias = 0xf0;
   constexpr ptrdiff_t m_vecLooseVariables = 0xf8;
   constexpr ptrdiff_t m_strAttrNameForVar = 0x110;
   constexpr ptrdiff_t m_bExposeExternally = 0x118;

}

namespace CompositeMaterialAssemblyProcedure_t {

   constexpr ptrdiff_t m_vecCompMatIncludes = 0x0;
   constexpr ptrdiff_t m_vecMatchFilters = 0x18;
   constexpr ptrdiff_t m_vecCompositeInputContainers = 0x30;
   constexpr ptrdiff_t m_vecPropertyMutators = 0x48;

}

namespace GeneratedTextureHandle_t {

   constexpr ptrdiff_t m_strBitmapName = 0x0;

}

namespace CompositeMaterial_t {

   constexpr ptrdiff_t m_TargetKVs = 0x8;
   constexpr ptrdiff_t m_PreGenerationKVs = 0x18;
   constexpr ptrdiff_t m_FinalKVs = 0x28;
   constexpr ptrdiff_t m_vecGeneratedTextures = 0x40;

}

namespace CompositeMaterialEditorPoint_t {

   constexpr ptrdiff_t m_ModelName = 0x0;
   constexpr ptrdiff_t m_nSequenceIndex = 0xe0;
   constexpr ptrdiff_t m_flCycle = 0xe4;
   constexpr ptrdiff_t m_KVModelStateChoices = 0xe8;
   constexpr ptrdiff_t m_bEnableChildModel = 0xf8;
   constexpr ptrdiff_t m_ChildModelName = 0x100;
   constexpr ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1e0;
   constexpr ptrdiff_t m_vecCompositeMaterials = 0x1f8;

}

namespace CCompositeMaterialEditorDoc {

   constexpr ptrdiff_t m_nVersion = 0x8;
   constexpr ptrdiff_t m_Points = 0x10;
   constexpr ptrdiff_t m_KVthumbnail = 0x28;

}

namespace CGlobalLightBase {

   constexpr ptrdiff_t m_bSpotLight = 0x10;
   constexpr ptrdiff_t m_SpotLightOrigin = 0x14;
   constexpr ptrdiff_t m_SpotLightAngles = 0x20;
   constexpr ptrdiff_t m_ShadowDirection = 0x2c;
   constexpr ptrdiff_t m_AmbientDirection = 0x38;
   constexpr ptrdiff_t m_SpecularDirection = 0x44;
   constexpr ptrdiff_t m_InspectorSpecularDirection = 0x50;
   constexpr ptrdiff_t m_flSpecularPower = 0x5c;
   constexpr ptrdiff_t m_flSpecularIndependence = 0x60;
   constexpr ptrdiff_t m_SpecularColor = 0x64;
   constexpr ptrdiff_t m_bStartDisabled = 0x68;
   constexpr ptrdiff_t m_bEnabled = 0x69;
   constexpr ptrdiff_t m_LightColor = 0x6a;
   constexpr ptrdiff_t m_AmbientColor1 = 0x6e;
   constexpr ptrdiff_t m_AmbientColor2 = 0x72;
   constexpr ptrdiff_t m_AmbientColor3 = 0x76;
   constexpr ptrdiff_t m_flSunDistance = 0x7c;
   constexpr ptrdiff_t m_flFOV = 0x80;
   constexpr ptrdiff_t m_flNearZ = 0x84;
   constexpr ptrdiff_t m_flFarZ = 0x88;
   constexpr ptrdiff_t m_bEnableShadows = 0x8c;
   constexpr ptrdiff_t m_bOldEnableShadows = 0x8d;
   constexpr ptrdiff_t m_bBackgroundClearNotRequired = 0x8e;
   constexpr ptrdiff_t m_flCloudScale = 0x90;
   constexpr ptrdiff_t m_flCloud1Speed = 0x94;
   constexpr ptrdiff_t m_flCloud1Direction = 0x98;
   constexpr ptrdiff_t m_flCloud2Speed = 0x9c;
   constexpr ptrdiff_t m_flCloud2Direction = 0xa0;
   constexpr ptrdiff_t m_flAmbientScale1 = 0xb0;
   constexpr ptrdiff_t m_flAmbientScale2 = 0xb4;
   constexpr ptrdiff_t m_flGroundScale = 0xb8;
   constexpr ptrdiff_t m_flLightScale = 0xbc;
   constexpr ptrdiff_t m_flFoWDarkness = 0xc0;
   constexpr ptrdiff_t m_bEnableSeparateSkyboxFog = 0xc4;
   constexpr ptrdiff_t m_vFowColor = 0xc8;
   constexpr ptrdiff_t m_ViewOrigin = 0xd4;
   constexpr ptrdiff_t m_ViewAngles = 0xe0;
   constexpr ptrdiff_t m_flViewFoV = 0xec;
   constexpr ptrdiff_t m_WorldPoints = 0xf0;
   constexpr ptrdiff_t m_vFogOffsetLayer0 = 0x4a8;
   constexpr ptrdiff_t m_vFogOffsetLayer1 = 0x4b0;
   constexpr ptrdiff_t m_hEnvWind = 0x4b8;
   constexpr ptrdiff_t m_hEnvSky = 0x4bc;

}

namespace C_GlobalLight {

   constexpr ptrdiff_t m_WindClothForceHandle = 0xa00;

}

namespace C_CSGO_MapPreviewCameraPathNode {

   constexpr ptrdiff_t m_szParentPathUniqueID = 0x540;
   constexpr ptrdiff_t m_nPathIndex = 0x548;
   constexpr ptrdiff_t m_vInTangentLocal = 0x54c;
   constexpr ptrdiff_t m_vOutTangentLocal = 0x558;
   constexpr ptrdiff_t m_flFOV = 0x564;
   constexpr ptrdiff_t m_flSpeed = 0x568;
   constexpr ptrdiff_t m_flEaseIn = 0x56c;
   constexpr ptrdiff_t m_flEaseOut = 0x570;
   constexpr ptrdiff_t m_vInTangentWorld = 0x574;
   constexpr ptrdiff_t m_vOutTangentWorld = 0x580;

}

namespace C_CSGO_MapPreviewCameraPath {

   constexpr ptrdiff_t m_flZFar = 0x540;
   constexpr ptrdiff_t m_flZNear = 0x544;
   constexpr ptrdiff_t m_bLoop = 0x548;
   constexpr ptrdiff_t m_bVerticalFOV = 0x549;
   constexpr ptrdiff_t m_bConstantSpeed = 0x54a;
   constexpr ptrdiff_t m_flDuration = 0x54c;
   constexpr ptrdiff_t m_flPathLength = 0x590;
   constexpr ptrdiff_t m_flPathDuration = 0x594;

}

namespace C_VoteController {

   constexpr ptrdiff_t m_iActiveIssueIndex = 0x550;
   constexpr ptrdiff_t m_iOnlyTeamToVote = 0x554;
   constexpr ptrdiff_t m_nVoteOptionCount = 0x558;
   constexpr ptrdiff_t m_nPotentialVotes = 0x56c;
   constexpr ptrdiff_t m_bVotesDirty = 0x570;
   constexpr ptrdiff_t m_bTypeDirty = 0x571;
   constexpr ptrdiff_t m_bIsYesNoVote = 0x572;

}

namespace C_MapVetoPickController {

   constexpr ptrdiff_t m_nDraftType = 0x550;
   constexpr ptrdiff_t m_nTeamWinningCoinToss = 0x554;
   constexpr ptrdiff_t m_nTeamWithFirstChoice = 0x558;
   constexpr ptrdiff_t m_nVoteMapIdsList = 0x658;
   constexpr ptrdiff_t m_nAccountIDs = 0x674;
   constexpr ptrdiff_t m_nMapId0 = 0x774;
   constexpr ptrdiff_t m_nMapId1 = 0x874;
   constexpr ptrdiff_t m_nMapId2 = 0x974;
   constexpr ptrdiff_t m_nMapId3 = 0xa74;
   constexpr ptrdiff_t m_nMapId4 = 0xb74;
   constexpr ptrdiff_t m_nMapId5 = 0xc74;
   constexpr ptrdiff_t m_nStartingSide0 = 0xd74;
   constexpr ptrdiff_t m_nCurrentPhase = 0xe74;
   constexpr ptrdiff_t m_nPhaseStartTick = 0xe78;
   constexpr ptrdiff_t m_nPhaseDurationTicks = 0xe7c;
   constexpr ptrdiff_t m_nPostDataUpdateTick = 0xe80;
   constexpr ptrdiff_t m_bDisabledHud = 0xe84;

}

namespace C_CSGO_TeamPreviewCamera {

   constexpr ptrdiff_t m_nVariant = 0x5a0;
   constexpr ptrdiff_t m_bDofEnabled = 0x5a4;
   constexpr ptrdiff_t m_flDofNearBlurry = 0x5a8;
   constexpr ptrdiff_t m_flDofNearCrisp = 0x5ac;
   constexpr ptrdiff_t m_flDofFarCrisp = 0x5b0;
   constexpr ptrdiff_t m_flDofFarBlurry = 0x5b4;
   constexpr ptrdiff_t m_flDofTiltToGround = 0x5b8;

}

namespace C_CsmFovOverride {

   constexpr ptrdiff_t m_cameraName = 0x540;
   constexpr ptrdiff_t m_flCsmFovOverrideValue = 0x548;

}

namespace C_EnvCombinedLightProbeVolume {

   constexpr ptrdiff_t m_Color = 0x15a8;
   constexpr ptrdiff_t m_flBrightness = 0x15ac;
   constexpr ptrdiff_t m_hCubemapTexture = 0x15b0;
   constexpr ptrdiff_t m_bCustomCubemapTexture = 0x15b8;
   constexpr ptrdiff_t m_hLightProbeTexture = 0x15c0;
   constexpr ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x15c8;
   constexpr ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x15d0;
   constexpr ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x15d8;
   constexpr ptrdiff_t m_vBoxMins = 0x15e0;
   constexpr ptrdiff_t m_vBoxMaxs = 0x15ec;
   constexpr ptrdiff_t m_LightGroups = 0x15f8;
   constexpr ptrdiff_t m_bMoveable = 0x1600;
   constexpr ptrdiff_t m_nHandshake = 0x1604;
   constexpr ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1608;
   constexpr ptrdiff_t m_nPriority = 0x160c;
   constexpr ptrdiff_t m_bStartDisabled = 0x1610;
   constexpr ptrdiff_t m_flEdgeFadeDist = 0x1614;
   constexpr ptrdiff_t m_vEdgeFadeDists = 0x1618;
   constexpr ptrdiff_t m_nLightProbeSizeX = 0x1624;
   constexpr ptrdiff_t m_nLightProbeSizeY = 0x1628;
   constexpr ptrdiff_t m_nLightProbeSizeZ = 0x162c;
   constexpr ptrdiff_t m_nLightProbeAtlasX = 0x1630;
   constexpr ptrdiff_t m_nLightProbeAtlasY = 0x1634;
   constexpr ptrdiff_t m_nLightProbeAtlasZ = 0x1638;
   constexpr ptrdiff_t m_bEnabled = 0x1651;

}

namespace C_EnvCubemap {

   constexpr ptrdiff_t m_hCubemapTexture = 0x5c8;
   constexpr ptrdiff_t m_bCustomCubemapTexture = 0x5d0;
   constexpr ptrdiff_t m_flInfluenceRadius = 0x5d4;
   constexpr ptrdiff_t m_vBoxProjectMins = 0x5d8;
   constexpr ptrdiff_t m_vBoxProjectMaxs = 0x5e4;
   constexpr ptrdiff_t m_LightGroups = 0x5f0;
   constexpr ptrdiff_t m_bMoveable = 0x5f8;
   constexpr ptrdiff_t m_nHandshake = 0x5fc;
   constexpr ptrdiff_t m_nEnvCubeMapArrayIndex = 0x600;
   constexpr ptrdiff_t m_nPriority = 0x604;
   constexpr ptrdiff_t m_flEdgeFadeDist = 0x608;
   constexpr ptrdiff_t m_vEdgeFadeDists = 0x60c;
   constexpr ptrdiff_t m_flDiffuseScale = 0x618;
   constexpr ptrdiff_t m_bStartDisabled = 0x61c;
   constexpr ptrdiff_t m_bDefaultEnvMap = 0x61d;
   constexpr ptrdiff_t m_bDefaultSpecEnvMap = 0x61e;
   constexpr ptrdiff_t m_bIndoorCubeMap = 0x61f;
   constexpr ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x620;
   constexpr ptrdiff_t m_bEnabled = 0x630;

}

namespace C_EnvCubemapFog {

   constexpr ptrdiff_t m_flEndDistance = 0x540;
   constexpr ptrdiff_t m_flStartDistance = 0x544;
   constexpr ptrdiff_t m_flFogFalloffExponent = 0x548;
   constexpr ptrdiff_t m_bHeightFogEnabled = 0x54c;
   constexpr ptrdiff_t m_flFogHeightWidth = 0x550;
   constexpr ptrdiff_t m_flFogHeightEnd = 0x554;
   constexpr ptrdiff_t m_flFogHeightStart = 0x558;
   constexpr ptrdiff_t m_flFogHeightExponent = 0x55c;
   constexpr ptrdiff_t m_flLODBias = 0x560;
   constexpr ptrdiff_t m_bActive = 0x564;
   constexpr ptrdiff_t m_bStartDisabled = 0x565;
   constexpr ptrdiff_t m_flFogMaxOpacity = 0x568;
   constexpr ptrdiff_t m_nCubemapSourceType = 0x56c;
   constexpr ptrdiff_t m_hSkyMaterial = 0x570;
   constexpr ptrdiff_t m_iszSkyEntity = 0x578;
   constexpr ptrdiff_t m_hFogCubemapTexture = 0x580;
   constexpr ptrdiff_t m_bHasHeightFogEnd = 0x588;
   constexpr ptrdiff_t m_bFirstTime = 0x589;

}

namespace C_GradientFog {

   constexpr ptrdiff_t m_hGradientFogTexture = 0x540;
   constexpr ptrdiff_t m_flFogStartDistance = 0x548;
   constexpr ptrdiff_t m_flFogEndDistance = 0x54c;
   constexpr ptrdiff_t m_bHeightFogEnabled = 0x550;
   constexpr ptrdiff_t m_flFogStartHeight = 0x554;
   constexpr ptrdiff_t m_flFogEndHeight = 0x558;
   constexpr ptrdiff_t m_flFarZ = 0x55c;
   constexpr ptrdiff_t m_flFogMaxOpacity = 0x560;
   constexpr ptrdiff_t m_flFogFalloffExponent = 0x564;
   constexpr ptrdiff_t m_flFogVerticalExponent = 0x568;
   constexpr ptrdiff_t m_fogColor = 0x56c;
   constexpr ptrdiff_t m_flFogStrength = 0x570;
   constexpr ptrdiff_t m_flFadeTime = 0x574;
   constexpr ptrdiff_t m_bStartDisabled = 0x578;
   constexpr ptrdiff_t m_bIsEnabled = 0x579;
   constexpr ptrdiff_t m_bGradientFogNeedsTextures = 0x57a;

}

namespace C_EnvLightProbeVolume {

   constexpr ptrdiff_t m_hLightProbeTexture = 0x1520;
   constexpr ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1528;
   constexpr ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1530;
   constexpr ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1538;
   constexpr ptrdiff_t m_vBoxMins = 0x1540;
   constexpr ptrdiff_t m_vBoxMaxs = 0x154c;
   constexpr ptrdiff_t m_LightGroups = 0x1558;
   constexpr ptrdiff_t m_bMoveable = 0x1560;
   constexpr ptrdiff_t m_nHandshake = 0x1564;
   constexpr ptrdiff_t m_nPriority = 0x1568;
   constexpr ptrdiff_t m_bStartDisabled = 0x156c;
   constexpr ptrdiff_t m_nLightProbeSizeX = 0x1570;
   constexpr ptrdiff_t m_nLightProbeSizeY = 0x1574;
   constexpr ptrdiff_t m_nLightProbeSizeZ = 0x1578;
   constexpr ptrdiff_t m_nLightProbeAtlasX = 0x157c;
   constexpr ptrdiff_t m_nLightProbeAtlasY = 0x1580;
   constexpr ptrdiff_t m_nLightProbeAtlasZ = 0x1584;
   constexpr ptrdiff_t m_bEnabled = 0x1591;

}

namespace C_PlayerVisibility {

   constexpr ptrdiff_t m_flVisibilityStrength = 0x540;
   constexpr ptrdiff_t m_flFogDistanceMultiplier = 0x544;
   constexpr ptrdiff_t m_flFogMaxDensityMultiplier = 0x548;
   constexpr ptrdiff_t m_flFadeTime = 0x54c;
   constexpr ptrdiff_t m_bStartDisabled = 0x550;
   constexpr ptrdiff_t m_bIsEnabled = 0x551;

}

namespace C_TonemapController2 {

   constexpr ptrdiff_t m_flAutoExposureMin = 0x540;
   constexpr ptrdiff_t m_flAutoExposureMax = 0x544;
   constexpr ptrdiff_t m_flTonemapPercentTarget = 0x548;
   constexpr ptrdiff_t m_flTonemapPercentBrightPixels = 0x54c;
   constexpr ptrdiff_t m_flTonemapMinAvgLum = 0x550;
   constexpr ptrdiff_t m_flExposureAdaptationSpeedUp = 0x554;
   constexpr ptrdiff_t m_flExposureAdaptationSpeedDown = 0x558;
   constexpr ptrdiff_t m_flTonemapEVSmoothingRange = 0x55c;

}

namespace C_EnvVolumetricFogController {

   constexpr ptrdiff_t m_flScattering = 0x540;
   constexpr ptrdiff_t m_flAnisotropy = 0x544;
   constexpr ptrdiff_t m_flFadeSpeed = 0x548;
   constexpr ptrdiff_t m_flDrawDistance = 0x54c;
   constexpr ptrdiff_t m_flFadeInStart = 0x550;
   constexpr ptrdiff_t m_flFadeInEnd = 0x554;
   constexpr ptrdiff_t m_flIndirectStrength = 0x558;
   constexpr ptrdiff_t m_nIndirectTextureDimX = 0x55c;
   constexpr ptrdiff_t m_nIndirectTextureDimY = 0x560;
   constexpr ptrdiff_t m_nIndirectTextureDimZ = 0x564;
   constexpr ptrdiff_t m_vBoxMins = 0x568;
   constexpr ptrdiff_t m_vBoxMaxs = 0x574;
   constexpr ptrdiff_t m_bActive = 0x580;
   constexpr ptrdiff_t m_flStartAnisoTime = 0x584;
   constexpr ptrdiff_t m_flStartScatterTime = 0x588;
   constexpr ptrdiff_t m_flStartDrawDistanceTime = 0x58c;
   constexpr ptrdiff_t m_flStartAnisotropy = 0x590;
   constexpr ptrdiff_t m_flStartScattering = 0x594;
   constexpr ptrdiff_t m_flStartDrawDistance = 0x598;
   constexpr ptrdiff_t m_flDefaultAnisotropy = 0x59c;
   constexpr ptrdiff_t m_flDefaultScattering = 0x5a0;
   constexpr ptrdiff_t m_flDefaultDrawDistance = 0x5a4;
   constexpr ptrdiff_t m_bStartDisabled = 0x5a8;
   constexpr ptrdiff_t m_bEnableIndirect = 0x5a9;
   constexpr ptrdiff_t m_bIsMaster = 0x5aa;
   constexpr ptrdiff_t m_hFogIndirectTexture = 0x5b0;
   constexpr ptrdiff_t m_nForceRefreshCount = 0x5b8;
   constexpr ptrdiff_t m_bFirstTime = 0x5bc;

}

namespace C_EnvVolumetricFogVolume {

   constexpr ptrdiff_t m_bActive = 0x540;
   constexpr ptrdiff_t m_vBoxMins = 0x544;
   constexpr ptrdiff_t m_vBoxMaxs = 0x550;
   constexpr ptrdiff_t m_bStartDisabled = 0x55c;
   constexpr ptrdiff_t m_flStrength = 0x560;
   constexpr ptrdiff_t m_nFalloffShape = 0x564;
   constexpr ptrdiff_t m_flFalloffExponent = 0x568;

}

namespace C_FogController {

   constexpr ptrdiff_t m_fog = 0x540;
   constexpr ptrdiff_t m_bUseAngles = 0x5a8;
   constexpr ptrdiff_t m_iChangedVariables = 0x5ac;

}

namespace C_InfoVisibilityBox {

   constexpr ptrdiff_t m_nMode = 0x544;
   constexpr ptrdiff_t m_vBoxSize = 0x548;
   constexpr ptrdiff_t m_bEnabled = 0x554;

}

namespace CInfoWorldLayer {

   constexpr ptrdiff_t m_pOutputOnEntitiesSpawned = 0x540;
   constexpr ptrdiff_t m_worldName = 0x568;
   constexpr ptrdiff_t m_layerName = 0x570;
   constexpr ptrdiff_t m_bWorldLayerVisible = 0x578;
   constexpr ptrdiff_t m_bEntitiesSpawned = 0x579;
   constexpr ptrdiff_t m_bCreateAsChildSpawnGroup = 0x57a;
   constexpr ptrdiff_t m_hLayerSpawnGroup = 0x57c;
   constexpr ptrdiff_t m_bWorldLayerActuallyVisible = 0x580;

}

namespace C_PointCamera {

   constexpr ptrdiff_t m_FOV = 0x540;
   constexpr ptrdiff_t m_Resolution = 0x544;
   constexpr ptrdiff_t m_bFogEnable = 0x548;
   constexpr ptrdiff_t m_FogColor = 0x549;
   constexpr ptrdiff_t m_flFogStart = 0x550;
   constexpr ptrdiff_t m_flFogEnd = 0x554;
   constexpr ptrdiff_t m_flFogMaxDensity = 0x558;
   constexpr ptrdiff_t m_bActive = 0x55c;
   constexpr ptrdiff_t m_bUseScreenAspectRatio = 0x55d;
   constexpr ptrdiff_t m_flAspectRatio = 0x560;
   constexpr ptrdiff_t m_bNoSky = 0x564;
   constexpr ptrdiff_t m_fBrightness = 0x568;
   constexpr ptrdiff_t m_flZFar = 0x56c;
   constexpr ptrdiff_t m_flZNear = 0x570;
   constexpr ptrdiff_t m_bCanHLTVUse = 0x574;
   constexpr ptrdiff_t m_bDofEnabled = 0x575;
   constexpr ptrdiff_t m_flDofNearBlurry = 0x578;
   constexpr ptrdiff_t m_flDofNearCrisp = 0x57c;
   constexpr ptrdiff_t m_flDofFarCrisp = 0x580;
   constexpr ptrdiff_t m_flDofFarBlurry = 0x584;
   constexpr ptrdiff_t m_flDofTiltToGround = 0x588;
   constexpr ptrdiff_t m_TargetFOV = 0x58c;
   constexpr ptrdiff_t m_DegreesPerSecond = 0x590;
   constexpr ptrdiff_t m_bIsOn = 0x594;
   constexpr ptrdiff_t m_pNext = 0x598;

}

namespace C_PointCameraVFOV {

   constexpr ptrdiff_t m_flVerticalFOV = 0x5a0;

}

namespace CPointTemplate {

   constexpr ptrdiff_t m_iszWorldName = 0x540;
   constexpr ptrdiff_t m_iszSource2EntityLumpName = 0x548;
   constexpr ptrdiff_t m_iszEntityFilterName = 0x550;
   constexpr ptrdiff_t m_flTimeoutInterval = 0x558;
   constexpr ptrdiff_t m_bAsynchronouslySpawnEntities = 0x55c;
   constexpr ptrdiff_t m_pOutputOnSpawned = 0x560;
   constexpr ptrdiff_t m_clientOnlyEntityBehavior = 0x588;
   constexpr ptrdiff_t m_ownerSpawnGroupType = 0x58c;
   constexpr ptrdiff_t m_createdSpawnGroupHandles = 0x590;
   constexpr ptrdiff_t m_SpawnedEntityHandles = 0x5a8;
   constexpr ptrdiff_t m_ScriptSpawnCallback = 0x5c0;
   constexpr ptrdiff_t m_ScriptCallbackScope = 0x5c8;

}

namespace C_SoundAreaEntityBase {

   constexpr ptrdiff_t m_bDisabled = 0x540;
   constexpr ptrdiff_t m_bWasEnabled = 0x548;
   constexpr ptrdiff_t m_iszSoundAreaType = 0x550;
   constexpr ptrdiff_t m_vPos = 0x558;

}

namespace C_SoundAreaEntitySphere {

   constexpr ptrdiff_t m_flRadius = 0x568;

}

namespace C_SoundAreaEntityOrientedBox {

   constexpr ptrdiff_t m_vMin = 0x568;
   constexpr ptrdiff_t m_vMax = 0x574;

}

namespace C_Team {

   constexpr ptrdiff_t m_aPlayerControllers = 0x540;
   constexpr ptrdiff_t m_aPlayers = 0x558;
   constexpr ptrdiff_t m_iScore = 0x570;
   constexpr ptrdiff_t m_szTeamname = 0x574;

}

namespace CBasePlayerController {

   constexpr ptrdiff_t m_nFinalPredictedTick = 0x548;
   constexpr ptrdiff_t m_CommandContext = 0x550;
   constexpr ptrdiff_t m_nInButtonsWhichAreToggles = 0x5d0;
   constexpr ptrdiff_t m_nTickBase = 0x5d8;
   constexpr ptrdiff_t m_hPawn = 0x5dc;
   constexpr ptrdiff_t m_hPredictedPawn = 0x5e0;
   constexpr ptrdiff_t m_nSplitScreenSlot = 0x5e4;
   constexpr ptrdiff_t m_hSplitOwner = 0x5e8;
   constexpr ptrdiff_t m_hSplitScreenPlayers = 0x5f0;
   constexpr ptrdiff_t m_bIsHLTV = 0x608;
   constexpr ptrdiff_t m_iConnected = 0x60c;
   constexpr ptrdiff_t m_iszPlayerName = 0x610;
   constexpr ptrdiff_t m_steamID = 0x698;
   constexpr ptrdiff_t m_bIsLocalPlayerController = 0x6a0;
   constexpr ptrdiff_t m_iDesiredFOV = 0x6a4;

}

namespace CBasePlayerVData {

   constexpr ptrdiff_t m_sModelName = 0x28;
   constexpr ptrdiff_t m_flHeadDamageMultiplier = 0x108;
   constexpr ptrdiff_t m_flChestDamageMultiplier = 0x118;
   constexpr ptrdiff_t m_flStomachDamageMultiplier = 0x128;
   constexpr ptrdiff_t m_flArmDamageMultiplier = 0x138;
   constexpr ptrdiff_t m_flLegDamageMultiplier = 0x148;
   constexpr ptrdiff_t m_flHoldBreathTime = 0x158;
   constexpr ptrdiff_t m_flDrowningDamageInterval = 0x15c;
   constexpr ptrdiff_t m_nDrowningDamageInitial = 0x160;
   constexpr ptrdiff_t m_nDrowningDamageMax = 0x164;
   constexpr ptrdiff_t m_nWaterSpeed = 0x168;
   constexpr ptrdiff_t m_flUseRange = 0x16c;
   constexpr ptrdiff_t m_flUseAngleTolerance = 0x170;
   constexpr ptrdiff_t m_flCrouchTime = 0x174;

}

namespace CBasePlayerWeaponVData {

   constexpr ptrdiff_t m_szWorldModel = 0x28;
   constexpr ptrdiff_t m_bBuiltRightHanded = 0x108;
   constexpr ptrdiff_t m_bAllowFlipping = 0x109;
   constexpr ptrdiff_t m_bIsFullAuto = 0x10a;
   constexpr ptrdiff_t m_nNumBullets = 0x10c;
   constexpr ptrdiff_t m_sMuzzleAttachment = 0x110;
   constexpr ptrdiff_t m_szMuzzleFlashParticle = 0x118;
   constexpr ptrdiff_t m_iFlags = 0x1f8;
   constexpr ptrdiff_t m_nPrimaryAmmoType = 0x1f9;
   constexpr ptrdiff_t m_nSecondaryAmmoType = 0x1fa;
   constexpr ptrdiff_t m_iMaxClip1 = 0x1fc;
   constexpr ptrdiff_t m_iMaxClip2 = 0x200;
   constexpr ptrdiff_t m_iDefaultClip1 = 0x204;
   constexpr ptrdiff_t m_iDefaultClip2 = 0x208;
   constexpr ptrdiff_t m_iWeight = 0x20c;
   constexpr ptrdiff_t m_bAutoSwitchTo = 0x210;
   constexpr ptrdiff_t m_bAutoSwitchFrom = 0x211;
   constexpr ptrdiff_t m_iRumbleEffect = 0x214;
   constexpr ptrdiff_t m_aShootSounds = 0x218;
   constexpr ptrdiff_t m_iSlot = 0x238;
   constexpr ptrdiff_t m_iPosition = 0x23c;

}

namespace CBaseAnimGraphController {

   constexpr ptrdiff_t m_baseLayer = 0x18;
   constexpr ptrdiff_t m_animGraphNetworkedVars = 0x40;
   constexpr ptrdiff_t m_bSequenceFinished = 0x1320;
   constexpr ptrdiff_t m_flLastEventCycle = 0x1324;
   constexpr ptrdiff_t m_flLastEventAnimTime = 0x1328;
   constexpr ptrdiff_t m_flPlaybackRate = 0x132c;
   constexpr ptrdiff_t m_flPrevAnimTime = 0x1334;
   constexpr ptrdiff_t m_bClientSideAnimation = 0x1338;
   constexpr ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x1339;
   constexpr ptrdiff_t m_nPrevNewSequenceParity = 0x133a;
   constexpr ptrdiff_t m_nPrevResetEventsParity = 0x133b;
   constexpr ptrdiff_t m_nNewSequenceParity = 0x133c;
   constexpr ptrdiff_t m_nResetEventsParity = 0x1340;
   constexpr ptrdiff_t m_nAnimLoopMode = 0x1344;
   constexpr ptrdiff_t m_hAnimationUpdate = 0x13e4;
   constexpr ptrdiff_t m_hLastAnimEventSequence = 0x13e8;

}

namespace C_BaseModelEntity {

   constexpr ptrdiff_t m_CRenderComponent = 0xa10;
   constexpr ptrdiff_t m_CHitboxComponent = 0xa18;
   constexpr ptrdiff_t m_bInitModelEffects = 0xa60;
   constexpr ptrdiff_t m_bIsStaticProp = 0xa61;
   constexpr ptrdiff_t m_nLastAddDecal = 0xa64;
   constexpr ptrdiff_t m_nDecalsAdded = 0xa68;
   constexpr ptrdiff_t m_iOldHealth = 0xa6c;
   constexpr ptrdiff_t m_nRenderMode = 0xa70;
   constexpr ptrdiff_t m_nRenderFX = 0xa71;
   constexpr ptrdiff_t m_bAllowFadeInView = 0xa72;
   constexpr ptrdiff_t m_clrRender = 0xa73;
   constexpr ptrdiff_t m_vecRenderAttributes = 0xa78;
   constexpr ptrdiff_t m_LightGroup = 0xae0;
   constexpr ptrdiff_t m_bRenderToCubemaps = 0xae4;
   constexpr ptrdiff_t m_Collision = 0xae8;
   constexpr ptrdiff_t m_Glow = 0xb98;
   constexpr ptrdiff_t m_flGlowBackfaceMult = 0xbf0;
   constexpr ptrdiff_t m_fadeMinDist = 0xbf4;
   constexpr ptrdiff_t m_fadeMaxDist = 0xbf8;
   constexpr ptrdiff_t m_flFadeScale = 0xbfc;
   constexpr ptrdiff_t m_flShadowStrength = 0xc00;
   constexpr ptrdiff_t m_nObjectCulling = 0xc04;
   constexpr ptrdiff_t m_nAddDecal = 0xc08;
   constexpr ptrdiff_t m_vDecalPosition = 0xc0c;
   constexpr ptrdiff_t m_vDecalForwardAxis = 0xc18;
   constexpr ptrdiff_t m_flDecalHealBloodRate = 0xc24;
   constexpr ptrdiff_t m_flDecalHealHeightRate = 0xc28;
   constexpr ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xc30;
   constexpr ptrdiff_t m_vecViewOffset = 0xc48;
   constexpr ptrdiff_t m_pClientAlphaProperty = 0xc78;
   constexpr ptrdiff_t m_ClientOverrideTint = 0xc80;
   constexpr ptrdiff_t m_bUseClientOverrideTint = 0xc84;

}

namespace CLogicRelay {

   constexpr ptrdiff_t m_OnTrigger = 0x540;
   constexpr ptrdiff_t m_OnSpawn = 0x568;
   constexpr ptrdiff_t m_bDisabled = 0x590;
   constexpr ptrdiff_t m_bWaitForRefire = 0x591;
   constexpr ptrdiff_t m_bTriggerOnce = 0x592;
   constexpr ptrdiff_t m_bFastRetrigger = 0x593;
   constexpr ptrdiff_t m_bPassthoughCaller = 0x594;

}

namespace C_ParticleSystem {

   constexpr ptrdiff_t m_szSnapshotFileName = 0xcc0;
   constexpr ptrdiff_t m_bActive = 0xec0;
   constexpr ptrdiff_t m_bFrozen = 0xec1;
   constexpr ptrdiff_t m_flFreezeTransitionDuration = 0xec4;
   constexpr ptrdiff_t m_nStopType = 0xec8;
   constexpr ptrdiff_t m_bAnimateDuringGameplayPause = 0xecc;
   constexpr ptrdiff_t m_iEffectIndex = 0xed0;
   constexpr ptrdiff_t m_flStartTime = 0xed8;
   constexpr ptrdiff_t m_flPreSimTime = 0xedc;
   constexpr ptrdiff_t m_vServerControlPoints = 0xee0;
   constexpr ptrdiff_t m_iServerControlPointAssignments = 0xf10;
   constexpr ptrdiff_t m_hControlPointEnts = 0xf14;
   constexpr ptrdiff_t m_bNoSave = 0x1014;
   constexpr ptrdiff_t m_bNoFreeze = 0x1015;
   constexpr ptrdiff_t m_bNoRamp = 0x1016;
   constexpr ptrdiff_t m_bStartActive = 0x1017;
   constexpr ptrdiff_t m_iszEffectName = 0x1018;
   constexpr ptrdiff_t m_iszControlPointNames = 0x1020;
   constexpr ptrdiff_t m_nDataCP = 0x1220;
   constexpr ptrdiff_t m_vecDataCPValue = 0x1224;
   constexpr ptrdiff_t m_nTintCP = 0x1230;
   constexpr ptrdiff_t m_clrTint = 0x1234;
   constexpr ptrdiff_t m_bOldActive = 0x1258;
   constexpr ptrdiff_t m_bOldFrozen = 0x1259;

}

namespace C_PathParticleRope {

   constexpr ptrdiff_t m_bStartActive = 0x540;
   constexpr ptrdiff_t m_flMaxSimulationTime = 0x544;
   constexpr ptrdiff_t m_iszEffectName = 0x548;
   constexpr ptrdiff_t m_PathNodes_Name = 0x550;
   constexpr ptrdiff_t m_flParticleSpacing = 0x568;
   constexpr ptrdiff_t m_flSlack = 0x56c;
   constexpr ptrdiff_t m_flRadius = 0x570;
   constexpr ptrdiff_t m_ColorTint = 0x574;
   constexpr ptrdiff_t m_nEffectState = 0x578;
   constexpr ptrdiff_t m_iEffectIndex = 0x580;
   constexpr ptrdiff_t m_PathNodes_Position = 0x588;
   constexpr ptrdiff_t m_PathNodes_TangentIn = 0x5a0;
   constexpr ptrdiff_t m_PathNodes_TangentOut = 0x5b8;
   constexpr ptrdiff_t m_PathNodes_Color = 0x5d0;
   constexpr ptrdiff_t m_PathNodes_PinEnabled = 0x5e8;
   constexpr ptrdiff_t m_PathNodes_RadiusScale = 0x600;

}

namespace C_DynamicLight {

   constexpr ptrdiff_t m_Flags = 0xcc0;
   constexpr ptrdiff_t m_LightStyle = 0xcc1;
   constexpr ptrdiff_t m_Radius = 0xcc4;
   constexpr ptrdiff_t m_Exponent = 0xcc8;
   constexpr ptrdiff_t m_InnerAngle = 0xccc;
   constexpr ptrdiff_t m_OuterAngle = 0xcd0;
   constexpr ptrdiff_t m_SpotRadius = 0xcd4;

}

namespace C_EnvScreenOverlay {

   constexpr ptrdiff_t m_iszOverlayNames = 0x540;
   constexpr ptrdiff_t m_flOverlayTimes = 0x590;
   constexpr ptrdiff_t m_flStartTime = 0x5b8;
   constexpr ptrdiff_t m_iDesiredOverlay = 0x5bc;
   constexpr ptrdiff_t m_bIsActive = 0x5c0;
   constexpr ptrdiff_t m_bWasActive = 0x5c1;
   constexpr ptrdiff_t m_iCachedDesiredOverlay = 0x5c4;
   constexpr ptrdiff_t m_iCurrentOverlay = 0x5c8;
   constexpr ptrdiff_t m_flCurrentOverlayTime = 0x5cc;

}

namespace C_FuncTrackTrain {

   constexpr ptrdiff_t m_nLongAxis = 0xcc0;
   constexpr ptrdiff_t m_flRadius = 0xcc4;
   constexpr ptrdiff_t m_flLineLength = 0xcc8;

}

namespace C_LightGlowOverlay {

   constexpr ptrdiff_t m_vecOrigin = 0xd0;
   constexpr ptrdiff_t m_vecDirection = 0xdc;
   constexpr ptrdiff_t m_nMinDist = 0xe8;
   constexpr ptrdiff_t m_nMaxDist = 0xec;
   constexpr ptrdiff_t m_nOuterMaxDist = 0xf0;
   constexpr ptrdiff_t m_bOneSided = 0xf4;
   constexpr ptrdiff_t m_bModulateByDot = 0xf5;

}

namespace C_LightGlow {

   constexpr ptrdiff_t m_nHorizontalSize = 0xcc0;
   constexpr ptrdiff_t m_nVerticalSize = 0xcc4;
   constexpr ptrdiff_t m_nMinDist = 0xcc8;
   constexpr ptrdiff_t m_nMaxDist = 0xccc;
   constexpr ptrdiff_t m_nOuterMaxDist = 0xcd0;
   constexpr ptrdiff_t m_flGlowProxySize = 0xcd4;
   constexpr ptrdiff_t m_flHDRColorScale = 0xcd8;
   constexpr ptrdiff_t m_Glow = 0xce0;

}

namespace C_RagdollManager {

   constexpr ptrdiff_t m_iCurrentMaxRagdollCount = 0x540;

}

namespace C_SpotlightEnd {

   constexpr ptrdiff_t m_flLightScale = 0xcc0;
   constexpr ptrdiff_t m_Radius = 0xcc4;

}

namespace C_PointValueRemapper {

   constexpr ptrdiff_t m_bDisabled = 0x540;
   constexpr ptrdiff_t m_bDisabledOld = 0x541;
   constexpr ptrdiff_t m_bUpdateOnClient = 0x542;
   constexpr ptrdiff_t m_nInputType = 0x544;
   constexpr ptrdiff_t m_hRemapLineStart = 0x548;
   constexpr ptrdiff_t m_hRemapLineEnd = 0x54c;
   constexpr ptrdiff_t m_flMaximumChangePerSecond = 0x550;
   constexpr ptrdiff_t m_flDisengageDistance = 0x554;
   constexpr ptrdiff_t m_flEngageDistance = 0x558;
   constexpr ptrdiff_t m_bRequiresUseKey = 0x55c;
   constexpr ptrdiff_t m_nOutputType = 0x560;
   constexpr ptrdiff_t m_hOutputEntities = 0x568;
   constexpr ptrdiff_t m_nHapticsType = 0x580;
   constexpr ptrdiff_t m_nMomentumType = 0x584;
   constexpr ptrdiff_t m_flMomentumModifier = 0x588;
   constexpr ptrdiff_t m_flSnapValue = 0x58c;
   constexpr ptrdiff_t m_flCurrentMomentum = 0x590;
   constexpr ptrdiff_t m_nRatchetType = 0x594;
   constexpr ptrdiff_t m_flRatchetOffset = 0x598;
   constexpr ptrdiff_t m_flInputOffset = 0x59c;
   constexpr ptrdiff_t m_bEngaged = 0x5a0;
   constexpr ptrdiff_t m_bFirstUpdate = 0x5a1;
   constexpr ptrdiff_t m_flPreviousValue = 0x5a4;
   constexpr ptrdiff_t m_flPreviousUpdateTickTime = 0x5a8;
   constexpr ptrdiff_t m_vecPreviousTestPoint = 0x5ac;

}

namespace C_PointWorldText {

   constexpr ptrdiff_t m_bForceRecreateNextUpdate = 0xcc8;
   constexpr ptrdiff_t m_messageText = 0xcd8;
   constexpr ptrdiff_t m_FontName = 0xed8;
   constexpr ptrdiff_t m_bEnabled = 0xf18;
   constexpr ptrdiff_t m_bFullbright = 0xf19;
   constexpr ptrdiff_t m_flWorldUnitsPerPx = 0xf1c;
   constexpr ptrdiff_t m_flFontSize = 0xf20;
   constexpr ptrdiff_t m_flDepthOffset = 0xf24;
   constexpr ptrdiff_t m_Color = 0xf28;
   constexpr ptrdiff_t m_nJustifyHorizontal = 0xf2c;
   constexpr ptrdiff_t m_nJustifyVertical = 0xf30;
   constexpr ptrdiff_t m_nReorientMode = 0xf34;

}

namespace C_HandleTest {

   constexpr ptrdiff_t m_Handle = 0x540;
   constexpr ptrdiff_t m_bSendHandle = 0x544;

}

namespace C_EnvWind {

   constexpr ptrdiff_t m_EnvWindShared = 0x540;

}

namespace C_BaseButton {

   constexpr ptrdiff_t m_glowEntity = 0xcc0;
   constexpr ptrdiff_t m_usable = 0xcc4;
   constexpr ptrdiff_t m_szDisplayText = 0xcc8;

}

namespace C_EntityDissolve {

   constexpr ptrdiff_t m_flStartTime = 0xcc8;
   constexpr ptrdiff_t m_flFadeInStart = 0xccc;
   constexpr ptrdiff_t m_flFadeInLength = 0xcd0;
   constexpr ptrdiff_t m_flFadeOutModelStart = 0xcd4;
   constexpr ptrdiff_t m_flFadeOutModelLength = 0xcd8;
   constexpr ptrdiff_t m_flFadeOutStart = 0xcdc;
   constexpr ptrdiff_t m_flFadeOutLength = 0xce0;
   constexpr ptrdiff_t m_flNextSparkTime = 0xce4;
   constexpr ptrdiff_t m_nDissolveType = 0xce8;
   constexpr ptrdiff_t m_vDissolverOrigin = 0xcec;
   constexpr ptrdiff_t m_nMagnitude = 0xcf8;
   constexpr ptrdiff_t m_bCoreExplode = 0xcfc;
   constexpr ptrdiff_t m_bLinkedToServerEnt = 0xcfd;

}

namespace C_EnvDecal {

   constexpr ptrdiff_t m_hDecalMaterial = 0xcc0;
   constexpr ptrdiff_t m_flWidth = 0xcc8;
   constexpr ptrdiff_t m_flHeight = 0xccc;
   constexpr ptrdiff_t m_flDepth = 0xcd0;
   constexpr ptrdiff_t m_nRenderOrder = 0xcd4;
   constexpr ptrdiff_t m_bProjectOnWorld = 0xcd8;
   constexpr ptrdiff_t m_bProjectOnCharacters = 0xcd9;
   constexpr ptrdiff_t m_bProjectOnWater = 0xcda;
   constexpr ptrdiff_t m_flDepthSortBias = 0xcdc;

}

namespace CFireOverlay {

   constexpr ptrdiff_t m_pOwner = 0xd0;
   constexpr ptrdiff_t m_vBaseColors = 0xd8;
   constexpr ptrdiff_t m_flScale = 0x108;
   constexpr ptrdiff_t m_nGUID = 0x10c;

}

namespace C_FuncElectrifiedVolume {

   constexpr ptrdiff_t m_nAmbientEffect = 0xcc0;
   constexpr ptrdiff_t m_EffectName = 0xcc8;
   constexpr ptrdiff_t m_bState = 0xcd0;

}

namespace C_RopeKeyframe {

   constexpr ptrdiff_t m_LinksTouchingSomething = 0xcc8;
   constexpr ptrdiff_t m_nLinksTouchingSomething = 0xccc;
   constexpr ptrdiff_t m_bApplyWind = 0xcd0;
   constexpr ptrdiff_t m_fPrevLockedPoints = 0xcd4;
   constexpr ptrdiff_t m_iForcePointMoveCounter = 0xcd8;
   constexpr ptrdiff_t m_bPrevEndPointPos = 0xcdc;
   constexpr ptrdiff_t m_vPrevEndPointPos = 0xce0;
   constexpr ptrdiff_t m_flCurScroll = 0xcf8;
   constexpr ptrdiff_t m_flScrollSpeed = 0xcfc;
   constexpr ptrdiff_t m_RopeFlags = 0xd00;
   constexpr ptrdiff_t m_iRopeMaterialModelIndex = 0xd08;
   constexpr ptrdiff_t m_LightValues = 0xf80;
   constexpr ptrdiff_t m_nSegments = 0xff8;
   constexpr ptrdiff_t m_hStartPoint = 0xffc;
   constexpr ptrdiff_t m_hEndPoint = 0x1000;
   constexpr ptrdiff_t m_iStartAttachment = 0x1004;
   constexpr ptrdiff_t m_iEndAttachment = 0x1005;
   constexpr ptrdiff_t m_Subdiv = 0x1006;
   constexpr ptrdiff_t m_RopeLength = 0x1008;
   constexpr ptrdiff_t m_Slack = 0x100a;
   constexpr ptrdiff_t m_TextureScale = 0x100c;
   constexpr ptrdiff_t m_fLockedPoints = 0x1010;
   constexpr ptrdiff_t m_nChangeCount = 0x1011;
   constexpr ptrdiff_t m_Width = 0x1014;
   constexpr ptrdiff_t m_PhysicsDelegate = 0x1018;
   constexpr ptrdiff_t m_hMaterial = 0x1028;
   constexpr ptrdiff_t m_TextureHeight = 0x1030;
   constexpr ptrdiff_t m_vecImpulse = 0x1034;
   constexpr ptrdiff_t m_vecPreviousImpulse = 0x1040;
   constexpr ptrdiff_t m_flCurrentGustTimer = 0x104c;
   constexpr ptrdiff_t m_flCurrentGustLifetime = 0x1050;
   constexpr ptrdiff_t m_flTimeToNextGust = 0x1054;
   constexpr ptrdiff_t m_vWindDir = 0x1058;
   constexpr ptrdiff_t m_vColorMod = 0x1064;
   constexpr ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1070;
   constexpr ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1088;
   constexpr ptrdiff_t m_bConstrainBetweenEndpoints = 0x10a0;
   constexpr ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0;
   constexpr ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0;
   constexpr ptrdiff_t m_bNewDataThisFrame = 0x0;
   constexpr ptrdiff_t m_bPhysicsInitted = 0x0;

}

namespace C_SceneEntity {

   constexpr ptrdiff_t m_bIsPlayingBack = 0x548;
   constexpr ptrdiff_t m_bPaused = 0x549;
   constexpr ptrdiff_t m_bMultiplayer = 0x54a;
   constexpr ptrdiff_t m_bAutogenerated = 0x54b;
   constexpr ptrdiff_t m_flForceClientTime = 0x54c;
   constexpr ptrdiff_t m_nSceneStringIndex = 0x550;
   constexpr ptrdiff_t m_bClientOnly = 0x552;
   constexpr ptrdiff_t m_hOwner = 0x554;
   constexpr ptrdiff_t m_hActorList = 0x558;
   constexpr ptrdiff_t m_bWasPlaying = 0x570;
   constexpr ptrdiff_t m_QueuedEvents = 0x580;
   constexpr ptrdiff_t m_flCurrentTime = 0x598;

}

namespace C_SunGlowOverlay {

   constexpr ptrdiff_t m_bModulateByDot = 0xd0;

}

namespace C_Sun {

   constexpr ptrdiff_t m_fxSSSunFlareEffectIndex = 0xcc0;
   constexpr ptrdiff_t m_fxSunFlareEffectIndex = 0xcc4;
   constexpr ptrdiff_t m_fdistNormalize = 0xcc8;
   constexpr ptrdiff_t m_vSunPos = 0xccc;
   constexpr ptrdiff_t m_vDirection = 0xcd8;
   constexpr ptrdiff_t m_iszEffectName = 0xce8;
   constexpr ptrdiff_t m_iszSSEffectName = 0xcf0;
   constexpr ptrdiff_t m_clrOverlay = 0xcf8;
   constexpr ptrdiff_t m_bOn = 0xcfc;
   constexpr ptrdiff_t m_bmaxColor = 0xcfd;
   constexpr ptrdiff_t m_flSize = 0xd00;
   constexpr ptrdiff_t m_flHazeScale = 0xd04;
   constexpr ptrdiff_t m_flRotation = 0xd08;
   constexpr ptrdiff_t m_flHDRColorScale = 0xd0c;
   constexpr ptrdiff_t m_flAlphaHaze = 0xd10;
   constexpr ptrdiff_t m_flAlphaScale = 0xd14;
   constexpr ptrdiff_t m_flAlphaHdr = 0xd18;
   constexpr ptrdiff_t m_flFarZScale = 0xd1c;

}

namespace C_BaseTrigger {

   constexpr ptrdiff_t m_bDisabled = 0xcc0;
   constexpr ptrdiff_t m_bClientSidePredicted = 0xcc1;

}

namespace CClientAlphaProperty {

   constexpr ptrdiff_t m_nRenderFX = 0x10;
   constexpr ptrdiff_t m_nRenderMode = 0x11;
   constexpr ptrdiff_t m_bAlphaOverride = 0x0;
   constexpr ptrdiff_t m_bShadowAlphaOverride = 0x0;
   constexpr ptrdiff_t m_nReserved = 0x0;
   constexpr ptrdiff_t m_nAlpha = 0x13;
   constexpr ptrdiff_t m_nDesyncOffset = 0x14;
   constexpr ptrdiff_t m_nReserved2 = 0x16;
   constexpr ptrdiff_t m_nDistFadeStart = 0x18;
   constexpr ptrdiff_t m_nDistFadeEnd = 0x1a;
   constexpr ptrdiff_t m_flFadeScale = 0x1c;
   constexpr ptrdiff_t m_flRenderFxStartTime = 0x20;
   constexpr ptrdiff_t m_flRenderFxDuration = 0x24;

}

namespace C_Beam {

   constexpr ptrdiff_t m_flFrameRate = 0xcc0;
   constexpr ptrdiff_t m_flHDRColorScale = 0xcc4;
   constexpr ptrdiff_t m_flFireTime = 0xcc8;
   constexpr ptrdiff_t m_flDamage = 0xccc;
   constexpr ptrdiff_t m_nNumBeamEnts = 0xcd0;
   constexpr ptrdiff_t m_queryHandleHalo = 0xcd4;
   constexpr ptrdiff_t m_hBaseMaterial = 0xcf8;
   constexpr ptrdiff_t m_nHaloIndex = 0xd00;
   constexpr ptrdiff_t m_nBeamType = 0xd08;
   constexpr ptrdiff_t m_nBeamFlags = 0xd0c;
   constexpr ptrdiff_t m_hAttachEntity = 0xd10;
   constexpr ptrdiff_t m_nAttachIndex = 0xd38;
   constexpr ptrdiff_t m_fWidth = 0xd44;
   constexpr ptrdiff_t m_fEndWidth = 0xd48;
   constexpr ptrdiff_t m_fFadeLength = 0xd4c;
   constexpr ptrdiff_t m_fHaloScale = 0xd50;
   constexpr ptrdiff_t m_fAmplitude = 0xd54;
   constexpr ptrdiff_t m_fStartFrame = 0xd58;
   constexpr ptrdiff_t m_fSpeed = 0xd5c;
   constexpr ptrdiff_t m_flFrame = 0xd60;
   constexpr ptrdiff_t m_nClipStyle = 0xd64;
   constexpr ptrdiff_t m_bTurnedOff = 0xd68;
   constexpr ptrdiff_t m_vecEndPos = 0xd6c;
   constexpr ptrdiff_t m_hEndEntity = 0xd78;

}

namespace C_FuncLadder {

   constexpr ptrdiff_t m_vecLadderDir = 0xcc0;
   constexpr ptrdiff_t m_Dismounts = 0xcd0;
   constexpr ptrdiff_t m_vecLocalTop = 0xce8;
   constexpr ptrdiff_t m_vecPlayerMountPositionTop = 0xcf4;
   constexpr ptrdiff_t m_vecPlayerMountPositionBottom = 0xd00;
   constexpr ptrdiff_t m_flAutoRideSpeed = 0xd0c;
   constexpr ptrdiff_t m_bDisabled = 0xd10;
   constexpr ptrdiff_t m_bFakeLadder = 0xd11;
   constexpr ptrdiff_t m_bHasSlack = 0xd12;

}

namespace CPrecipitationVData {

   constexpr ptrdiff_t m_szParticlePrecipitationEffect = 0x28;
   constexpr ptrdiff_t m_flInnerDistance = 0x108;
   constexpr ptrdiff_t m_nAttachType = 0x10c;
   constexpr ptrdiff_t m_bBatchSameVolumeType = 0x110;
   constexpr ptrdiff_t m_nRTEnvCP = 0x114;
   constexpr ptrdiff_t m_nRTEnvCPComponent = 0x118;
   constexpr ptrdiff_t m_szModifier = 0x120;

}

namespace C_Sprite {

   constexpr ptrdiff_t m_hSpriteMaterial = 0xcd8;
   constexpr ptrdiff_t m_hAttachedToEntity = 0xce0;
   constexpr ptrdiff_t m_nAttachment = 0xce4;
   constexpr ptrdiff_t m_flSpriteFramerate = 0xce8;
   constexpr ptrdiff_t m_flFrame = 0xcec;
   constexpr ptrdiff_t m_flDieTime = 0xcf0;
   constexpr ptrdiff_t m_nBrightness = 0xd00;
   constexpr ptrdiff_t m_flBrightnessDuration = 0xd04;
   constexpr ptrdiff_t m_flSpriteScale = 0xd08;
   constexpr ptrdiff_t m_flScaleDuration = 0xd0c;
   constexpr ptrdiff_t m_bWorldSpaceScale = 0xd10;
   constexpr ptrdiff_t m_flGlowProxySize = 0xd14;
   constexpr ptrdiff_t m_flHDRColorScale = 0xd18;
   constexpr ptrdiff_t m_flLastTime = 0xd1c;
   constexpr ptrdiff_t m_flMaxFrame = 0xd20;
   constexpr ptrdiff_t m_flStartScale = 0xd24;
   constexpr ptrdiff_t m_flDestScale = 0xd28;
   constexpr ptrdiff_t m_flScaleTimeStart = 0xd2c;
   constexpr ptrdiff_t m_nStartBrightness = 0xd30;
   constexpr ptrdiff_t m_nDestBrightness = 0xd34;
   constexpr ptrdiff_t m_flBrightnessTimeStart = 0xd38;
   constexpr ptrdiff_t m_hOldSpriteMaterial = 0xd40;
   constexpr ptrdiff_t m_nSpriteWidth = 0xde8;
   constexpr ptrdiff_t m_nSpriteHeight = 0xdec;

}

namespace C_BaseClientUIEntity {

   constexpr ptrdiff_t m_bEnabled = 0xcc8;
   constexpr ptrdiff_t m_DialogXMLName = 0xcd0;
   constexpr ptrdiff_t m_PanelClassName = 0xcd8;
   constexpr ptrdiff_t m_PanelID = 0xce0;

}

namespace C_PointClientUIDialog {

   constexpr ptrdiff_t m_hActivator = 0xcf0;
   constexpr ptrdiff_t m_bStartEnabled = 0xcf4;

}

namespace C_PointClientUIHUD {

   constexpr ptrdiff_t m_bCheckCSSClasses = 0xcf8;
   constexpr ptrdiff_t m_bIgnoreInput = 0xe80;
   constexpr ptrdiff_t m_flWidth = 0xe84;
   constexpr ptrdiff_t m_flHeight = 0xe88;
   constexpr ptrdiff_t m_flDPI = 0xe8c;
   constexpr ptrdiff_t m_flInteractDistance = 0xe90;
   constexpr ptrdiff_t m_flDepthOffset = 0xe94;
   constexpr ptrdiff_t m_unOwnerContext = 0xe98;
   constexpr ptrdiff_t m_unHorizontalAlign = 0xe9c;
   constexpr ptrdiff_t m_unVerticalAlign = 0xea0;
   constexpr ptrdiff_t m_unOrientation = 0xea4;
   constexpr ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xea8;
   constexpr ptrdiff_t m_vecCSSClasses = 0xeb0;

}

namespace C_PointClientUIWorldPanel {

   constexpr ptrdiff_t m_bForceRecreateNextUpdate = 0xcf8;
   constexpr ptrdiff_t m_bMoveViewToPlayerNextThink = 0xcf9;
   constexpr ptrdiff_t m_bCheckCSSClasses = 0xcfa;
   constexpr ptrdiff_t m_anchorDeltaTransform = 0xd00;
   constexpr ptrdiff_t m_pOffScreenIndicator = 0xea0;
   constexpr ptrdiff_t m_bIgnoreInput = 0xec8;
   constexpr ptrdiff_t m_bLit = 0xec9;
   constexpr ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xeca;
   constexpr ptrdiff_t m_flWidth = 0xecc;
   constexpr ptrdiff_t m_flHeight = 0xed0;
   constexpr ptrdiff_t m_flDPI = 0xed4;
   constexpr ptrdiff_t m_flInteractDistance = 0xed8;
   constexpr ptrdiff_t m_flDepthOffset = 0xedc;
   constexpr ptrdiff_t m_unOwnerContext = 0xee0;
   constexpr ptrdiff_t m_unHorizontalAlign = 0xee4;
   constexpr ptrdiff_t m_unVerticalAlign = 0xee8;
   constexpr ptrdiff_t m_unOrientation = 0xeec;
   constexpr ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xef0;
   constexpr ptrdiff_t m_vecCSSClasses = 0xef8;
   constexpr ptrdiff_t m_bOpaque = 0xf10;
   constexpr ptrdiff_t m_bNoDepth = 0xf11;
   constexpr ptrdiff_t m_bRenderBackface = 0xf12;
   constexpr ptrdiff_t m_bUseOffScreenIndicator = 0xf13;
   constexpr ptrdiff_t m_bExcludeFromSaveGames = 0xf14;
   constexpr ptrdiff_t m_bGrabbable = 0xf15;
   constexpr ptrdiff_t m_bOnlyRenderToTexture = 0xf16;
   constexpr ptrdiff_t m_bDisableMipGen = 0xf17;
   constexpr ptrdiff_t m_nExplicitImageLayout = 0xf18;

}

namespace CPointOffScreenIndicatorUi {

   constexpr ptrdiff_t m_bBeenEnabled = 0xf20;
   constexpr ptrdiff_t m_bHide = 0xf21;
   constexpr ptrdiff_t m_flSeenTargetTime = 0xf24;
   constexpr ptrdiff_t m_pTargetPanel = 0xf28;

}

namespace C_PointClientUIWorldTextPanel {

   constexpr ptrdiff_t m_messageText = 0xf20;

}

namespace CInfoOffscreenPanoramaTexture {

   constexpr ptrdiff_t m_bDisabled = 0x540;
   constexpr ptrdiff_t m_nResolutionX = 0x544;
   constexpr ptrdiff_t m_nResolutionY = 0x548;
   constexpr ptrdiff_t m_szLayoutFileName = 0x550;
   constexpr ptrdiff_t m_RenderAttrName = 0x558;
   constexpr ptrdiff_t m_TargetEntities = 0x560;
   constexpr ptrdiff_t m_nTargetChangeCount = 0x578;
   constexpr ptrdiff_t m_vecCSSClasses = 0x580;
   constexpr ptrdiff_t m_bCheckCSSClasses = 0x6f8;

}

namespace C_EconItemView {

   constexpr ptrdiff_t m_bInventoryImageRgbaRequested = 0x60;
   constexpr ptrdiff_t m_bInventoryImageTriedCache = 0x61;
   constexpr ptrdiff_t m_nInventoryImageRgbaWidth = 0x80;
   constexpr ptrdiff_t m_nInventoryImageRgbaHeight = 0x84;
   constexpr ptrdiff_t m_szCurrentLoadCachedFileName = 0x88;
   constexpr ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1b8;
   constexpr ptrdiff_t m_iItemDefinitionIndex = 0x1ba;
   constexpr ptrdiff_t m_iEntityQuality = 0x1bc;
   constexpr ptrdiff_t m_iEntityLevel = 0x1c0;
   constexpr ptrdiff_t m_iItemID = 0x1c8;
   constexpr ptrdiff_t m_iItemIDHigh = 0x1d0;
   constexpr ptrdiff_t m_iItemIDLow = 0x1d4;
   constexpr ptrdiff_t m_iAccountID = 0x1d8;
   constexpr ptrdiff_t m_iInventoryPosition = 0x1dc;
   constexpr ptrdiff_t m_bInitialized = 0x1e8;
   constexpr ptrdiff_t m_bIsStoreItem = 0x1e9;
   constexpr ptrdiff_t m_bIsTradeItem = 0x1ea;
   constexpr ptrdiff_t m_iEntityQuantity = 0x1ec;
   constexpr ptrdiff_t m_iRarityOverride = 0x1f0;
   constexpr ptrdiff_t m_iQualityOverride = 0x1f4;
   constexpr ptrdiff_t m_unClientFlags = 0x1f8;
   constexpr ptrdiff_t m_unOverrideStyle = 0x1f9;
   constexpr ptrdiff_t m_AttributeList = 0x210;
   constexpr ptrdiff_t m_NetworkedDynamicAttributes = 0x270;
   constexpr ptrdiff_t m_szCustomName = 0x2d0;
   constexpr ptrdiff_t m_szCustomNameOverride = 0x371;
   constexpr ptrdiff_t m_bInitializedTags = 0x440;

}

namespace CBombTarget {

   constexpr ptrdiff_t m_bBombPlantedHere = 0xcc8;

}

