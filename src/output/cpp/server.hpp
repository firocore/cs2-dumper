#pragma once

#include <cstddef>

using namespace std;

namespace CChangeLevel {

   constexpr ptrdiff_t m_sMapName = 0x8a8;
   constexpr ptrdiff_t m_sLandmarkName = 0x8b0;
   constexpr ptrdiff_t m_OnChangeLevel = 0x8b8;
   constexpr ptrdiff_t m_bTouched = 0x8e0;
   constexpr ptrdiff_t m_bNoTouch = 0x8e1;
   constexpr ptrdiff_t m_bNewChapter = 0x8e2;
   constexpr ptrdiff_t m_bOnChangeLevelFired = 0x8e3;

}

namespace CTriggerTeleport {

   constexpr ptrdiff_t m_iLandmark = 0x8a8;
   constexpr ptrdiff_t m_bUseLandmarkAngles = 0x8b0;
   constexpr ptrdiff_t m_bMirrorPlayer = 0x8b1;

}

namespace CTriggerFan {

   constexpr ptrdiff_t m_vFanOrigin = 0x8a8;
   constexpr ptrdiff_t m_vFanEnd = 0x8b4;
   constexpr ptrdiff_t m_vNoise = 0x8c0;
   constexpr ptrdiff_t m_flForce = 0x8cc;
   constexpr ptrdiff_t m_flPlayerForce = 0x8d0;
   constexpr ptrdiff_t m_flRampTime = 0x8d4;
   constexpr ptrdiff_t m_bFalloff = 0x8d8;
   constexpr ptrdiff_t m_bPushPlayer = 0x8d9;
   constexpr ptrdiff_t m_bRampDown = 0x8da;
   constexpr ptrdiff_t m_bAddNoise = 0x8db;
   constexpr ptrdiff_t m_RampTimer = 0x8e0;

}

namespace CFuncNavBlocker {

   constexpr ptrdiff_t m_bDisabled = 0x700;
   constexpr ptrdiff_t m_nBlockedTeamNumber = 0x704;

}

namespace CNavLinkAreaEntity {

   constexpr ptrdiff_t m_flWidth = 0x4b0;
   constexpr ptrdiff_t m_vLocatorOffset = 0x4b4;
   constexpr ptrdiff_t m_qLocatorAnglesOffset = 0x4c0;
   constexpr ptrdiff_t m_strMovementForward = 0x4d0;
   constexpr ptrdiff_t m_strMovementReverse = 0x4d8;
   constexpr ptrdiff_t m_nNavLinkIdForward = 0x4e0;
   constexpr ptrdiff_t m_nNavLinkIdReverse = 0x4e4;
   constexpr ptrdiff_t m_bEnabled = 0x4e8;
   constexpr ptrdiff_t m_strFilterName = 0x4f0;
   constexpr ptrdiff_t m_hFilter = 0x4f8;
   constexpr ptrdiff_t m_OnNavLinkStart = 0x500;
   constexpr ptrdiff_t m_OnNavLinkFinish = 0x528;
   constexpr ptrdiff_t m_bIsTerminus = 0x550;

}

namespace CNavSpaceInfo {

   constexpr ptrdiff_t m_bCreateFlightSpace = 0x4b0;

}

namespace CBeam {

   constexpr ptrdiff_t m_flFrameRate = 0x700;
   constexpr ptrdiff_t m_flHDRColorScale = 0x704;
   constexpr ptrdiff_t m_flFireTime = 0x708;
   constexpr ptrdiff_t m_flDamage = 0x70c;
   constexpr ptrdiff_t m_nNumBeamEnts = 0x710;
   constexpr ptrdiff_t m_hBaseMaterial = 0x718;
   constexpr ptrdiff_t m_nHaloIndex = 0x720;
   constexpr ptrdiff_t m_nBeamType = 0x728;
   constexpr ptrdiff_t m_nBeamFlags = 0x72c;
   constexpr ptrdiff_t m_hAttachEntity = 0x730;
   constexpr ptrdiff_t m_nAttachIndex = 0x758;
   constexpr ptrdiff_t m_fWidth = 0x764;
   constexpr ptrdiff_t m_fEndWidth = 0x768;
   constexpr ptrdiff_t m_fFadeLength = 0x76c;
   constexpr ptrdiff_t m_fHaloScale = 0x770;
   constexpr ptrdiff_t m_fAmplitude = 0x774;
   constexpr ptrdiff_t m_fStartFrame = 0x778;
   constexpr ptrdiff_t m_fSpeed = 0x77c;
   constexpr ptrdiff_t m_flFrame = 0x780;
   constexpr ptrdiff_t m_nClipStyle = 0x784;
   constexpr ptrdiff_t m_bTurnedOff = 0x788;
   constexpr ptrdiff_t m_vecEndPos = 0x78c;
   constexpr ptrdiff_t m_hEndEntity = 0x798;
   constexpr ptrdiff_t m_nDissolveType = 0x79c;

}

namespace CFuncLadder {

   constexpr ptrdiff_t m_vecLadderDir = 0x700;
   constexpr ptrdiff_t m_Dismounts = 0x710;
   constexpr ptrdiff_t m_vecLocalTop = 0x728;
   constexpr ptrdiff_t m_vecPlayerMountPositionTop = 0x734;
   constexpr ptrdiff_t m_vecPlayerMountPositionBottom = 0x740;
   constexpr ptrdiff_t m_flAutoRideSpeed = 0x74c;
   constexpr ptrdiff_t m_bDisabled = 0x750;
   constexpr ptrdiff_t m_bFakeLadder = 0x751;
   constexpr ptrdiff_t m_bHasSlack = 0x752;
   constexpr ptrdiff_t m_surfacePropName = 0x758;
   constexpr ptrdiff_t m_OnPlayerGotOnLadder = 0x760;
   constexpr ptrdiff_t m_OnPlayerGotOffLadder = 0x788;

}

namespace CFuncShatterglass {

   constexpr ptrdiff_t m_hGlassMaterialDamaged = 0x700;
   constexpr ptrdiff_t m_hGlassMaterialUndamaged = 0x708;
   constexpr ptrdiff_t m_hConcreteMaterialEdgeFace = 0x710;
   constexpr ptrdiff_t m_hConcreteMaterialEdgeCaps = 0x718;
   constexpr ptrdiff_t m_hConcreteMaterialEdgeFins = 0x720;
   constexpr ptrdiff_t m_matPanelTransform = 0x728;
   constexpr ptrdiff_t m_matPanelTransformWsTemp = 0x758;
   constexpr ptrdiff_t m_vecShatterGlassShards = 0x788;
   constexpr ptrdiff_t m_PanelSize = 0x7a0;
   constexpr ptrdiff_t m_vecPanelNormalWs = 0x7a8;
   constexpr ptrdiff_t m_nNumShardsEverCreated = 0x7b4;
   constexpr ptrdiff_t m_flLastShatterSoundEmitTime = 0x7b8;
   constexpr ptrdiff_t m_flLastCleanupTime = 0x7bc;
   constexpr ptrdiff_t m_flInitAtTime = 0x7c0;
   constexpr ptrdiff_t m_flGlassThickness = 0x7c4;
   constexpr ptrdiff_t m_flSpawnInvulnerability = 0x7c8;
   constexpr ptrdiff_t m_bBreakSilent = 0x7cc;
   constexpr ptrdiff_t m_bBreakShardless = 0x7cd;
   constexpr ptrdiff_t m_bBroken = 0x7ce;
   constexpr ptrdiff_t m_bHasRateLimitedShards = 0x7cf;
   constexpr ptrdiff_t m_bGlassNavIgnore = 0x7d0;
   constexpr ptrdiff_t m_bGlassInFrame = 0x7d1;
   constexpr ptrdiff_t m_bStartBroken = 0x7d2;
   constexpr ptrdiff_t m_iInitialDamageType = 0x7d3;
   constexpr ptrdiff_t m_szDamagePositioningEntityName01 = 0x7d8;
   constexpr ptrdiff_t m_szDamagePositioningEntityName02 = 0x7e0;
   constexpr ptrdiff_t m_szDamagePositioningEntityName03 = 0x7e8;
   constexpr ptrdiff_t m_szDamagePositioningEntityName04 = 0x7f0;
   constexpr ptrdiff_t m_vInitialDamagePositions = 0x7f8;
   constexpr ptrdiff_t m_vExtraDamagePositions = 0x810;
   constexpr ptrdiff_t m_OnBroken = 0x828;
   constexpr ptrdiff_t m_iSurfaceType = 0x851;

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

namespace CSprite {

   constexpr ptrdiff_t m_hSpriteMaterial = 0x700;
   constexpr ptrdiff_t m_hAttachedToEntity = 0x708;
   constexpr ptrdiff_t m_nAttachment = 0x70c;
   constexpr ptrdiff_t m_flSpriteFramerate = 0x710;
   constexpr ptrdiff_t m_flFrame = 0x714;
   constexpr ptrdiff_t m_flDieTime = 0x718;
   constexpr ptrdiff_t m_nBrightness = 0x728;
   constexpr ptrdiff_t m_flBrightnessDuration = 0x72c;
   constexpr ptrdiff_t m_flSpriteScale = 0x730;
   constexpr ptrdiff_t m_flScaleDuration = 0x734;
   constexpr ptrdiff_t m_bWorldSpaceScale = 0x738;
   constexpr ptrdiff_t m_flGlowProxySize = 0x73c;
   constexpr ptrdiff_t m_flHDRColorScale = 0x740;
   constexpr ptrdiff_t m_flLastTime = 0x744;
   constexpr ptrdiff_t m_flMaxFrame = 0x748;
   constexpr ptrdiff_t m_flStartScale = 0x74c;
   constexpr ptrdiff_t m_flDestScale = 0x750;
   constexpr ptrdiff_t m_flScaleTimeStart = 0x754;
   constexpr ptrdiff_t m_nStartBrightness = 0x758;
   constexpr ptrdiff_t m_nDestBrightness = 0x75c;
   constexpr ptrdiff_t m_flBrightnessTimeStart = 0x760;
   constexpr ptrdiff_t m_nSpriteWidth = 0x764;
   constexpr ptrdiff_t m_nSpriteHeight = 0x768;

}

namespace CBaseClientUIEntity {

   constexpr ptrdiff_t m_bEnabled = 0x700;
   constexpr ptrdiff_t m_DialogXMLName = 0x708;
   constexpr ptrdiff_t m_PanelClassName = 0x710;
   constexpr ptrdiff_t m_PanelID = 0x718;
   constexpr ptrdiff_t m_CustomOutput0 = 0x720;
   constexpr ptrdiff_t m_CustomOutput1 = 0x748;
   constexpr ptrdiff_t m_CustomOutput2 = 0x770;
   constexpr ptrdiff_t m_CustomOutput3 = 0x798;
   constexpr ptrdiff_t m_CustomOutput4 = 0x7c0;
   constexpr ptrdiff_t m_CustomOutput5 = 0x7e8;
   constexpr ptrdiff_t m_CustomOutput6 = 0x810;
   constexpr ptrdiff_t m_CustomOutput7 = 0x838;
   constexpr ptrdiff_t m_CustomOutput8 = 0x860;
   constexpr ptrdiff_t m_CustomOutput9 = 0x888;

}

namespace CPointClientUIDialog {

   constexpr ptrdiff_t m_hActivator = 0x8b0;
   constexpr ptrdiff_t m_bStartEnabled = 0x8b4;

}

namespace CPointClientUIWorldPanel {

   constexpr ptrdiff_t m_bIgnoreInput = 0x8b0;
   constexpr ptrdiff_t m_bLit = 0x8b1;
   constexpr ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8b2;
   constexpr ptrdiff_t m_flWidth = 0x8b4;
   constexpr ptrdiff_t m_flHeight = 0x8b8;
   constexpr ptrdiff_t m_flDPI = 0x8bc;
   constexpr ptrdiff_t m_flInteractDistance = 0x8c0;
   constexpr ptrdiff_t m_flDepthOffset = 0x8c4;
   constexpr ptrdiff_t m_unOwnerContext = 0x8c8;
   constexpr ptrdiff_t m_unHorizontalAlign = 0x8cc;
   constexpr ptrdiff_t m_unVerticalAlign = 0x8d0;
   constexpr ptrdiff_t m_unOrientation = 0x8d4;
   constexpr ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8d8;
   constexpr ptrdiff_t m_vecCSSClasses = 0x8e0;
   constexpr ptrdiff_t m_bOpaque = 0x8f8;
   constexpr ptrdiff_t m_bNoDepth = 0x8f9;
   constexpr ptrdiff_t m_bRenderBackface = 0x8fa;
   constexpr ptrdiff_t m_bUseOffScreenIndicator = 0x8fb;
   constexpr ptrdiff_t m_bExcludeFromSaveGames = 0x8fc;
   constexpr ptrdiff_t m_bGrabbable = 0x8fd;
   constexpr ptrdiff_t m_bOnlyRenderToTexture = 0x8fe;
   constexpr ptrdiff_t m_bDisableMipGen = 0x8ff;
   constexpr ptrdiff_t m_nExplicitImageLayout = 0x900;

}

namespace CPointClientUIWorldTextPanel {

   constexpr ptrdiff_t m_messageText = 0x908;

}

namespace CInfoOffscreenPanoramaTexture {

   constexpr ptrdiff_t m_bDisabled = 0x4b0;
   constexpr ptrdiff_t m_nResolutionX = 0x4b4;
   constexpr ptrdiff_t m_nResolutionY = 0x4b8;
   constexpr ptrdiff_t m_szLayoutFileName = 0x4c0;
   constexpr ptrdiff_t m_RenderAttrName = 0x4c8;
   constexpr ptrdiff_t m_TargetEntities = 0x4d0;
   constexpr ptrdiff_t m_nTargetChangeCount = 0x4e8;
   constexpr ptrdiff_t m_vecCSSClasses = 0x4f0;
   constexpr ptrdiff_t m_szTargetsName = 0x508;
   constexpr ptrdiff_t m_AdditionalTargetEntities = 0x510;

}

namespace CEconItemView {

   constexpr ptrdiff_t m_iItemDefinitionIndex = 0x38;
   constexpr ptrdiff_t m_iEntityQuality = 0x3c;
   constexpr ptrdiff_t m_iEntityLevel = 0x40;
   constexpr ptrdiff_t m_iItemID = 0x48;
   constexpr ptrdiff_t m_iItemIDHigh = 0x50;
   constexpr ptrdiff_t m_iItemIDLow = 0x54;
   constexpr ptrdiff_t m_iAccountID = 0x58;
   constexpr ptrdiff_t m_iInventoryPosition = 0x5c;
   constexpr ptrdiff_t m_bInitialized = 0x68;
   constexpr ptrdiff_t m_AttributeList = 0x70;
   constexpr ptrdiff_t m_NetworkedDynamicAttributes = 0xd0;
   constexpr ptrdiff_t m_szCustomName = 0x130;
   constexpr ptrdiff_t m_szCustomNameOverride = 0x1d1;

}

namespace CPointGiveAmmo {

   constexpr ptrdiff_t m_pActivator = 0x4b0;

}

namespace CBombTarget {

   constexpr ptrdiff_t m_OnBombExplode = 0x8a8;
   constexpr ptrdiff_t m_OnBombPlanted = 0x8d0;
   constexpr ptrdiff_t m_OnBombDefused = 0x8f8;
   constexpr ptrdiff_t m_bIsBombSiteB = 0x920;
   constexpr ptrdiff_t m_bIsHeistBombTarget = 0x921;
   constexpr ptrdiff_t m_bBombPlantedHere = 0x922;
   constexpr ptrdiff_t m_szMountTarget = 0x928;
   constexpr ptrdiff_t m_hInstructorHint = 0x930;
   constexpr ptrdiff_t m_nBombSiteDesignation = 0x934;

}

namespace CTriggerBuoyancy {

   constexpr ptrdiff_t m_BuoyancyHelper = 0x8a8;
   constexpr ptrdiff_t m_flFluidDensity = 0x8c8;

}

namespace CFuncWater {

   constexpr ptrdiff_t m_BuoyancyHelper = 0x700;

}

namespace CCSPlayerController {

   constexpr ptrdiff_t m_pInGameMoneyServices = 0x6a0;
   constexpr ptrdiff_t m_pInventoryServices = 0x6a8;
   constexpr ptrdiff_t m_pActionTrackingServices = 0x6b0;
   constexpr ptrdiff_t m_pDamageServices = 0x6b8;
   constexpr ptrdiff_t m_iPing = 0x6c0;
   constexpr ptrdiff_t m_bHasCommunicationAbuseMute = 0x6c4;
   constexpr ptrdiff_t m_szCrosshairCodes = 0x6c8;
   constexpr ptrdiff_t m_iPendingTeamNum = 0x6d0;
   constexpr ptrdiff_t m_flForceTeamTime = 0x6d4;
   constexpr ptrdiff_t m_iCompTeammateColor = 0x6d8;
   constexpr ptrdiff_t m_bEverPlayedOnTeam = 0x6dc;
   constexpr ptrdiff_t m_bAttemptedToGetColor = 0x6dd;
   constexpr ptrdiff_t m_iTeammatePreferredColor = 0x6e0;
   constexpr ptrdiff_t m_bTeamChanged = 0x6e4;
   constexpr ptrdiff_t m_bInSwitchTeam = 0x6e5;
   constexpr ptrdiff_t m_bHasSeenJoinGame = 0x6e6;
   constexpr ptrdiff_t m_bJustBecameSpectator = 0x6e7;
   constexpr ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x6e8;
   constexpr ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x6e9;
   constexpr ptrdiff_t m_szClan = 0x6f0;
   constexpr ptrdiff_t m_szClanName = 0x6f8;
   constexpr ptrdiff_t m_iCoachingTeam = 0x718;
   constexpr ptrdiff_t m_nPlayerDominated = 0x720;
   constexpr ptrdiff_t m_nPlayerDominatingMe = 0x728;
   constexpr ptrdiff_t m_iCompetitiveRanking = 0x730;
   constexpr ptrdiff_t m_iCompetitiveWins = 0x734;
   constexpr ptrdiff_t m_iCompetitiveRankType = 0x738;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x73c;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x740;
   constexpr ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x744;
   constexpr ptrdiff_t m_nEndMatchNextMapVote = 0x748;
   constexpr ptrdiff_t m_unActiveQuestId = 0x74c;
   constexpr ptrdiff_t m_nQuestProgressReason = 0x750;
   constexpr ptrdiff_t m_unPlayerTvControlFlags = 0x754;
   constexpr ptrdiff_t m_iDraftIndex = 0x780;
   constexpr ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x784;
   constexpr ptrdiff_t m_uiAbandonRecordedReason = 0x788;
   constexpr ptrdiff_t m_bEverFullyConnected = 0x78c;
   constexpr ptrdiff_t m_bAbandonAllowsSurrender = 0x78d;
   constexpr ptrdiff_t m_bAbandonOffersInstantSurrender = 0x78e;
   constexpr ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x78f;
   constexpr ptrdiff_t m_bScoreReported = 0x790;
   constexpr ptrdiff_t m_nDisconnectionTick = 0x794;
   constexpr ptrdiff_t m_bControllingBot = 0x7a0;
   constexpr ptrdiff_t m_bHasControlledBotThisRound = 0x7a1;
   constexpr ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7a2;
   constexpr ptrdiff_t m_nBotsControlledThisRound = 0x7a4;
   constexpr ptrdiff_t m_bCanControlObservedBot = 0x7a8;
   constexpr ptrdiff_t m_hPlayerPawn = 0x7ac;
   constexpr ptrdiff_t m_hObserverPawn = 0x7b0;
   constexpr ptrdiff_t m_DesiredObserverMode = 0x7b4;
   constexpr ptrdiff_t m_hDesiredObserverTarget = 0x7b8;
   constexpr ptrdiff_t m_bPawnIsAlive = 0x7bc;
   constexpr ptrdiff_t m_iPawnHealth = 0x7c0;
   constexpr ptrdiff_t m_iPawnArmor = 0x7c4;
   constexpr ptrdiff_t m_bPawnHasDefuser = 0x7c8;
   constexpr ptrdiff_t m_bPawnHasHelmet = 0x7c9;
   constexpr ptrdiff_t m_nPawnCharacterDefIndex = 0x7ca;
   constexpr ptrdiff_t m_iPawnLifetimeStart = 0x7cc;
   constexpr ptrdiff_t m_iPawnLifetimeEnd = 0x7d0;
   constexpr ptrdiff_t m_iPawnBotDifficulty = 0x7d4;
   constexpr ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x7d8;
   constexpr ptrdiff_t m_iScore = 0x7dc;
   constexpr ptrdiff_t m_iRoundScore = 0x7e0;
   constexpr ptrdiff_t m_iRoundsWon = 0x7e4;
   constexpr ptrdiff_t m_vecKills = 0x7e8;
   constexpr ptrdiff_t m_iMVPs = 0x800;
   constexpr ptrdiff_t m_nUpdateCounter = 0x804;
   constexpr ptrdiff_t m_lastHeldVoteTimer = 0xf8a8;
   constexpr ptrdiff_t m_bShowHints = 0xf8c0;
   constexpr ptrdiff_t m_iNextTimeCheck = 0xf8c4;
   constexpr ptrdiff_t m_bJustDidTeamKill = 0xf8c8;
   constexpr ptrdiff_t m_bPunishForTeamKill = 0xf8c9;
   constexpr ptrdiff_t m_bGaveTeamDamageWarning = 0xf8ca;
   constexpr ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xf8cb;
   constexpr ptrdiff_t m_LastTeamDamageWarningTime = 0xf8cc;

}

namespace CFootstepControl {

   constexpr ptrdiff_t m_source = 0x8a8;
   constexpr ptrdiff_t m_destination = 0x8b0;

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

namespace CPointGamestatsCounter {

   constexpr ptrdiff_t m_strStatisticName = 0x4b0;
   constexpr ptrdiff_t m_bDisabled = 0x4b8;

}

namespace CEnvHudHint {

   constexpr ptrdiff_t m_iszMessage = 0x4b0;

}

namespace CBuyZone {

   constexpr ptrdiff_t m_LegacyTeamNum = 0x8a8;

}

namespace CFuncConveyor {

   constexpr ptrdiff_t m_szConveyorModels = 0x700;
   constexpr ptrdiff_t m_flTransitionDurationSeconds = 0x708;
   constexpr ptrdiff_t m_angMoveEntitySpace = 0x70c;
   constexpr ptrdiff_t m_vecMoveDirEntitySpace = 0x718;
   constexpr ptrdiff_t m_flTargetSpeed = 0x724;
   constexpr ptrdiff_t m_nTransitionStartTick = 0x728;
   constexpr ptrdiff_t m_nTransitionDurationTicks = 0x72c;
   constexpr ptrdiff_t m_flTransitionStartSpeed = 0x730;
   constexpr ptrdiff_t m_hConveyorModels = 0x738;

}

namespace CCSPlace {

   constexpr ptrdiff_t m_name = 0x708;

}

namespace CPlayerSprayDecal {

   constexpr ptrdiff_t m_nUniqueID = 0x700;
   constexpr ptrdiff_t m_unAccountID = 0x704;
   constexpr ptrdiff_t m_unTraceID = 0x708;
   constexpr ptrdiff_t m_rtGcTime = 0x70c;
   constexpr ptrdiff_t m_vecEndPos = 0x710;
   constexpr ptrdiff_t m_vecStart = 0x71c;
   constexpr ptrdiff_t m_vecLeft = 0x728;
   constexpr ptrdiff_t m_vecNormal = 0x734;
   constexpr ptrdiff_t m_nPlayer = 0x740;
   constexpr ptrdiff_t m_nEntity = 0x744;
   constexpr ptrdiff_t m_nHitbox = 0x748;
   constexpr ptrdiff_t m_flCreationTime = 0x74c;
   constexpr ptrdiff_t m_nTintID = 0x750;
   constexpr ptrdiff_t m_nVersion = 0x754;
   constexpr ptrdiff_t m_ubSignature = 0x755;

}

namespace CInferno {

   constexpr ptrdiff_t m_firePositions = 0x710;
   constexpr ptrdiff_t m_fireParentPositions = 0xa10;
   constexpr ptrdiff_t m_bFireIsBurning = 0xd10;
   constexpr ptrdiff_t m_BurnNormal = 0xd50;
   constexpr ptrdiff_t m_fireCount = 0x1050;
   constexpr ptrdiff_t m_nInfernoType = 0x1054;
   constexpr ptrdiff_t m_nFireEffectTickBegin = 0x1058;
   constexpr ptrdiff_t m_nFireLifetime = 0x105c;
   constexpr ptrdiff_t m_bInPostEffectTime = 0x1060;
   constexpr ptrdiff_t m_nFiresExtinguishCount = 0x1064;
   constexpr ptrdiff_t m_bWasCreatedInSmoke = 0x1068;
   constexpr ptrdiff_t m_extent = 0x1270;
   constexpr ptrdiff_t m_damageTimer = 0x1288;
   constexpr ptrdiff_t m_damageRampTimer = 0x12a0;
   constexpr ptrdiff_t m_splashVelocity = 0x12b8;
   constexpr ptrdiff_t m_InitialSplashVelocity = 0x12c4;
   constexpr ptrdiff_t m_startPos = 0x12d0;
   constexpr ptrdiff_t m_vecOriginalSpawnLocation = 0x12dc;
   constexpr ptrdiff_t m_activeTimer = 0x12e8;
   constexpr ptrdiff_t m_fireSpawnOffset = 0x12f8;
   constexpr ptrdiff_t m_nMaxFlames = 0x12fc;
   constexpr ptrdiff_t m_BookkeepingTimer = 0x1300;
   constexpr ptrdiff_t m_NextSpreadTimer = 0x1318;
   constexpr ptrdiff_t m_nSourceItemDefIndex = 0x1330;

}

namespace CBarnLight {

   constexpr ptrdiff_t m_bEnabled = 0x700;
   constexpr ptrdiff_t m_nColorMode = 0x704;
   constexpr ptrdiff_t m_Color = 0x708;
   constexpr ptrdiff_t m_flColorTemperature = 0x70c;
   constexpr ptrdiff_t m_flBrightness = 0x710;
   constexpr ptrdiff_t m_flBrightnessScale = 0x714;
   constexpr ptrdiff_t m_nDirectLight = 0x718;
   constexpr ptrdiff_t m_nBakedShadowIndex = 0x71c;
   constexpr ptrdiff_t m_nLuminaireShape = 0x720;
   constexpr ptrdiff_t m_flLuminaireSize = 0x724;
   constexpr ptrdiff_t m_flLuminaireAnisotropy = 0x728;
   constexpr ptrdiff_t m_LightStyleString = 0x730;
   constexpr ptrdiff_t m_flLightStyleStartTime = 0x738;
   constexpr ptrdiff_t m_QueuedLightStyleStrings = 0x740;
   constexpr ptrdiff_t m_LightStyleEvents = 0x758;
   constexpr ptrdiff_t m_LightStyleTargets = 0x770;
   constexpr ptrdiff_t m_StyleEvent = 0x788;
   constexpr ptrdiff_t m_StyleRadianceVar = 0x828;
   constexpr ptrdiff_t m_StyleVar = 0x830;
   constexpr ptrdiff_t m_hLightCookie = 0x858;
   constexpr ptrdiff_t m_flShape = 0x860;
   constexpr ptrdiff_t m_flSoftX = 0x864;
   constexpr ptrdiff_t m_flSoftY = 0x868;
   constexpr ptrdiff_t m_flSkirt = 0x86c;
   constexpr ptrdiff_t m_flSkirtNear = 0x870;
   constexpr ptrdiff_t m_vSizeParams = 0x874;
   constexpr ptrdiff_t m_flRange = 0x880;
   constexpr ptrdiff_t m_vShear = 0x884;
   constexpr ptrdiff_t m_nBakeSpecularToCubemaps = 0x890;
   constexpr ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x894;
   constexpr ptrdiff_t m_nCastShadows = 0x8a0;
   constexpr ptrdiff_t m_nShadowMapSize = 0x8a4;
   constexpr ptrdiff_t m_nShadowPriority = 0x8a8;
   constexpr ptrdiff_t m_bContactShadow = 0x8ac;
   constexpr ptrdiff_t m_nBounceLight = 0x8b0;
   constexpr ptrdiff_t m_flBounceScale = 0x8b4;
   constexpr ptrdiff_t m_flMinRoughness = 0x8b8;
   constexpr ptrdiff_t m_vAlternateColor = 0x8bc;
   constexpr ptrdiff_t m_fAlternateColorBrightness = 0x8c8;
   constexpr ptrdiff_t m_nFog = 0x8cc;
   constexpr ptrdiff_t m_flFogStrength = 0x8d0;
   constexpr ptrdiff_t m_nFogShadows = 0x8d4;
   constexpr ptrdiff_t m_flFogScale = 0x8d8;
   constexpr ptrdiff_t m_flFadeSizeStart = 0x8dc;
   constexpr ptrdiff_t m_flFadeSizeEnd = 0x8e0;
   constexpr ptrdiff_t m_flShadowFadeSizeStart = 0x8e4;
   constexpr ptrdiff_t m_flShadowFadeSizeEnd = 0x8e8;
   constexpr ptrdiff_t m_bPrecomputedFieldsValid = 0x8ec;
   constexpr ptrdiff_t m_vPrecomputedBoundsMins = 0x8f0;
   constexpr ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8fc;
   constexpr ptrdiff_t m_vPrecomputedOBBOrigin = 0x908;
   constexpr ptrdiff_t m_vPrecomputedOBBAngles = 0x914;
   constexpr ptrdiff_t m_vPrecomputedOBBExtent = 0x920;
   constexpr ptrdiff_t m_bPvsModifyEntity = 0x92c;

}

namespace CRectLight {

   constexpr ptrdiff_t m_bShowLight = 0x938;

}

namespace COmniLight {

   constexpr ptrdiff_t m_flInnerAngle = 0x938;
   constexpr ptrdiff_t m_flOuterAngle = 0x93c;
   constexpr ptrdiff_t m_bShowLight = 0x940;

}

namespace CCSTeam {

   constexpr ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x568;
   constexpr ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x56c;
   constexpr ptrdiff_t m_bSurrendered = 0x570;
   constexpr ptrdiff_t m_szTeamMatchStat = 0x571;
   constexpr ptrdiff_t m_numMapVictories = 0x774;
   constexpr ptrdiff_t m_scoreFirstHalf = 0x778;
   constexpr ptrdiff_t m_scoreSecondHalf = 0x77c;
   constexpr ptrdiff_t m_scoreOvertime = 0x780;
   constexpr ptrdiff_t m_szClanTeamname = 0x784;
   constexpr ptrdiff_t m_iClanID = 0x808;
   constexpr ptrdiff_t m_szTeamFlagImage = 0x80c;
   constexpr ptrdiff_t m_szTeamLogoImage = 0x814;
   constexpr ptrdiff_t m_flNextResourceTime = 0x81c;
   constexpr ptrdiff_t m_iLastUpdateSentAt = 0x820;

}

namespace CMapInfo {

   constexpr ptrdiff_t m_iBuyingStatus = 0x4b0;
   constexpr ptrdiff_t m_flBombRadius = 0x4b4;
   constexpr ptrdiff_t m_iPetPopulation = 0x4b8;
   constexpr ptrdiff_t m_bUseNormalSpawnsForDM = 0x4bc;
   constexpr ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4bd;
   constexpr ptrdiff_t m_flBotMaxVisionDistance = 0x4c0;
   constexpr ptrdiff_t m_iHostageCount = 0x4c4;
   constexpr ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4c8;

}

namespace CCSBot {

   constexpr ptrdiff_t m_lastCoopSpawnPoint = 0xd8;
   constexpr ptrdiff_t m_eyePosition = 0xe8;
   constexpr ptrdiff_t m_name = 0xf4;
   constexpr ptrdiff_t m_combatRange = 0x134;
   constexpr ptrdiff_t m_isRogue = 0x138;
   constexpr ptrdiff_t m_rogueTimer = 0x140;
   constexpr ptrdiff_t m_diedLastRound = 0x15c;
   constexpr ptrdiff_t m_safeTime = 0x160;
   constexpr ptrdiff_t m_wasSafe = 0x164;
   constexpr ptrdiff_t m_blindFire = 0x16c;
   constexpr ptrdiff_t m_surpriseTimer = 0x170;
   constexpr ptrdiff_t m_bAllowActive = 0x188;
   constexpr ptrdiff_t m_isFollowing = 0x189;
   constexpr ptrdiff_t m_leader = 0x18c;
   constexpr ptrdiff_t m_followTimestamp = 0x190;
   constexpr ptrdiff_t m_allowAutoFollowTime = 0x194;
   constexpr ptrdiff_t m_hurryTimer = 0x198;
   constexpr ptrdiff_t m_alertTimer = 0x1b0;
   constexpr ptrdiff_t m_sneakTimer = 0x1c8;
   constexpr ptrdiff_t m_panicTimer = 0x1e0;
   constexpr ptrdiff_t m_stateTimestamp = 0x4b0;
   constexpr ptrdiff_t m_isAttacking = 0x4b4;
   constexpr ptrdiff_t m_isOpeningDoor = 0x4b5;
   constexpr ptrdiff_t m_taskEntity = 0x4bc;
   constexpr ptrdiff_t m_goalPosition = 0x4cc;
   constexpr ptrdiff_t m_goalEntity = 0x4d8;
   constexpr ptrdiff_t m_avoid = 0x4dc;
   constexpr ptrdiff_t m_avoidTimestamp = 0x4e0;
   constexpr ptrdiff_t m_isStopping = 0x4e4;
   constexpr ptrdiff_t m_hasVisitedEnemySpawn = 0x4e5;
   constexpr ptrdiff_t m_stillTimer = 0x4e8;
   constexpr ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x4f8;
   constexpr ptrdiff_t m_pathIndex = 0x65f0;
   constexpr ptrdiff_t m_areaEnteredTimestamp = 0x65f4;
   constexpr ptrdiff_t m_repathTimer = 0x65f8;
   constexpr ptrdiff_t m_avoidFriendTimer = 0x6610;
   constexpr ptrdiff_t m_isFriendInTheWay = 0x6628;
   constexpr ptrdiff_t m_politeTimer = 0x6630;
   constexpr ptrdiff_t m_isWaitingBehindFriend = 0x6648;
   constexpr ptrdiff_t m_pathLadderEnd = 0x6674;
   constexpr ptrdiff_t m_mustRunTimer = 0x66c0;
   constexpr ptrdiff_t m_waitTimer = 0x66d8;
   constexpr ptrdiff_t m_updateTravelDistanceTimer = 0x66f0;
   constexpr ptrdiff_t m_playerTravelDistance = 0x6708;
   constexpr ptrdiff_t m_travelDistancePhase = 0x6808;
   constexpr ptrdiff_t m_hostageEscortCount = 0x69a0;
   constexpr ptrdiff_t m_hostageEscortCountTimestamp = 0x69a4;
   constexpr ptrdiff_t m_desiredTeam = 0x69a8;
   constexpr ptrdiff_t m_hasJoined = 0x69ac;
   constexpr ptrdiff_t m_isWaitingForHostage = 0x69ad;
   constexpr ptrdiff_t m_inhibitWaitingForHostageTimer = 0x69b0;
   constexpr ptrdiff_t m_waitForHostageTimer = 0x69c8;
   constexpr ptrdiff_t m_noisePosition = 0x69e0;
   constexpr ptrdiff_t m_noiseTravelDistance = 0x69ec;
   constexpr ptrdiff_t m_noiseTimestamp = 0x69f0;
   constexpr ptrdiff_t m_noiseSource = 0x69f8;
   constexpr ptrdiff_t m_noiseBendTimer = 0x6a10;
   constexpr ptrdiff_t m_bentNoisePosition = 0x6a28;
   constexpr ptrdiff_t m_bendNoisePositionValid = 0x6a34;
   constexpr ptrdiff_t m_lookAroundStateTimestamp = 0x6a38;
   constexpr ptrdiff_t m_lookAheadAngle = 0x6a3c;
   constexpr ptrdiff_t m_forwardAngle = 0x6a40;
   constexpr ptrdiff_t m_inhibitLookAroundTimestamp = 0x6a44;
   constexpr ptrdiff_t m_lookAtSpot = 0x6a4c;
   constexpr ptrdiff_t m_lookAtSpotDuration = 0x6a5c;
   constexpr ptrdiff_t m_lookAtSpotTimestamp = 0x6a60;
   constexpr ptrdiff_t m_lookAtSpotAngleTolerance = 0x6a64;
   constexpr ptrdiff_t m_lookAtSpotClearIfClose = 0x6a68;
   constexpr ptrdiff_t m_lookAtSpotAttack = 0x6a69;
   constexpr ptrdiff_t m_lookAtDesc = 0x6a70;
   constexpr ptrdiff_t m_peripheralTimestamp = 0x6a78;
   constexpr ptrdiff_t m_approachPointCount = 0x6c00;
   constexpr ptrdiff_t m_approachPointViewPosition = 0x6c04;
   constexpr ptrdiff_t m_viewSteadyTimer = 0x6c10;
   constexpr ptrdiff_t m_tossGrenadeTimer = 0x6c28;
   constexpr ptrdiff_t m_isAvoidingGrenade = 0x6c48;
   constexpr ptrdiff_t m_spotCheckTimestamp = 0x6c68;
   constexpr ptrdiff_t m_checkedHidingSpotCount = 0x7070;
   constexpr ptrdiff_t m_lookPitch = 0x7074;
   constexpr ptrdiff_t m_lookPitchVel = 0x7078;
   constexpr ptrdiff_t m_lookYaw = 0x707c;
   constexpr ptrdiff_t m_lookYawVel = 0x7080;
   constexpr ptrdiff_t m_targetSpot = 0x7084;
   constexpr ptrdiff_t m_targetSpotVelocity = 0x7090;
   constexpr ptrdiff_t m_targetSpotPredicted = 0x709c;
   constexpr ptrdiff_t m_aimError = 0x70a8;
   constexpr ptrdiff_t m_aimGoal = 0x70b4;
   constexpr ptrdiff_t m_targetSpotTime = 0x70c0;
   constexpr ptrdiff_t m_aimFocus = 0x70c4;
   constexpr ptrdiff_t m_aimFocusInterval = 0x70c8;
   constexpr ptrdiff_t m_aimFocusNextUpdate = 0x70cc;
   constexpr ptrdiff_t m_ignoreEnemiesTimer = 0x70d8;
   constexpr ptrdiff_t m_enemy = 0x70f0;
   constexpr ptrdiff_t m_isEnemyVisible = 0x70f4;
   constexpr ptrdiff_t m_visibleEnemyParts = 0x70f5;
   constexpr ptrdiff_t m_lastEnemyPosition = 0x70f8;
   constexpr ptrdiff_t m_lastSawEnemyTimestamp = 0x7104;
   constexpr ptrdiff_t m_firstSawEnemyTimestamp = 0x7108;
   constexpr ptrdiff_t m_currentEnemyAcquireTimestamp = 0x710c;
   constexpr ptrdiff_t m_enemyDeathTimestamp = 0x7110;
   constexpr ptrdiff_t m_friendDeathTimestamp = 0x7114;
   constexpr ptrdiff_t m_isLastEnemyDead = 0x7118;
   constexpr ptrdiff_t m_nearbyEnemyCount = 0x711c;
   constexpr ptrdiff_t m_bomber = 0x7328;
   constexpr ptrdiff_t m_nearbyFriendCount = 0x732c;
   constexpr ptrdiff_t m_closestVisibleFriend = 0x7330;
   constexpr ptrdiff_t m_closestVisibleHumanFriend = 0x7334;
   constexpr ptrdiff_t m_attentionInterval = 0x7338;
   constexpr ptrdiff_t m_attacker = 0x7348;
   constexpr ptrdiff_t m_attackedTimestamp = 0x734c;
   constexpr ptrdiff_t m_burnedByFlamesTimer = 0x7350;
   constexpr ptrdiff_t m_lastVictimID = 0x7360;
   constexpr ptrdiff_t m_isAimingAtEnemy = 0x7364;
   constexpr ptrdiff_t m_isRapidFiring = 0x7365;
   constexpr ptrdiff_t m_equipTimer = 0x7368;
   constexpr ptrdiff_t m_zoomTimer = 0x7378;
   constexpr ptrdiff_t m_fireWeaponTimestamp = 0x7390;
   constexpr ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x7398;
   constexpr ptrdiff_t m_bIsSleeping = 0x73b0;
   constexpr ptrdiff_t m_isEnemySniperVisible = 0x73b1;
   constexpr ptrdiff_t m_sawEnemySniperTimer = 0x73b8;
   constexpr ptrdiff_t m_enemyQueueIndex = 0x7470;
   constexpr ptrdiff_t m_enemyQueueCount = 0x7471;
   constexpr ptrdiff_t m_enemyQueueAttendIndex = 0x7472;
   constexpr ptrdiff_t m_isStuck = 0x7473;
   constexpr ptrdiff_t m_stuckTimestamp = 0x7474;
   constexpr ptrdiff_t m_stuckSpot = 0x7478;
   constexpr ptrdiff_t m_wiggleTimer = 0x7488;
   constexpr ptrdiff_t m_stuckJumpTimer = 0x74a0;
   constexpr ptrdiff_t m_nextCleanupCheckTimestamp = 0x74b8;
   constexpr ptrdiff_t m_avgVel = 0x74bc;
   constexpr ptrdiff_t m_avgVelIndex = 0x74e4;
   constexpr ptrdiff_t m_avgVelCount = 0x74e8;
   constexpr ptrdiff_t m_lastOrigin = 0x74ec;
   constexpr ptrdiff_t m_lastRadioRecievedTimestamp = 0x74fc;
   constexpr ptrdiff_t m_lastRadioSentTimestamp = 0x7500;
   constexpr ptrdiff_t m_radioSubject = 0x7504;
   constexpr ptrdiff_t m_radioPosition = 0x7508;
   constexpr ptrdiff_t m_voiceEndTimestamp = 0x7514;
   constexpr ptrdiff_t m_lastValidReactionQueueFrame = 0x7520;

}

namespace CFogVolume {

   constexpr ptrdiff_t m_fogName = 0x700;
   constexpr ptrdiff_t m_postProcessName = 0x708;
   constexpr ptrdiff_t m_colorCorrectionName = 0x710;
   constexpr ptrdiff_t m_bDisabled = 0x720;
   constexpr ptrdiff_t m_bInFogVolumesList = 0x721;

}

namespace CInfoDynamicShadowHint {

   constexpr ptrdiff_t m_bDisabled = 0x4b0;
   constexpr ptrdiff_t m_flRange = 0x4b4;
   constexpr ptrdiff_t m_nImportance = 0x4b8;
   constexpr ptrdiff_t m_nLightChoice = 0x4bc;
   constexpr ptrdiff_t m_hLight = 0x4c0;

}

namespace CInfoDynamicShadowHintBox {

   constexpr ptrdiff_t m_vBoxMins = 0x4c8;
   constexpr ptrdiff_t m_vBoxMaxs = 0x4d4;

}

namespace CEnvSky {

   constexpr ptrdiff_t m_hSkyMaterial = 0x700;
   constexpr ptrdiff_t m_hSkyMaterialLightingOnly = 0x708;
   constexpr ptrdiff_t m_bStartDisabled = 0x710;
   constexpr ptrdiff_t m_vTintColor = 0x711;
   constexpr ptrdiff_t m_vTintColorLightingOnly = 0x715;
   constexpr ptrdiff_t m_flBrightnessScale = 0x71c;
   constexpr ptrdiff_t m_nFogType = 0x720;
   constexpr ptrdiff_t m_flFogMinStart = 0x724;
   constexpr ptrdiff_t m_flFogMinEnd = 0x728;
   constexpr ptrdiff_t m_flFogMaxStart = 0x72c;
   constexpr ptrdiff_t m_flFogMaxEnd = 0x730;
   constexpr ptrdiff_t m_bEnabled = 0x734;

}

namespace CTonemapTrigger {

   constexpr ptrdiff_t m_tonemapControllerName = 0x8a8;
   constexpr ptrdiff_t m_hTonemapController = 0x8b0;

}

namespace CFogTrigger {

   constexpr ptrdiff_t m_fog = 0x8a8;

}

namespace CLightEntity {

   constexpr ptrdiff_t m_CLightComponent = 0x700;

}

namespace CPostProcessingVolume {

   constexpr ptrdiff_t m_hPostSettings = 0x8b8;
   constexpr ptrdiff_t m_flFadeDuration = 0x8c0;
   constexpr ptrdiff_t m_flMinLogExposure = 0x8c4;
   constexpr ptrdiff_t m_flMaxLogExposure = 0x8c8;
   constexpr ptrdiff_t m_flMinExposure = 0x8cc;
   constexpr ptrdiff_t m_flMaxExposure = 0x8d0;
   constexpr ptrdiff_t m_flExposureCompensation = 0x8d4;
   constexpr ptrdiff_t m_flExposureFadeSpeedUp = 0x8d8;
   constexpr ptrdiff_t m_flExposureFadeSpeedDown = 0x8dc;
   constexpr ptrdiff_t m_flTonemapEVSmoothingRange = 0x8e0;
   constexpr ptrdiff_t m_bMaster = 0x8e4;
   constexpr ptrdiff_t m_bExposureControl = 0x8e5;
   constexpr ptrdiff_t m_flRate = 0x8e8;
   constexpr ptrdiff_t m_flTonemapPercentTarget = 0x8ec;
   constexpr ptrdiff_t m_flTonemapPercentBrightPixels = 0x8f0;
   constexpr ptrdiff_t m_flTonemapMinAvgLum = 0x8f4;

}

namespace CEnvParticleGlow {

   constexpr ptrdiff_t m_flAlphaScale = 0xc78;
   constexpr ptrdiff_t m_flRadiusScale = 0xc7c;
   constexpr ptrdiff_t m_flSelfIllumScale = 0xc80;
   constexpr ptrdiff_t m_ColorTint = 0xc84;
   constexpr ptrdiff_t m_hTextureOverride = 0xc88;

}

namespace CTextureBasedAnimatable {

   constexpr ptrdiff_t m_bLoop = 0x700;
   constexpr ptrdiff_t m_flFPS = 0x704;
   constexpr ptrdiff_t m_hPositionKeys = 0x708;
   constexpr ptrdiff_t m_hRotationKeys = 0x710;
   constexpr ptrdiff_t m_vAnimationBoundsMin = 0x718;
   constexpr ptrdiff_t m_vAnimationBoundsMax = 0x724;
   constexpr ptrdiff_t m_flStartTime = 0x730;
   constexpr ptrdiff_t m_flStartFrame = 0x734;

}

namespace CBaseAnimGraph {

   constexpr ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x700;
   constexpr ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0x701;
   constexpr ptrdiff_t m_pChoreoServices = 0x708;
   constexpr ptrdiff_t m_bAnimGraphUpdateEnabled = 0x710;
   constexpr ptrdiff_t m_flMaxSlopeDistance = 0x714;
   constexpr ptrdiff_t m_vLastSlopeCheckPos = 0x718;
   constexpr ptrdiff_t m_bAnimGraphDirty = 0x724;
   constexpr ptrdiff_t m_vecForce = 0x728;
   constexpr ptrdiff_t m_nForceBone = 0x734;
   constexpr ptrdiff_t m_pRagdollPose = 0x748;
   constexpr ptrdiff_t m_bClientRagdoll = 0x750;

}

namespace CBaseProp {

   constexpr ptrdiff_t m_bModelOverrodeBlockLOS = 0x890;
   constexpr ptrdiff_t m_iShapeType = 0x894;
   constexpr ptrdiff_t m_bConformToCollisionBounds = 0x898;
   constexpr ptrdiff_t m_mPreferredCatchTransform = 0x89c;

}

namespace CBreakableProp {

   constexpr ptrdiff_t m_OnBreak = 0x8e0;
   constexpr ptrdiff_t m_OnHealthChanged = 0x908;
   constexpr ptrdiff_t m_OnTakeDamage = 0x930;
   constexpr ptrdiff_t m_impactEnergyScale = 0x958;
   constexpr ptrdiff_t m_iMinHealthDmg = 0x95c;
   constexpr ptrdiff_t m_preferredCarryAngles = 0x960;
   constexpr ptrdiff_t m_flPressureDelay = 0x96c;
   constexpr ptrdiff_t m_hBreaker = 0x970;
   constexpr ptrdiff_t m_PerformanceMode = 0x974;
   constexpr ptrdiff_t m_flDmgModBullet = 0x978;
   constexpr ptrdiff_t m_flDmgModClub = 0x97c;
   constexpr ptrdiff_t m_flDmgModExplosive = 0x980;
   constexpr ptrdiff_t m_flDmgModFire = 0x984;
   constexpr ptrdiff_t m_iszPhysicsDamageTableName = 0x988;
   constexpr ptrdiff_t m_iszBasePropData = 0x990;
   constexpr ptrdiff_t m_iInteractions = 0x998;
   constexpr ptrdiff_t m_flPreventDamageBeforeTime = 0x99c;
   constexpr ptrdiff_t m_bHasBreakPiecesOrCommands = 0x9a0;
   constexpr ptrdiff_t m_explodeDamage = 0x9a4;
   constexpr ptrdiff_t m_explodeRadius = 0x9a8;
   constexpr ptrdiff_t m_explosionDelay = 0x9b0;
   constexpr ptrdiff_t m_explosionBuildupSound = 0x9b8;
   constexpr ptrdiff_t m_explosionCustomEffect = 0x9c0;
   constexpr ptrdiff_t m_explosionCustomSound = 0x9c8;
   constexpr ptrdiff_t m_explosionModifier = 0x9d0;
   constexpr ptrdiff_t m_hPhysicsAttacker = 0x9d8;
   constexpr ptrdiff_t m_flLastPhysicsInfluenceTime = 0x9dc;
   constexpr ptrdiff_t m_bOriginalBlockLOS = 0x9e0;
   constexpr ptrdiff_t m_flDefaultFadeScale = 0x9e4;
   constexpr ptrdiff_t m_hLastAttacker = 0x9e8;
   constexpr ptrdiff_t m_hFlareEnt = 0x9ec;
   constexpr ptrdiff_t m_bUsePuntSound = 0x9f0;
   constexpr ptrdiff_t m_iszPuntSound = 0x9f8;
   constexpr ptrdiff_t m_noGhostCollision = 0xa00;

}

namespace CDynamicProp {

   constexpr ptrdiff_t m_bCreateNavObstacle = 0xa10;
   constexpr ptrdiff_t m_bUseHitboxesForRenderBox = 0xa11;
   constexpr ptrdiff_t m_bUseAnimGraph = 0xa12;
   constexpr ptrdiff_t m_pOutputAnimBegun = 0xa18;
   constexpr ptrdiff_t m_pOutputAnimOver = 0xa40;
   constexpr ptrdiff_t m_pOutputAnimLoopCycleOver = 0xa68;
   constexpr ptrdiff_t m_OnAnimReachedStart = 0xa90;
   constexpr ptrdiff_t m_OnAnimReachedEnd = 0xab8;
   constexpr ptrdiff_t m_iszDefaultAnim = 0xae0;
   constexpr ptrdiff_t m_nDefaultAnimLoopMode = 0xae8;
   constexpr ptrdiff_t m_bAnimateOnServer = 0xaec;
   constexpr ptrdiff_t m_bRandomizeCycle = 0xaed;
   constexpr ptrdiff_t m_bStartDisabled = 0xaee;
   constexpr ptrdiff_t m_bScriptedMovement = 0xaef;
   constexpr ptrdiff_t m_bFiredStartEndOutput = 0xaf0;
   constexpr ptrdiff_t m_bForceNpcExclude = 0xaf1;
   constexpr ptrdiff_t m_bCreateNonSolid = 0xaf2;
   constexpr ptrdiff_t m_bIsOverrideProp = 0xaf3;
   constexpr ptrdiff_t m_iInitialGlowState = 0xaf4;
   constexpr ptrdiff_t m_nGlowRange = 0xaf8;
   constexpr ptrdiff_t m_nGlowRangeMin = 0xafc;
   constexpr ptrdiff_t m_glowColor = 0xb00;
   constexpr ptrdiff_t m_nGlowTeam = 0xb04;

}

namespace CColorCorrectionVolume {

   constexpr ptrdiff_t m_bEnabled = 0x8a8;
   constexpr ptrdiff_t m_MaxWeight = 0x8ac;
   constexpr ptrdiff_t m_FadeDuration = 0x8b0;
   constexpr ptrdiff_t m_bStartDisabled = 0x8b4;
   constexpr ptrdiff_t m_Weight = 0x8b8;
   constexpr ptrdiff_t m_lookupFilename = 0x8bc;
   constexpr ptrdiff_t m_LastEnterWeight = 0xabc;
   constexpr ptrdiff_t m_LastEnterTime = 0xac0;
   constexpr ptrdiff_t m_LastExitWeight = 0xac4;
   constexpr ptrdiff_t m_LastExitTime = 0xac8;

}

namespace CPointCommentaryNode {

   constexpr ptrdiff_t m_iszPreCommands = 0x890;
   constexpr ptrdiff_t m_iszPostCommands = 0x898;
   constexpr ptrdiff_t m_iszCommentaryFile = 0x8a0;
   constexpr ptrdiff_t m_iszViewTarget = 0x8a8;
   constexpr ptrdiff_t m_hViewTarget = 0x8b0;
   constexpr ptrdiff_t m_hViewTargetAngles = 0x8b4;
   constexpr ptrdiff_t m_iszViewPosition = 0x8b8;
   constexpr ptrdiff_t m_hViewPosition = 0x8c0;
   constexpr ptrdiff_t m_hViewPositionMover = 0x8c4;
   constexpr ptrdiff_t m_bPreventMovement = 0x8c8;
   constexpr ptrdiff_t m_bUnderCrosshair = 0x8c9;
   constexpr ptrdiff_t m_bUnstoppable = 0x8ca;
   constexpr ptrdiff_t m_flFinishedTime = 0x8cc;
   constexpr ptrdiff_t m_vecFinishOrigin = 0x8d0;
   constexpr ptrdiff_t m_vecOriginalAngles = 0x8dc;
   constexpr ptrdiff_t m_vecFinishAngles = 0x8e8;
   constexpr ptrdiff_t m_bPreventChangesWhileMoving = 0x8f4;
   constexpr ptrdiff_t m_bDisabled = 0x8f5;
   constexpr ptrdiff_t m_vecTeleportOrigin = 0x8f8;
   constexpr ptrdiff_t m_flAbortedPlaybackAt = 0x904;
   constexpr ptrdiff_t m_pOnCommentaryStarted = 0x908;
   constexpr ptrdiff_t m_pOnCommentaryStopped = 0x930;
   constexpr ptrdiff_t m_bActive = 0x958;
   constexpr ptrdiff_t m_flStartTime = 0x95c;
   constexpr ptrdiff_t m_flStartTimeInCommentary = 0x960;
   constexpr ptrdiff_t m_iszTitle = 0x968;
   constexpr ptrdiff_t m_iszSpeakers = 0x970;
   constexpr ptrdiff_t m_iNodeNumber = 0x978;
   constexpr ptrdiff_t m_iNodeNumberMax = 0x97c;
   constexpr ptrdiff_t m_bListenedTo = 0x980;

}

namespace CRotDoor {

   constexpr ptrdiff_t m_bSolidBsp = 0x988;

}

namespace CEnvBeam {

   constexpr ptrdiff_t m_active = 0x7a0;
   constexpr ptrdiff_t m_spriteTexture = 0x7a8;
   constexpr ptrdiff_t m_iszStartEntity = 0x7b0;
   constexpr ptrdiff_t m_iszEndEntity = 0x7b8;
   constexpr ptrdiff_t m_life = 0x7c0;
   constexpr ptrdiff_t m_boltWidth = 0x7c4;
   constexpr ptrdiff_t m_noiseAmplitude = 0x7c8;
   constexpr ptrdiff_t m_speed = 0x7cc;
   constexpr ptrdiff_t m_restrike = 0x7d0;
   constexpr ptrdiff_t m_iszSpriteName = 0x7d8;
   constexpr ptrdiff_t m_frameStart = 0x7e0;
   constexpr ptrdiff_t m_vEndPointWorld = 0x7e4;
   constexpr ptrdiff_t m_vEndPointRelative = 0x7f0;
   constexpr ptrdiff_t m_radius = 0x7fc;
   constexpr ptrdiff_t m_TouchType = 0x800;
   constexpr ptrdiff_t m_iFilterName = 0x808;
   constexpr ptrdiff_t m_hFilter = 0x810;
   constexpr ptrdiff_t m_iszDecal = 0x818;
   constexpr ptrdiff_t m_OnTouchedByEntity = 0x820;

}

namespace CFuncMonitor {

   constexpr ptrdiff_t m_targetCamera = 0x720;
   constexpr ptrdiff_t m_nResolutionEnum = 0x728;
   constexpr ptrdiff_t m_bRenderShadows = 0x72c;
   constexpr ptrdiff_t m_bUseUniqueColorTarget = 0x72d;
   constexpr ptrdiff_t m_brushModelName = 0x730;
   constexpr ptrdiff_t m_hTargetCamera = 0x738;
   constexpr ptrdiff_t m_bEnabled = 0x73c;
   constexpr ptrdiff_t m_bDraw3DSkybox = 0x73d;
   constexpr ptrdiff_t m_bStartEnabled = 0x73e;

}

namespace CGunTarget {

   constexpr ptrdiff_t m_on = 0x780;
   constexpr ptrdiff_t m_hTargetEnt = 0x784;
   constexpr ptrdiff_t m_OnDeath = 0x788;

}

namespace CTriggerGameEvent {

   constexpr ptrdiff_t m_strStartTouchEventName = 0x8a8;
   constexpr ptrdiff_t m_strEndTouchEventName = 0x8b0;
   constexpr ptrdiff_t m_strTriggerID = 0x8b8;

}

namespace CGameText {

   constexpr ptrdiff_t m_iszMessage = 0x710;
   constexpr ptrdiff_t m_textParms = 0x718;

}

namespace CGamePlayerZone {

   constexpr ptrdiff_t m_OnPlayerInZone = 0x708;
   constexpr ptrdiff_t m_OnPlayerOutZone = 0x730;
   constexpr ptrdiff_t m_PlayersInCount = 0x758;
   constexpr ptrdiff_t m_PlayersOutCount = 0x780;

}

namespace CMarkupVolumeTagged_NavGame {

   constexpr ptrdiff_t m_bFloodFillAttribute = 0x758;

}

namespace CFuncElectrifiedVolume {

   constexpr ptrdiff_t m_EffectName = 0x720;
   constexpr ptrdiff_t m_EffectInterpenetrateName = 0x728;
   constexpr ptrdiff_t m_EffectZapName = 0x730;
   constexpr ptrdiff_t m_iszEffectSource = 0x738;

}

namespace CConstraintAnchor {

   constexpr ptrdiff_t m_massScale = 0x890;

}

namespace COrnamentProp {

   constexpr ptrdiff_t m_initialOwner = 0xb08;

}

namespace CInstancedSceneEntity {

   constexpr ptrdiff_t m_hOwner = 0xa08;
   constexpr ptrdiff_t m_bHadOwner = 0xa0c;
   constexpr ptrdiff_t m_flPostSpeakDelay = 0xa10;
   constexpr ptrdiff_t m_flPreDelay = 0xa14;
   constexpr ptrdiff_t m_bIsBackground = 0xa18;

}

namespace CTriggerSoundscape {

   constexpr ptrdiff_t m_hSoundscape = 0x8a8;
   constexpr ptrdiff_t m_SoundscapeName = 0x8b0;
   constexpr ptrdiff_t m_spectators = 0x8b8;

}

namespace CFuncTankTrain {

   constexpr ptrdiff_t m_OnDeath = 0x850;

}

namespace CBasePlatTrain {

   constexpr ptrdiff_t m_NoiseMoving = 0x780;
   constexpr ptrdiff_t m_NoiseArrived = 0x788;
   constexpr ptrdiff_t m_volume = 0x798;
   constexpr ptrdiff_t m_flTWidth = 0x79c;
   constexpr ptrdiff_t m_flTLength = 0x7a0;

}

namespace CFuncPlat {

   constexpr ptrdiff_t m_sNoise = 0x7a8;

}

namespace CFuncPlatRot {

   constexpr ptrdiff_t m_end = 0x7b0;
   constexpr ptrdiff_t m_start = 0x7bc;

}

namespace CFuncTrain {

   constexpr ptrdiff_t m_hCurrentTarget = 0x7a8;
   constexpr ptrdiff_t m_activated = 0x7ac;
   constexpr ptrdiff_t m_hEnemy = 0x7b0;
   constexpr ptrdiff_t m_flBlockDamage = 0x7b4;
   constexpr ptrdiff_t m_flNextBlockTime = 0x7b8;
   constexpr ptrdiff_t m_iszLastTarget = 0x7c0;

}

namespace CFuncTrackChange {

   constexpr ptrdiff_t m_trackTop = 0x7c8;
   constexpr ptrdiff_t m_trackBottom = 0x7d0;
   constexpr ptrdiff_t m_train = 0x7d8;
   constexpr ptrdiff_t m_trackTopName = 0x7e0;
   constexpr ptrdiff_t m_trackBottomName = 0x7e8;
   constexpr ptrdiff_t m_trainName = 0x7f0;
   constexpr ptrdiff_t m_code = 0x7f8;
   constexpr ptrdiff_t m_targetState = 0x7fc;
   constexpr ptrdiff_t m_use = 0x800;

}

namespace CTriggerRemove {

   constexpr ptrdiff_t m_OnRemove = 0x8a8;

}

namespace CScriptTriggerHurt {

   constexpr ptrdiff_t m_vExtent = 0x948;

}

namespace CScriptTriggerMultiple {

   constexpr ptrdiff_t m_vExtent = 0x8d0;

}

namespace CScriptTriggerOnce {

   constexpr ptrdiff_t m_vExtent = 0x8d0;

}

namespace CTriggerLook {

   constexpr ptrdiff_t m_hLookTarget = 0x8d0;
   constexpr ptrdiff_t m_flFieldOfView = 0x8d4;
   constexpr ptrdiff_t m_flLookTime = 0x8d8;
   constexpr ptrdiff_t m_flLookTimeTotal = 0x8dc;
   constexpr ptrdiff_t m_flLookTimeLast = 0x8e0;
   constexpr ptrdiff_t m_flTimeoutDuration = 0x8e4;
   constexpr ptrdiff_t m_bTimeoutFired = 0x8e8;
   constexpr ptrdiff_t m_bIsLooking = 0x8e9;
   constexpr ptrdiff_t m_b2DFOV = 0x8ea;
   constexpr ptrdiff_t m_bUseVelocity = 0x8eb;
   constexpr ptrdiff_t m_hActivator = 0x8ec;
   constexpr ptrdiff_t m_bTestOcclusion = 0x8f0;
   constexpr ptrdiff_t m_OnTimeout = 0x8f8;
   constexpr ptrdiff_t m_OnStartLook = 0x920;
   constexpr ptrdiff_t m_OnEndLook = 0x948;

}

namespace CTriggerPush {

   constexpr ptrdiff_t m_angPushEntitySpace = 0x8a8;
   constexpr ptrdiff_t m_vecPushDirEntitySpace = 0x8b4;
   constexpr ptrdiff_t m_bTriggerOnStartTouch = 0x8c0;
   constexpr ptrdiff_t m_flAlternateTicksFix = 0x8c4;
   constexpr ptrdiff_t m_flPushSpeed = 0x8c8;

}

namespace CScriptTriggerPush {

   constexpr ptrdiff_t m_vExtent = 0x8d0;

}

namespace CTriggerToggleSave {

   constexpr ptrdiff_t m_bDisabled = 0x8a8;

}

namespace CTriggerSave {

   constexpr ptrdiff_t m_bForceNewLevelUnit = 0x8a8;
   constexpr ptrdiff_t m_fDangerousTimer = 0x8ac;
   constexpr ptrdiff_t m_minHitPoints = 0x8b0;

}

namespace CTriggerProximity {

   constexpr ptrdiff_t m_hMeasureTarget = 0x8a8;
   constexpr ptrdiff_t m_iszMeasureTarget = 0x8b0;
   constexpr ptrdiff_t m_fRadius = 0x8b8;
   constexpr ptrdiff_t m_nTouchers = 0x8bc;
   constexpr ptrdiff_t m_NearestEntityDistance = 0x8c0;

}

namespace CTriggerImpact {

   constexpr ptrdiff_t m_flMagnitude = 0x8d0;
   constexpr ptrdiff_t m_flNoise = 0x8d4;
   constexpr ptrdiff_t m_flViewkick = 0x8d8;
   constexpr ptrdiff_t m_pOutputForce = 0x8e0;

}

namespace CTriggerActiveWeaponDetect {

   constexpr ptrdiff_t m_OnTouchedActiveWeapon = 0x8a8;
   constexpr ptrdiff_t m_iszWeaponClassName = 0x8d0;

}

namespace CTriggerPhysics {

   constexpr ptrdiff_t m_gravityScale = 0x8b8;
   constexpr ptrdiff_t m_linearLimit = 0x8bc;
   constexpr ptrdiff_t m_linearDamping = 0x8c0;
   constexpr ptrdiff_t m_angularLimit = 0x8c4;
   constexpr ptrdiff_t m_angularDamping = 0x8c8;
   constexpr ptrdiff_t m_linearForce = 0x8cc;
   constexpr ptrdiff_t m_flFrequency = 0x8d0;
   constexpr ptrdiff_t m_flDampingRatio = 0x8d4;
   constexpr ptrdiff_t m_vecLinearForcePointAt = 0x8d8;
   constexpr ptrdiff_t m_bCollapseToForcePoint = 0x8e4;
   constexpr ptrdiff_t m_vecLinearForcePointAtWorld = 0x8e8;
   constexpr ptrdiff_t m_vecLinearForceDirection = 0x8f4;
   constexpr ptrdiff_t m_bConvertToDebrisWhenPossible = 0x900;

}

namespace CTriggerDetectBulletFire {

   constexpr ptrdiff_t m_bPlayerFireOnly = 0x8a8;
   constexpr ptrdiff_t m_OnDetectedBulletFire = 0x8b0;

}

namespace CTriggerDetectExplosion {

   constexpr ptrdiff_t m_OnDetectedExplosion = 0x8e0;

}

namespace CScriptNavBlocker {

   constexpr ptrdiff_t m_vExtent = 0x710;

}

namespace CBaseFlex {

   constexpr ptrdiff_t m_flexWeight = 0x890;
   constexpr ptrdiff_t m_vLookTargetPosition = 0x8a8;
   constexpr ptrdiff_t m_blinktoggle = 0x8b4;
   constexpr ptrdiff_t m_flAllowResponsesEndTime = 0x908;
   constexpr ptrdiff_t m_flLastFlexAnimationTime = 0x90c;
   constexpr ptrdiff_t m_nNextSceneEventId = 0x910;
   constexpr ptrdiff_t m_bUpdateLayerPriorities = 0x914;

}

namespace CBasePropDoor {

   constexpr ptrdiff_t m_flAutoReturnDelay = 0xb18;
   constexpr ptrdiff_t m_hDoorList = 0xb20;
   constexpr ptrdiff_t m_nHardwareType = 0xb38;
   constexpr ptrdiff_t m_bNeedsHardware = 0xb3c;
   constexpr ptrdiff_t m_eDoorState = 0xb40;
   constexpr ptrdiff_t m_bLocked = 0xb44;
   constexpr ptrdiff_t m_closedPosition = 0xb48;
   constexpr ptrdiff_t m_closedAngles = 0xb54;
   constexpr ptrdiff_t m_hBlocker = 0xb60;
   constexpr ptrdiff_t m_bFirstBlocked = 0xb64;
   constexpr ptrdiff_t m_ls = 0xb68;
   constexpr ptrdiff_t m_bForceClosed = 0xb88;
   constexpr ptrdiff_t m_vecLatchWorldPosition = 0xb8c;
   constexpr ptrdiff_t m_hActivator = 0xb98;
   constexpr ptrdiff_t m_SoundMoving = 0xba8;
   constexpr ptrdiff_t m_SoundOpen = 0xbb0;
   constexpr ptrdiff_t m_SoundClose = 0xbb8;
   constexpr ptrdiff_t m_SoundLock = 0xbc0;
   constexpr ptrdiff_t m_SoundUnlock = 0xbc8;
   constexpr ptrdiff_t m_SoundLatch = 0xbd0;
   constexpr ptrdiff_t m_SoundPound = 0xbd8;
   constexpr ptrdiff_t m_SoundJiggle = 0xbe0;
   constexpr ptrdiff_t m_SoundLockedAnim = 0xbe8;
   constexpr ptrdiff_t m_numCloseAttempts = 0xbf0;
   constexpr ptrdiff_t m_nPhysicsMaterial = 0xbf4;
   constexpr ptrdiff_t m_SlaveName = 0xbf8;
   constexpr ptrdiff_t m_hMaster = 0xc00;
   constexpr ptrdiff_t m_OnBlockedClosing = 0xc08;
   constexpr ptrdiff_t m_OnBlockedOpening = 0xc30;
   constexpr ptrdiff_t m_OnUnblockedClosing = 0xc58;
   constexpr ptrdiff_t m_OnUnblockedOpening = 0xc80;
   constexpr ptrdiff_t m_OnFullyClosed = 0xca8;
   constexpr ptrdiff_t m_OnFullyOpen = 0xcd0;
   constexpr ptrdiff_t m_OnClose = 0xcf8;
   constexpr ptrdiff_t m_OnOpen = 0xd20;
   constexpr ptrdiff_t m_OnLockedUse = 0xd48;
   constexpr ptrdiff_t m_OnAjarOpen = 0xd70;

}

namespace CEnvLaser {

   constexpr ptrdiff_t m_iszLaserTarget = 0x7a0;
   constexpr ptrdiff_t m_pSprite = 0x7a8;
   constexpr ptrdiff_t m_iszSpriteName = 0x7b0;
   constexpr ptrdiff_t m_firePosition = 0x7b8;
   constexpr ptrdiff_t m_flStartFrame = 0x7c4;

}

namespace CFish {

   constexpr ptrdiff_t m_pool = 0x890;
   constexpr ptrdiff_t m_id = 0x894;
   constexpr ptrdiff_t m_x = 0x898;
   constexpr ptrdiff_t m_y = 0x89c;
   constexpr ptrdiff_t m_z = 0x8a0;
   constexpr ptrdiff_t m_angle = 0x8a4;
   constexpr ptrdiff_t m_angleChange = 0x8a8;
   constexpr ptrdiff_t m_forward = 0x8ac;
   constexpr ptrdiff_t m_perp = 0x8b8;
   constexpr ptrdiff_t m_poolOrigin = 0x8c4;
   constexpr ptrdiff_t m_waterLevel = 0x8d0;
   constexpr ptrdiff_t m_speed = 0x8d4;
   constexpr ptrdiff_t m_desiredSpeed = 0x8d8;
   constexpr ptrdiff_t m_calmSpeed = 0x8dc;
   constexpr ptrdiff_t m_panicSpeed = 0x8e0;
   constexpr ptrdiff_t m_avoidRange = 0x8e4;
   constexpr ptrdiff_t m_turnTimer = 0x8e8;
   constexpr ptrdiff_t m_turnClockwise = 0x900;
   constexpr ptrdiff_t m_goTimer = 0x908;
   constexpr ptrdiff_t m_moveTimer = 0x920;
   constexpr ptrdiff_t m_panicTimer = 0x938;
   constexpr ptrdiff_t m_disperseTimer = 0x950;
   constexpr ptrdiff_t m_proximityTimer = 0x968;
   constexpr ptrdiff_t m_visible = 0x980;

}

namespace CItem {

   constexpr ptrdiff_t m_OnPlayerTouch = 0x898;
   constexpr ptrdiff_t m_bActivateWhenAtRest = 0x8c0;
   constexpr ptrdiff_t m_OnCacheInteraction = 0x8c8;
   constexpr ptrdiff_t m_OnPlayerPickup = 0x8f0;
   constexpr ptrdiff_t m_OnGlovePulled = 0x918;
   constexpr ptrdiff_t m_vOriginalSpawnOrigin = 0x940;
   constexpr ptrdiff_t m_vOriginalSpawnAngles = 0x94c;
   constexpr ptrdiff_t m_bPhysStartAsleep = 0x958;

}

namespace CRagdollProp {

   constexpr ptrdiff_t m_ragdoll = 0x898;
   constexpr ptrdiff_t m_bStartDisabled = 0x8d0;
   constexpr ptrdiff_t m_ragPos = 0x8d8;
   constexpr ptrdiff_t m_ragAngles = 0x8f0;
   constexpr ptrdiff_t m_hRagdollSource = 0x908;
   constexpr ptrdiff_t m_lastUpdateTickCount = 0x90c;
   constexpr ptrdiff_t m_allAsleep = 0x910;
   constexpr ptrdiff_t m_bFirstCollisionAfterLaunch = 0x911;
   constexpr ptrdiff_t m_hDamageEntity = 0x914;
   constexpr ptrdiff_t m_hKiller = 0x918;
   constexpr ptrdiff_t m_hPhysicsAttacker = 0x91c;
   constexpr ptrdiff_t m_flLastPhysicsInfluenceTime = 0x920;
   constexpr ptrdiff_t m_flFadeOutStartTime = 0x924;
   constexpr ptrdiff_t m_flFadeTime = 0x928;
   constexpr ptrdiff_t m_vecLastOrigin = 0x92c;
   constexpr ptrdiff_t m_flAwakeTime = 0x938;
   constexpr ptrdiff_t m_flLastOriginChangeTime = 0x93c;
   constexpr ptrdiff_t m_nBloodColor = 0x940;
   constexpr ptrdiff_t m_strOriginClassName = 0x948;
   constexpr ptrdiff_t m_strSourceClassName = 0x950;
   constexpr ptrdiff_t m_bHasBeenPhysgunned = 0x958;
   constexpr ptrdiff_t m_bShouldTeleportPhysics = 0x959;
   constexpr ptrdiff_t m_flBlendWeight = 0x95c;
   constexpr ptrdiff_t m_flDefaultFadeScale = 0x960;
   constexpr ptrdiff_t m_ragdollMins = 0x968;
   constexpr ptrdiff_t m_ragdollMaxs = 0x980;
   constexpr ptrdiff_t m_bShouldDeleteActivationRecord = 0x998;
   constexpr ptrdiff_t m_bValidatePoweredRagdollPose = 0x9f8;

}

namespace CPhysMagnet {

   constexpr ptrdiff_t m_OnMagnetAttach = 0x890;
   constexpr ptrdiff_t m_OnMagnetDetach = 0x8b8;
   constexpr ptrdiff_t m_massScale = 0x8e0;
   constexpr ptrdiff_t m_forceLimit = 0x8e4;
   constexpr ptrdiff_t m_torqueLimit = 0x8e8;
   constexpr ptrdiff_t m_MagnettedEntities = 0x8f0;
   constexpr ptrdiff_t m_bActive = 0x908;
   constexpr ptrdiff_t m_bHasHitSomething = 0x909;
   constexpr ptrdiff_t m_flTotalMass = 0x90c;
   constexpr ptrdiff_t m_flRadius = 0x910;
   constexpr ptrdiff_t m_flNextSuckTime = 0x914;
   constexpr ptrdiff_t m_iMaxObjectsAttached = 0x918;

}

namespace CPhysicsProp {

   constexpr ptrdiff_t m_MotionEnabled = 0xa10;
   constexpr ptrdiff_t m_OnAwakened = 0xa38;
   constexpr ptrdiff_t m_OnAwake = 0xa60;
   constexpr ptrdiff_t m_OnAsleep = 0xa88;
   constexpr ptrdiff_t m_OnPlayerUse = 0xab0;
   constexpr ptrdiff_t m_OnPlayerPickup = 0xad8;
   constexpr ptrdiff_t m_OnOutOfWorld = 0xb00;
   constexpr ptrdiff_t m_massScale = 0xb28;
   constexpr ptrdiff_t m_inertiaScale = 0xb2c;
   constexpr ptrdiff_t m_buoyancyScale = 0xb30;
   constexpr ptrdiff_t m_damageType = 0xb34;
   constexpr ptrdiff_t m_damageToEnableMotion = 0xb38;
   constexpr ptrdiff_t m_flForceToEnableMotion = 0xb3c;
   constexpr ptrdiff_t m_bThrownByPlayer = 0xb40;
   constexpr ptrdiff_t m_bDroppedByPlayer = 0xb41;
   constexpr ptrdiff_t m_bTouchedByPlayer = 0xb42;
   constexpr ptrdiff_t m_bFirstCollisionAfterLaunch = 0xb43;
   constexpr ptrdiff_t m_iExploitableByPlayer = 0xb44;
   constexpr ptrdiff_t m_bHasBeenAwakened = 0xb48;
   constexpr ptrdiff_t m_bIsOverrideProp = 0xb49;
   constexpr ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xb4c;
   constexpr ptrdiff_t m_iInitialGlowState = 0xb50;
   constexpr ptrdiff_t m_nGlowRange = 0xb54;
   constexpr ptrdiff_t m_nGlowRangeMin = 0xb58;
   constexpr ptrdiff_t m_glowColor = 0xb5c;
   constexpr ptrdiff_t m_bForceNavIgnore = 0xb60;
   constexpr ptrdiff_t m_bNoNavmeshBlocker = 0xb61;
   constexpr ptrdiff_t m_bForceNpcExclude = 0xb62;
   constexpr ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xb63;
   constexpr ptrdiff_t m_bMuteImpactEffects = 0xb64;
   constexpr ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xb6c;
   constexpr ptrdiff_t m_bEnableUseOutput = 0xb6d;
   constexpr ptrdiff_t m_bAwake = 0xb6e;
   constexpr ptrdiff_t m_nCollisionGroupOverride = 0xb70;

}

namespace CPhysicsPropRespawnable {

   constexpr ptrdiff_t m_vOriginalSpawnOrigin = 0xb78;
   constexpr ptrdiff_t m_vOriginalSpawnAngles = 0xb84;
   constexpr ptrdiff_t m_vOriginalMins = 0xb90;
   constexpr ptrdiff_t m_vOriginalMaxs = 0xb9c;
   constexpr ptrdiff_t m_flRespawnDuration = 0xba8;

}

namespace CShatterGlassShardPhysics {

   constexpr ptrdiff_t m_bDebris = 0xb78;
   constexpr ptrdiff_t m_hParentShard = 0xb7c;
   constexpr ptrdiff_t m_ShardDesc = 0xb80;

}

namespace CEconEntity {

   constexpr ptrdiff_t m_AttributeManager = 0x930;
   constexpr ptrdiff_t m_OriginalOwnerXuidLow = 0xbf8;
   constexpr ptrdiff_t m_OriginalOwnerXuidHigh = 0xbfc;
   constexpr ptrdiff_t m_nFallbackPaintKit = 0xc00;
   constexpr ptrdiff_t m_nFallbackSeed = 0xc04;
   constexpr ptrdiff_t m_flFallbackWear = 0xc08;
   constexpr ptrdiff_t m_nFallbackStatTrak = 0xc0c;
   constexpr ptrdiff_t m_hOldProvidee = 0xc10;
   constexpr ptrdiff_t m_iOldOwnerClass = 0xc14;

}

namespace CEconWearable {

   constexpr ptrdiff_t m_nForceSkin = 0xc18;
   constexpr ptrdiff_t m_bAlwaysAllow = 0xc1c;

}

namespace CBaseGrenade {

   constexpr ptrdiff_t m_OnPlayerPickup = 0x928;
   constexpr ptrdiff_t m_OnExplode = 0x950;
   constexpr ptrdiff_t m_bHasWarnedAI = 0x978;
   constexpr ptrdiff_t m_bIsSmokeGrenade = 0x979;
   constexpr ptrdiff_t m_bIsLive = 0x97a;
   constexpr ptrdiff_t m_DmgRadius = 0x97c;
   constexpr ptrdiff_t m_flDetonateTime = 0x980;
   constexpr ptrdiff_t m_flWarnAITime = 0x984;
   constexpr ptrdiff_t m_flDamage = 0x988;
   constexpr ptrdiff_t m_iszBounceSound = 0x990;
   constexpr ptrdiff_t m_ExplosionSound = 0x998;
   constexpr ptrdiff_t m_hThrower = 0x9a4;
   constexpr ptrdiff_t m_flNextAttack = 0x9bc;
   constexpr ptrdiff_t m_hOriginalThrower = 0x9c0;

}

namespace CBaseViewModel {

   constexpr ptrdiff_t m_vecLastFacing = 0x898;
   constexpr ptrdiff_t m_nViewModelIndex = 0x8a4;
   constexpr ptrdiff_t m_nAnimationParity = 0x8a8;
   constexpr ptrdiff_t m_flAnimationStartTime = 0x8ac;
   constexpr ptrdiff_t m_hWeapon = 0x8b0;
   constexpr ptrdiff_t m_sVMName = 0x8b8;
   constexpr ptrdiff_t m_sAnimationPrefix = 0x8c0;
   constexpr ptrdiff_t m_hOldLayerSequence = 0x8c8;
   constexpr ptrdiff_t m_oldLayer = 0x8cc;
   constexpr ptrdiff_t m_oldLayerStartTime = 0x8d0;
   constexpr ptrdiff_t m_hControlPanel = 0x8d4;

}

namespace CPlantedC4 {

   constexpr ptrdiff_t m_bBombTicking = 0x890;
   constexpr ptrdiff_t m_flC4Blow = 0x894;
   constexpr ptrdiff_t m_nBombSite = 0x898;
   constexpr ptrdiff_t m_nSourceSoundscapeHash = 0x89c;
   constexpr ptrdiff_t m_OnBombDefused = 0x8a0;
   constexpr ptrdiff_t m_OnBombBeginDefuse = 0x8c8;
   constexpr ptrdiff_t m_OnBombDefuseAborted = 0x8f0;
   constexpr ptrdiff_t m_bCannotBeDefused = 0x918;
   constexpr ptrdiff_t m_entitySpottedState = 0x920;
   constexpr ptrdiff_t m_nSpotRules = 0x938;
   constexpr ptrdiff_t m_bTrainingPlacedByPlayer = 0x93c;
   constexpr ptrdiff_t m_bHasExploded = 0x93d;
   constexpr ptrdiff_t m_flTimerLength = 0x940;
   constexpr ptrdiff_t m_bBeingDefused = 0x944;
   constexpr ptrdiff_t m_fLastDefuseTime = 0x94c;
   constexpr ptrdiff_t m_flDefuseLength = 0x954;
   constexpr ptrdiff_t m_flDefuseCountDown = 0x958;
   constexpr ptrdiff_t m_bBombDefused = 0x95c;
   constexpr ptrdiff_t m_hBombDefuser = 0x960;
   constexpr ptrdiff_t m_hControlPanel = 0x964;
   constexpr ptrdiff_t m_iProgressBarTime = 0x968;
   constexpr ptrdiff_t m_bVoiceAlertFired = 0x96c;
   constexpr ptrdiff_t m_bVoiceAlertPlayed = 0x96d;
   constexpr ptrdiff_t m_flNextBotBeepTime = 0x974;
   constexpr ptrdiff_t m_bPlantedAfterPickup = 0x97c;
   constexpr ptrdiff_t m_angCatchUpToPlayerEye = 0x980;
   constexpr ptrdiff_t m_flLastSpinDetectionTime = 0x98c;

}

namespace CBaseCSGrenadeProjectile {

   constexpr ptrdiff_t m_vInitialVelocity = 0x9c8;
   constexpr ptrdiff_t m_nBounces = 0x9d4;
   constexpr ptrdiff_t m_nExplodeEffectIndex = 0x9d8;
   constexpr ptrdiff_t m_nExplodeEffectTickBegin = 0x9e0;
   constexpr ptrdiff_t m_vecExplodeEffectOrigin = 0x9e4;
   constexpr ptrdiff_t m_unOGSExtraFlags = 0x9f0;
   constexpr ptrdiff_t m_bDetonationRecorded = 0x9f1;
   constexpr ptrdiff_t m_flDetonateTime = 0x9f4;
   constexpr ptrdiff_t m_nItemIndex = 0x9f8;
   constexpr ptrdiff_t m_vecOriginalSpawnLocation = 0x9fc;
   constexpr ptrdiff_t m_flLastBounceSoundTime = 0xa08;
   constexpr ptrdiff_t m_vecGrenadeSpin = 0xa0c;
   constexpr ptrdiff_t m_vecLastHitSurfaceNormal = 0xa18;
   constexpr ptrdiff_t m_nTicksAtZeroVelocity = 0xa24;

}

namespace CItemDogtags {

   constexpr ptrdiff_t m_OwningPlayer = 0x968;
   constexpr ptrdiff_t m_KillingPlayer = 0x96c;

}

namespace CSensorGrenadeProjectile {

   constexpr ptrdiff_t m_fExpireTime = 0xa28;
   constexpr ptrdiff_t m_fNextDetectPlayerSound = 0xa2c;
   constexpr ptrdiff_t m_hDisplayGrenade = 0xa30;

}

namespace CFlashbangProjectile {

   constexpr ptrdiff_t m_flTimeToDetonate = 0xa28;
   constexpr ptrdiff_t m_numOpponentsHit = 0xa2c;
   constexpr ptrdiff_t m_numTeammatesHit = 0xa2d;

}

namespace CChicken {

   constexpr ptrdiff_t m_AttributeManager = 0xb28;
   constexpr ptrdiff_t m_OriginalOwnerXuidLow = 0xdf0;
   constexpr ptrdiff_t m_OriginalOwnerXuidHigh = 0xdf4;
   constexpr ptrdiff_t m_updateTimer = 0xdf8;
   constexpr ptrdiff_t m_stuckAnchor = 0xe10;
   constexpr ptrdiff_t m_stuckTimer = 0xe20;
   constexpr ptrdiff_t m_collisionStuckTimer = 0xe38;
   constexpr ptrdiff_t m_isOnGround = 0xe50;
   constexpr ptrdiff_t m_vFallVelocity = 0xe54;
   constexpr ptrdiff_t m_activity = 0xe60;
   constexpr ptrdiff_t m_activityTimer = 0xe68;
   constexpr ptrdiff_t m_turnRate = 0xe80;
   constexpr ptrdiff_t m_fleeFrom = 0xe84;
   constexpr ptrdiff_t m_moveRateThrottleTimer = 0xe88;
   constexpr ptrdiff_t m_startleTimer = 0xea0;
   constexpr ptrdiff_t m_vocalizeTimer = 0xeb8;
   constexpr ptrdiff_t m_flWhenZombified = 0xed0;
   constexpr ptrdiff_t m_jumpedThisFrame = 0xed4;
   constexpr ptrdiff_t m_leader = 0xed8;
   constexpr ptrdiff_t m_reuseTimer = 0xee0;
   constexpr ptrdiff_t m_hasBeenUsed = 0xef8;
   constexpr ptrdiff_t m_jumpTimer = 0xf00;
   constexpr ptrdiff_t m_flLastJumpTime = 0xf18;
   constexpr ptrdiff_t m_bInJump = 0xf1c;
   constexpr ptrdiff_t m_isWaitingForLeader = 0xf1d;
   constexpr ptrdiff_t m_repathTimer = 0x2f28;
   constexpr ptrdiff_t m_inhibitDoorTimer = 0x2f40;
   constexpr ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2fd0;
   constexpr ptrdiff_t m_vecPathGoal = 0x2ff0;
   constexpr ptrdiff_t m_flActiveFollowStartTime = 0x2ffc;
   constexpr ptrdiff_t m_followMinuteTimer = 0x3000;
   constexpr ptrdiff_t m_vecLastEggPoopPosition = 0x3018;
   constexpr ptrdiff_t m_vecEggsPooped = 0x3028;
   constexpr ptrdiff_t m_BlockDirectionTimer = 0x3048;

}

namespace CItemDefuser {

   constexpr ptrdiff_t m_entitySpottedState = 0x968;
   constexpr ptrdiff_t m_nSpotRules = 0x980;

}

namespace CBasePlayerWeapon {

   constexpr ptrdiff_t m_nNextPrimaryAttackTick = 0xc18;
   constexpr ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xc1c;
   constexpr ptrdiff_t m_nNextSecondaryAttackTick = 0xc20;
   constexpr ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xc24;
   constexpr ptrdiff_t m_iClip1 = 0xc28;
   constexpr ptrdiff_t m_iClip2 = 0xc2c;
   constexpr ptrdiff_t m_pReserveAmmo = 0xc30;
   constexpr ptrdiff_t m_OnPlayerUse = 0xc38;

}

namespace CScriptItem {

   constexpr ptrdiff_t m_OnPlayerPickup = 0x968;
   constexpr ptrdiff_t m_MoveTypeOverride = 0x990;

}

namespace CRagdollPropAttached {

   constexpr ptrdiff_t m_boneIndexAttached = 0xa38;
   constexpr ptrdiff_t m_ragdollAttachedObjectIndex = 0xa3c;
   constexpr ptrdiff_t m_attachmentPointBoneSpace = 0xa40;
   constexpr ptrdiff_t m_attachmentPointRagdollSpace = 0xa4c;
   constexpr ptrdiff_t m_bShouldDetach = 0xa58;
   constexpr ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xa68;

}

namespace CPropDoorRotating {

   constexpr ptrdiff_t m_vecAxis = 0xd98;
   constexpr ptrdiff_t m_flDistance = 0xda4;
   constexpr ptrdiff_t m_eSpawnPosition = 0xda8;
   constexpr ptrdiff_t m_eOpenDirection = 0xdac;
   constexpr ptrdiff_t m_eCurrentOpenDirection = 0xdb0;
   constexpr ptrdiff_t m_flAjarAngle = 0xdb4;
   constexpr ptrdiff_t m_angRotationAjarDeprecated = 0xdb8;
   constexpr ptrdiff_t m_angRotationClosed = 0xdc4;
   constexpr ptrdiff_t m_angRotationOpenForward = 0xdd0;
   constexpr ptrdiff_t m_angRotationOpenBack = 0xddc;
   constexpr ptrdiff_t m_angGoal = 0xde8;
   constexpr ptrdiff_t m_vecForwardBoundsMin = 0xdf4;
   constexpr ptrdiff_t m_vecForwardBoundsMax = 0xe00;
   constexpr ptrdiff_t m_vecBackBoundsMin = 0xe0c;
   constexpr ptrdiff_t m_vecBackBoundsMax = 0xe18;
   constexpr ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xe24;
   constexpr ptrdiff_t m_hEntityBlocker = 0xe28;

}

namespace CPropDoorRotatingBreakable {

   constexpr ptrdiff_t m_bBreakable = 0xe30;
   constexpr ptrdiff_t m_isAbleToCloseAreaPortals = 0xe31;
   constexpr ptrdiff_t m_currentDamageState = 0xe34;
   constexpr ptrdiff_t m_damageStates = 0xe38;

}

namespace CBaseCombatCharacter {

   constexpr ptrdiff_t m_bForceServerRagdoll = 0x920;
   constexpr ptrdiff_t m_hMyWearables = 0x928;
   constexpr ptrdiff_t m_flFieldOfView = 0x940;
   constexpr ptrdiff_t m_impactEnergyScale = 0x944;
   constexpr ptrdiff_t m_LastHitGroup = 0x948;
   constexpr ptrdiff_t m_bApplyStressDamage = 0x94c;
   constexpr ptrdiff_t m_bloodColor = 0x950;
   constexpr ptrdiff_t m_navMeshID = 0x9b0;
   constexpr ptrdiff_t m_iDamageCount = 0x9b4;
   constexpr ptrdiff_t m_pVecRelationships = 0x9b8;
   constexpr ptrdiff_t m_strRelationships = 0x9c0;
   constexpr ptrdiff_t m_eHull = 0x9c8;
   constexpr ptrdiff_t m_nNavHullIdx = 0x9cc;

}

namespace CItemGeneric {

   constexpr ptrdiff_t m_bHasTriggerRadius = 0x970;
   constexpr ptrdiff_t m_bHasPickupRadius = 0x971;
   constexpr ptrdiff_t m_flPickupRadiusSqr = 0x974;
   constexpr ptrdiff_t m_flTriggerRadiusSqr = 0x978;
   constexpr ptrdiff_t m_flLastPickupCheck = 0x97c;
   constexpr ptrdiff_t m_bPlayerCounterListenerAdded = 0x980;
   constexpr ptrdiff_t m_bPlayerInTriggerRadius = 0x981;
   constexpr ptrdiff_t m_hSpawnParticleEffect = 0x988;
   constexpr ptrdiff_t m_pAmbientSoundEffect = 0x990;
   constexpr ptrdiff_t m_bAutoStartAmbientSound = 0x998;
   constexpr ptrdiff_t m_pSpawnScriptFunction = 0x9a0;
   constexpr ptrdiff_t m_hPickupParticleEffect = 0x9a8;
   constexpr ptrdiff_t m_pPickupSoundEffect = 0x9b0;
   constexpr ptrdiff_t m_pPickupScriptFunction = 0x9b8;
   constexpr ptrdiff_t m_hTimeoutParticleEffect = 0x9c0;
   constexpr ptrdiff_t m_pTimeoutSoundEffect = 0x9c8;
   constexpr ptrdiff_t m_pTimeoutScriptFunction = 0x9d0;
   constexpr ptrdiff_t m_pPickupFilterName = 0x9d8;
   constexpr ptrdiff_t m_hPickupFilter = 0x9e0;
   constexpr ptrdiff_t m_OnPickup = 0x9e8;
   constexpr ptrdiff_t m_OnTimeout = 0xa10;
   constexpr ptrdiff_t m_OnTriggerStartTouch = 0xa38;
   constexpr ptrdiff_t m_OnTriggerTouch = 0xa60;
   constexpr ptrdiff_t m_OnTriggerEndTouch = 0xa88;
   constexpr ptrdiff_t m_pAllowPickupScriptFunction = 0xab0;
   constexpr ptrdiff_t m_flPickupRadius = 0xab8;
   constexpr ptrdiff_t m_flTriggerRadius = 0xabc;
   constexpr ptrdiff_t m_pTriggerSoundEffect = 0xac0;
   constexpr ptrdiff_t m_bGlowWhenInTrigger = 0xac8;
   constexpr ptrdiff_t m_glowColor = 0xac9;
   constexpr ptrdiff_t m_bUseable = 0xacd;
   constexpr ptrdiff_t m_hTriggerHelper = 0xad0;

}

namespace CBasePlayerPawn {

   constexpr ptrdiff_t m_pWeaponServices = 0x9d0;
   constexpr ptrdiff_t m_pItemServices = 0x9d8;
   constexpr ptrdiff_t m_pAutoaimServices = 0x9e0;
   constexpr ptrdiff_t m_pObserverServices = 0x9e8;
   constexpr ptrdiff_t m_pWaterServices = 0x9f0;
   constexpr ptrdiff_t m_pUseServices = 0x9f8;
   constexpr ptrdiff_t m_pFlashlightServices = 0xa00;
   constexpr ptrdiff_t m_pCameraServices = 0xa08;
   constexpr ptrdiff_t m_pMovementServices = 0xa10;
   constexpr ptrdiff_t m_ServerViewAngleChanges = 0xa20;
   constexpr ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xa70;
   constexpr ptrdiff_t v_angle = 0xa74;
   constexpr ptrdiff_t v_anglePrevious = 0xa80;
   constexpr ptrdiff_t m_iHideHUD = 0xa8c;
   constexpr ptrdiff_t m_skybox3d = 0xa90;
   constexpr ptrdiff_t m_fTimeLastHurt = 0xb20;
   constexpr ptrdiff_t m_flDeathTime = 0xb24;
   constexpr ptrdiff_t m_fNextSuicideTime = 0xb28;
   constexpr ptrdiff_t m_fInitHUD = 0xb2c;
   constexpr ptrdiff_t m_pExpresser = 0xb30;
   constexpr ptrdiff_t m_hController = 0xb38;
   constexpr ptrdiff_t m_fHltvReplayDelay = 0xb40;
   constexpr ptrdiff_t m_fHltvReplayEnd = 0xb44;
   constexpr ptrdiff_t m_iHltvReplayEntity = 0xb48;

}

namespace CCSGOViewModel {

   constexpr ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x8d8;
   constexpr ptrdiff_t m_nWeaponParity = 0x8dc;
   constexpr ptrdiff_t m_nOldWeaponParity = 0x8e0;

}

namespace CCSWeaponBase {

   constexpr ptrdiff_t m_bRemoveable = 0xc88;
   constexpr ptrdiff_t m_flFireSequenceStartTime = 0xc8c;
   constexpr ptrdiff_t m_nFireSequenceStartTimeChange = 0xc90;
   constexpr ptrdiff_t m_nFireSequenceStartTimeAck = 0xc94;
   constexpr ptrdiff_t m_bPlayerFireEventIsPrimary = 0xc98;
   constexpr ptrdiff_t m_seqIdle = 0xc9c;
   constexpr ptrdiff_t m_seqFirePrimary = 0xca0;
   constexpr ptrdiff_t m_seqFireSecondary = 0xca4;
   constexpr ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xcb0;
   constexpr ptrdiff_t m_bRequireUseToTouch = 0xcb1;
   constexpr ptrdiff_t m_iState = 0xcb4;
   constexpr ptrdiff_t m_flLastTimeInAir = 0xcb8;
   constexpr ptrdiff_t m_flLastDeployTime = 0xcbc;
   constexpr ptrdiff_t m_nViewModelIndex = 0xcc0;
   constexpr ptrdiff_t m_bReloadsWithClips = 0xcc4;
   constexpr ptrdiff_t m_flTimeWeaponIdle = 0xce0;
   constexpr ptrdiff_t m_bFireOnEmpty = 0xce4;
   constexpr ptrdiff_t m_OnPlayerPickup = 0xce8;
   constexpr ptrdiff_t m_weaponMode = 0xd10;
   constexpr ptrdiff_t m_flTurningInaccuracyDelta = 0xd14;
   constexpr ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xd18;
   constexpr ptrdiff_t m_flTurningInaccuracy = 0xd24;
   constexpr ptrdiff_t m_fAccuracyPenalty = 0xd28;
   constexpr ptrdiff_t m_flLastAccuracyUpdateTime = 0xd2c;
   constexpr ptrdiff_t m_fAccuracySmoothedForZoom = 0xd30;
   constexpr ptrdiff_t m_fScopeZoomEndTime = 0xd34;
   constexpr ptrdiff_t m_iRecoilIndex = 0xd38;
   constexpr ptrdiff_t m_flRecoilIndex = 0xd3c;
   constexpr ptrdiff_t m_bBurstMode = 0xd40;
   constexpr ptrdiff_t m_flPostponeFireReadyTime = 0xd44;
   constexpr ptrdiff_t m_bInReload = 0xd48;
   constexpr ptrdiff_t m_bReloadVisuallyComplete = 0xd49;
   constexpr ptrdiff_t m_flDroppedAtTime = 0xd4c;
   constexpr ptrdiff_t m_bIsHauledBack = 0xd50;
   constexpr ptrdiff_t m_bSilencerOn = 0xd51;
   constexpr ptrdiff_t m_flTimeSilencerSwitchComplete = 0xd54;
   constexpr ptrdiff_t m_iOriginalTeamNumber = 0xd58;
   constexpr ptrdiff_t m_flNextAttackRenderTimeOffset = 0xd5c;
   constexpr ptrdiff_t m_bCanBePickedUp = 0xd70;
   constexpr ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xd71;
   constexpr ptrdiff_t m_nextOwnerTouchTime = 0xd74;
   constexpr ptrdiff_t m_nextPrevOwnerTouchTime = 0xd78;
   constexpr ptrdiff_t m_hPrevOwner = 0xd7c;
   constexpr ptrdiff_t m_nDropTick = 0xd80;
   constexpr ptrdiff_t m_donated = 0xda4;
   constexpr ptrdiff_t m_fLastShotTime = 0xda8;
   constexpr ptrdiff_t m_bWasOwnedByCT = 0xdac;
   constexpr ptrdiff_t m_bWasOwnedByTerrorist = 0xdad;
   constexpr ptrdiff_t m_bFiredOutOfAmmoEvent = 0xdae;
   constexpr ptrdiff_t m_numRemoveUnownedWeaponThink = 0xdb0;
   constexpr ptrdiff_t m_IronSightController = 0xdb8;
   constexpr ptrdiff_t m_iIronSightMode = 0xdd0;
   constexpr ptrdiff_t m_flLastLOSTraceFailureTime = 0xdd4;
   constexpr ptrdiff_t m_iNumEmptyAttacks = 0xdd8;

}

namespace CCSWeaponBaseGun {

   constexpr ptrdiff_t m_zoomLevel = 0xde0;
   constexpr ptrdiff_t m_iBurstShotsRemaining = 0xde4;
   constexpr ptrdiff_t m_silencedModelIndex = 0xdf0;
   constexpr ptrdiff_t m_inPrecache = 0xdf4;
   constexpr ptrdiff_t m_bNeedsBoltAction = 0xdf5;
   constexpr ptrdiff_t m_bSkillReloadAvailable = 0xdf6;
   constexpr ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xdf7;
   constexpr ptrdiff_t m_bSkillBoltInterruptAvailable = 0xdf8;
   constexpr ptrdiff_t m_bSkillBoltLiftedFireKey = 0xdf9;

}

namespace CC4 {

   constexpr ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xde0;
   constexpr ptrdiff_t m_vecLastValidDroppedPosition = 0xdec;
   constexpr ptrdiff_t m_bDoValidDroppedPositionCheck = 0xdf8;
   constexpr ptrdiff_t m_bStartedArming = 0xdf9;
   constexpr ptrdiff_t m_fArmedTime = 0xdfc;
   constexpr ptrdiff_t m_bBombPlacedAnimation = 0xe00;
   constexpr ptrdiff_t m_bIsPlantingViaUse = 0xe01;
   constexpr ptrdiff_t m_entitySpottedState = 0xe08;
   constexpr ptrdiff_t m_nSpotRules = 0xe20;
   constexpr ptrdiff_t m_bPlayedArmingBeeps = 0xe24;
   constexpr ptrdiff_t m_bBombPlanted = 0xe2b;
   constexpr ptrdiff_t m_bDroppedFromDeath = 0xe2c;

}

namespace CWeaponTaser {

   constexpr ptrdiff_t m_fFireTime = 0xe00;

}

namespace CMelee {

   constexpr ptrdiff_t m_flThrowAt = 0xde0;
   constexpr ptrdiff_t m_hThrower = 0xde4;
   constexpr ptrdiff_t m_bDidThrowDamage = 0xde8;

}

namespace CWeaponShield {

   constexpr ptrdiff_t m_flBulletDamageAbsorbed = 0xe00;
   constexpr ptrdiff_t m_flLastBulletHitSoundTime = 0xe04;
   constexpr ptrdiff_t m_flDisplayHealth = 0xe08;

}

namespace CMolotovProjectile {

   constexpr ptrdiff_t m_bIsIncGrenade = 0xa28;
   constexpr ptrdiff_t m_bDetonated = 0xa34;
   constexpr ptrdiff_t m_stillTimer = 0xa38;
   constexpr ptrdiff_t m_bHasBouncedOffPlayer = 0xb18;

}

namespace CDecoyProjectile {

   constexpr ptrdiff_t m_shotsRemaining = 0xa30;
   constexpr ptrdiff_t m_fExpireTime = 0xa34;
   constexpr ptrdiff_t m_decoyWeaponDefIndex = 0xa40;

}

namespace CSmokeGrenadeProjectile {

   constexpr ptrdiff_t m_nSmokeEffectTickBegin = 0xa40;
   constexpr ptrdiff_t m_bDidSmokeEffect = 0xa44;
   constexpr ptrdiff_t m_nRandomSeed = 0xa48;
   constexpr ptrdiff_t m_vSmokeColor = 0xa4c;
   constexpr ptrdiff_t m_vSmokeDetonationPos = 0xa58;
   constexpr ptrdiff_t m_VoxelFrameData = 0xa68;
   constexpr ptrdiff_t m_flLastBounce = 0xa80;
   constexpr ptrdiff_t m_fllastSimulationTime = 0xa84;

}

namespace CBaseCSGrenade {

   constexpr ptrdiff_t m_bRedraw = 0xe00;
   constexpr ptrdiff_t m_bIsHeldByPlayer = 0xe01;
   constexpr ptrdiff_t m_bPinPulled = 0xe02;
   constexpr ptrdiff_t m_bJumpThrow = 0xe03;
   constexpr ptrdiff_t m_eThrowStatus = 0xe04;
   constexpr ptrdiff_t m_fThrowTime = 0xe08;
   constexpr ptrdiff_t m_flThrowStrength = 0xe0c;
   constexpr ptrdiff_t m_flThrowStrengthApproach = 0xe10;
   constexpr ptrdiff_t m_fDropTime = 0xe14;

}

namespace CWeaponBaseItem {

   constexpr ptrdiff_t m_SequenceCompleteTimer = 0xde0;
   constexpr ptrdiff_t m_bRedraw = 0xdf8;

}

namespace CFists {

   constexpr ptrdiff_t m_bPlayingUninterruptableAct = 0xde0;
   constexpr ptrdiff_t m_nUninterruptableActivity = 0xde4;
   constexpr ptrdiff_t m_bRestorePrevWep = 0xde8;
   constexpr ptrdiff_t m_hWeaponBeforePrevious = 0xdec;
   constexpr ptrdiff_t m_hWeaponPrevious = 0xdf0;
   constexpr ptrdiff_t m_bDelayedHardPunchIncoming = 0xdf4;
   constexpr ptrdiff_t m_bDestroyAfterTaunt = 0xdf5;

}

namespace CCSPlayerPawnBase {

   constexpr ptrdiff_t m_CTouchExpansionComponent = 0xb60;
   constexpr ptrdiff_t m_pPingServices = 0xbb0;
   constexpr ptrdiff_t m_pViewModelServices = 0xbb8;
   constexpr ptrdiff_t m_iDisplayHistoryBits = 0xbc0;
   constexpr ptrdiff_t m_flLastAttackedTeammate = 0xbc4;
   constexpr ptrdiff_t m_hOriginalController = 0xbc8;
   constexpr ptrdiff_t m_blindUntilTime = 0xbcc;
   constexpr ptrdiff_t m_blindStartTime = 0xbd0;
   constexpr ptrdiff_t m_allowAutoFollowTime = 0xbd4;
   constexpr ptrdiff_t m_entitySpottedState = 0xbd8;
   constexpr ptrdiff_t m_nSpotRules = 0xbf0;
   constexpr ptrdiff_t m_iPlayerState = 0xbf4;
   constexpr ptrdiff_t m_chickenIdleSoundTimer = 0xc00;
   constexpr ptrdiff_t m_chickenJumpSoundTimer = 0xc18;
   constexpr ptrdiff_t m_vecLastBookmarkedPosition = 0xcd0;
   constexpr ptrdiff_t m_flLastDistanceTraveledNotice = 0xcdc;
   constexpr ptrdiff_t m_flAccumulatedDistanceTraveled = 0xce0;
   constexpr ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0xce4;
   constexpr ptrdiff_t m_bRespawning = 0xce8;
   constexpr ptrdiff_t m_nLastPickupPriority = 0xcec;
   constexpr ptrdiff_t m_flLastPickupPriorityTime = 0xcf0;
   constexpr ptrdiff_t m_bIsScoped = 0xcf4;
   constexpr ptrdiff_t m_bIsWalking = 0xcf5;
   constexpr ptrdiff_t m_bResumeZoom = 0xcf6;
   constexpr ptrdiff_t m_bIsDefusing = 0xcf7;
   constexpr ptrdiff_t m_bIsGrabbingHostage = 0xcf8;
   constexpr ptrdiff_t m_iBlockingUseActionInProgress = 0xcfc;
   constexpr ptrdiff_t m_fImmuneToGunGameDamageTime = 0xd00;
   constexpr ptrdiff_t m_bGunGameImmunity = 0xd04;
   constexpr ptrdiff_t m_fMolotovDamageTime = 0xd08;
   constexpr ptrdiff_t m_bHasMovedSinceSpawn = 0xd0c;
   constexpr ptrdiff_t m_bCanMoveDuringFreezePeriod = 0xd0d;
   constexpr ptrdiff_t m_flGuardianTooFarDistFrac = 0xd10;
   constexpr ptrdiff_t m_flNextGuardianTooFarHurtTime = 0xd14;
   constexpr ptrdiff_t m_flDetectedByEnemySensorTime = 0xd18;
   constexpr ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xd1c;
   constexpr ptrdiff_t m_flLastEquippedHelmetTime = 0xd20;
   constexpr ptrdiff_t m_flLastEquippedArmorTime = 0xd24;
   constexpr ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0xd28;
   constexpr ptrdiff_t m_bResetArmorNextSpawn = 0xd2c;
   constexpr ptrdiff_t m_flLastBumpMineBumpTime = 0xd30;
   constexpr ptrdiff_t m_flEmitSoundTime = 0xd34;
   constexpr ptrdiff_t m_iNumSpawns = 0xd38;
   constexpr ptrdiff_t m_iShouldHaveCash = 0xd3c;
   constexpr ptrdiff_t m_bInvalidSteamLogonDelayed = 0xd40;
   constexpr ptrdiff_t m_flLastAction = 0xd44;
   constexpr ptrdiff_t m_flNameChangeHistory = 0xd48;
   constexpr ptrdiff_t m_fLastGivenDefuserTime = 0xd5c;
   constexpr ptrdiff_t m_fLastGivenBombTime = 0xd60;
   constexpr ptrdiff_t m_bHasNightVision = 0xd64;
   constexpr ptrdiff_t m_bNightVisionOn = 0xd65;
   constexpr ptrdiff_t m_fNextRadarUpdateTime = 0xd68;
   constexpr ptrdiff_t m_flLastMoneyUpdateTime = 0xd6c;
   constexpr ptrdiff_t m_MenuStringBuffer = 0xd70;
   constexpr ptrdiff_t m_fIntroCamTime = 0x1170;
   constexpr ptrdiff_t m_nMyCollisionGroup = 0x1174;
   constexpr ptrdiff_t m_bInNoDefuseArea = 0x1178;
   constexpr ptrdiff_t m_bKilledByTaser = 0x1179;
   constexpr ptrdiff_t m_iMoveState = 0x117c;
   constexpr ptrdiff_t m_grenadeParameterStashTime = 0x1180;
   constexpr ptrdiff_t m_bGrenadeParametersStashed = 0x1184;
   constexpr ptrdiff_t m_angStashedShootAngles = 0x1188;
   constexpr ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1194;
   constexpr ptrdiff_t m_vecStashedVelocity = 0x11a0;
   constexpr ptrdiff_t m_angShootAngleHistory = 0x11ac;
   constexpr ptrdiff_t m_vecThrowPositionHistory = 0x11c4;
   constexpr ptrdiff_t m_vecVelocityHistory = 0x11dc;
   constexpr ptrdiff_t m_bDiedAirborne = 0x11f4;
   constexpr ptrdiff_t m_iBombSiteIndex = 0x11f8;
   constexpr ptrdiff_t m_nWhichBombZone = 0x11fc;
   constexpr ptrdiff_t m_bInBombZoneTrigger = 0x1200;
   constexpr ptrdiff_t m_bWasInBombZoneTrigger = 0x1201;
   constexpr ptrdiff_t m_iDirection = 0x1204;
   constexpr ptrdiff_t m_iShotsFired = 0x1208;
   constexpr ptrdiff_t m_ArmorValue = 0x120c;
   constexpr ptrdiff_t m_flFlinchStack = 0x1210;
   constexpr ptrdiff_t m_flVelocityModifier = 0x1214;
   constexpr ptrdiff_t m_flHitHeading = 0x1218;
   constexpr ptrdiff_t m_nHitBodyPart = 0x121c;
   constexpr ptrdiff_t m_iHostagesKilled = 0x1220;
   constexpr ptrdiff_t m_vecTotalBulletForce = 0x1224;
   constexpr ptrdiff_t m_flFlashDuration = 0x1230;
   constexpr ptrdiff_t m_flFlashMaxAlpha = 0x1234;
   constexpr ptrdiff_t m_flProgressBarStartTime = 0x1238;
   constexpr ptrdiff_t m_iProgressBarDuration = 0x123c;
   constexpr ptrdiff_t m_bWaitForNoAttack = 0x1240;
   constexpr ptrdiff_t m_flLowerBodyYawTarget = 0x1244;
   constexpr ptrdiff_t m_bStrafing = 0x1248;
   constexpr ptrdiff_t m_lastStandingPos = 0x124c;
   constexpr ptrdiff_t m_ignoreLadderJumpTime = 0x1258;
   constexpr ptrdiff_t m_ladderSurpressionTimer = 0x1260;
   constexpr ptrdiff_t m_lastLadderNormal = 0x1278;
   constexpr ptrdiff_t m_lastLadderPos = 0x1284;
   constexpr ptrdiff_t m_thirdPersonHeading = 0x1290;
   constexpr ptrdiff_t m_flSlopeDropOffset = 0x129c;
   constexpr ptrdiff_t m_flSlopeDropHeight = 0x12a0;
   constexpr ptrdiff_t m_vHeadConstraintOffset = 0x12a4;
   constexpr ptrdiff_t m_iLastWeaponFireUsercmd = 0x12b8;
   constexpr ptrdiff_t m_angEyeAngles = 0x12bc;
   constexpr ptrdiff_t m_bVCollisionInitted = 0x12c8;
   constexpr ptrdiff_t m_storedSpawnPosition = 0x12cc;
   constexpr ptrdiff_t m_storedSpawnAngle = 0x12d8;
   constexpr ptrdiff_t m_bIsSpawning = 0x12e4;
   constexpr ptrdiff_t m_bHideTargetID = 0x12e5;
   constexpr ptrdiff_t m_nNumDangerZoneDamageHits = 0x12e8;
   constexpr ptrdiff_t m_bHud_MiniScoreHidden = 0x12ec;
   constexpr ptrdiff_t m_bHud_RadarHidden = 0x12ed;
   constexpr ptrdiff_t m_nLastKillerIndex = 0x12f0;
   constexpr ptrdiff_t m_nLastConcurrentKilled = 0x12f4;
   constexpr ptrdiff_t m_nDeathCamMusic = 0x12f8;
   constexpr ptrdiff_t m_iAddonBits = 0x12fc;
   constexpr ptrdiff_t m_iPrimaryAddon = 0x1300;
   constexpr ptrdiff_t m_iSecondaryAddon = 0x1304;
   constexpr ptrdiff_t m_currentDeafnessFilter = 0x1308;
   constexpr ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x130c;
   constexpr ptrdiff_t m_NumEnemiesKilledThisRound = 0x1310;
   constexpr ptrdiff_t m_NumEnemiesAtRoundStart = 0x1314;
   constexpr ptrdiff_t m_wasNotKilledNaturally = 0x1318;
   constexpr ptrdiff_t m_vecPlayerPatchEconIndices = 0x131c;
   constexpr ptrdiff_t m_iDeathFlags = 0x1330;
   constexpr ptrdiff_t m_hPet = 0x1334;
   constexpr ptrdiff_t m_unCurrentEquipmentValue = 0x1500;
   constexpr ptrdiff_t m_unRoundStartEquipmentValue = 0x1502;
   constexpr ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1504;
   constexpr ptrdiff_t m_nSurvivalTeamNumber = 0x1508;
   constexpr ptrdiff_t m_bHasDeathInfo = 0x150c;
   constexpr ptrdiff_t m_flDeathInfoTime = 0x1510;
   constexpr ptrdiff_t m_vecDeathInfoOrigin = 0x1514;
   constexpr ptrdiff_t m_bKilledByHeadshot = 0x1520;
   constexpr ptrdiff_t m_LastHitBox = 0x1524;
   constexpr ptrdiff_t m_LastHealth = 0x1528;
   constexpr ptrdiff_t m_flLastCollisionCeiling = 0x152c;
   constexpr ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1530;
   constexpr ptrdiff_t m_pBot = 0x1538;
   constexpr ptrdiff_t m_bBotAllowActive = 0x1540;
   constexpr ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1541;

}

namespace CCSPlayerPawn {

   constexpr ptrdiff_t m_pBulletServices = 0x1548;
   constexpr ptrdiff_t m_pHostageServices = 0x1550;
   constexpr ptrdiff_t m_pBuyServices = 0x1558;
   constexpr ptrdiff_t m_pActionTrackingServices = 0x1560;
   constexpr ptrdiff_t m_pRadioServices = 0x1568;
   constexpr ptrdiff_t m_pDamageReactServices = 0x1570;
   constexpr ptrdiff_t m_nCharacterDefIndex = 0x1578;
   constexpr ptrdiff_t m_hPreviousModel = 0x1580;
   constexpr ptrdiff_t m_bHasFemaleVoice = 0x1588;
   constexpr ptrdiff_t m_strVOPrefix = 0x1590;
   constexpr ptrdiff_t m_szLastPlaceName = 0x1598;
   constexpr ptrdiff_t m_bInBuyZone = 0x1658;
   constexpr ptrdiff_t m_bWasInBuyZone = 0x1659;
   constexpr ptrdiff_t m_bInHostageRescueZone = 0x165a;
   constexpr ptrdiff_t m_bInBombZone = 0x165b;
   constexpr ptrdiff_t m_bWasInHostageRescueZone = 0x165c;
   constexpr ptrdiff_t m_iRetakesOffering = 0x1660;
   constexpr ptrdiff_t m_iRetakesOfferingCard = 0x1664;
   constexpr ptrdiff_t m_bRetakesHasDefuseKit = 0x1668;
   constexpr ptrdiff_t m_bRetakesMVPLastRound = 0x1669;
   constexpr ptrdiff_t m_iRetakesMVPBoostItem = 0x166c;
   constexpr ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1670;
   constexpr ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1674;
   constexpr ptrdiff_t m_flLandseconds = 0x1678;
   constexpr ptrdiff_t m_aimPunchAngle = 0x167c;
   constexpr ptrdiff_t m_aimPunchAngleVel = 0x1688;
   constexpr ptrdiff_t m_aimPunchTickBase = 0x1694;
   constexpr ptrdiff_t m_aimPunchTickFraction = 0x1698;
   constexpr ptrdiff_t m_aimPunchCache = 0x16a0;
   constexpr ptrdiff_t m_bIsBuyMenuOpen = 0x16b8;
   constexpr ptrdiff_t m_xLastHeadBoneTransform = 0x1c30;
   constexpr ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x1c50;
   constexpr ptrdiff_t m_lastLandTime = 0x1c54;
   constexpr ptrdiff_t m_bOnGroundLastTick = 0x1c58;
   constexpr ptrdiff_t m_iPlayerLocked = 0x1c5c;
   constexpr ptrdiff_t m_flTimeOfLastInjury = 0x1c64;
   constexpr ptrdiff_t m_flNextSprayDecalTime = 0x1c68;
   constexpr ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x1c6c;
   constexpr ptrdiff_t m_nRagdollDamageBone = 0x1c70;
   constexpr ptrdiff_t m_vRagdollDamageForce = 0x1c74;
   constexpr ptrdiff_t m_vRagdollDamagePosition = 0x1c80;
   constexpr ptrdiff_t m_szRagdollDamageWeaponName = 0x1c8c;
   constexpr ptrdiff_t m_bRagdollDamageHeadshot = 0x1ccc;
   constexpr ptrdiff_t m_EconGloves = 0x1cd0;
   constexpr ptrdiff_t m_qDeathEyeAngles = 0x1f48;
   constexpr ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1f54;

}

namespace CHostageExpresserShim {

   constexpr ptrdiff_t m_pExpresser = 0x9d0;

}

namespace CHostage {

   constexpr ptrdiff_t m_OnHostageBeginGrab = 0x9e8;
   constexpr ptrdiff_t m_OnFirstPickedUp = 0xa10;
   constexpr ptrdiff_t m_OnDroppedNotRescued = 0xa38;
   constexpr ptrdiff_t m_OnRescued = 0xa60;
   constexpr ptrdiff_t m_entitySpottedState = 0xa88;
   constexpr ptrdiff_t m_nSpotRules = 0xaa0;
   constexpr ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xaa4;
   constexpr ptrdiff_t m_nHostageSpawnRandomFactor = 0xaa8;
   constexpr ptrdiff_t m_bRemove = 0xaac;
   constexpr ptrdiff_t m_vel = 0xab0;
   constexpr ptrdiff_t m_isRescued = 0xabc;
   constexpr ptrdiff_t m_jumpedThisFrame = 0xabd;
   constexpr ptrdiff_t m_nHostageState = 0xac0;
   constexpr ptrdiff_t m_leader = 0xac4;
   constexpr ptrdiff_t m_lastLeader = 0xac8;
   constexpr ptrdiff_t m_reuseTimer = 0xad0;
   constexpr ptrdiff_t m_hasBeenUsed = 0xae8;
   constexpr ptrdiff_t m_accel = 0xaec;
   constexpr ptrdiff_t m_isRunning = 0xaf8;
   constexpr ptrdiff_t m_isCrouching = 0xaf9;
   constexpr ptrdiff_t m_jumpTimer = 0xb00;
   constexpr ptrdiff_t m_isWaitingForLeader = 0xb18;
   constexpr ptrdiff_t m_repathTimer = 0x2b28;
   constexpr ptrdiff_t m_inhibitDoorTimer = 0x2b40;
   constexpr ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2bd0;
   constexpr ptrdiff_t m_wiggleTimer = 0x2bf0;
   constexpr ptrdiff_t m_isAdjusted = 0x2c0c;
   constexpr ptrdiff_t m_bHandsHaveBeenCut = 0x2c0d;
   constexpr ptrdiff_t m_hHostageGrabber = 0x2c10;
   constexpr ptrdiff_t m_fLastGrabTime = 0x2c14;
   constexpr ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2c18;
   constexpr ptrdiff_t m_vecGrabbedPos = 0x2c24;
   constexpr ptrdiff_t m_flRescueStartTime = 0x2c30;
   constexpr ptrdiff_t m_flGrabSuccessTime = 0x2c34;
   constexpr ptrdiff_t m_flDropStartTime = 0x2c38;
   constexpr ptrdiff_t m_nApproachRewardPayouts = 0x2c3c;
   constexpr ptrdiff_t m_nPickupEventCount = 0x2c40;
   constexpr ptrdiff_t m_vecSpawnGroundPos = 0x2c44;

}

namespace CRangeFloat {

   constexpr ptrdiff_t m_pValue = 0x0;

}

namespace CRangeInt {

   constexpr ptrdiff_t m_pValue = 0x0;

}

namespace Extent {

   constexpr ptrdiff_t lo = 0x0;
   constexpr ptrdiff_t hi = 0xc;

}

namespace CNavVolumeVector {

   constexpr ptrdiff_t m_bHasBeenPreFiltered = 0x78;

}

namespace CNavVolumeSphere {

   constexpr ptrdiff_t m_vCenter = 0x70;
   constexpr ptrdiff_t m_flRadius = 0x7c;

}

namespace CNavVolumeSphericalShell {

   constexpr ptrdiff_t m_flRadiusInner = 0x80;

}

namespace CNavHullVData {

   constexpr ptrdiff_t m_bAgentEnabled = 0x0;
   constexpr ptrdiff_t m_agentRadius = 0x4;
   constexpr ptrdiff_t m_agentHeight = 0x8;
   constexpr ptrdiff_t m_agentShortHeightEnabled = 0xc;
   constexpr ptrdiff_t m_agentShortHeight = 0x10;
   constexpr ptrdiff_t m_agentMaxClimb = 0x14;
   constexpr ptrdiff_t m_agentMaxSlope = 0x18;
   constexpr ptrdiff_t m_agentMaxJumpDownDist = 0x1c;
   constexpr ptrdiff_t m_agentMaxJumpHorizDistBase = 0x20;
   constexpr ptrdiff_t m_agentMaxJumpUpDist = 0x24;
   constexpr ptrdiff_t m_agentBorderErosion = 0x28;

}

namespace CNavHullPresetVData {

   constexpr ptrdiff_t m_vecNavHulls = 0x0;

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
   constexpr ptrdiff_t m_bPvsModifyEntity = 0x1c8;

}

namespace CNetworkTransmitComponent {

   constexpr ptrdiff_t m_nTransmitStateOwnedCounter = 0x16c;

}

namespace CRenderComponent {

   constexpr ptrdiff_t __m_pChainEntity = 0x10;
   constexpr ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
   constexpr ptrdiff_t m_nSplitscreenFlags = 0x54;
   constexpr ptrdiff_t m_bEnableRendering = 0x60;
   constexpr ptrdiff_t m_bInterpolationReadyToDraw = 0xb0;

}

namespace AnimationUpdateListHandle_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace CAnimGraphTagRef {

   constexpr ptrdiff_t m_nTagIndex = 0x0;
   constexpr ptrdiff_t m_tagName = 0x10;

}

namespace CBuoyancyHelper {

   constexpr ptrdiff_t m_flFluidDensity = 0x18;

}

namespace CSkillFloat {

   constexpr ptrdiff_t m_pValue = 0x0;

}

namespace CSkillInt {

   constexpr ptrdiff_t m_pValue = 0x0;

}

namespace CSkillDamage {

   constexpr ptrdiff_t m_flDamage = 0x0;
   constexpr ptrdiff_t m_flPhysicsForceDamage = 0x10;

}

namespace CRemapFloat {

   constexpr ptrdiff_t m_pValue = 0x0;

}

namespace CScriptUniformRandomStream {

   constexpr ptrdiff_t m_hScriptScope = 0x8;
   constexpr ptrdiff_t m_nInitialSeed = 0x9c;

}

namespace ViewAngleServerChange_t {

   constexpr ptrdiff_t nType = 0x30;
   constexpr ptrdiff_t qAngle = 0x34;
   constexpr ptrdiff_t nIndex = 0x40;

}

namespace CBreakableStageHelper {

   constexpr ptrdiff_t m_nCurrentStage = 0x8;
   constexpr ptrdiff_t m_nStageCount = 0xc;

}

namespace CommandToolCommand_t {

   constexpr ptrdiff_t m_bEnabled = 0x0;
   constexpr ptrdiff_t m_bOpened = 0x1;
   constexpr ptrdiff_t m_InternalId = 0x4;
   constexpr ptrdiff_t m_ShortName = 0x8;
   constexpr ptrdiff_t m_ExecMode = 0x10;
   constexpr ptrdiff_t m_SpawnGroup = 0x18;
   constexpr ptrdiff_t m_PeriodicExecDelay = 0x20;
   constexpr ptrdiff_t m_SpecType = 0x24;
   constexpr ptrdiff_t m_EntitySpec = 0x28;
   constexpr ptrdiff_t m_Commands = 0x30;
   constexpr ptrdiff_t m_SetDebugBits = 0x38;
   constexpr ptrdiff_t m_ClearDebugBits = 0x40;

}

namespace CPlayerPawnComponent {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;

}

namespace CPlayerControllerComponent {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;

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
   constexpr ptrdiff_t m_hTriggerSoundscapeList = 0x158;

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
   constexpr ptrdiff_t m_iTargetVolume = 0x20c;
   constexpr ptrdiff_t m_vecSmoothedVelocity = 0x210;

}

namespace CPlayer_ObserverServices {

   constexpr ptrdiff_t m_iObserverMode = 0x40;
   constexpr ptrdiff_t m_hObserverTarget = 0x44;
   constexpr ptrdiff_t m_iObserverLastMode = 0x48;
   constexpr ptrdiff_t m_bForcedObserverMode = 0x4c;

}

namespace CPlayer_WeaponServices {

   constexpr ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40;
   constexpr ptrdiff_t m_hMyWeapons = 0x48;
   constexpr ptrdiff_t m_hActiveWeapon = 0x60;
   constexpr ptrdiff_t m_hLastWeapon = 0x64;
   constexpr ptrdiff_t m_iAmmo = 0x68;
   constexpr ptrdiff_t m_bPreventWeaponPickup = 0xa8;

}

namespace AmmoTypeInfo_t {

   constexpr ptrdiff_t m_nMaxCarry = 0x10;
   constexpr ptrdiff_t m_nSplashSize = 0x1c;
   constexpr ptrdiff_t m_nFlags = 0x24;
   constexpr ptrdiff_t m_flMass = 0x28;
   constexpr ptrdiff_t m_flSpeed = 0x2c;

}

namespace CBodyComponentBaseAnimGraph {

   constexpr ptrdiff_t m_animationController = 0x470;
   constexpr ptrdiff_t __m_pChainEntity = 0x750;

}

namespace EntityRenderAttribute_t {

   constexpr ptrdiff_t m_ID = 0x30;
   constexpr ptrdiff_t m_Values = 0x34;

}

namespace ModelConfigHandle_t {

   constexpr ptrdiff_t m_Value = 0x0;

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

namespace CNetworkOriginCellCoordQuantizedVector {

   constexpr ptrdiff_t m_cellX = 0x10;
   constexpr ptrdiff_t m_cellY = 0x12;
   constexpr ptrdiff_t m_cellZ = 0x14;
   constexpr ptrdiff_t m_nOutsideWorld = 0x16;
   constexpr ptrdiff_t m_vecX = 0x18;
   constexpr ptrdiff_t m_vecY = 0x20;
   constexpr ptrdiff_t m_vecZ = 0x28;

}

namespace CNetworkOriginQuantizedVector {

   constexpr ptrdiff_t m_vecX = 0x10;
   constexpr ptrdiff_t m_vecY = 0x18;
   constexpr ptrdiff_t m_vecZ = 0x20;

}

namespace CNetworkVelocityVector {

   constexpr ptrdiff_t m_vecX = 0x10;
   constexpr ptrdiff_t m_vecY = 0x18;
   constexpr ptrdiff_t m_vecZ = 0x20;

}

namespace CNetworkViewOffsetVector {

   constexpr ptrdiff_t m_vecX = 0x10;
   constexpr ptrdiff_t m_vecY = 0x18;
   constexpr ptrdiff_t m_vecZ = 0x20;

}

namespace GameTime_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace GameTick_t {

   constexpr ptrdiff_t m_Value = 0x0;

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

namespace CInButtonState {

   constexpr ptrdiff_t m_pButtonStates = 0x8;

}

namespace CSkeletonAnimationController {

   constexpr ptrdiff_t m_pSkeletonInstance = 0x8;

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

namespace ResponseFollowup {

   constexpr ptrdiff_t followup_concept = 0x0;
   constexpr ptrdiff_t followup_contexts = 0x8;
   constexpr ptrdiff_t followup_delay = 0x10;
   constexpr ptrdiff_t followup_target = 0x14;
   constexpr ptrdiff_t followup_entityiotarget = 0x1c;
   constexpr ptrdiff_t followup_entityioinput = 0x24;
   constexpr ptrdiff_t followup_entityiodelay = 0x2c;
   constexpr ptrdiff_t bFired = 0x30;

}

namespace ResponseParams {

   constexpr ptrdiff_t odds = 0x10;
   constexpr ptrdiff_t flags = 0x12;
   constexpr ptrdiff_t m_pFollowup = 0x18;

}

namespace CResponseCriteriaSet {

   constexpr ptrdiff_t m_nNumPrefixedContexts = 0x28;
   constexpr ptrdiff_t m_bOverrideOnAppend = 0x2c;

}

namespace CRR_Response {

   constexpr ptrdiff_t m_Type = 0x0;
   constexpr ptrdiff_t m_szResponseName = 0x1;
   constexpr ptrdiff_t m_szMatchingRule = 0xc1;
   constexpr ptrdiff_t m_Params = 0x148;
   constexpr ptrdiff_t m_fMatchScore = 0x168;
   constexpr ptrdiff_t m_szSpeakerContext = 0x170;
   constexpr ptrdiff_t m_szWorldContext = 0x178;
   constexpr ptrdiff_t m_Followup = 0x180;
   constexpr ptrdiff_t m_pchCriteriaNames = 0x1b8;
   constexpr ptrdiff_t m_pchCriteriaValues = 0x1d0;

}

namespace ConceptHistory_t {

   constexpr ptrdiff_t timeSpoken = 0x0;
   constexpr ptrdiff_t m_response = 0x8;

}

namespace CAI_Expresser {

   constexpr ptrdiff_t m_flStopTalkTime = 0x38;
   constexpr ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x3c;
   constexpr ptrdiff_t m_flBlockedTalkTime = 0x40;
   constexpr ptrdiff_t m_voicePitch = 0x44;
   constexpr ptrdiff_t m_flLastTimeAcceptedSpeak = 0x48;
   constexpr ptrdiff_t m_bAllowSpeakingInterrupts = 0x4c;
   constexpr ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x4d;
   constexpr ptrdiff_t m_nLastSpokenPriority = 0x50;
   constexpr ptrdiff_t m_pOuter = 0x58;

}

namespace CResponseQueue {

   constexpr ptrdiff_t m_ExpresserTargets = 0x50;

}

namespace CResponseQueue::CDeferredResponse {

   constexpr ptrdiff_t m_contexts = 0x10;
   constexpr ptrdiff_t m_fDispatchTime = 0x40;
   constexpr ptrdiff_t m_hIssuer = 0x44;
   constexpr ptrdiff_t m_response = 0x50;
   constexpr ptrdiff_t m_bResponseValid = 0x238;

}

namespace CAI_ExpresserWithFollowup {

   constexpr ptrdiff_t m_pPostponedFollowup = 0x60;

}

namespace CMultiplayer_Expresser {

   constexpr ptrdiff_t m_bAllowMultipleScenes = 0x70;

}

namespace CCommentarySystem {

   constexpr ptrdiff_t m_bCommentaryConvarsChanging = 0x11;
   constexpr ptrdiff_t m_bCommentaryEnabledMidGame = 0x12;
   constexpr ptrdiff_t m_flNextTeleportTime = 0x14;
   constexpr ptrdiff_t m_iTeleportStage = 0x18;
   constexpr ptrdiff_t m_bCheatState = 0x1c;
   constexpr ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1d;
   constexpr ptrdiff_t m_hCurrentNode = 0x38;
   constexpr ptrdiff_t m_hActiveCommentaryNode = 0x3c;
   constexpr ptrdiff_t m_hLastCommentaryNode = 0x40;
   constexpr ptrdiff_t m_vecNodes = 0x48;

}

namespace CPhysicsShake {

   constexpr ptrdiff_t m_force = 0x8;

}

namespace CGameScriptedMoveData {

   constexpr ptrdiff_t m_vDest = 0x0;
   constexpr ptrdiff_t m_vSrc = 0xc;
   constexpr ptrdiff_t m_angSrc = 0x18;
   constexpr ptrdiff_t m_angDst = 0x24;
   constexpr ptrdiff_t m_angCurrent = 0x30;
   constexpr ptrdiff_t m_flAngRate = 0x3c;
   constexpr ptrdiff_t m_flDuration = 0x40;
   constexpr ptrdiff_t m_flStartTime = 0x44;
   constexpr ptrdiff_t m_nPrevMoveType = 0x48;
   constexpr ptrdiff_t m_bActive = 0x49;
   constexpr ptrdiff_t m_bTeleportOnEnd = 0x4a;
   constexpr ptrdiff_t m_bEndOnDestinationReached = 0x4b;
   constexpr ptrdiff_t m_bIgnoreRotation = 0x4c;
   constexpr ptrdiff_t m_nType = 0x50;
   constexpr ptrdiff_t m_bSuccess = 0x54;
   constexpr ptrdiff_t m_nForcedCrouchState = 0x58;
   constexpr ptrdiff_t m_bIgnoreCollisions = 0x5c;

}

namespace CGameChoreoServices {

   constexpr ptrdiff_t m_hOwner = 0x8;
   constexpr ptrdiff_t m_hScriptedSequence = 0xc;
   constexpr ptrdiff_t m_scriptState = 0x10;
   constexpr ptrdiff_t m_choreoState = 0x14;
   constexpr ptrdiff_t m_flTimeStartedState = 0x18;

}

namespace HullFlags_t {

   constexpr ptrdiff_t m_bHull_Human = 0x0;
   constexpr ptrdiff_t m_bHull_SmallCentered = 0x1;
   constexpr ptrdiff_t m_bHull_WideHuman = 0x2;
   constexpr ptrdiff_t m_bHull_Tiny = 0x3;
   constexpr ptrdiff_t m_bHull_Medium = 0x4;
   constexpr ptrdiff_t m_bHull_TinyCentered = 0x5;
   constexpr ptrdiff_t m_bHull_Large = 0x6;
   constexpr ptrdiff_t m_bHull_LargeCentered = 0x7;
   constexpr ptrdiff_t m_bHull_MediumTall = 0x8;
   constexpr ptrdiff_t m_bHull_Small = 0x9;

}

namespace CConstantForceController {

   constexpr ptrdiff_t m_linear = 0xc;
   constexpr ptrdiff_t m_angular = 0x18;
   constexpr ptrdiff_t m_linearSave = 0x24;
   constexpr ptrdiff_t m_angularSave = 0x30;

}

namespace CMotorController {

   constexpr ptrdiff_t m_speed = 0x8;
   constexpr ptrdiff_t m_maxTorque = 0xc;
   constexpr ptrdiff_t m_axis = 0x10;
   constexpr ptrdiff_t m_inertiaFactor = 0x1c;

}

namespace CSoundEnvelope {

   constexpr ptrdiff_t m_current = 0x0;
   constexpr ptrdiff_t m_target = 0x4;
   constexpr ptrdiff_t m_rate = 0x8;
   constexpr ptrdiff_t m_forceupdate = 0xc;

}

namespace CCopyRecipientFilter {

   constexpr ptrdiff_t m_Flags = 0x8;
   constexpr ptrdiff_t m_Recipients = 0x10;

}

namespace CSoundPatch {

   constexpr ptrdiff_t m_pitch = 0x8;
   constexpr ptrdiff_t m_volume = 0x18;
   constexpr ptrdiff_t m_shutdownTime = 0x30;
   constexpr ptrdiff_t m_flLastTime = 0x34;
   constexpr ptrdiff_t m_iszSoundScriptName = 0x38;
   constexpr ptrdiff_t m_hEnt = 0x40;
   constexpr ptrdiff_t m_soundEntityIndex = 0x44;
   constexpr ptrdiff_t m_soundOrigin = 0x48;
   constexpr ptrdiff_t m_isPlaying = 0x54;
   constexpr ptrdiff_t m_Filter = 0x58;
   constexpr ptrdiff_t m_flCloseCaptionDuration = 0x80;
   constexpr ptrdiff_t m_bUpdatedSoundOrigin = 0x84;
   constexpr ptrdiff_t m_iszClassName = 0x88;

}

namespace CPulseCell_Value_FindEntByName {

   constexpr ptrdiff_t m_EntityType = 0x48;

}

namespace CPulseCell_Step_SetAnimGraphParam {

   constexpr ptrdiff_t m_ParamName = 0x48;

}

namespace CPulseCell_Step_EntFire {

   constexpr ptrdiff_t m_Input = 0x48;

}

namespace CPulseCell_Outflow_PlayVCD {

   constexpr ptrdiff_t m_vcdFilename = 0x48;
   constexpr ptrdiff_t m_OnFinished = 0x50;
   constexpr ptrdiff_t m_Triggers = 0x60;

}

namespace CPulseCell_Inflow_GameEvent {

   constexpr ptrdiff_t m_EventName = 0x70;

}

namespace CPulseCell_SoundEventStart {

   constexpr ptrdiff_t m_Type = 0x48;

}

namespace dynpitchvol_base_t {

   constexpr ptrdiff_t preset = 0x0;
   constexpr ptrdiff_t pitchrun = 0x4;
   constexpr ptrdiff_t pitchstart = 0x8;
   constexpr ptrdiff_t spinup = 0xc;
   constexpr ptrdiff_t spindown = 0x10;
   constexpr ptrdiff_t volrun = 0x14;
   constexpr ptrdiff_t volstart = 0x18;
   constexpr ptrdiff_t fadein = 0x1c;
   constexpr ptrdiff_t fadeout = 0x20;
   constexpr ptrdiff_t lfotype = 0x24;
   constexpr ptrdiff_t lforate = 0x28;
   constexpr ptrdiff_t lfomodpitch = 0x2c;
   constexpr ptrdiff_t lfomodvol = 0x30;
   constexpr ptrdiff_t cspinup = 0x34;
   constexpr ptrdiff_t cspincount = 0x38;
   constexpr ptrdiff_t pitch = 0x3c;
   constexpr ptrdiff_t spinupsav = 0x40;
   constexpr ptrdiff_t spindownsav = 0x44;
   constexpr ptrdiff_t pitchfrac = 0x48;
   constexpr ptrdiff_t vol = 0x4c;
   constexpr ptrdiff_t fadeinsav = 0x50;
   constexpr ptrdiff_t fadeoutsav = 0x54;
   constexpr ptrdiff_t volfrac = 0x58;
   constexpr ptrdiff_t lfofrac = 0x5c;
   constexpr ptrdiff_t lfomult = 0x60;

}

namespace ResponseContext_t {

   constexpr ptrdiff_t m_iszName = 0x0;
   constexpr ptrdiff_t m_iszValue = 0x8;
   constexpr ptrdiff_t m_fExpirationTime = 0x10;

}

namespace Relationship_t {

   constexpr ptrdiff_t disposition = 0x0;
   constexpr ptrdiff_t priority = 0x4;

}

namespace CBaseEntity {

   constexpr ptrdiff_t m_CBodyComponent = 0x30;
   constexpr ptrdiff_t m_NetworkTransmitComponent = 0x38;
   constexpr ptrdiff_t m_aThinkFunctions = 0x228;
   constexpr ptrdiff_t m_iCurrentThinkContext = 0x240;
   constexpr ptrdiff_t m_nLastThinkTick = 0x244;
   constexpr ptrdiff_t m_isSteadyState = 0x250;
   constexpr ptrdiff_t m_lastNetworkChange = 0x258;
   constexpr ptrdiff_t m_ResponseContexts = 0x268;
   constexpr ptrdiff_t m_iszResponseContext = 0x280;
   constexpr ptrdiff_t m_iHealth = 0x2a8;
   constexpr ptrdiff_t m_iMaxHealth = 0x2ac;
   constexpr ptrdiff_t m_lifeState = 0x2b0;
   constexpr ptrdiff_t m_flDamageAccumulator = 0x2b4;
   constexpr ptrdiff_t m_bTakesDamage = 0x2b8;
   constexpr ptrdiff_t m_nTakeDamageFlags = 0x2bc;
   constexpr ptrdiff_t m_MoveCollide = 0x2c1;
   constexpr ptrdiff_t m_MoveType = 0x2c2;
   constexpr ptrdiff_t m_nWaterTouch = 0x2c3;
   constexpr ptrdiff_t m_nSlimeTouch = 0x2c4;
   constexpr ptrdiff_t m_bRestoreInHierarchy = 0x2c5;
   constexpr ptrdiff_t m_target = 0x2c8;
   constexpr ptrdiff_t m_flMoveDoneTime = 0x2d0;
   constexpr ptrdiff_t m_hDamageFilter = 0x2d4;
   constexpr ptrdiff_t m_iszDamageFilterName = 0x2d8;
   constexpr ptrdiff_t m_nSubclassID = 0x2e0;
   constexpr ptrdiff_t m_flAnimTime = 0x2f0;
   constexpr ptrdiff_t m_flSimulationTime = 0x2f4;
   constexpr ptrdiff_t m_flCreateTime = 0x2f8;
   constexpr ptrdiff_t m_bClientSideRagdoll = 0x2fc;
   constexpr ptrdiff_t m_ubInterpolationFrame = 0x2fd;
   constexpr ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x300;
   constexpr ptrdiff_t m_iTeamNum = 0x30c;
   constexpr ptrdiff_t m_iGlobalname = 0x310;
   constexpr ptrdiff_t m_iSentToClients = 0x318;
   constexpr ptrdiff_t m_flSpeed = 0x31c;
   constexpr ptrdiff_t m_sUniqueHammerID = 0x320;
   constexpr ptrdiff_t m_spawnflags = 0x328;
   constexpr ptrdiff_t m_nNextThinkTick = 0x32c;
   constexpr ptrdiff_t m_nSimulationTick = 0x330;
   constexpr ptrdiff_t m_OnKilled = 0x338;
   constexpr ptrdiff_t m_fFlags = 0x360;
   constexpr ptrdiff_t m_vecAbsVelocity = 0x364;
   constexpr ptrdiff_t m_vecVelocity = 0x370;
   constexpr ptrdiff_t m_vecBaseVelocity = 0x3a0;
   constexpr ptrdiff_t m_nPushEnumCount = 0x3ac;
   constexpr ptrdiff_t m_pCollision = 0x3b0;
   constexpr ptrdiff_t m_hEffectEntity = 0x3b8;
   constexpr ptrdiff_t m_hOwnerEntity = 0x3bc;
   constexpr ptrdiff_t m_fEffects = 0x3c0;
   constexpr ptrdiff_t m_hGroundEntity = 0x3c4;
   constexpr ptrdiff_t m_flFriction = 0x3c8;
   constexpr ptrdiff_t m_flElasticity = 0x3cc;
   constexpr ptrdiff_t m_flGravityScale = 0x3d0;
   constexpr ptrdiff_t m_flTimeScale = 0x3d4;
   constexpr ptrdiff_t m_flWaterLevel = 0x3d8;
   constexpr ptrdiff_t m_bSimulatedEveryTick = 0x3dc;
   constexpr ptrdiff_t m_bAnimatedEveryTick = 0x3dd;
   constexpr ptrdiff_t m_bDisableLowViolence = 0x3de;
   constexpr ptrdiff_t m_nWaterType = 0x3df;
   constexpr ptrdiff_t m_iEFlags = 0x3e0;
   constexpr ptrdiff_t m_OnUser1 = 0x3e8;
   constexpr ptrdiff_t m_OnUser2 = 0x410;
   constexpr ptrdiff_t m_OnUser3 = 0x438;
   constexpr ptrdiff_t m_OnUser4 = 0x460;
   constexpr ptrdiff_t m_iInitialTeamNum = 0x488;
   constexpr ptrdiff_t m_flNavIgnoreUntilTime = 0x48c;
   constexpr ptrdiff_t m_vecAngVelocity = 0x490;
   constexpr ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x49c;
   constexpr ptrdiff_t m_bLagCompensate = 0x49d;
   constexpr ptrdiff_t m_flOverriddenFriction = 0x4a0;
   constexpr ptrdiff_t m_pBlocker = 0x4a4;
   constexpr ptrdiff_t m_flLocalTime = 0x4a8;
   constexpr ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4ac;

}

namespace CColorCorrection {

   constexpr ptrdiff_t m_flFadeInDuration = 0x4b0;
   constexpr ptrdiff_t m_flFadeOutDuration = 0x4b4;
   constexpr ptrdiff_t m_flStartFadeInWeight = 0x4b8;
   constexpr ptrdiff_t m_flStartFadeOutWeight = 0x4bc;
   constexpr ptrdiff_t m_flTimeStartFadeIn = 0x4c0;
   constexpr ptrdiff_t m_flTimeStartFadeOut = 0x4c4;
   constexpr ptrdiff_t m_flMaxWeight = 0x4c8;
   constexpr ptrdiff_t m_bStartDisabled = 0x4cc;
   constexpr ptrdiff_t m_bEnabled = 0x4cd;
   constexpr ptrdiff_t m_bMaster = 0x4ce;
   constexpr ptrdiff_t m_bClientSide = 0x4cf;
   constexpr ptrdiff_t m_bExclusive = 0x4d0;
   constexpr ptrdiff_t m_MinFalloff = 0x4d4;
   constexpr ptrdiff_t m_MaxFalloff = 0x4d8;
   constexpr ptrdiff_t m_flCurWeight = 0x4dc;
   constexpr ptrdiff_t m_netlookupFilename = 0x4e0;
   constexpr ptrdiff_t m_lookupFilename = 0x6e0;

}

namespace CEntityFlame {

   constexpr ptrdiff_t m_hEntAttached = 0x4b0;
   constexpr ptrdiff_t m_bCheapEffect = 0x4b4;
   constexpr ptrdiff_t m_flSize = 0x4b8;
   constexpr ptrdiff_t m_bUseHitboxes = 0x4bc;
   constexpr ptrdiff_t m_iNumHitboxFires = 0x4c0;
   constexpr ptrdiff_t m_flHitboxFireScale = 0x4c4;
   constexpr ptrdiff_t m_flLifetime = 0x4c8;
   constexpr ptrdiff_t m_hAttacker = 0x4cc;
   constexpr ptrdiff_t m_iDangerSound = 0x4d0;
   constexpr ptrdiff_t m_flDirectDamagePerSecond = 0x4d4;
   constexpr ptrdiff_t m_iCustomDamageType = 0x4d8;

}

namespace CBaseFilter {

   constexpr ptrdiff_t m_bNegated = 0x4b0;
   constexpr ptrdiff_t m_OnPass = 0x4b8;
   constexpr ptrdiff_t m_OnFail = 0x4e0;

}

namespace CFilterMultiple {

   constexpr ptrdiff_t m_nFilterType = 0x508;
   constexpr ptrdiff_t m_iFilterName = 0x510;
   constexpr ptrdiff_t m_hFilter = 0x560;
   constexpr ptrdiff_t m_nFilterCount = 0x588;

}

namespace CFilterProximity {

   constexpr ptrdiff_t m_flRadius = 0x508;

}

namespace CFilterClass {

   constexpr ptrdiff_t m_iFilterClass = 0x508;

}

namespace CBaseFire {

   constexpr ptrdiff_t m_flScale = 0x4b0;
   constexpr ptrdiff_t m_flStartScale = 0x4b4;
   constexpr ptrdiff_t m_flScaleTime = 0x4b8;
   constexpr ptrdiff_t m_nFlags = 0x4bc;

}

namespace CFireSmoke {

   constexpr ptrdiff_t m_nFlameModelIndex = 0x4c0;
   constexpr ptrdiff_t m_nFlameFromAboveModelIndex = 0x4c4;

}

namespace CFishPool {

   constexpr ptrdiff_t m_fishCount = 0x4c0;
   constexpr ptrdiff_t m_maxRange = 0x4c4;
   constexpr ptrdiff_t m_swimDepth = 0x4c8;
   constexpr ptrdiff_t m_waterLevel = 0x4cc;
   constexpr ptrdiff_t m_isDormant = 0x4d0;
   constexpr ptrdiff_t m_fishes = 0x4d8;
   constexpr ptrdiff_t m_visTimer = 0x4f0;

}

namespace locksound_t {

   constexpr ptrdiff_t sLockedSound = 0x8;
   constexpr ptrdiff_t sUnlockedSound = 0x10;
   constexpr ptrdiff_t flwaitSound = 0x18;

}

namespace CLogicBranch {

   constexpr ptrdiff_t m_bInValue = 0x4b0;
   constexpr ptrdiff_t m_Listeners = 0x4b8;
   constexpr ptrdiff_t m_OnTrue = 0x4d0;
   constexpr ptrdiff_t m_OnFalse = 0x4f8;

}

namespace CLogicDistanceCheck {

   constexpr ptrdiff_t m_iszEntityA = 0x4b0;
   constexpr ptrdiff_t m_iszEntityB = 0x4b8;
   constexpr ptrdiff_t m_flZone1Distance = 0x4c0;
   constexpr ptrdiff_t m_flZone2Distance = 0x4c4;
   constexpr ptrdiff_t m_InZone1 = 0x4c8;
   constexpr ptrdiff_t m_InZone2 = 0x4f0;
   constexpr ptrdiff_t m_InZone3 = 0x518;

}

namespace VelocitySampler {

   constexpr ptrdiff_t m_prevSample = 0x0;
   constexpr ptrdiff_t m_fPrevSampleTime = 0xc;
   constexpr ptrdiff_t m_fIdealSampleRate = 0x10;

}

namespace SimpleConstraintSoundProfile {

   constexpr ptrdiff_t eKeypoints = 0x8;
   constexpr ptrdiff_t m_keyPoints = 0xc;
   constexpr ptrdiff_t m_reversalSoundThresholds = 0x14;

}

namespace ConstraintSoundInfo {

   constexpr ptrdiff_t m_vSampler = 0x8;
   constexpr ptrdiff_t m_soundProfile = 0x20;
   constexpr ptrdiff_t m_forwardAxis = 0x40;
   constexpr ptrdiff_t m_iszTravelSoundFwd = 0x50;
   constexpr ptrdiff_t m_iszTravelSoundBack = 0x58;
   constexpr ptrdiff_t m_iszReversalSounds = 0x68;
   constexpr ptrdiff_t m_bPlayTravelSound = 0x80;
   constexpr ptrdiff_t m_bPlayReversalSound = 0x81;

}

namespace CSmoothFunc {

   constexpr ptrdiff_t m_flSmoothAmplitude = 0x8;
   constexpr ptrdiff_t m_flSmoothBias = 0xc;
   constexpr ptrdiff_t m_flSmoothDuration = 0x10;
   constexpr ptrdiff_t m_flSmoothRemainingTime = 0x14;
   constexpr ptrdiff_t m_nSmoothDir = 0x18;

}

namespace magnetted_objects_t {

   constexpr ptrdiff_t hEntity = 0x8;

}

namespace CPointPrefab {

   constexpr ptrdiff_t m_targetMapName = 0x4b0;
   constexpr ptrdiff_t m_forceWorldGroupID = 0x4b8;
   constexpr ptrdiff_t m_associatedRelayTargetName = 0x4c0;
   constexpr ptrdiff_t m_fixupNames = 0x4c8;
   constexpr ptrdiff_t m_bLoadDynamic = 0x4c9;
   constexpr ptrdiff_t m_associatedRelayEntity = 0x4cc;

}

namespace CSkyboxReference {

   constexpr ptrdiff_t m_worldGroupId = 0x4b0;
   constexpr ptrdiff_t m_hSkyCamera = 0x4b4;

}

namespace CSkyCamera {

   constexpr ptrdiff_t m_skyboxData = 0x4b0;
   constexpr ptrdiff_t m_skyboxSlotToken = 0x540;
   constexpr ptrdiff_t m_bUseAngles = 0x544;
   constexpr ptrdiff_t m_pNext = 0x548;

}

namespace CSound {

   constexpr ptrdiff_t m_hOwner = 0x0;
   constexpr ptrdiff_t m_hTarget = 0x4;
   constexpr ptrdiff_t m_iVolume = 0x8;
   constexpr ptrdiff_t m_flOcclusionScale = 0xc;
   constexpr ptrdiff_t m_iType = 0x10;
   constexpr ptrdiff_t m_iNextAudible = 0x14;
   constexpr ptrdiff_t m_flExpireTime = 0x18;
   constexpr ptrdiff_t m_iNext = 0x1c;
   constexpr ptrdiff_t m_bNoExpirationTime = 0x1e;
   constexpr ptrdiff_t m_ownerChannelIndex = 0x20;
   constexpr ptrdiff_t m_vecOrigin = 0x24;
   constexpr ptrdiff_t m_bHasOwner = 0x30;

}

namespace CEnvSoundscape {

   constexpr ptrdiff_t m_OnPlay = 0x4b0;
   constexpr ptrdiff_t m_flRadius = 0x4d8;
   constexpr ptrdiff_t m_soundscapeName = 0x4e0;
   constexpr ptrdiff_t m_soundEventName = 0x4e8;
   constexpr ptrdiff_t m_bOverrideWithEvent = 0x4f0;
   constexpr ptrdiff_t m_soundscapeIndex = 0x4f4;
   constexpr ptrdiff_t m_soundscapeEntityListId = 0x4f8;
   constexpr ptrdiff_t m_soundEventHash = 0x4fc;
   constexpr ptrdiff_t m_positionNames = 0x500;
   constexpr ptrdiff_t m_hProxySoundscape = 0x540;
   constexpr ptrdiff_t m_bDisabled = 0x544;

}

namespace CEnvSoundscapeProxy {

   constexpr ptrdiff_t m_MainSoundscapeName = 0x548;

}

namespace lerpdata_t {

   constexpr ptrdiff_t m_hEnt = 0x0;
   constexpr ptrdiff_t m_MoveType = 0x4;
   constexpr ptrdiff_t m_flStartTime = 0x8;
   constexpr ptrdiff_t m_vecStartOrigin = 0xc;
   constexpr ptrdiff_t m_qStartRot = 0x20;
   constexpr ptrdiff_t m_nFXIndex = 0x30;

}

namespace CNavLinkAnimgraphVar {

   constexpr ptrdiff_t m_strAnimgraphVar = 0x0;
   constexpr ptrdiff_t m_unAlignmentDegrees = 0x8;

}

namespace CNavLinkMovementVData {

   constexpr ptrdiff_t m_bIsInterpolated = 0x0;
   constexpr ptrdiff_t m_unRecommendedDistance = 0x4;
   constexpr ptrdiff_t m_vecAnimgraphVars = 0x8;

}

namespace CNavVolumeBreadthFirstSearch {

   constexpr ptrdiff_t m_vStartPos = 0xa0;
   constexpr ptrdiff_t m_flSearchDist = 0xac;

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

namespace CEnvDetailController {

   constexpr ptrdiff_t m_flFadeStartDist = 0x4b0;
   constexpr ptrdiff_t m_flFadeEndDist = 0x4b4;

}

namespace CEnvWindShared {

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
   constexpr ptrdiff_t m_OnGustStart = 0x70;
   constexpr ptrdiff_t m_OnGustEnd = 0x98;
   constexpr ptrdiff_t m_flVariationTime = 0xc0;
   constexpr ptrdiff_t m_flSwayTime = 0xc4;
   constexpr ptrdiff_t m_flSimTime = 0xc8;
   constexpr ptrdiff_t m_flSwitchTime = 0xcc;
   constexpr ptrdiff_t m_flAveWindSpeed = 0xd0;
   constexpr ptrdiff_t m_bGusting = 0xd4;
   constexpr ptrdiff_t m_flWindAngleVariation = 0xd8;
   constexpr ptrdiff_t m_flWindSpeedVariation = 0xdc;
   constexpr ptrdiff_t m_iEntIndex = 0xe0;

}

namespace CEnvWindShared::WindAveEvent_t {

   constexpr ptrdiff_t m_flStartWindSpeed = 0x0;
   constexpr ptrdiff_t m_flAveWindSpeed = 0x4;

}

namespace CEnvWindShared::WindVariationEvent_t {

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

namespace CShatterGlassShard {

   constexpr ptrdiff_t m_hShardHandle = 0x8;
   constexpr ptrdiff_t m_vecPanelVertices = 0x10;
   constexpr ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28;
   constexpr ptrdiff_t m_hModel = 0x30;
   constexpr ptrdiff_t m_hPhysicsEntity = 0x38;
   constexpr ptrdiff_t m_hParentPanel = 0x3c;
   constexpr ptrdiff_t m_hParentShard = 0x40;
   constexpr ptrdiff_t m_ShatterStressType = 0x44;
   constexpr ptrdiff_t m_vecStressVelocity = 0x48;
   constexpr ptrdiff_t m_bCreatedModel = 0x54;
   constexpr ptrdiff_t m_flLongestEdge = 0x58;
   constexpr ptrdiff_t m_flShortestEdge = 0x5c;
   constexpr ptrdiff_t m_flLongestAcross = 0x60;
   constexpr ptrdiff_t m_flShortestAcross = 0x64;
   constexpr ptrdiff_t m_flSumOfAllEdges = 0x68;
   constexpr ptrdiff_t m_flArea = 0x6c;
   constexpr ptrdiff_t m_nOnFrameEdge = 0x70;
   constexpr ptrdiff_t m_nParentPanelsNthShard = 0x74;
   constexpr ptrdiff_t m_nSubShardGeneration = 0x78;
   constexpr ptrdiff_t m_vecAverageVertPosition = 0x7c;
   constexpr ptrdiff_t m_bAverageVertPositionIsValid = 0x84;
   constexpr ptrdiff_t m_vecPanelSpaceStressPositionA = 0x88;
   constexpr ptrdiff_t m_vecPanelSpaceStressPositionB = 0x90;
   constexpr ptrdiff_t m_bStressPositionAIsValid = 0x98;
   constexpr ptrdiff_t m_bStressPositionBIsValid = 0x99;
   constexpr ptrdiff_t m_bFlaggedForRemoval = 0x9a;
   constexpr ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x9c;
   constexpr ptrdiff_t m_bShatterRateLimited = 0xa0;
   constexpr ptrdiff_t m_hEntityHittingMe = 0xa4;
   constexpr ptrdiff_t m_vecNeighbors = 0xa8;

}

namespace CGameRules {

   constexpr ptrdiff_t m_szQuestName = 0x8;
   constexpr ptrdiff_t m_nQuestPhase = 0x88;

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

namespace fogplayerparams_t {

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

namespace ragdollelement_t {

   constexpr ptrdiff_t originParentSpace = 0x0;
   constexpr ptrdiff_t parentIndex = 0x20;
   constexpr ptrdiff_t m_flRadius = 0x24;

}

namespace ragdoll_t {

   constexpr ptrdiff_t list = 0x0;
   constexpr ptrdiff_t boneIndex = 0x18;
   constexpr ptrdiff_t allowStretch = 0x30;
   constexpr ptrdiff_t unused = 0x31;

}

namespace PhysicsRagdollPose_t {

   constexpr ptrdiff_t __m_pChainEntity = 0x8;
   constexpr ptrdiff_t m_Transforms = 0x30;
   constexpr ptrdiff_t m_hOwner = 0x48;

}

namespace CSceneEventInfo {

   constexpr ptrdiff_t m_iLayer = 0x0;
   constexpr ptrdiff_t m_iPriority = 0x4;
   constexpr ptrdiff_t m_hSequence = 0x8;
   constexpr ptrdiff_t m_flWeight = 0xc;
   constexpr ptrdiff_t m_bIsMoving = 0x10;
   constexpr ptrdiff_t m_bHasArrived = 0x11;
   constexpr ptrdiff_t m_flInitialYaw = 0x14;
   constexpr ptrdiff_t m_flTargetYaw = 0x18;
   constexpr ptrdiff_t m_flFacingYaw = 0x1c;
   constexpr ptrdiff_t m_nType = 0x20;
   constexpr ptrdiff_t m_flNext = 0x24;
   constexpr ptrdiff_t m_bIsGesture = 0x28;
   constexpr ptrdiff_t m_bShouldRemove = 0x29;
   constexpr ptrdiff_t m_hTarget = 0x54;
   constexpr ptrdiff_t m_nSceneEventId = 0x58;
   constexpr ptrdiff_t m_bClientSide = 0x5c;
   constexpr ptrdiff_t m_bStarted = 0x5d;

}

namespace ParticleIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace AmmoIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace thinkfunc_t {

   constexpr ptrdiff_t m_hFn = 0x8;
   constexpr ptrdiff_t m_nContext = 0x10;
   constexpr ptrdiff_t m_nNextThinkTick = 0x14;
   constexpr ptrdiff_t m_nLastThinkTick = 0x18;

}

namespace RagdollCreationParams_t {

   constexpr ptrdiff_t m_vForce = 0x0;
   constexpr ptrdiff_t m_nForceBone = 0xc;

}

namespace hudtextparms_t {

   constexpr ptrdiff_t color1 = 0x0;
   constexpr ptrdiff_t color2 = 0x4;
   constexpr ptrdiff_t effect = 0x8;
   constexpr ptrdiff_t channel = 0x9;
   constexpr ptrdiff_t x = 0xc;
   constexpr ptrdiff_t y = 0x10;

}

namespace CSimpleSimTimer {

   constexpr ptrdiff_t m_next = 0x0;
   constexpr ptrdiff_t m_nWorldGroupId = 0x4;

}

namespace CSimTimer {

   constexpr ptrdiff_t m_interval = 0x8;

}

namespace CRandSimTimer {

   constexpr ptrdiff_t m_minInterval = 0x8;
   constexpr ptrdiff_t m_maxInterval = 0xc;

}

namespace CStopwatchBase {

   constexpr ptrdiff_t m_fIsRunning = 0x8;

}

namespace CStopwatch {

   constexpr ptrdiff_t m_interval = 0xc;

}

namespace CRandStopwatch {

   constexpr ptrdiff_t m_minInterval = 0xc;
   constexpr ptrdiff_t m_maxInterval = 0x10;

}

namespace CSingleplayRules {

   constexpr ptrdiff_t m_bSinglePlayerGameEnding = 0x90;

}

namespace CSoundOpvarSetPointBase {

   constexpr ptrdiff_t m_bDisabled = 0x4b0;
   constexpr ptrdiff_t m_hSource = 0x4b4;
   constexpr ptrdiff_t m_iszSourceEntityName = 0x4c0;
   constexpr ptrdiff_t m_vLastPosition = 0x518;
   constexpr ptrdiff_t m_iszStackName = 0x528;
   constexpr ptrdiff_t m_iszOperatorName = 0x530;
   constexpr ptrdiff_t m_iszOpvarName = 0x538;
   constexpr ptrdiff_t m_iOpvarIndex = 0x540;
   constexpr ptrdiff_t m_bUseAutoCompare = 0x544;

}

namespace CSoundOpvarSetPointEntity {

   constexpr ptrdiff_t m_OnEnter = 0x548;
   constexpr ptrdiff_t m_OnExit = 0x570;
   constexpr ptrdiff_t m_bAutoDisable = 0x598;
   constexpr ptrdiff_t m_flDistanceMin = 0x5dc;
   constexpr ptrdiff_t m_flDistanceMax = 0x5e0;
   constexpr ptrdiff_t m_flDistanceMapMin = 0x5e4;
   constexpr ptrdiff_t m_flDistanceMapMax = 0x5e8;
   constexpr ptrdiff_t m_flOcclusionRadius = 0x5ec;
   constexpr ptrdiff_t m_flOcclusionMin = 0x5f0;
   constexpr ptrdiff_t m_flOcclusionMax = 0x5f4;
   constexpr ptrdiff_t m_flValSetOnDisable = 0x5f8;
   constexpr ptrdiff_t m_bSetValueOnDisable = 0x5fc;
   constexpr ptrdiff_t m_nSimulationMode = 0x600;
   constexpr ptrdiff_t m_nVisibilitySamples = 0x604;
   constexpr ptrdiff_t m_vDynamicProxyPoint = 0x608;
   constexpr ptrdiff_t m_flDynamicMaximumOcclusion = 0x614;
   constexpr ptrdiff_t m_hDynamicEntity = 0x618;
   constexpr ptrdiff_t m_iszDynamicEntityName = 0x620;
   constexpr ptrdiff_t m_flPathingDistanceNormFactor = 0x628;
   constexpr ptrdiff_t m_vPathingSourcePos = 0x62c;
   constexpr ptrdiff_t m_vPathingListenerPos = 0x638;
   constexpr ptrdiff_t m_nPathingSourceIndex = 0x644;

}

namespace CSoundOpvarSetAABBEntity {

   constexpr ptrdiff_t m_vDistanceInnerMins = 0x648;
   constexpr ptrdiff_t m_vDistanceInnerMaxs = 0x654;
   constexpr ptrdiff_t m_vDistanceOuterMins = 0x660;
   constexpr ptrdiff_t m_vDistanceOuterMaxs = 0x66c;
   constexpr ptrdiff_t m_nAABBDirection = 0x678;
   constexpr ptrdiff_t m_vInnerMins = 0x67c;
   constexpr ptrdiff_t m_vInnerMaxs = 0x688;
   constexpr ptrdiff_t m_vOuterMins = 0x694;
   constexpr ptrdiff_t m_vOuterMaxs = 0x6a0;

}

namespace CSoundOpvarSetPathCornerEntity {

   constexpr ptrdiff_t m_flDistMinSqr = 0x660;
   constexpr ptrdiff_t m_flDistMaxSqr = 0x664;
   constexpr ptrdiff_t m_iszPathCornerEntityName = 0x668;

}

namespace CSoundOpvarSetOBBWindEntity {

   constexpr ptrdiff_t m_vMins = 0x548;
   constexpr ptrdiff_t m_vMaxs = 0x554;
   constexpr ptrdiff_t m_vDistanceMins = 0x560;
   constexpr ptrdiff_t m_vDistanceMaxs = 0x56c;
   constexpr ptrdiff_t m_flWindMin = 0x578;
   constexpr ptrdiff_t m_flWindMax = 0x57c;
   constexpr ptrdiff_t m_flWindMapMin = 0x580;
   constexpr ptrdiff_t m_flWindMapMax = 0x584;

}

namespace CTakeDamageInfo {

   constexpr ptrdiff_t m_vecDamageForce = 0x8;
   constexpr ptrdiff_t m_vecDamagePosition = 0x14;
   constexpr ptrdiff_t m_vecReportedPosition = 0x20;
   constexpr ptrdiff_t m_vecDamageDirection = 0x2c;
   constexpr ptrdiff_t m_hInflictor = 0x38;
   constexpr ptrdiff_t m_hAttacker = 0x3c;
   constexpr ptrdiff_t m_hAbility = 0x40;
   constexpr ptrdiff_t m_flDamage = 0x44;
   constexpr ptrdiff_t m_bitsDamageType = 0x48;
   constexpr ptrdiff_t m_iDamageCustom = 0x4c;
   constexpr ptrdiff_t m_iAmmoType = 0x50;
   constexpr ptrdiff_t m_flOriginalDamage = 0x60;
   constexpr ptrdiff_t m_bShouldBleed = 0x64;
   constexpr ptrdiff_t m_bShouldSpark = 0x65;
   constexpr ptrdiff_t m_nDamageFlags = 0x70;
   constexpr ptrdiff_t m_nNumObjectsPenetrated = 0x74;
   constexpr ptrdiff_t m_hScriptInstance = 0x78;
   constexpr ptrdiff_t m_bInTakeDamageFlow = 0x94;

}

namespace CTakeDamageResult {

   constexpr ptrdiff_t m_nHealthLost = 0x0;
   constexpr ptrdiff_t m_nDamageTaken = 0x4;

}

namespace SummaryTakeDamageInfo_t {

   constexpr ptrdiff_t nSummarisedCount = 0x0;
   constexpr ptrdiff_t info = 0x8;
   constexpr ptrdiff_t result = 0xa0;
   constexpr ptrdiff_t hTarget = 0xa8;

}

namespace CTakeDamageSummaryScopeGuard {

   constexpr ptrdiff_t m_vecSummaries = 0x8;

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

namespace CAttributeContainer {

   constexpr ptrdiff_t m_Item = 0x50;

}

namespace GameAmmoTypeInfo_t {

   constexpr ptrdiff_t m_nBuySize = 0x38;
   constexpr ptrdiff_t m_nCost = 0x3c;

}

namespace EntitySpottedState_t {

   constexpr ptrdiff_t m_bSpotted = 0x8;
   constexpr ptrdiff_t m_bSpottedByMask = 0xc;

}

namespace SpawnPoint {

   constexpr ptrdiff_t m_iPriority = 0x4b0;
   constexpr ptrdiff_t m_bEnabled = 0x4b4;
   constexpr ptrdiff_t m_nType = 0x4b8;

}

namespace SpawnPointCoopEnemy {

   constexpr ptrdiff_t m_szWeaponsToGive = 0x4c0;
   constexpr ptrdiff_t m_szPlayerModelToUse = 0x4c8;
   constexpr ptrdiff_t m_nArmorToSpawnWith = 0x4d0;
   constexpr ptrdiff_t m_nDefaultBehavior = 0x4d4;
   constexpr ptrdiff_t m_nBotDifficulty = 0x4d8;
   constexpr ptrdiff_t m_bIsAgressive = 0x4dc;
   constexpr ptrdiff_t m_bStartAsleep = 0x4dd;
   constexpr ptrdiff_t m_flHideRadius = 0x4e0;
   constexpr ptrdiff_t m_szBehaviorTreeFile = 0x4f0;

}

namespace CCSGameRulesProxy {

   constexpr ptrdiff_t m_pGameRules = 0x4b0;

}

namespace CCSGameRules {

   constexpr ptrdiff_t __m_pChainEntity = 0x98;
   constexpr ptrdiff_t m_coopMissionManager = 0xc0;
   constexpr ptrdiff_t m_bFreezePeriod = 0xc4;
   constexpr ptrdiff_t m_bWarmupPeriod = 0xc5;
   constexpr ptrdiff_t m_fWarmupPeriodEnd = 0xc8;
   constexpr ptrdiff_t m_fWarmupPeriodStart = 0xcc;
   constexpr ptrdiff_t m_nTotalPausedTicks = 0xd0;
   constexpr ptrdiff_t m_nPauseStartTick = 0xd4;
   constexpr ptrdiff_t m_bServerPaused = 0xd8;
   constexpr ptrdiff_t m_bGamePaused = 0xd9;
   constexpr ptrdiff_t m_bTerroristTimeOutActive = 0xda;
   constexpr ptrdiff_t m_bCTTimeOutActive = 0xdb;
   constexpr ptrdiff_t m_flTerroristTimeOutRemaining = 0xdc;
   constexpr ptrdiff_t m_flCTTimeOutRemaining = 0xe0;
   constexpr ptrdiff_t m_nTerroristTimeOuts = 0xe4;
   constexpr ptrdiff_t m_nCTTimeOuts = 0xe8;
   constexpr ptrdiff_t m_bTechnicalTimeOut = 0xec;
   constexpr ptrdiff_t m_bMatchWaitingForResume = 0xed;
   constexpr ptrdiff_t m_iRoundTime = 0xf0;
   constexpr ptrdiff_t m_fMatchStartTime = 0xf4;
   constexpr ptrdiff_t m_fRoundStartTime = 0xf8;
   constexpr ptrdiff_t m_flRestartRoundTime = 0xfc;
   constexpr ptrdiff_t m_bGameRestart = 0x100;
   constexpr ptrdiff_t m_flGameStartTime = 0x104;
   constexpr ptrdiff_t m_timeUntilNextPhaseStarts = 0x108;
   constexpr ptrdiff_t m_gamePhase = 0x10c;
   constexpr ptrdiff_t m_totalRoundsPlayed = 0x110;
   constexpr ptrdiff_t m_nRoundsPlayedThisPhase = 0x114;
   constexpr ptrdiff_t m_nOvertimePlaying = 0x118;
   constexpr ptrdiff_t m_iHostagesRemaining = 0x11c;
   constexpr ptrdiff_t m_bAnyHostageReached = 0x120;
   constexpr ptrdiff_t m_bMapHasBombTarget = 0x121;
   constexpr ptrdiff_t m_bMapHasRescueZone = 0x122;
   constexpr ptrdiff_t m_bMapHasBuyZone = 0x123;
   constexpr ptrdiff_t m_bIsQueuedMatchmaking = 0x124;
   constexpr ptrdiff_t m_nQueuedMatchmakingMode = 0x128;
   constexpr ptrdiff_t m_bIsValveDS = 0x12c;
   constexpr ptrdiff_t m_bLogoMap = 0x12d;
   constexpr ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12e;
   constexpr ptrdiff_t m_iSpectatorSlotCount = 0x130;
   constexpr ptrdiff_t m_MatchDevice = 0x134;
   constexpr ptrdiff_t m_bHasMatchStarted = 0x138;
   constexpr ptrdiff_t m_nNextMapInMapgroup = 0x13c;
   constexpr ptrdiff_t m_szTournamentEventName = 0x140;
   constexpr ptrdiff_t m_szTournamentEventStage = 0x340;
   constexpr ptrdiff_t m_szMatchStatTxt = 0x540;
   constexpr ptrdiff_t m_szTournamentPredictionsTxt = 0x740;
   constexpr ptrdiff_t m_nTournamentPredictionsPct = 0x940;
   constexpr ptrdiff_t m_flCMMItemDropRevealStartTime = 0x944;
   constexpr ptrdiff_t m_flCMMItemDropRevealEndTime = 0x948;
   constexpr ptrdiff_t m_bIsDroppingItems = 0x94c;
   constexpr ptrdiff_t m_bIsQuestEligible = 0x94d;
   constexpr ptrdiff_t m_bIsHltvActive = 0x94e;
   constexpr ptrdiff_t m_nGuardianModeWaveNumber = 0x950;
   constexpr ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x954;
   constexpr ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x958;
   constexpr ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x95c;
   constexpr ptrdiff_t m_nNumHeaviesToSpawn = 0x960;
   constexpr ptrdiff_t m_numGlobalGiftsGiven = 0x964;
   constexpr ptrdiff_t m_numGlobalGifters = 0x968;
   constexpr ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x96c;
   constexpr ptrdiff_t m_arrFeaturedGiftersAccounts = 0x970;
   constexpr ptrdiff_t m_arrFeaturedGiftersGifts = 0x980;
   constexpr ptrdiff_t m_arrProhibitedItemIndices = 0x990;
   constexpr ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xa58;
   constexpr ptrdiff_t m_numBestOfMaps = 0xa68;
   constexpr ptrdiff_t m_nHalloweenMaskListSeed = 0xa6c;
   constexpr ptrdiff_t m_bBombDropped = 0xa70;
   constexpr ptrdiff_t m_bBombPlanted = 0xa71;
   constexpr ptrdiff_t m_iRoundWinStatus = 0xa74;
   constexpr ptrdiff_t m_eRoundWinReason = 0xa78;
   constexpr ptrdiff_t m_bTCantBuy = 0xa7c;
   constexpr ptrdiff_t m_bCTCantBuy = 0xa7d;
   constexpr ptrdiff_t m_flGuardianBuyUntilTime = 0xa80;
   constexpr ptrdiff_t m_iMatchStats_RoundResults = 0xa84;
   constexpr ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xafc;
   constexpr ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xb74;
   constexpr ptrdiff_t m_TeamRespawnWaveTimes = 0xbec;
   constexpr ptrdiff_t m_flNextRespawnWave = 0xc6c;
   constexpr ptrdiff_t m_nServerQuestID = 0xcec;
   constexpr ptrdiff_t m_vMinimapMins = 0xcf0;
   constexpr ptrdiff_t m_vMinimapMaxs = 0xcfc;
   constexpr ptrdiff_t m_MinimapVerticalSectionHeights = 0xd08;
   constexpr ptrdiff_t m_bDontIncrementCoopWave = 0xd28;
   constexpr ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xd29;
   constexpr ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xd2c;
   constexpr ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xd54;
   constexpr ptrdiff_t m_nEndMatchMapVoteWinner = 0xd7c;
   constexpr ptrdiff_t m_iNumConsecutiveCTLoses = 0xd80;
   constexpr ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xd84;
   constexpr ptrdiff_t m_bHasHostageBeenTouched = 0xda0;
   constexpr ptrdiff_t m_flIntermissionStartTime = 0xda4;
   constexpr ptrdiff_t m_flIntermissionEndTime = 0xda8;
   constexpr ptrdiff_t m_bLevelInitialized = 0xdac;
   constexpr ptrdiff_t m_iTotalRoundsPlayed = 0xdb0;
   constexpr ptrdiff_t m_iUnBalancedRounds = 0xdb4;
   constexpr ptrdiff_t m_endMatchOnRoundReset = 0xdb8;
   constexpr ptrdiff_t m_endMatchOnThink = 0xdb9;
   constexpr ptrdiff_t m_iFreezeTime = 0xdbc;
   constexpr ptrdiff_t m_iNumTerrorist = 0xdc0;
   constexpr ptrdiff_t m_iNumCT = 0xdc4;
   constexpr ptrdiff_t m_iNumSpawnableTerrorist = 0xdc8;
   constexpr ptrdiff_t m_iNumSpawnableCT = 0xdcc;
   constexpr ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xdd0;
   constexpr ptrdiff_t m_bFirstConnected = 0xde8;
   constexpr ptrdiff_t m_bCompleteReset = 0xde9;
   constexpr ptrdiff_t m_bPickNewTeamsOnReset = 0xdea;
   constexpr ptrdiff_t m_bScrambleTeamsOnRestart = 0xdeb;
   constexpr ptrdiff_t m_bSwapTeamsOnRestart = 0xdec;
   constexpr ptrdiff_t m_nEndMatchTiedVotes = 0xdf8;
   constexpr ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xe14;
   constexpr ptrdiff_t m_numQueuedMatchmakingAccounts = 0xe18;
   constexpr ptrdiff_t m_pQueuedMatchmakingReservationString = 0xe20;
   constexpr ptrdiff_t m_numTotalTournamentDrops = 0xe28;
   constexpr ptrdiff_t m_numSpectatorsCountMax = 0xe2c;
   constexpr ptrdiff_t m_numSpectatorsCountMaxTV = 0xe30;
   constexpr ptrdiff_t m_numSpectatorsCountMaxLnk = 0xe34;
   constexpr ptrdiff_t m_bForceTeamChangeSilent = 0xe40;
   constexpr ptrdiff_t m_bLoadingRoundBackupData = 0xe41;
   constexpr ptrdiff_t m_nMatchInfoShowType = 0xe78;
   constexpr ptrdiff_t m_flMatchInfoDecidedTime = 0xe7c;
   constexpr ptrdiff_t m_flCoopRespawnAndHealTime = 0xe98;
   constexpr ptrdiff_t m_coopBonusCoinsFound = 0xe9c;
   constexpr ptrdiff_t m_coopBonusPistolsOnly = 0xea0;
   constexpr ptrdiff_t m_coopPlayersInDeploymentZone = 0xea1;
   constexpr ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0xea2;
   constexpr ptrdiff_t mTeamDMLastWinningTeamNumber = 0xea4;
   constexpr ptrdiff_t mTeamDMLastThinkTime = 0xea8;
   constexpr ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xeac;
   constexpr ptrdiff_t m_iAccountTerrorist = 0xeb0;
   constexpr ptrdiff_t m_iAccountCT = 0xeb4;
   constexpr ptrdiff_t m_iSpawnPointCount_Terrorist = 0xeb8;
   constexpr ptrdiff_t m_iSpawnPointCount_CT = 0xebc;
   constexpr ptrdiff_t m_iMaxNumTerrorists = 0xec0;
   constexpr ptrdiff_t m_iMaxNumCTs = 0xec4;
   constexpr ptrdiff_t m_iLoserBonus = 0xec8;
   constexpr ptrdiff_t m_iLoserBonusMostRecentTeam = 0xecc;
   constexpr ptrdiff_t m_tmNextPeriodicThink = 0xed0;
   constexpr ptrdiff_t m_bVoiceWonMatchBragFired = 0xed4;
   constexpr ptrdiff_t m_fWarmupNextChatNoticeTime = 0xed8;
   constexpr ptrdiff_t m_iHostagesRescued = 0xee0;
   constexpr ptrdiff_t m_iHostagesTouched = 0xee4;
   constexpr ptrdiff_t m_flNextHostageAnnouncement = 0xee8;
   constexpr ptrdiff_t m_bNoTerroristsKilled = 0xeec;
   constexpr ptrdiff_t m_bNoCTsKilled = 0xeed;
   constexpr ptrdiff_t m_bNoEnemiesKilled = 0xeee;
   constexpr ptrdiff_t m_bCanDonateWeapons = 0xeef;
   constexpr ptrdiff_t m_firstKillTime = 0xef4;
   constexpr ptrdiff_t m_firstBloodTime = 0xefc;
   constexpr ptrdiff_t m_hostageWasInjured = 0xf18;
   constexpr ptrdiff_t m_hostageWasKilled = 0xf19;
   constexpr ptrdiff_t m_bVoteCalled = 0xf28;
   constexpr ptrdiff_t m_bServerVoteOnReset = 0xf29;
   constexpr ptrdiff_t m_flVoteCheckThrottle = 0xf2c;
   constexpr ptrdiff_t m_bBuyTimeEnded = 0xf30;
   constexpr ptrdiff_t m_nLastFreezeEndBeep = 0xf34;
   constexpr ptrdiff_t m_bTargetBombed = 0xf38;
   constexpr ptrdiff_t m_bBombDefused = 0xf39;
   constexpr ptrdiff_t m_bMapHasBombZone = 0xf3a;
   constexpr ptrdiff_t m_vecMainCTSpawnPos = 0xf58;
   constexpr ptrdiff_t m_CTSpawnPointsMasterList = 0xf68;
   constexpr ptrdiff_t m_TerroristSpawnPointsMasterList = 0xf80;
   constexpr ptrdiff_t m_iNextCTSpawnPoint = 0xf98;
   constexpr ptrdiff_t m_iNextTerroristSpawnPoint = 0xf9c;
   constexpr ptrdiff_t m_CTSpawnPoints = 0xfa0;
   constexpr ptrdiff_t m_TerroristSpawnPoints = 0xfb8;
   constexpr ptrdiff_t m_bIsUnreservedGameServer = 0xfd0;
   constexpr ptrdiff_t m_fAutobalanceDisplayTime = 0xfd4;
   constexpr ptrdiff_t m_bAllowWeaponSwitch = 0x1240;
   constexpr ptrdiff_t m_bRoundTimeWarningTriggered = 0x1241;
   constexpr ptrdiff_t m_phaseChangeAnnouncementTime = 0x1244;
   constexpr ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1248;
   constexpr ptrdiff_t m_flLastThinkTime = 0x124c;
   constexpr ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1250;
   constexpr ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x1254;
   constexpr ptrdiff_t m_bMatchAbortedDueToPlayerBan = 0x14d0;
   constexpr ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x14d1;
   constexpr ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x14d2;
   constexpr ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x14d3;
   constexpr ptrdiff_t m_pGameModeRules = 0x14f0;
   constexpr ptrdiff_t m_BtGlobalBlackboard = 0x14f8;
   constexpr ptrdiff_t m_hPlayerResource = 0x1560;
   constexpr ptrdiff_t m_RetakeRules = 0x1568;
   constexpr ptrdiff_t m_GuardianBotSkillLevelMax = 0x174c;
   constexpr ptrdiff_t m_GuardianBotSkillLevelMin = 0x1750;
   constexpr ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1758;
   constexpr ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17b8;
   constexpr ptrdiff_t m_nMatchEndCount = 0x17e0;
   constexpr ptrdiff_t m_nTTeamIntroVariant = 0x17e4;
   constexpr ptrdiff_t m_nCTTeamIntroVariant = 0x17e8;
   constexpr ptrdiff_t m_bTeamIntroPeriod = 0x17ec;
   constexpr ptrdiff_t m_fTeamIntroPeriodEnd = 0x17f0;
   constexpr ptrdiff_t m_bPlayedTeamIntroVO = 0x17f4;
   constexpr ptrdiff_t m_flLastPerfSampleTime = 0x5800;
   constexpr ptrdiff_t m_bSkipNextServerPerfSample = 0x5808;

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

namespace CRetakeGameRules {

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
   constexpr ptrdiff_t m_iEnemy2Ks = 0x74;
   constexpr ptrdiff_t m_iUtility_Count = 0x78;
   constexpr ptrdiff_t m_iUtility_Successes = 0x7c;
   constexpr ptrdiff_t m_iUtility_Enemies = 0x80;
   constexpr ptrdiff_t m_iFlash_Count = 0x84;
   constexpr ptrdiff_t m_iFlash_Successes = 0x88;
   constexpr ptrdiff_t m_nHealthPointsRemovedTotal = 0x8c;
   constexpr ptrdiff_t m_nHealthPointsDealtTotal = 0x90;
   constexpr ptrdiff_t m_nShotsFiredTotal = 0x94;
   constexpr ptrdiff_t m_nShotsOnTargetTotal = 0x98;
   constexpr ptrdiff_t m_i1v1Count = 0x9c;
   constexpr ptrdiff_t m_i1v1Wins = 0xa0;
   constexpr ptrdiff_t m_i1v2Count = 0xa4;
   constexpr ptrdiff_t m_i1v2Wins = 0xa8;
   constexpr ptrdiff_t m_iEntryCount = 0xac;
   constexpr ptrdiff_t m_iEntryWins = 0xb0;

}

namespace CCSGO_TeamPreviewCharacterPosition {

   constexpr ptrdiff_t m_nVariant = 0x4b0;
   constexpr ptrdiff_t m_nRandom = 0x4b4;
   constexpr ptrdiff_t m_nOrdinal = 0x4b8;
   constexpr ptrdiff_t m_sWeaponName = 0x4c0;
   constexpr ptrdiff_t m_xuid = 0x4c8;
   constexpr ptrdiff_t m_agentItem = 0x4d0;
   constexpr ptrdiff_t m_glovesItem = 0x748;
   constexpr ptrdiff_t m_weaponItem = 0x9c0;

}

namespace CPlayerPing {

   constexpr ptrdiff_t m_hPlayer = 0x4b8;
   constexpr ptrdiff_t m_hPingedEntity = 0x4bc;
   constexpr ptrdiff_t m_iType = 0x4c0;
   constexpr ptrdiff_t m_bUrgent = 0x4c4;
   constexpr ptrdiff_t m_szPlaceName = 0x4c5;

}

namespace CCSPlayer_PingServices {

   constexpr ptrdiff_t m_flPlayerPingTokens = 0x40;
   constexpr ptrdiff_t m_hPlayerPing = 0x54;

}

namespace CCSPlayerResource {

   constexpr ptrdiff_t m_bHostageAlive = 0x4b0;
   constexpr ptrdiff_t m_isHostageFollowingSomeone = 0x4bc;
   constexpr ptrdiff_t m_iHostageEntityIDs = 0x4c8;
   constexpr ptrdiff_t m_bombsiteCenterA = 0x4f8;
   constexpr ptrdiff_t m_bombsiteCenterB = 0x504;
   constexpr ptrdiff_t m_hostageRescueX = 0x510;
   constexpr ptrdiff_t m_hostageRescueY = 0x520;
   constexpr ptrdiff_t m_hostageRescueZ = 0x530;
   constexpr ptrdiff_t m_bEndMatchNextMapAllVoted = 0x540;
   constexpr ptrdiff_t m_foundGoalPositions = 0x541;

}

namespace CCSPlayerBase_CameraServices {

   constexpr ptrdiff_t m_iFOV = 0x170;
   constexpr ptrdiff_t m_iFOVStart = 0x174;
   constexpr ptrdiff_t m_flFOVTime = 0x178;
   constexpr ptrdiff_t m_flFOVRate = 0x17c;
   constexpr ptrdiff_t m_hZoomOwner = 0x180;
   constexpr ptrdiff_t m_hTriggerFogList = 0x188;
   constexpr ptrdiff_t m_hLastFogTrigger = 0x1a0;

}

namespace WeaponPurchaseCount_t {

   constexpr ptrdiff_t m_nItemDefIndex = 0x30;
   constexpr ptrdiff_t m_nCount = 0x32;

}

namespace WeaponPurchaseTracker_t {

   constexpr ptrdiff_t m_weaponPurchases = 0x8;

}

namespace CCSPlayer_ActionTrackingServices {

   constexpr ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x208;
   constexpr ptrdiff_t m_bIsRescuing = 0x23c;
   constexpr ptrdiff_t m_weaponPurchasesThisMatch = 0x240;
   constexpr ptrdiff_t m_weaponPurchasesThisRound = 0x298;

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

   constexpr ptrdiff_t m_vecSellbackPurchaseEntries = 0xc8;

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

   constexpr ptrdiff_t m_flMaxFallVelocity = 0x220;
   constexpr ptrdiff_t m_vecLadderNormal = 0x224;
   constexpr ptrdiff_t m_nLadderSurfacePropIndex = 0x230;
   constexpr ptrdiff_t m_flDuckAmount = 0x234;
   constexpr ptrdiff_t m_flDuckSpeed = 0x238;
   constexpr ptrdiff_t m_bDuckOverride = 0x23c;
   constexpr ptrdiff_t m_bDesiresDuck = 0x23d;
   constexpr ptrdiff_t m_flDuckOffset = 0x240;
   constexpr ptrdiff_t m_nDuckTimeMsecs = 0x244;
   constexpr ptrdiff_t m_nDuckJumpTimeMsecs = 0x248;
   constexpr ptrdiff_t m_nJumpTimeMsecs = 0x24c;
   constexpr ptrdiff_t m_flLastDuckTime = 0x250;
   constexpr ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x260;
   constexpr ptrdiff_t m_duckUntilOnGround = 0x268;
   constexpr ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x269;
   constexpr ptrdiff_t m_bInStuckTest = 0x26a;
   constexpr ptrdiff_t m_flStuckCheckTime = 0x278;
   constexpr ptrdiff_t m_nTraceCount = 0x478;
   constexpr ptrdiff_t m_StuckLast = 0x47c;
   constexpr ptrdiff_t m_bSpeedCropped = 0x480;
   constexpr ptrdiff_t m_nOldWaterLevel = 0x484;
   constexpr ptrdiff_t m_flWaterEntryTime = 0x488;
   constexpr ptrdiff_t m_vecForward = 0x48c;
   constexpr ptrdiff_t m_vecLeft = 0x498;
   constexpr ptrdiff_t m_vecUp = 0x4a4;
   constexpr ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4b0;
   constexpr ptrdiff_t m_bMadeFootstepNoise = 0x4bc;
   constexpr ptrdiff_t m_iFootsteps = 0x4c0;
   constexpr ptrdiff_t m_bOldJumpPressed = 0x4c4;
   constexpr ptrdiff_t m_flJumpPressedTime = 0x4c8;
   constexpr ptrdiff_t m_flJumpUntil = 0x4cc;
   constexpr ptrdiff_t m_flJumpVel = 0x4d0;
   constexpr ptrdiff_t m_fStashGrenadeParameterWhen = 0x4d4;
   constexpr ptrdiff_t m_nButtonDownMaskPrev = 0x4d8;
   constexpr ptrdiff_t m_flOffsetTickCompleteTime = 0x4e0;
   constexpr ptrdiff_t m_flOffsetTickStashedSpeed = 0x4e4;
   constexpr ptrdiff_t m_flStamina = 0x4e8;

}

namespace CCSPlayer_UseServices {

   constexpr ptrdiff_t m_hLastKnownUseEntity = 0x40;
   constexpr ptrdiff_t m_flLastUseTimeStamp = 0x44;
   constexpr ptrdiff_t m_flTimeStartedHoldingUse = 0x48;
   constexpr ptrdiff_t m_flTimeLastUsedWindow = 0x4c;

}

namespace CCSPlayer_ViewModelServices {

   constexpr ptrdiff_t m_hViewModel = 0x40;

}

namespace CCSPlayer_WaterServices {

   constexpr ptrdiff_t m_NextDrownDamageTime = 0x40;
   constexpr ptrdiff_t m_nDrownDmgRate = 0x44;
   constexpr ptrdiff_t m_AirFinishedTime = 0x48;
   constexpr ptrdiff_t m_flWaterJumpTime = 0x4c;
   constexpr ptrdiff_t m_vecWaterJumpVel = 0x50;
   constexpr ptrdiff_t m_flSwimSoundTime = 0x5c;

}

namespace CCSPlayer_WeaponServices {

   constexpr ptrdiff_t m_flNextAttack = 0xb0;
   constexpr ptrdiff_t m_bIsLookingAtWeapon = 0xb4;
   constexpr ptrdiff_t m_bIsHoldingLookAtWeapon = 0xb5;
   constexpr ptrdiff_t m_hSavedWeapon = 0xb8;
   constexpr ptrdiff_t m_nTimeToMelee = 0xbc;
   constexpr ptrdiff_t m_nTimeToSecondary = 0xc0;
   constexpr ptrdiff_t m_nTimeToPrimary = 0xc4;
   constexpr ptrdiff_t m_nTimeToSniperRifle = 0xc8;
   constexpr ptrdiff_t m_bIsBeingGivenItem = 0xcc;
   constexpr ptrdiff_t m_bIsPickingUpItemWithUse = 0xcd;
   constexpr ptrdiff_t m_bPickedUpWeapon = 0xce;

}

namespace CSAdditionalPerRoundStats_t {

   constexpr ptrdiff_t m_numChickensKilled = 0x0;
   constexpr ptrdiff_t m_killsWhileBlind = 0x4;
   constexpr ptrdiff_t m_bombCarrierkills = 0x8;
   constexpr ptrdiff_t m_iBurnDamageInflicted = 0xc;
   constexpr ptrdiff_t m_iDinks = 0x10;

}

namespace CSAdditionalMatchStats_t {

   constexpr ptrdiff_t m_numRoundsSurvived = 0x14;
   constexpr ptrdiff_t m_maxNumRoundsSurvived = 0x18;
   constexpr ptrdiff_t m_numRoundsSurvivedTotal = 0x1c;
   constexpr ptrdiff_t m_iRoundsWonWithoutPurchase = 0x20;
   constexpr ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x24;
   constexpr ptrdiff_t m_numFirstKills = 0x28;
   constexpr ptrdiff_t m_numClutchKills = 0x2c;
   constexpr ptrdiff_t m_numPistolKills = 0x30;
   constexpr ptrdiff_t m_numSniperKills = 0x34;
   constexpr ptrdiff_t m_iNumSuicides = 0x38;
   constexpr ptrdiff_t m_iNumTeamKills = 0x3c;
   constexpr ptrdiff_t m_iTeamDamage = 0x40;

}

namespace CCSPlayerController_ActionTrackingServices {

   constexpr ptrdiff_t m_perRoundStats = 0x40;
   constexpr ptrdiff_t m_matchStats = 0x90;
   constexpr ptrdiff_t m_iNumRoundKills = 0x148;
   constexpr ptrdiff_t m_iNumRoundKillsHeadshots = 0x14c;
   constexpr ptrdiff_t m_unTotalRoundDamageDealt = 0x150;

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

