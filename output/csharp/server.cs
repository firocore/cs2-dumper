public static class CChangeLevel {

   public const nint m_sMapName = 0x8a8;
   public const nint m_sLandmarkName = 0x8b0;
   public const nint m_OnChangeLevel = 0x8b8;
   public const nint m_bTouched = 0x8e0;
   public const nint m_bNoTouch = 0x8e1;
   public const nint m_bNewChapter = 0x8e2;
   public const nint m_bOnChangeLevelFired = 0x8e3;

}

public static class CTriggerTeleport {

   public const nint m_iLandmark = 0x8a8;
   public const nint m_bUseLandmarkAngles = 0x8b0;
   public const nint m_bMirrorPlayer = 0x8b1;

}

public static class CTriggerFan {

   public const nint m_vFanOrigin = 0x8a8;
   public const nint m_vFanEnd = 0x8b4;
   public const nint m_vNoise = 0x8c0;
   public const nint m_flForce = 0x8cc;
   public const nint m_flPlayerForce = 0x8d0;
   public const nint m_flRampTime = 0x8d4;
   public const nint m_bFalloff = 0x8d8;
   public const nint m_bPushPlayer = 0x8d9;
   public const nint m_bRampDown = 0x8da;
   public const nint m_bAddNoise = 0x8db;
   public const nint m_RampTimer = 0x8e0;

}

public static class CFuncNavBlocker {

   public const nint m_bDisabled = 0x700;
   public const nint m_nBlockedTeamNumber = 0x704;

}

public static class CNavLinkAreaEntity {

   public const nint m_flWidth = 0x4b0;
   public const nint m_vLocatorOffset = 0x4b4;
   public const nint m_qLocatorAnglesOffset = 0x4c0;
   public const nint m_strMovementForward = 0x4d0;
   public const nint m_strMovementReverse = 0x4d8;
   public const nint m_nNavLinkIdForward = 0x4e0;
   public const nint m_nNavLinkIdReverse = 0x4e4;
   public const nint m_bEnabled = 0x4e8;
   public const nint m_strFilterName = 0x4f0;
   public const nint m_hFilter = 0x4f8;
   public const nint m_OnNavLinkStart = 0x500;
   public const nint m_OnNavLinkFinish = 0x528;
   public const nint m_bIsTerminus = 0x550;

}

public static class CNavSpaceInfo {

   public const nint m_bCreateFlightSpace = 0x4b0;

}

public static class CBeam {

   public const nint m_flFrameRate = 0x700;
   public const nint m_flHDRColorScale = 0x704;
   public const nint m_flFireTime = 0x708;
   public const nint m_flDamage = 0x70c;
   public const nint m_nNumBeamEnts = 0x710;
   public const nint m_hBaseMaterial = 0x718;
   public const nint m_nHaloIndex = 0x720;
   public const nint m_nBeamType = 0x728;
   public const nint m_nBeamFlags = 0x72c;
   public const nint m_hAttachEntity = 0x730;
   public const nint m_nAttachIndex = 0x758;
   public const nint m_fWidth = 0x764;
   public const nint m_fEndWidth = 0x768;
   public const nint m_fFadeLength = 0x76c;
   public const nint m_fHaloScale = 0x770;
   public const nint m_fAmplitude = 0x774;
   public const nint m_fStartFrame = 0x778;
   public const nint m_fSpeed = 0x77c;
   public const nint m_flFrame = 0x780;
   public const nint m_nClipStyle = 0x784;
   public const nint m_bTurnedOff = 0x788;
   public const nint m_vecEndPos = 0x78c;
   public const nint m_hEndEntity = 0x798;
   public const nint m_nDissolveType = 0x79c;

}

public static class CFuncLadder {

   public const nint m_vecLadderDir = 0x700;
   public const nint m_Dismounts = 0x710;
   public const nint m_vecLocalTop = 0x728;
   public const nint m_vecPlayerMountPositionTop = 0x734;
   public const nint m_vecPlayerMountPositionBottom = 0x740;
   public const nint m_flAutoRideSpeed = 0x74c;
   public const nint m_bDisabled = 0x750;
   public const nint m_bFakeLadder = 0x751;
   public const nint m_bHasSlack = 0x752;
   public const nint m_surfacePropName = 0x758;
   public const nint m_OnPlayerGotOnLadder = 0x760;
   public const nint m_OnPlayerGotOffLadder = 0x788;

}

public static class CFuncShatterglass {

   public const nint m_hGlassMaterialDamaged = 0x700;
   public const nint m_hGlassMaterialUndamaged = 0x708;
   public const nint m_hConcreteMaterialEdgeFace = 0x710;
   public const nint m_hConcreteMaterialEdgeCaps = 0x718;
   public const nint m_hConcreteMaterialEdgeFins = 0x720;
   public const nint m_matPanelTransform = 0x728;
   public const nint m_matPanelTransformWsTemp = 0x758;
   public const nint m_vecShatterGlassShards = 0x788;
   public const nint m_PanelSize = 0x7a0;
   public const nint m_vecPanelNormalWs = 0x7a8;
   public const nint m_nNumShardsEverCreated = 0x7b4;
   public const nint m_flLastShatterSoundEmitTime = 0x7b8;
   public const nint m_flLastCleanupTime = 0x7bc;
   public const nint m_flInitAtTime = 0x7c0;
   public const nint m_flGlassThickness = 0x7c4;
   public const nint m_flSpawnInvulnerability = 0x7c8;
   public const nint m_bBreakSilent = 0x7cc;
   public const nint m_bBreakShardless = 0x7cd;
   public const nint m_bBroken = 0x7ce;
   public const nint m_bHasRateLimitedShards = 0x7cf;
   public const nint m_bGlassNavIgnore = 0x7d0;
   public const nint m_bGlassInFrame = 0x7d1;
   public const nint m_bStartBroken = 0x7d2;
   public const nint m_iInitialDamageType = 0x7d3;
   public const nint m_szDamagePositioningEntityName01 = 0x7d8;
   public const nint m_szDamagePositioningEntityName02 = 0x7e0;
   public const nint m_szDamagePositioningEntityName03 = 0x7e8;
   public const nint m_szDamagePositioningEntityName04 = 0x7f0;
   public const nint m_vInitialDamagePositions = 0x7f8;
   public const nint m_vExtraDamagePositions = 0x810;
   public const nint m_OnBroken = 0x828;
   public const nint m_iSurfaceType = 0x851;

}

public static class CPrecipitationVData {

   public const nint m_szParticlePrecipitationEffect = 0x28;
   public const nint m_flInnerDistance = 0x108;
   public const nint m_nAttachType = 0x10c;
   public const nint m_bBatchSameVolumeType = 0x110;
   public const nint m_nRTEnvCP = 0x114;
   public const nint m_nRTEnvCPComponent = 0x118;
   public const nint m_szModifier = 0x120;

}

public static class CSprite {

   public const nint m_hSpriteMaterial = 0x700;
   public const nint m_hAttachedToEntity = 0x708;
   public const nint m_nAttachment = 0x70c;
   public const nint m_flSpriteFramerate = 0x710;
   public const nint m_flFrame = 0x714;
   public const nint m_flDieTime = 0x718;
   public const nint m_nBrightness = 0x728;
   public const nint m_flBrightnessDuration = 0x72c;
   public const nint m_flSpriteScale = 0x730;
   public const nint m_flScaleDuration = 0x734;
   public const nint m_bWorldSpaceScale = 0x738;
   public const nint m_flGlowProxySize = 0x73c;
   public const nint m_flHDRColorScale = 0x740;
   public const nint m_flLastTime = 0x744;
   public const nint m_flMaxFrame = 0x748;
   public const nint m_flStartScale = 0x74c;
   public const nint m_flDestScale = 0x750;
   public const nint m_flScaleTimeStart = 0x754;
   public const nint m_nStartBrightness = 0x758;
   public const nint m_nDestBrightness = 0x75c;
   public const nint m_flBrightnessTimeStart = 0x760;
   public const nint m_nSpriteWidth = 0x764;
   public const nint m_nSpriteHeight = 0x768;

}

public static class CBaseClientUIEntity {

   public const nint m_bEnabled = 0x700;
   public const nint m_DialogXMLName = 0x708;
   public const nint m_PanelClassName = 0x710;
   public const nint m_PanelID = 0x718;
   public const nint m_CustomOutput0 = 0x720;
   public const nint m_CustomOutput1 = 0x748;
   public const nint m_CustomOutput2 = 0x770;
   public const nint m_CustomOutput3 = 0x798;
   public const nint m_CustomOutput4 = 0x7c0;
   public const nint m_CustomOutput5 = 0x7e8;
   public const nint m_CustomOutput6 = 0x810;
   public const nint m_CustomOutput7 = 0x838;
   public const nint m_CustomOutput8 = 0x860;
   public const nint m_CustomOutput9 = 0x888;

}

public static class CPointClientUIDialog {

   public const nint m_hActivator = 0x8b0;
   public const nint m_bStartEnabled = 0x8b4;

}

public static class CPointClientUIWorldPanel {

   public const nint m_bIgnoreInput = 0x8b0;
   public const nint m_bLit = 0x8b1;
   public const nint m_bFollowPlayerAcrossTeleport = 0x8b2;
   public const nint m_flWidth = 0x8b4;
   public const nint m_flHeight = 0x8b8;
   public const nint m_flDPI = 0x8bc;
   public const nint m_flInteractDistance = 0x8c0;
   public const nint m_flDepthOffset = 0x8c4;
   public const nint m_unOwnerContext = 0x8c8;
   public const nint m_unHorizontalAlign = 0x8cc;
   public const nint m_unVerticalAlign = 0x8d0;
   public const nint m_unOrientation = 0x8d4;
   public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8d8;
   public const nint m_vecCSSClasses = 0x8e0;
   public const nint m_bOpaque = 0x8f8;
   public const nint m_bNoDepth = 0x8f9;
   public const nint m_bRenderBackface = 0x8fa;
   public const nint m_bUseOffScreenIndicator = 0x8fb;
   public const nint m_bExcludeFromSaveGames = 0x8fc;
   public const nint m_bGrabbable = 0x8fd;
   public const nint m_bOnlyRenderToTexture = 0x8fe;
   public const nint m_bDisableMipGen = 0x8ff;
   public const nint m_nExplicitImageLayout = 0x900;

}

public static class CPointClientUIWorldTextPanel {

   public const nint m_messageText = 0x908;

}

public static class CInfoOffscreenPanoramaTexture {

   public const nint m_bDisabled = 0x4b0;
   public const nint m_nResolutionX = 0x4b4;
   public const nint m_nResolutionY = 0x4b8;
   public const nint m_szLayoutFileName = 0x4c0;
   public const nint m_RenderAttrName = 0x4c8;
   public const nint m_TargetEntities = 0x4d0;
   public const nint m_nTargetChangeCount = 0x4e8;
   public const nint m_vecCSSClasses = 0x4f0;
   public const nint m_szTargetsName = 0x508;
   public const nint m_AdditionalTargetEntities = 0x510;

}

public static class CEconItemView {

   public const nint m_iItemDefinitionIndex = 0x38;
   public const nint m_iEntityQuality = 0x3c;
   public const nint m_iEntityLevel = 0x40;
   public const nint m_iItemID = 0x48;
   public const nint m_iItemIDHigh = 0x50;
   public const nint m_iItemIDLow = 0x54;
   public const nint m_iAccountID = 0x58;
   public const nint m_iInventoryPosition = 0x5c;
   public const nint m_bInitialized = 0x68;
   public const nint m_AttributeList = 0x70;
   public const nint m_NetworkedDynamicAttributes = 0xd0;
   public const nint m_szCustomName = 0x130;
   public const nint m_szCustomNameOverride = 0x1d1;

}

public static class CPointGiveAmmo {

   public const nint m_pActivator = 0x4b0;

}

public static class CBombTarget {

   public const nint m_OnBombExplode = 0x8a8;
   public const nint m_OnBombPlanted = 0x8d0;
   public const nint m_OnBombDefused = 0x8f8;
   public const nint m_bIsBombSiteB = 0x920;
   public const nint m_bIsHeistBombTarget = 0x921;
   public const nint m_bBombPlantedHere = 0x922;
   public const nint m_szMountTarget = 0x928;
   public const nint m_hInstructorHint = 0x930;
   public const nint m_nBombSiteDesignation = 0x934;

}

public static class CTriggerBuoyancy {

   public const nint m_BuoyancyHelper = 0x8a8;
   public const nint m_flFluidDensity = 0x8c8;

}

public static class CFuncWater {

   public const nint m_BuoyancyHelper = 0x700;

}

public static class CCSPlayerController {

   public const nint m_pInGameMoneyServices = 0x6a0;
   public const nint m_pInventoryServices = 0x6a8;
   public const nint m_pActionTrackingServices = 0x6b0;
   public const nint m_pDamageServices = 0x6b8;
   public const nint m_iPing = 0x6c0;
   public const nint m_bHasCommunicationAbuseMute = 0x6c4;
   public const nint m_szCrosshairCodes = 0x6c8;
   public const nint m_iPendingTeamNum = 0x6d0;
   public const nint m_flForceTeamTime = 0x6d4;
   public const nint m_iCompTeammateColor = 0x6d8;
   public const nint m_bEverPlayedOnTeam = 0x6dc;
   public const nint m_bAttemptedToGetColor = 0x6dd;
   public const nint m_iTeammatePreferredColor = 0x6e0;
   public const nint m_bTeamChanged = 0x6e4;
   public const nint m_bInSwitchTeam = 0x6e5;
   public const nint m_bHasSeenJoinGame = 0x6e6;
   public const nint m_bJustBecameSpectator = 0x6e7;
   public const nint m_bSwitchTeamsOnNextRoundReset = 0x6e8;
   public const nint m_bRemoveAllItemsOnNextRoundReset = 0x6e9;
   public const nint m_szClan = 0x6f0;
   public const nint m_szClanName = 0x6f8;
   public const nint m_iCoachingTeam = 0x718;
   public const nint m_nPlayerDominated = 0x720;
   public const nint m_nPlayerDominatingMe = 0x728;
   public const nint m_iCompetitiveRanking = 0x730;
   public const nint m_iCompetitiveWins = 0x734;
   public const nint m_iCompetitiveRankType = 0x738;
   public const nint m_iCompetitiveRankingPredicted_Win = 0x73c;
   public const nint m_iCompetitiveRankingPredicted_Loss = 0x740;
   public const nint m_iCompetitiveRankingPredicted_Tie = 0x744;
   public const nint m_nEndMatchNextMapVote = 0x748;
   public const nint m_unActiveQuestId = 0x74c;
   public const nint m_nQuestProgressReason = 0x750;
   public const nint m_unPlayerTvControlFlags = 0x754;
   public const nint m_iDraftIndex = 0x780;
   public const nint m_msQueuedModeDisconnectionTimestamp = 0x784;
   public const nint m_uiAbandonRecordedReason = 0x788;
   public const nint m_bEverFullyConnected = 0x78c;
   public const nint m_bAbandonAllowsSurrender = 0x78d;
   public const nint m_bAbandonOffersInstantSurrender = 0x78e;
   public const nint m_bDisconnection1MinWarningPrinted = 0x78f;
   public const nint m_bScoreReported = 0x790;
   public const nint m_nDisconnectionTick = 0x794;
   public const nint m_bControllingBot = 0x7a0;
   public const nint m_bHasControlledBotThisRound = 0x7a1;
   public const nint m_bHasBeenControlledByPlayerThisRound = 0x7a2;
   public const nint m_nBotsControlledThisRound = 0x7a4;
   public const nint m_bCanControlObservedBot = 0x7a8;
   public const nint m_hPlayerPawn = 0x7ac;
   public const nint m_hObserverPawn = 0x7b0;
   public const nint m_DesiredObserverMode = 0x7b4;
   public const nint m_hDesiredObserverTarget = 0x7b8;
   public const nint m_bPawnIsAlive = 0x7bc;
   public const nint m_iPawnHealth = 0x7c0;
   public const nint m_iPawnArmor = 0x7c4;
   public const nint m_bPawnHasDefuser = 0x7c8;
   public const nint m_bPawnHasHelmet = 0x7c9;
   public const nint m_nPawnCharacterDefIndex = 0x7ca;
   public const nint m_iPawnLifetimeStart = 0x7cc;
   public const nint m_iPawnLifetimeEnd = 0x7d0;
   public const nint m_iPawnBotDifficulty = 0x7d4;
   public const nint m_hOriginalControllerOfCurrentPawn = 0x7d8;
   public const nint m_iScore = 0x7dc;
   public const nint m_iRoundScore = 0x7e0;
   public const nint m_iRoundsWon = 0x7e4;
   public const nint m_vecKills = 0x7e8;
   public const nint m_iMVPs = 0x800;
   public const nint m_nUpdateCounter = 0x804;
   public const nint m_lastHeldVoteTimer = 0xf8a8;
   public const nint m_bShowHints = 0xf8c0;
   public const nint m_iNextTimeCheck = 0xf8c4;
   public const nint m_bJustDidTeamKill = 0xf8c8;
   public const nint m_bPunishForTeamKill = 0xf8c9;
   public const nint m_bGaveTeamDamageWarning = 0xf8ca;
   public const nint m_bGaveTeamDamageWarningThisRound = 0xf8cb;
   public const nint m_LastTeamDamageWarningTime = 0xf8cc;

}

public static class CFootstepControl {

   public const nint m_source = 0x8a8;
   public const nint m_destination = 0x8b0;

}

public static class CCSWeaponBaseVData {

   public const nint m_WeaponType = 0x240;
   public const nint m_WeaponCategory = 0x244;
   public const nint m_szViewModel = 0x248;
   public const nint m_szPlayerModel = 0x328;
   public const nint m_szWorldDroppedModel = 0x408;
   public const nint m_szAimsightLensMaskModel = 0x4e8;
   public const nint m_szMagazineModel = 0x5c8;
   public const nint m_szHeatEffect = 0x6a8;
   public const nint m_szEjectBrassEffect = 0x788;
   public const nint m_szMuzzleFlashParticleAlt = 0x868;
   public const nint m_szMuzzleFlashThirdPersonParticle = 0x948;
   public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xa28;
   public const nint m_szTracerParticle = 0xb08;
   public const nint m_GearSlot = 0xbe8;
   public const nint m_GearSlotPosition = 0xbec;
   public const nint m_DefaultLoadoutSlot = 0xbf0;
   public const nint m_sWrongTeamMsg = 0xbf8;
   public const nint m_nPrice = 0xc00;
   public const nint m_nKillAward = 0xc04;
   public const nint m_nPrimaryReserveAmmoMax = 0xc08;
   public const nint m_nSecondaryReserveAmmoMax = 0xc0c;
   public const nint m_bMeleeWeapon = 0xc10;
   public const nint m_bHasBurstMode = 0xc11;
   public const nint m_bIsRevolver = 0xc12;
   public const nint m_bCannotShootUnderwater = 0xc13;
   public const nint m_szName = 0xc18;
   public const nint m_szAnimExtension = 0xc20;
   public const nint m_eSilencerType = 0xc28;
   public const nint m_nCrosshairMinDistance = 0xc2c;
   public const nint m_nCrosshairDeltaDistance = 0xc30;
   public const nint m_flCycleTime = 0xc34;
   public const nint m_flMaxSpeed = 0xc3c;
   public const nint m_flSpread = 0xc44;
   public const nint m_flInaccuracyCrouch = 0xc4c;
   public const nint m_flInaccuracyStand = 0xc54;
   public const nint m_flInaccuracyJump = 0xc5c;
   public const nint m_flInaccuracyLand = 0xc64;
   public const nint m_flInaccuracyLadder = 0xc6c;
   public const nint m_flInaccuracyFire = 0xc74;
   public const nint m_flInaccuracyMove = 0xc7c;
   public const nint m_flRecoilAngle = 0xc84;
   public const nint m_flRecoilAngleVariance = 0xc8c;
   public const nint m_flRecoilMagnitude = 0xc94;
   public const nint m_flRecoilMagnitudeVariance = 0xc9c;
   public const nint m_nTracerFrequency = 0xca4;
   public const nint m_flInaccuracyJumpInitial = 0xcac;
   public const nint m_flInaccuracyJumpApex = 0xcb0;
   public const nint m_flInaccuracyReload = 0xcb4;
   public const nint m_nRecoilSeed = 0xcb8;
   public const nint m_nSpreadSeed = 0xcbc;
   public const nint m_flTimeToIdleAfterFire = 0xcc0;
   public const nint m_flIdleInterval = 0xcc4;
   public const nint m_flAttackMovespeedFactor = 0xcc8;
   public const nint m_flHeatPerShot = 0xccc;
   public const nint m_flInaccuracyPitchShift = 0xcd0;
   public const nint m_flInaccuracyAltSoundThreshold = 0xcd4;
   public const nint m_flBotAudibleRange = 0xcd8;
   public const nint m_szUseRadioSubtitle = 0xce0;
   public const nint m_bUnzoomsAfterShot = 0xce8;
   public const nint m_bHideViewModelWhenZoomed = 0xce9;
   public const nint m_nZoomLevels = 0xcec;
   public const nint m_nZoomFOV1 = 0xcf0;
   public const nint m_nZoomFOV2 = 0xcf4;
   public const nint m_flZoomTime0 = 0xcf8;
   public const nint m_flZoomTime1 = 0xcfc;
   public const nint m_flZoomTime2 = 0xd00;
   public const nint m_flIronSightPullUpSpeed = 0xd04;
   public const nint m_flIronSightPutDownSpeed = 0xd08;
   public const nint m_flIronSightFOV = 0xd0c;
   public const nint m_flIronSightPivotForward = 0xd10;
   public const nint m_flIronSightLooseness = 0xd14;
   public const nint m_angPivotAngle = 0xd18;
   public const nint m_vecIronSightEyePos = 0xd24;
   public const nint m_nDamage = 0xd30;
   public const nint m_flHeadshotMultiplier = 0xd34;
   public const nint m_flArmorRatio = 0xd38;
   public const nint m_flPenetration = 0xd3c;
   public const nint m_flRange = 0xd40;
   public const nint m_flRangeModifier = 0xd44;
   public const nint m_flFlinchVelocityModifierLarge = 0xd48;
   public const nint m_flFlinchVelocityModifierSmall = 0xd4c;
   public const nint m_flRecoveryTimeCrouch = 0xd50;
   public const nint m_flRecoveryTimeStand = 0xd54;
   public const nint m_flRecoveryTimeCrouchFinal = 0xd58;
   public const nint m_flRecoveryTimeStandFinal = 0xd5c;
   public const nint m_nRecoveryTransitionStartBullet = 0xd60;
   public const nint m_nRecoveryTransitionEndBullet = 0xd64;
   public const nint m_flThrowVelocity = 0xd68;
   public const nint m_vSmokeColor = 0xd6c;
   public const nint m_szAnimClass = 0xd78;

}

public static class CPointGamestatsCounter {

   public const nint m_strStatisticName = 0x4b0;
   public const nint m_bDisabled = 0x4b8;

}

public static class CEnvHudHint {

   public const nint m_iszMessage = 0x4b0;

}

public static class CBuyZone {

   public const nint m_LegacyTeamNum = 0x8a8;

}

public static class CFuncConveyor {

   public const nint m_szConveyorModels = 0x700;
   public const nint m_flTransitionDurationSeconds = 0x708;
   public const nint m_angMoveEntitySpace = 0x70c;
   public const nint m_vecMoveDirEntitySpace = 0x718;
   public const nint m_flTargetSpeed = 0x724;
   public const nint m_nTransitionStartTick = 0x728;
   public const nint m_nTransitionDurationTicks = 0x72c;
   public const nint m_flTransitionStartSpeed = 0x730;
   public const nint m_hConveyorModels = 0x738;

}

public static class CCSPlace {

   public const nint m_name = 0x708;

}

public static class CPlayerSprayDecal {

   public const nint m_nUniqueID = 0x700;
   public const nint m_unAccountID = 0x704;
   public const nint m_unTraceID = 0x708;
   public const nint m_rtGcTime = 0x70c;
   public const nint m_vecEndPos = 0x710;
   public const nint m_vecStart = 0x71c;
   public const nint m_vecLeft = 0x728;
   public const nint m_vecNormal = 0x734;
   public const nint m_nPlayer = 0x740;
   public const nint m_nEntity = 0x744;
   public const nint m_nHitbox = 0x748;
   public const nint m_flCreationTime = 0x74c;
   public const nint m_nTintID = 0x750;
   public const nint m_nVersion = 0x754;
   public const nint m_ubSignature = 0x755;

}

public static class CInferno {

   public const nint m_fireXDelta = 0x710;
   public const nint m_fireYDelta = 0x810;
   public const nint m_fireZDelta = 0x910;
   public const nint m_fireParentXDelta = 0xa10;
   public const nint m_fireParentYDelta = 0xb10;
   public const nint m_fireParentZDelta = 0xc10;
   public const nint m_bFireIsBurning = 0xd10;
   public const nint m_BurnNormal = 0xd50;
   public const nint m_fireCount = 0x1050;
   public const nint m_nInfernoType = 0x1054;
   public const nint m_nFireEffectTickBegin = 0x1058;
   public const nint m_nFireLifetime = 0x105c;
   public const nint m_bInPostEffectTime = 0x1060;
   public const nint m_nFiresExtinguishCount = 0x1064;
   public const nint m_bWasCreatedInSmoke = 0x1068;
   public const nint m_extent = 0x1270;
   public const nint m_damageTimer = 0x1288;
   public const nint m_damageRampTimer = 0x12a0;
   public const nint m_splashVelocity = 0x12b8;
   public const nint m_InitialSplashVelocity = 0x12c4;
   public const nint m_startPos = 0x12d0;
   public const nint m_vecOriginalSpawnLocation = 0x12dc;
   public const nint m_activeTimer = 0x12e8;
   public const nint m_fireSpawnOffset = 0x12f8;
   public const nint m_nMaxFlames = 0x12fc;
   public const nint m_BookkeepingTimer = 0x1300;
   public const nint m_NextSpreadTimer = 0x1318;
   public const nint m_nSourceItemDefIndex = 0x1330;

}

public static class CBarnLight {

   public const nint m_bEnabled = 0x700;
   public const nint m_nColorMode = 0x704;
   public const nint m_Color = 0x708;
   public const nint m_flColorTemperature = 0x70c;
   public const nint m_flBrightness = 0x710;
   public const nint m_flBrightnessScale = 0x714;
   public const nint m_nDirectLight = 0x718;
   public const nint m_nBakedShadowIndex = 0x71c;
   public const nint m_nLuminaireShape = 0x720;
   public const nint m_flLuminaireSize = 0x724;
   public const nint m_flLuminaireAnisotropy = 0x728;
   public const nint m_LightStyleString = 0x730;
   public const nint m_flLightStyleStartTime = 0x738;
   public const nint m_QueuedLightStyleStrings = 0x740;
   public const nint m_LightStyleEvents = 0x758;
   public const nint m_LightStyleTargets = 0x770;
   public const nint m_StyleEvent = 0x788;
   public const nint m_StyleRadianceVar = 0x828;
   public const nint m_StyleVar = 0x830;
   public const nint m_hLightCookie = 0x858;
   public const nint m_flShape = 0x860;
   public const nint m_flSoftX = 0x864;
   public const nint m_flSoftY = 0x868;
   public const nint m_flSkirt = 0x86c;
   public const nint m_flSkirtNear = 0x870;
   public const nint m_vSizeParams = 0x874;
   public const nint m_flRange = 0x880;
   public const nint m_vShear = 0x884;
   public const nint m_nBakeSpecularToCubemaps = 0x890;
   public const nint m_vBakeSpecularToCubemapsSize = 0x894;
   public const nint m_nCastShadows = 0x8a0;
   public const nint m_nShadowMapSize = 0x8a4;
   public const nint m_nShadowPriority = 0x8a8;
   public const nint m_bContactShadow = 0x8ac;
   public const nint m_nBounceLight = 0x8b0;
   public const nint m_flBounceScale = 0x8b4;
   public const nint m_flMinRoughness = 0x8b8;
   public const nint m_vAlternateColor = 0x8bc;
   public const nint m_fAlternateColorBrightness = 0x8c8;
   public const nint m_nFog = 0x8cc;
   public const nint m_flFogStrength = 0x8d0;
   public const nint m_nFogShadows = 0x8d4;
   public const nint m_flFogScale = 0x8d8;
   public const nint m_flFadeSizeStart = 0x8dc;
   public const nint m_flFadeSizeEnd = 0x8e0;
   public const nint m_flShadowFadeSizeStart = 0x8e4;
   public const nint m_flShadowFadeSizeEnd = 0x8e8;
   public const nint m_bPrecomputedFieldsValid = 0x8ec;
   public const nint m_vPrecomputedBoundsMins = 0x8f0;
   public const nint m_vPrecomputedBoundsMaxs = 0x8fc;
   public const nint m_vPrecomputedOBBOrigin = 0x908;
   public const nint m_vPrecomputedOBBAngles = 0x914;
   public const nint m_vPrecomputedOBBExtent = 0x920;
   public const nint m_bPvsModifyEntity = 0x92c;

}

public static class CRectLight {

   public const nint m_bShowLight = 0x938;

}

public static class COmniLight {

   public const nint m_flInnerAngle = 0x938;
   public const nint m_flOuterAngle = 0x93c;
   public const nint m_bShowLight = 0x940;

}

public static class CCSTeam {

   public const nint m_nLastRecievedShorthandedRoundBonus = 0x568;
   public const nint m_nShorthandedRoundBonusStartRound = 0x56c;
   public const nint m_bSurrendered = 0x570;
   public const nint m_szTeamMatchStat = 0x571;
   public const nint m_numMapVictories = 0x774;
   public const nint m_scoreFirstHalf = 0x778;
   public const nint m_scoreSecondHalf = 0x77c;
   public const nint m_scoreOvertime = 0x780;
   public const nint m_szClanTeamname = 0x784;
   public const nint m_iClanID = 0x808;
   public const nint m_szTeamFlagImage = 0x80c;
   public const nint m_szTeamLogoImage = 0x814;
   public const nint m_flNextResourceTime = 0x81c;
   public const nint m_iLastUpdateSentAt = 0x820;

}

public static class CMapInfo {

   public const nint m_iBuyingStatus = 0x4b0;
   public const nint m_flBombRadius = 0x4b4;
   public const nint m_iPetPopulation = 0x4b8;
   public const nint m_bUseNormalSpawnsForDM = 0x4bc;
   public const nint m_bDisableAutoGeneratedDMSpawns = 0x4bd;
   public const nint m_flBotMaxVisionDistance = 0x4c0;
   public const nint m_iHostageCount = 0x4c4;
   public const nint m_bFadePlayerVisibilityFarZ = 0x4c8;

}

public static class CCSBot {

   public const nint m_lastCoopSpawnPoint = 0xd8;
   public const nint m_eyePosition = 0xe8;
   public const nint m_name = 0xf4;
   public const nint m_combatRange = 0x134;
   public const nint m_isRogue = 0x138;
   public const nint m_rogueTimer = 0x140;
   public const nint m_diedLastRound = 0x15c;
   public const nint m_safeTime = 0x160;
   public const nint m_wasSafe = 0x164;
   public const nint m_blindFire = 0x16c;
   public const nint m_surpriseTimer = 0x170;
   public const nint m_bAllowActive = 0x188;
   public const nint m_isFollowing = 0x189;
   public const nint m_leader = 0x18c;
   public const nint m_followTimestamp = 0x190;
   public const nint m_allowAutoFollowTime = 0x194;
   public const nint m_hurryTimer = 0x198;
   public const nint m_alertTimer = 0x1b0;
   public const nint m_sneakTimer = 0x1c8;
   public const nint m_panicTimer = 0x1e0;
   public const nint m_stateTimestamp = 0x4b0;
   public const nint m_isAttacking = 0x4b4;
   public const nint m_isOpeningDoor = 0x4b5;
   public const nint m_taskEntity = 0x4bc;
   public const nint m_goalPosition = 0x4cc;
   public const nint m_goalEntity = 0x4d8;
   public const nint m_avoid = 0x4dc;
   public const nint m_avoidTimestamp = 0x4e0;
   public const nint m_isStopping = 0x4e4;
   public const nint m_hasVisitedEnemySpawn = 0x4e5;
   public const nint m_stillTimer = 0x4e8;
   public const nint m_bEyeAnglesUnderPathFinderControl = 0x4f8;
   public const nint m_pathIndex = 0x65f0;
   public const nint m_areaEnteredTimestamp = 0x65f4;
   public const nint m_repathTimer = 0x65f8;
   public const nint m_avoidFriendTimer = 0x6610;
   public const nint m_isFriendInTheWay = 0x6628;
   public const nint m_politeTimer = 0x6630;
   public const nint m_isWaitingBehindFriend = 0x6648;
   public const nint m_pathLadderEnd = 0x6674;
   public const nint m_mustRunTimer = 0x66c0;
   public const nint m_waitTimer = 0x66d8;
   public const nint m_updateTravelDistanceTimer = 0x66f0;
   public const nint m_playerTravelDistance = 0x6708;
   public const nint m_travelDistancePhase = 0x6808;
   public const nint m_hostageEscortCount = 0x69a0;
   public const nint m_hostageEscortCountTimestamp = 0x69a4;
   public const nint m_desiredTeam = 0x69a8;
   public const nint m_hasJoined = 0x69ac;
   public const nint m_isWaitingForHostage = 0x69ad;
   public const nint m_inhibitWaitingForHostageTimer = 0x69b0;
   public const nint m_waitForHostageTimer = 0x69c8;
   public const nint m_noisePosition = 0x69e0;
   public const nint m_noiseTravelDistance = 0x69ec;
   public const nint m_noiseTimestamp = 0x69f0;
   public const nint m_noiseSource = 0x69f8;
   public const nint m_noiseBendTimer = 0x6a10;
   public const nint m_bentNoisePosition = 0x6a28;
   public const nint m_bendNoisePositionValid = 0x6a34;
   public const nint m_lookAroundStateTimestamp = 0x6a38;
   public const nint m_lookAheadAngle = 0x6a3c;
   public const nint m_forwardAngle = 0x6a40;
   public const nint m_inhibitLookAroundTimestamp = 0x6a44;
   public const nint m_lookAtSpot = 0x6a4c;
   public const nint m_lookAtSpotDuration = 0x6a5c;
   public const nint m_lookAtSpotTimestamp = 0x6a60;
   public const nint m_lookAtSpotAngleTolerance = 0x6a64;
   public const nint m_lookAtSpotClearIfClose = 0x6a68;
   public const nint m_lookAtSpotAttack = 0x6a69;
   public const nint m_lookAtDesc = 0x6a70;
   public const nint m_peripheralTimestamp = 0x6a78;
   public const nint m_approachPointCount = 0x6c00;
   public const nint m_approachPointViewPosition = 0x6c04;
   public const nint m_viewSteadyTimer = 0x6c10;
   public const nint m_tossGrenadeTimer = 0x6c28;
   public const nint m_isAvoidingGrenade = 0x6c48;
   public const nint m_spotCheckTimestamp = 0x6c68;
   public const nint m_checkedHidingSpotCount = 0x7070;
   public const nint m_lookPitch = 0x7074;
   public const nint m_lookPitchVel = 0x7078;
   public const nint m_lookYaw = 0x707c;
   public const nint m_lookYawVel = 0x7080;
   public const nint m_targetSpot = 0x7084;
   public const nint m_targetSpotVelocity = 0x7090;
   public const nint m_targetSpotPredicted = 0x709c;
   public const nint m_aimError = 0x70a8;
   public const nint m_aimGoal = 0x70b4;
   public const nint m_targetSpotTime = 0x70c0;
   public const nint m_aimFocus = 0x70c4;
   public const nint m_aimFocusInterval = 0x70c8;
   public const nint m_aimFocusNextUpdate = 0x70cc;
   public const nint m_ignoreEnemiesTimer = 0x70d8;
   public const nint m_enemy = 0x70f0;
   public const nint m_isEnemyVisible = 0x70f4;
   public const nint m_visibleEnemyParts = 0x70f5;
   public const nint m_lastEnemyPosition = 0x70f8;
   public const nint m_lastSawEnemyTimestamp = 0x7104;
   public const nint m_firstSawEnemyTimestamp = 0x7108;
   public const nint m_currentEnemyAcquireTimestamp = 0x710c;
   public const nint m_enemyDeathTimestamp = 0x7110;
   public const nint m_friendDeathTimestamp = 0x7114;
   public const nint m_isLastEnemyDead = 0x7118;
   public const nint m_nearbyEnemyCount = 0x711c;
   public const nint m_bomber = 0x7328;
   public const nint m_nearbyFriendCount = 0x732c;
   public const nint m_closestVisibleFriend = 0x7330;
   public const nint m_closestVisibleHumanFriend = 0x7334;
   public const nint m_attentionInterval = 0x7338;
   public const nint m_attacker = 0x7348;
   public const nint m_attackedTimestamp = 0x734c;
   public const nint m_burnedByFlamesTimer = 0x7350;
   public const nint m_lastVictimID = 0x7360;
   public const nint m_isAimingAtEnemy = 0x7364;
   public const nint m_isRapidFiring = 0x7365;
   public const nint m_equipTimer = 0x7368;
   public const nint m_zoomTimer = 0x7378;
   public const nint m_fireWeaponTimestamp = 0x7390;
   public const nint m_lookForWeaponsOnGroundTimer = 0x7398;
   public const nint m_bIsSleeping = 0x73b0;
   public const nint m_isEnemySniperVisible = 0x73b1;
   public const nint m_sawEnemySniperTimer = 0x73b8;
   public const nint m_enemyQueueIndex = 0x7470;
   public const nint m_enemyQueueCount = 0x7471;
   public const nint m_enemyQueueAttendIndex = 0x7472;
   public const nint m_isStuck = 0x7473;
   public const nint m_stuckTimestamp = 0x7474;
   public const nint m_stuckSpot = 0x7478;
   public const nint m_wiggleTimer = 0x7488;
   public const nint m_stuckJumpTimer = 0x74a0;
   public const nint m_nextCleanupCheckTimestamp = 0x74b8;
   public const nint m_avgVel = 0x74bc;
   public const nint m_avgVelIndex = 0x74e4;
   public const nint m_avgVelCount = 0x74e8;
   public const nint m_lastOrigin = 0x74ec;
   public const nint m_lastRadioRecievedTimestamp = 0x74fc;
   public const nint m_lastRadioSentTimestamp = 0x7500;
   public const nint m_radioSubject = 0x7504;
   public const nint m_radioPosition = 0x7508;
   public const nint m_voiceEndTimestamp = 0x7514;
   public const nint m_lastValidReactionQueueFrame = 0x7520;

}

public static class CFogVolume {

   public const nint m_fogName = 0x700;
   public const nint m_postProcessName = 0x708;
   public const nint m_colorCorrectionName = 0x710;
   public const nint m_bDisabled = 0x720;
   public const nint m_bInFogVolumesList = 0x721;

}

public static class CInfoDynamicShadowHint {

   public const nint m_bDisabled = 0x4b0;
   public const nint m_flRange = 0x4b4;
   public const nint m_nImportance = 0x4b8;
   public const nint m_nLightChoice = 0x4bc;
   public const nint m_hLight = 0x4c0;

}

public static class CInfoDynamicShadowHintBox {

   public const nint m_vBoxMins = 0x4c8;
   public const nint m_vBoxMaxs = 0x4d4;

}

public static class CEnvSky {

   public const nint m_hSkyMaterial = 0x700;
   public const nint m_hSkyMaterialLightingOnly = 0x708;
   public const nint m_bStartDisabled = 0x710;
   public const nint m_vTintColor = 0x711;
   public const nint m_vTintColorLightingOnly = 0x715;
   public const nint m_flBrightnessScale = 0x71c;
   public const nint m_nFogType = 0x720;
   public const nint m_flFogMinStart = 0x724;
   public const nint m_flFogMinEnd = 0x728;
   public const nint m_flFogMaxStart = 0x72c;
   public const nint m_flFogMaxEnd = 0x730;
   public const nint m_bEnabled = 0x734;

}

public static class CTonemapTrigger {

   public const nint m_tonemapControllerName = 0x8a8;
   public const nint m_hTonemapController = 0x8b0;

}

public static class CFogTrigger {

   public const nint m_fog = 0x8a8;

}

public static class CLightEntity {

   public const nint m_CLightComponent = 0x700;

}

public static class CPostProcessingVolume {

   public const nint m_hPostSettings = 0x8b8;
   public const nint m_flFadeDuration = 0x8c0;
   public const nint m_flMinLogExposure = 0x8c4;
   public const nint m_flMaxLogExposure = 0x8c8;
   public const nint m_flMinExposure = 0x8cc;
   public const nint m_flMaxExposure = 0x8d0;
   public const nint m_flExposureCompensation = 0x8d4;
   public const nint m_flExposureFadeSpeedUp = 0x8d8;
   public const nint m_flExposureFadeSpeedDown = 0x8dc;
   public const nint m_flTonemapEVSmoothingRange = 0x8e0;
   public const nint m_bMaster = 0x8e4;
   public const nint m_bExposureControl = 0x8e5;
   public const nint m_flRate = 0x8e8;
   public const nint m_flTonemapPercentTarget = 0x8ec;
   public const nint m_flTonemapPercentBrightPixels = 0x8f0;
   public const nint m_flTonemapMinAvgLum = 0x8f4;

}

public static class CEnvParticleGlow {

   public const nint m_flAlphaScale = 0xc78;
   public const nint m_flRadiusScale = 0xc7c;
   public const nint m_flSelfIllumScale = 0xc80;
   public const nint m_ColorTint = 0xc84;
   public const nint m_hTextureOverride = 0xc88;

}

public static class CTextureBasedAnimatable {

   public const nint m_bLoop = 0x700;
   public const nint m_flFPS = 0x704;
   public const nint m_hPositionKeys = 0x708;
   public const nint m_hRotationKeys = 0x710;
   public const nint m_vAnimationBoundsMin = 0x718;
   public const nint m_vAnimationBoundsMax = 0x724;
   public const nint m_flStartTime = 0x730;
   public const nint m_flStartFrame = 0x734;

}

public static class CBaseAnimGraph {

   public const nint m_bInitiallyPopulateInterpHistory = 0x700;
   public const nint m_bShouldAnimateDuringGameplayPause = 0x701;
   public const nint m_pChoreoServices = 0x708;
   public const nint m_bAnimGraphUpdateEnabled = 0x710;
   public const nint m_flMaxSlopeDistance = 0x714;
   public const nint m_vLastSlopeCheckPos = 0x718;
   public const nint m_bAnimGraphDirty = 0x724;
   public const nint m_vecForce = 0x728;
   public const nint m_nForceBone = 0x734;
   public const nint m_pRagdollPose = 0x748;
   public const nint m_bClientRagdoll = 0x750;

}

public static class CBaseProp {

   public const nint m_bModelOverrodeBlockLOS = 0x890;
   public const nint m_iShapeType = 0x894;
   public const nint m_bConformToCollisionBounds = 0x898;
   public const nint m_mPreferredCatchTransform = 0x89c;

}

public static class CBreakableProp {

   public const nint m_OnBreak = 0x8e0;
   public const nint m_OnHealthChanged = 0x908;
   public const nint m_OnTakeDamage = 0x930;
   public const nint m_impactEnergyScale = 0x958;
   public const nint m_iMinHealthDmg = 0x95c;
   public const nint m_preferredCarryAngles = 0x960;
   public const nint m_flPressureDelay = 0x96c;
   public const nint m_hBreaker = 0x970;
   public const nint m_PerformanceMode = 0x974;
   public const nint m_flDmgModBullet = 0x978;
   public const nint m_flDmgModClub = 0x97c;
   public const nint m_flDmgModExplosive = 0x980;
   public const nint m_flDmgModFire = 0x984;
   public const nint m_iszPhysicsDamageTableName = 0x988;
   public const nint m_iszBasePropData = 0x990;
   public const nint m_iInteractions = 0x998;
   public const nint m_flPreventDamageBeforeTime = 0x99c;
   public const nint m_bHasBreakPiecesOrCommands = 0x9a0;
   public const nint m_explodeDamage = 0x9a4;
   public const nint m_explodeRadius = 0x9a8;
   public const nint m_explosionDelay = 0x9b0;
   public const nint m_explosionBuildupSound = 0x9b8;
   public const nint m_explosionCustomEffect = 0x9c0;
   public const nint m_explosionCustomSound = 0x9c8;
   public const nint m_explosionModifier = 0x9d0;
   public const nint m_hPhysicsAttacker = 0x9d8;
   public const nint m_flLastPhysicsInfluenceTime = 0x9dc;
   public const nint m_bOriginalBlockLOS = 0x9e0;
   public const nint m_flDefaultFadeScale = 0x9e4;
   public const nint m_hLastAttacker = 0x9e8;
   public const nint m_hFlareEnt = 0x9ec;
   public const nint m_bUsePuntSound = 0x9f0;
   public const nint m_iszPuntSound = 0x9f8;
   public const nint m_noGhostCollision = 0xa00;

}

public static class CDynamicProp {

   public const nint m_bCreateNavObstacle = 0xa10;
   public const nint m_bUseHitboxesForRenderBox = 0xa11;
   public const nint m_bUseAnimGraph = 0xa12;
   public const nint m_pOutputAnimBegun = 0xa18;
   public const nint m_pOutputAnimOver = 0xa40;
   public const nint m_pOutputAnimLoopCycleOver = 0xa68;
   public const nint m_OnAnimReachedStart = 0xa90;
   public const nint m_OnAnimReachedEnd = 0xab8;
   public const nint m_iszDefaultAnim = 0xae0;
   public const nint m_nDefaultAnimLoopMode = 0xae8;
   public const nint m_bAnimateOnServer = 0xaec;
   public const nint m_bRandomizeCycle = 0xaed;
   public const nint m_bStartDisabled = 0xaee;
   public const nint m_bScriptedMovement = 0xaef;
   public const nint m_bFiredStartEndOutput = 0xaf0;
   public const nint m_bForceNpcExclude = 0xaf1;
   public const nint m_bCreateNonSolid = 0xaf2;
   public const nint m_bIsOverrideProp = 0xaf3;
   public const nint m_iInitialGlowState = 0xaf4;
   public const nint m_nGlowRange = 0xaf8;
   public const nint m_nGlowRangeMin = 0xafc;
   public const nint m_glowColor = 0xb00;
   public const nint m_nGlowTeam = 0xb04;

}

public static class CColorCorrectionVolume {

   public const nint m_bEnabled = 0x8a8;
   public const nint m_MaxWeight = 0x8ac;
   public const nint m_FadeDuration = 0x8b0;
   public const nint m_bStartDisabled = 0x8b4;
   public const nint m_Weight = 0x8b8;
   public const nint m_lookupFilename = 0x8bc;
   public const nint m_LastEnterWeight = 0xabc;
   public const nint m_LastEnterTime = 0xac0;
   public const nint m_LastExitWeight = 0xac4;
   public const nint m_LastExitTime = 0xac8;

}

public static class CPointCommentaryNode {

   public const nint m_iszPreCommands = 0x890;
   public const nint m_iszPostCommands = 0x898;
   public const nint m_iszCommentaryFile = 0x8a0;
   public const nint m_iszViewTarget = 0x8a8;
   public const nint m_hViewTarget = 0x8b0;
   public const nint m_hViewTargetAngles = 0x8b4;
   public const nint m_iszViewPosition = 0x8b8;
   public const nint m_hViewPosition = 0x8c0;
   public const nint m_hViewPositionMover = 0x8c4;
   public const nint m_bPreventMovement = 0x8c8;
   public const nint m_bUnderCrosshair = 0x8c9;
   public const nint m_bUnstoppable = 0x8ca;
   public const nint m_flFinishedTime = 0x8cc;
   public const nint m_vecFinishOrigin = 0x8d0;
   public const nint m_vecOriginalAngles = 0x8dc;
   public const nint m_vecFinishAngles = 0x8e8;
   public const nint m_bPreventChangesWhileMoving = 0x8f4;
   public const nint m_bDisabled = 0x8f5;
   public const nint m_vecTeleportOrigin = 0x8f8;
   public const nint m_flAbortedPlaybackAt = 0x904;
   public const nint m_pOnCommentaryStarted = 0x908;
   public const nint m_pOnCommentaryStopped = 0x930;
   public const nint m_bActive = 0x958;
   public const nint m_flStartTime = 0x95c;
   public const nint m_flStartTimeInCommentary = 0x960;
   public const nint m_iszTitle = 0x968;
   public const nint m_iszSpeakers = 0x970;
   public const nint m_iNodeNumber = 0x978;
   public const nint m_iNodeNumberMax = 0x97c;
   public const nint m_bListenedTo = 0x980;

}

public static class CRotDoor {

   public const nint m_bSolidBsp = 0x988;

}

public static class CEnvBeam {

   public const nint m_active = 0x7a0;
   public const nint m_spriteTexture = 0x7a8;
   public const nint m_iszStartEntity = 0x7b0;
   public const nint m_iszEndEntity = 0x7b8;
   public const nint m_life = 0x7c0;
   public const nint m_boltWidth = 0x7c4;
   public const nint m_noiseAmplitude = 0x7c8;
   public const nint m_speed = 0x7cc;
   public const nint m_restrike = 0x7d0;
   public const nint m_iszSpriteName = 0x7d8;
   public const nint m_frameStart = 0x7e0;
   public const nint m_vEndPointWorld = 0x7e4;
   public const nint m_vEndPointRelative = 0x7f0;
   public const nint m_radius = 0x7fc;
   public const nint m_TouchType = 0x800;
   public const nint m_iFilterName = 0x808;
   public const nint m_hFilter = 0x810;
   public const nint m_iszDecal = 0x818;
   public const nint m_OnTouchedByEntity = 0x820;

}

public static class CFuncMonitor {

   public const nint m_targetCamera = 0x720;
   public const nint m_nResolutionEnum = 0x728;
   public const nint m_bRenderShadows = 0x72c;
   public const nint m_bUseUniqueColorTarget = 0x72d;
   public const nint m_brushModelName = 0x730;
   public const nint m_hTargetCamera = 0x738;
   public const nint m_bEnabled = 0x73c;
   public const nint m_bDraw3DSkybox = 0x73d;
   public const nint m_bStartEnabled = 0x73e;

}

public static class CGunTarget {

   public const nint m_on = 0x780;
   public const nint m_hTargetEnt = 0x784;
   public const nint m_OnDeath = 0x788;

}

public static class CTriggerGameEvent {

   public const nint m_strStartTouchEventName = 0x8a8;
   public const nint m_strEndTouchEventName = 0x8b0;
   public const nint m_strTriggerID = 0x8b8;

}

public static class CGameText {

   public const nint m_iszMessage = 0x710;
   public const nint m_textParms = 0x718;

}

public static class CGamePlayerZone {

   public const nint m_OnPlayerInZone = 0x708;
   public const nint m_OnPlayerOutZone = 0x730;
   public const nint m_PlayersInCount = 0x758;
   public const nint m_PlayersOutCount = 0x780;

}

public static class CMarkupVolumeTagged_NavGame {

   public const nint m_bFloodFillAttribute = 0x758;

}

public static class CFuncElectrifiedVolume {

   public const nint m_EffectName = 0x720;
   public const nint m_EffectInterpenetrateName = 0x728;
   public const nint m_EffectZapName = 0x730;
   public const nint m_iszEffectSource = 0x738;

}

public static class CConstraintAnchor {

   public const nint m_massScale = 0x890;

}

public static class COrnamentProp {

   public const nint m_initialOwner = 0xb08;

}

public static class CInstancedSceneEntity {

   public const nint m_hOwner = 0xa08;
   public const nint m_bHadOwner = 0xa0c;
   public const nint m_flPostSpeakDelay = 0xa10;
   public const nint m_flPreDelay = 0xa14;
   public const nint m_bIsBackground = 0xa18;

}

public static class CTriggerSoundscape {

   public const nint m_hSoundscape = 0x8a8;
   public const nint m_SoundscapeName = 0x8b0;
   public const nint m_spectators = 0x8b8;

}

public static class CFuncTankTrain {

   public const nint m_OnDeath = 0x850;

}

public static class CBasePlatTrain {

   public const nint m_NoiseMoving = 0x780;
   public const nint m_NoiseArrived = 0x788;
   public const nint m_volume = 0x798;
   public const nint m_flTWidth = 0x79c;
   public const nint m_flTLength = 0x7a0;

}

public static class CFuncPlat {

   public const nint m_sNoise = 0x7a8;

}

public static class CFuncPlatRot {

   public const nint m_end = 0x7b0;
   public const nint m_start = 0x7bc;

}

public static class CFuncTrain {

   public const nint m_hCurrentTarget = 0x7a8;
   public const nint m_activated = 0x7ac;
   public const nint m_hEnemy = 0x7b0;
   public const nint m_flBlockDamage = 0x7b4;
   public const nint m_flNextBlockTime = 0x7b8;
   public const nint m_iszLastTarget = 0x7c0;

}

public static class CFuncTrackChange {

   public const nint m_trackTop = 0x7c8;
   public const nint m_trackBottom = 0x7d0;
   public const nint m_train = 0x7d8;
   public const nint m_trackTopName = 0x7e0;
   public const nint m_trackBottomName = 0x7e8;
   public const nint m_trainName = 0x7f0;
   public const nint m_code = 0x7f8;
   public const nint m_targetState = 0x7fc;
   public const nint m_use = 0x800;

}

public static class CTriggerRemove {

   public const nint m_OnRemove = 0x8a8;

}

public static class CScriptTriggerHurt {

   public const nint m_vExtent = 0x948;

}

public static class CScriptTriggerMultiple {

   public const nint m_vExtent = 0x8d0;

}

public static class CScriptTriggerOnce {

   public const nint m_vExtent = 0x8d0;

}

public static class CTriggerLook {

   public const nint m_hLookTarget = 0x8d0;
   public const nint m_flFieldOfView = 0x8d4;
   public const nint m_flLookTime = 0x8d8;
   public const nint m_flLookTimeTotal = 0x8dc;
   public const nint m_flLookTimeLast = 0x8e0;
   public const nint m_flTimeoutDuration = 0x8e4;
   public const nint m_bTimeoutFired = 0x8e8;
   public const nint m_bIsLooking = 0x8e9;
   public const nint m_b2DFOV = 0x8ea;
   public const nint m_bUseVelocity = 0x8eb;
   public const nint m_hActivator = 0x8ec;
   public const nint m_bTestOcclusion = 0x8f0;
   public const nint m_OnTimeout = 0x8f8;
   public const nint m_OnStartLook = 0x920;
   public const nint m_OnEndLook = 0x948;

}

public static class CTriggerPush {

   public const nint m_angPushEntitySpace = 0x8a8;
   public const nint m_vecPushDirEntitySpace = 0x8b4;
   public const nint m_bTriggerOnStartTouch = 0x8c0;
   public const nint m_flAlternateTicksFix = 0x8c4;
   public const nint m_flPushSpeed = 0x8c8;

}

public static class CScriptTriggerPush {

   public const nint m_vExtent = 0x8d0;

}

public static class CTriggerToggleSave {

   public const nint m_bDisabled = 0x8a8;

}

public static class CTriggerSave {

   public const nint m_bForceNewLevelUnit = 0x8a8;
   public const nint m_fDangerousTimer = 0x8ac;
   public const nint m_minHitPoints = 0x8b0;

}

public static class CTriggerProximity {

   public const nint m_hMeasureTarget = 0x8a8;
   public const nint m_iszMeasureTarget = 0x8b0;
   public const nint m_fRadius = 0x8b8;
   public const nint m_nTouchers = 0x8bc;
   public const nint m_NearestEntityDistance = 0x8c0;

}

public static class CTriggerImpact {

   public const nint m_flMagnitude = 0x8d0;
   public const nint m_flNoise = 0x8d4;
   public const nint m_flViewkick = 0x8d8;
   public const nint m_pOutputForce = 0x8e0;

}

public static class CTriggerActiveWeaponDetect {

   public const nint m_OnTouchedActiveWeapon = 0x8a8;
   public const nint m_iszWeaponClassName = 0x8d0;

}

public static class CTriggerPhysics {

   public const nint m_gravityScale = 0x8b8;
   public const nint m_linearLimit = 0x8bc;
   public const nint m_linearDamping = 0x8c0;
   public const nint m_angularLimit = 0x8c4;
   public const nint m_angularDamping = 0x8c8;
   public const nint m_linearForce = 0x8cc;
   public const nint m_flFrequency = 0x8d0;
   public const nint m_flDampingRatio = 0x8d4;
   public const nint m_vecLinearForcePointAt = 0x8d8;
   public const nint m_bCollapseToForcePoint = 0x8e4;
   public const nint m_vecLinearForcePointAtWorld = 0x8e8;
   public const nint m_vecLinearForceDirection = 0x8f4;
   public const nint m_bConvertToDebrisWhenPossible = 0x900;

}

public static class CTriggerDetectBulletFire {

   public const nint m_bPlayerFireOnly = 0x8a8;
   public const nint m_OnDetectedBulletFire = 0x8b0;

}

public static class CTriggerDetectExplosion {

   public const nint m_OnDetectedExplosion = 0x8e0;

}

public static class CScriptNavBlocker {

   public const nint m_vExtent = 0x710;

}

public static class CBaseFlex {

   public const nint m_flexWeight = 0x890;
   public const nint m_vLookTargetPosition = 0x8a8;
   public const nint m_blinktoggle = 0x8b4;
   public const nint m_flAllowResponsesEndTime = 0x908;
   public const nint m_flLastFlexAnimationTime = 0x90c;
   public const nint m_nNextSceneEventId = 0x910;
   public const nint m_bUpdateLayerPriorities = 0x914;

}

public static class CBasePropDoor {

   public const nint m_flAutoReturnDelay = 0xb18;
   public const nint m_hDoorList = 0xb20;
   public const nint m_nHardwareType = 0xb38;
   public const nint m_bNeedsHardware = 0xb3c;
   public const nint m_eDoorState = 0xb40;
   public const nint m_bLocked = 0xb44;
   public const nint m_closedPosition = 0xb48;
   public const nint m_closedAngles = 0xb54;
   public const nint m_hBlocker = 0xb60;
   public const nint m_bFirstBlocked = 0xb64;
   public const nint m_ls = 0xb68;
   public const nint m_bForceClosed = 0xb88;
   public const nint m_vecLatchWorldPosition = 0xb8c;
   public const nint m_hActivator = 0xb98;
   public const nint m_SoundMoving = 0xba8;
   public const nint m_SoundOpen = 0xbb0;
   public const nint m_SoundClose = 0xbb8;
   public const nint m_SoundLock = 0xbc0;
   public const nint m_SoundUnlock = 0xbc8;
   public const nint m_SoundLatch = 0xbd0;
   public const nint m_SoundPound = 0xbd8;
   public const nint m_SoundJiggle = 0xbe0;
   public const nint m_SoundLockedAnim = 0xbe8;
   public const nint m_numCloseAttempts = 0xbf0;
   public const nint m_nPhysicsMaterial = 0xbf4;
   public const nint m_SlaveName = 0xbf8;
   public const nint m_hMaster = 0xc00;
   public const nint m_OnBlockedClosing = 0xc08;
   public const nint m_OnBlockedOpening = 0xc30;
   public const nint m_OnUnblockedClosing = 0xc58;
   public const nint m_OnUnblockedOpening = 0xc80;
   public const nint m_OnFullyClosed = 0xca8;
   public const nint m_OnFullyOpen = 0xcd0;
   public const nint m_OnClose = 0xcf8;
   public const nint m_OnOpen = 0xd20;
   public const nint m_OnLockedUse = 0xd48;
   public const nint m_OnAjarOpen = 0xd70;

}

public static class CEnvLaser {

   public const nint m_iszLaserTarget = 0x7a0;
   public const nint m_pSprite = 0x7a8;
   public const nint m_iszSpriteName = 0x7b0;
   public const nint m_firePosition = 0x7b8;
   public const nint m_flStartFrame = 0x7c4;

}

public static class CFish {

   public const nint m_pool = 0x890;
   public const nint m_id = 0x894;
   public const nint m_x = 0x898;
   public const nint m_y = 0x89c;
   public const nint m_z = 0x8a0;
   public const nint m_angle = 0x8a4;
   public const nint m_angleChange = 0x8a8;
   public const nint m_forward = 0x8ac;
   public const nint m_perp = 0x8b8;
   public const nint m_poolOrigin = 0x8c4;
   public const nint m_waterLevel = 0x8d0;
   public const nint m_speed = 0x8d4;
   public const nint m_desiredSpeed = 0x8d8;
   public const nint m_calmSpeed = 0x8dc;
   public const nint m_panicSpeed = 0x8e0;
   public const nint m_avoidRange = 0x8e4;
   public const nint m_turnTimer = 0x8e8;
   public const nint m_turnClockwise = 0x900;
   public const nint m_goTimer = 0x908;
   public const nint m_moveTimer = 0x920;
   public const nint m_panicTimer = 0x938;
   public const nint m_disperseTimer = 0x950;
   public const nint m_proximityTimer = 0x968;
   public const nint m_visible = 0x980;

}

public static class CItem {

   public const nint m_OnPlayerTouch = 0x898;
   public const nint m_bActivateWhenAtRest = 0x8c0;
   public const nint m_OnCacheInteraction = 0x8c8;
   public const nint m_OnPlayerPickup = 0x8f0;
   public const nint m_OnGlovePulled = 0x918;
   public const nint m_vOriginalSpawnOrigin = 0x940;
   public const nint m_vOriginalSpawnAngles = 0x94c;
   public const nint m_bPhysStartAsleep = 0x958;

}

public static class CRagdollProp {

   public const nint m_ragdoll = 0x898;
   public const nint m_bStartDisabled = 0x8d0;
   public const nint m_ragPos = 0x8d8;
   public const nint m_ragAngles = 0x8f0;
   public const nint m_hRagdollSource = 0x908;
   public const nint m_lastUpdateTickCount = 0x90c;
   public const nint m_allAsleep = 0x910;
   public const nint m_bFirstCollisionAfterLaunch = 0x911;
   public const nint m_hDamageEntity = 0x914;
   public const nint m_hKiller = 0x918;
   public const nint m_hPhysicsAttacker = 0x91c;
   public const nint m_flLastPhysicsInfluenceTime = 0x920;
   public const nint m_flFadeOutStartTime = 0x924;
   public const nint m_flFadeTime = 0x928;
   public const nint m_vecLastOrigin = 0x92c;
   public const nint m_flAwakeTime = 0x938;
   public const nint m_flLastOriginChangeTime = 0x93c;
   public const nint m_nBloodColor = 0x940;
   public const nint m_strOriginClassName = 0x948;
   public const nint m_strSourceClassName = 0x950;
   public const nint m_bHasBeenPhysgunned = 0x958;
   public const nint m_bShouldTeleportPhysics = 0x959;
   public const nint m_flBlendWeight = 0x95c;
   public const nint m_flDefaultFadeScale = 0x960;
   public const nint m_ragdollMins = 0x968;
   public const nint m_ragdollMaxs = 0x980;
   public const nint m_bShouldDeleteActivationRecord = 0x998;
   public const nint m_bValidatePoweredRagdollPose = 0x9f8;

}

public static class CPhysMagnet {

   public const nint m_OnMagnetAttach = 0x890;
   public const nint m_OnMagnetDetach = 0x8b8;
   public const nint m_massScale = 0x8e0;
   public const nint m_forceLimit = 0x8e4;
   public const nint m_torqueLimit = 0x8e8;
   public const nint m_MagnettedEntities = 0x8f0;
   public const nint m_bActive = 0x908;
   public const nint m_bHasHitSomething = 0x909;
   public const nint m_flTotalMass = 0x90c;
   public const nint m_flRadius = 0x910;
   public const nint m_flNextSuckTime = 0x914;
   public const nint m_iMaxObjectsAttached = 0x918;

}

public static class CPhysicsProp {

   public const nint m_MotionEnabled = 0xa10;
   public const nint m_OnAwakened = 0xa38;
   public const nint m_OnAwake = 0xa60;
   public const nint m_OnAsleep = 0xa88;
   public const nint m_OnPlayerUse = 0xab0;
   public const nint m_OnPlayerPickup = 0xad8;
   public const nint m_OnOutOfWorld = 0xb00;
   public const nint m_massScale = 0xb28;
   public const nint m_inertiaScale = 0xb2c;
   public const nint m_buoyancyScale = 0xb30;
   public const nint m_damageType = 0xb34;
   public const nint m_damageToEnableMotion = 0xb38;
   public const nint m_flForceToEnableMotion = 0xb3c;
   public const nint m_bThrownByPlayer = 0xb40;
   public const nint m_bDroppedByPlayer = 0xb41;
   public const nint m_bTouchedByPlayer = 0xb42;
   public const nint m_bFirstCollisionAfterLaunch = 0xb43;
   public const nint m_iExploitableByPlayer = 0xb44;
   public const nint m_bHasBeenAwakened = 0xb48;
   public const nint m_bIsOverrideProp = 0xb49;
   public const nint m_fNextCheckDisableMotionContactsTime = 0xb4c;
   public const nint m_iInitialGlowState = 0xb50;
   public const nint m_nGlowRange = 0xb54;
   public const nint m_nGlowRangeMin = 0xb58;
   public const nint m_glowColor = 0xb5c;
   public const nint m_bForceNavIgnore = 0xb60;
   public const nint m_bNoNavmeshBlocker = 0xb61;
   public const nint m_bForceNpcExclude = 0xb62;
   public const nint m_bShouldAutoConvertBackFromDebris = 0xb63;
   public const nint m_bMuteImpactEffects = 0xb64;
   public const nint m_bAcceptDamageFromHeldObjects = 0xb6c;
   public const nint m_bEnableUseOutput = 0xb6d;
   public const nint m_bAwake = 0xb6e;
   public const nint m_nCollisionGroupOverride = 0xb70;

}

public static class CPhysicsPropRespawnable {

   public const nint m_vOriginalSpawnOrigin = 0xb78;
   public const nint m_vOriginalSpawnAngles = 0xb84;
   public const nint m_vOriginalMins = 0xb90;
   public const nint m_vOriginalMaxs = 0xb9c;
   public const nint m_flRespawnDuration = 0xba8;

}

public static class CShatterGlassShardPhysics {

   public const nint m_bDebris = 0xb78;
   public const nint m_hParentShard = 0xb7c;
   public const nint m_ShardDesc = 0xb80;

}

public static class CEconEntity {

   public const nint m_AttributeManager = 0x930;
   public const nint m_OriginalOwnerXuidLow = 0xbf8;
   public const nint m_OriginalOwnerXuidHigh = 0xbfc;
   public const nint m_nFallbackPaintKit = 0xc00;
   public const nint m_nFallbackSeed = 0xc04;
   public const nint m_flFallbackWear = 0xc08;
   public const nint m_nFallbackStatTrak = 0xc0c;
   public const nint m_hOldProvidee = 0xc10;
   public const nint m_iOldOwnerClass = 0xc14;

}

public static class CEconWearable {

   public const nint m_nForceSkin = 0xc18;
   public const nint m_bAlwaysAllow = 0xc1c;

}

public static class CBaseGrenade {

   public const nint m_OnPlayerPickup = 0x928;
   public const nint m_OnExplode = 0x950;
   public const nint m_bHasWarnedAI = 0x978;
   public const nint m_bIsSmokeGrenade = 0x979;
   public const nint m_bIsLive = 0x97a;
   public const nint m_DmgRadius = 0x97c;
   public const nint m_flDetonateTime = 0x980;
   public const nint m_flWarnAITime = 0x984;
   public const nint m_flDamage = 0x988;
   public const nint m_iszBounceSound = 0x990;
   public const nint m_ExplosionSound = 0x998;
   public const nint m_hThrower = 0x9a4;
   public const nint m_flNextAttack = 0x9bc;
   public const nint m_hOriginalThrower = 0x9c0;

}

public static class CBaseViewModel {

   public const nint m_vecLastFacing = 0x898;
   public const nint m_nViewModelIndex = 0x8a4;
   public const nint m_nAnimationParity = 0x8a8;
   public const nint m_flAnimationStartTime = 0x8ac;
   public const nint m_hWeapon = 0x8b0;
   public const nint m_sVMName = 0x8b8;
   public const nint m_sAnimationPrefix = 0x8c0;
   public const nint m_hOldLayerSequence = 0x8c8;
   public const nint m_oldLayer = 0x8cc;
   public const nint m_oldLayerStartTime = 0x8d0;
   public const nint m_hControlPanel = 0x8d4;

}

public static class CPlantedC4 {

   public const nint m_bBombTicking = 0x890;
   public const nint m_flC4Blow = 0x894;
   public const nint m_nBombSite = 0x898;
   public const nint m_nSourceSoundscapeHash = 0x89c;
   public const nint m_OnBombDefused = 0x8a0;
   public const nint m_OnBombBeginDefuse = 0x8c8;
   public const nint m_OnBombDefuseAborted = 0x8f0;
   public const nint m_bCannotBeDefused = 0x918;
   public const nint m_entitySpottedState = 0x920;
   public const nint m_nSpotRules = 0x938;
   public const nint m_bTrainingPlacedByPlayer = 0x93c;
   public const nint m_bHasExploded = 0x93d;
   public const nint m_flTimerLength = 0x940;
   public const nint m_bBeingDefused = 0x944;
   public const nint m_fLastDefuseTime = 0x94c;
   public const nint m_flDefuseLength = 0x954;
   public const nint m_flDefuseCountDown = 0x958;
   public const nint m_bBombDefused = 0x95c;
   public const nint m_hBombDefuser = 0x960;
   public const nint m_hControlPanel = 0x964;
   public const nint m_iProgressBarTime = 0x968;
   public const nint m_bVoiceAlertFired = 0x96c;
   public const nint m_bVoiceAlertPlayed = 0x96d;
   public const nint m_flNextBotBeepTime = 0x974;
   public const nint m_bPlantedAfterPickup = 0x97c;
   public const nint m_angCatchUpToPlayerEye = 0x980;
   public const nint m_flLastSpinDetectionTime = 0x98c;

}

public static class CBaseCSGrenadeProjectile {

   public const nint m_vInitialVelocity = 0x9c8;
   public const nint m_nBounces = 0x9d4;
   public const nint m_nExplodeEffectIndex = 0x9d8;
   public const nint m_nExplodeEffectTickBegin = 0x9e0;
   public const nint m_vecExplodeEffectOrigin = 0x9e4;
   public const nint m_unOGSExtraFlags = 0x9f0;
   public const nint m_bDetonationRecorded = 0x9f1;
   public const nint m_flDetonateTime = 0x9f4;
   public const nint m_nItemIndex = 0x9f8;
   public const nint m_vecOriginalSpawnLocation = 0x9fc;
   public const nint m_flLastBounceSoundTime = 0xa08;
   public const nint m_vecGrenadeSpin = 0xa0c;
   public const nint m_vecLastHitSurfaceNormal = 0xa18;
   public const nint m_nTicksAtZeroVelocity = 0xa24;

}

public static class CItemDogtags {

   public const nint m_OwningPlayer = 0x968;
   public const nint m_KillingPlayer = 0x96c;

}

public static class CSensorGrenadeProjectile {

   public const nint m_fExpireTime = 0xa28;
   public const nint m_fNextDetectPlayerSound = 0xa2c;
   public const nint m_hDisplayGrenade = 0xa30;

}

public static class CFlashbangProjectile {

   public const nint m_flTimeToDetonate = 0xa28;
   public const nint m_numOpponentsHit = 0xa2c;
   public const nint m_numTeammatesHit = 0xa2d;

}

public static class CChicken {

   public const nint m_AttributeManager = 0xb28;
   public const nint m_OriginalOwnerXuidLow = 0xdf0;
   public const nint m_OriginalOwnerXuidHigh = 0xdf4;
   public const nint m_updateTimer = 0xdf8;
   public const nint m_stuckAnchor = 0xe10;
   public const nint m_stuckTimer = 0xe20;
   public const nint m_collisionStuckTimer = 0xe38;
   public const nint m_isOnGround = 0xe50;
   public const nint m_vFallVelocity = 0xe54;
   public const nint m_activity = 0xe60;
   public const nint m_activityTimer = 0xe68;
   public const nint m_turnRate = 0xe80;
   public const nint m_fleeFrom = 0xe84;
   public const nint m_moveRateThrottleTimer = 0xe88;
   public const nint m_startleTimer = 0xea0;
   public const nint m_vocalizeTimer = 0xeb8;
   public const nint m_flWhenZombified = 0xed0;
   public const nint m_jumpedThisFrame = 0xed4;
   public const nint m_leader = 0xed8;
   public const nint m_reuseTimer = 0xee0;
   public const nint m_hasBeenUsed = 0xef8;
   public const nint m_jumpTimer = 0xf00;
   public const nint m_flLastJumpTime = 0xf18;
   public const nint m_bInJump = 0xf1c;
   public const nint m_isWaitingForLeader = 0xf1d;
   public const nint m_repathTimer = 0x2f28;
   public const nint m_inhibitDoorTimer = 0x2f40;
   public const nint m_inhibitObstacleAvoidanceTimer = 0x2fd0;
   public const nint m_vecPathGoal = 0x2ff0;
   public const nint m_flActiveFollowStartTime = 0x2ffc;
   public const nint m_followMinuteTimer = 0x3000;
   public const nint m_vecLastEggPoopPosition = 0x3018;
   public const nint m_vecEggsPooped = 0x3028;
   public const nint m_BlockDirectionTimer = 0x3048;

}

public static class CItemDefuser {

   public const nint m_entitySpottedState = 0x968;
   public const nint m_nSpotRules = 0x980;

}

public static class CBasePlayerWeapon {

   public const nint m_nNextPrimaryAttackTick = 0xc18;
   public const nint m_flNextPrimaryAttackTickRatio = 0xc1c;
   public const nint m_nNextSecondaryAttackTick = 0xc20;
   public const nint m_flNextSecondaryAttackTickRatio = 0xc24;
   public const nint m_iClip1 = 0xc28;
   public const nint m_iClip2 = 0xc2c;
   public const nint m_pReserveAmmo = 0xc30;
   public const nint m_OnPlayerUse = 0xc38;

}

public static class CScriptItem {

   public const nint m_OnPlayerPickup = 0x968;
   public const nint m_MoveTypeOverride = 0x990;

}

public static class CRagdollPropAttached {

   public const nint m_boneIndexAttached = 0xa38;
   public const nint m_ragdollAttachedObjectIndex = 0xa3c;
   public const nint m_attachmentPointBoneSpace = 0xa40;
   public const nint m_attachmentPointRagdollSpace = 0xa4c;
   public const nint m_bShouldDetach = 0xa58;
   public const nint m_bShouldDeleteAttachedActivationRecord = 0xa68;

}

public static class CPropDoorRotating {

   public const nint m_vecAxis = 0xd98;
   public const nint m_flDistance = 0xda4;
   public const nint m_eSpawnPosition = 0xda8;
   public const nint m_eOpenDirection = 0xdac;
   public const nint m_eCurrentOpenDirection = 0xdb0;
   public const nint m_flAjarAngle = 0xdb4;
   public const nint m_angRotationAjarDeprecated = 0xdb8;
   public const nint m_angRotationClosed = 0xdc4;
   public const nint m_angRotationOpenForward = 0xdd0;
   public const nint m_angRotationOpenBack = 0xddc;
   public const nint m_angGoal = 0xde8;
   public const nint m_vecForwardBoundsMin = 0xdf4;
   public const nint m_vecForwardBoundsMax = 0xe00;
   public const nint m_vecBackBoundsMin = 0xe0c;
   public const nint m_vecBackBoundsMax = 0xe18;
   public const nint m_bAjarDoorShouldntAlwaysOpen = 0xe24;
   public const nint m_hEntityBlocker = 0xe28;

}

public static class CPropDoorRotatingBreakable {

   public const nint m_bBreakable = 0xe30;
   public const nint m_isAbleToCloseAreaPortals = 0xe31;
   public const nint m_currentDamageState = 0xe34;
   public const nint m_damageStates = 0xe38;

}

public static class CBaseCombatCharacter {

   public const nint m_bForceServerRagdoll = 0x920;
   public const nint m_hMyWearables = 0x928;
   public const nint m_flFieldOfView = 0x940;
   public const nint m_impactEnergyScale = 0x944;
   public const nint m_LastHitGroup = 0x948;
   public const nint m_bApplyStressDamage = 0x94c;
   public const nint m_bloodColor = 0x950;
   public const nint m_navMeshID = 0x9b0;
   public const nint m_iDamageCount = 0x9b4;
   public const nint m_pVecRelationships = 0x9b8;
   public const nint m_strRelationships = 0x9c0;
   public const nint m_eHull = 0x9c8;
   public const nint m_nNavHullIdx = 0x9cc;

}

public static class CItemGeneric {

   public const nint m_bHasTriggerRadius = 0x970;
   public const nint m_bHasPickupRadius = 0x971;
   public const nint m_flPickupRadiusSqr = 0x974;
   public const nint m_flTriggerRadiusSqr = 0x978;
   public const nint m_flLastPickupCheck = 0x97c;
   public const nint m_bPlayerCounterListenerAdded = 0x980;
   public const nint m_bPlayerInTriggerRadius = 0x981;
   public const nint m_hSpawnParticleEffect = 0x988;
   public const nint m_pAmbientSoundEffect = 0x990;
   public const nint m_bAutoStartAmbientSound = 0x998;
   public const nint m_pSpawnScriptFunction = 0x9a0;
   public const nint m_hPickupParticleEffect = 0x9a8;
   public const nint m_pPickupSoundEffect = 0x9b0;
   public const nint m_pPickupScriptFunction = 0x9b8;
   public const nint m_hTimeoutParticleEffect = 0x9c0;
   public const nint m_pTimeoutSoundEffect = 0x9c8;
   public const nint m_pTimeoutScriptFunction = 0x9d0;
   public const nint m_pPickupFilterName = 0x9d8;
   public const nint m_hPickupFilter = 0x9e0;
   public const nint m_OnPickup = 0x9e8;
   public const nint m_OnTimeout = 0xa10;
   public const nint m_OnTriggerStartTouch = 0xa38;
   public const nint m_OnTriggerTouch = 0xa60;
   public const nint m_OnTriggerEndTouch = 0xa88;
   public const nint m_pAllowPickupScriptFunction = 0xab0;
   public const nint m_flPickupRadius = 0xab8;
   public const nint m_flTriggerRadius = 0xabc;
   public const nint m_pTriggerSoundEffect = 0xac0;
   public const nint m_bGlowWhenInTrigger = 0xac8;
   public const nint m_glowColor = 0xac9;
   public const nint m_bUseable = 0xacd;
   public const nint m_hTriggerHelper = 0xad0;

}

public static class CBasePlayerPawn {

   public const nint m_pWeaponServices = 0x9d0;
   public const nint m_pItemServices = 0x9d8;
   public const nint m_pAutoaimServices = 0x9e0;
   public const nint m_pObserverServices = 0x9e8;
   public const nint m_pWaterServices = 0x9f0;
   public const nint m_pUseServices = 0x9f8;
   public const nint m_pFlashlightServices = 0xa00;
   public const nint m_pCameraServices = 0xa08;
   public const nint m_pMovementServices = 0xa10;
   public const nint m_ServerViewAngleChanges = 0xa20;
   public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xa70;
   public const nint v_angle = 0xa74;
   public const nint v_anglePrevious = 0xa80;
   public const nint m_iHideHUD = 0xa8c;
   public const nint m_skybox3d = 0xa90;
   public const nint m_fTimeLastHurt = 0xb20;
   public const nint m_flDeathTime = 0xb24;
   public const nint m_fNextSuicideTime = 0xb28;
   public const nint m_fInitHUD = 0xb2c;
   public const nint m_pExpresser = 0xb30;
   public const nint m_hController = 0xb38;
   public const nint m_fHltvReplayDelay = 0xb40;
   public const nint m_fHltvReplayEnd = 0xb44;
   public const nint m_iHltvReplayEntity = 0xb48;

}

public static class CCSGOViewModel {

   public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x8d8;
   public const nint m_nWeaponParity = 0x8dc;
   public const nint m_nOldWeaponParity = 0x8e0;

}

public static class CCSWeaponBase {

   public const nint m_bRemoveable = 0xc88;
   public const nint m_flFireSequenceStartTime = 0xc8c;
   public const nint m_nFireSequenceStartTimeChange = 0xc90;
   public const nint m_nFireSequenceStartTimeAck = 0xc94;
   public const nint m_bPlayerFireEventIsPrimary = 0xc98;
   public const nint m_seqIdle = 0xc9c;
   public const nint m_seqFirePrimary = 0xca0;
   public const nint m_seqFireSecondary = 0xca4;
   public const nint m_bPlayerAmmoStockOnPickup = 0xcb0;
   public const nint m_bRequireUseToTouch = 0xcb1;
   public const nint m_iState = 0xcb4;
   public const nint m_flLastTimeInAir = 0xcb8;
   public const nint m_flLastDeployTime = 0xcbc;
   public const nint m_nViewModelIndex = 0xcc0;
   public const nint m_bReloadsWithClips = 0xcc4;
   public const nint m_flTimeWeaponIdle = 0xce0;
   public const nint m_bFireOnEmpty = 0xce4;
   public const nint m_OnPlayerPickup = 0xce8;
   public const nint m_weaponMode = 0xd10;
   public const nint m_flTurningInaccuracyDelta = 0xd14;
   public const nint m_vecTurningInaccuracyEyeDirLast = 0xd18;
   public const nint m_flTurningInaccuracy = 0xd24;
   public const nint m_fAccuracyPenalty = 0xd28;
   public const nint m_flLastAccuracyUpdateTime = 0xd2c;
   public const nint m_fAccuracySmoothedForZoom = 0xd30;
   public const nint m_fScopeZoomEndTime = 0xd34;
   public const nint m_iRecoilIndex = 0xd38;
   public const nint m_flRecoilIndex = 0xd3c;
   public const nint m_bBurstMode = 0xd40;
   public const nint m_flPostponeFireReadyTime = 0xd44;
   public const nint m_bInReload = 0xd48;
   public const nint m_bReloadVisuallyComplete = 0xd49;
   public const nint m_flDroppedAtTime = 0xd4c;
   public const nint m_bIsHauledBack = 0xd50;
   public const nint m_bSilencerOn = 0xd51;
   public const nint m_flTimeSilencerSwitchComplete = 0xd54;
   public const nint m_iOriginalTeamNumber = 0xd58;
   public const nint m_flNextAttackRenderTimeOffset = 0xd5c;
   public const nint m_bCanBePickedUp = 0xd68;
   public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xd69;
   public const nint m_nextOwnerTouchTime = 0xd6c;
   public const nint m_nextPrevOwnerTouchTime = 0xd70;
   public const nint m_hPrevOwner = 0xd74;
   public const nint m_nDropTick = 0xd78;
   public const nint m_donated = 0xd9c;
   public const nint m_fLastShotTime = 0xda0;
   public const nint m_bWasOwnedByCT = 0xda4;
   public const nint m_bWasOwnedByTerrorist = 0xda5;
   public const nint m_bFiredOutOfAmmoEvent = 0xda6;
   public const nint m_numRemoveUnownedWeaponThink = 0xda8;
   public const nint m_IronSightController = 0xdb0;
   public const nint m_iIronSightMode = 0xdc8;
   public const nint m_flLastLOSTraceFailureTime = 0xdcc;
   public const nint m_iNumEmptyAttacks = 0xdd0;

}

public static class CCSWeaponBaseGun {

   public const nint m_zoomLevel = 0xdd8;
   public const nint m_iBurstShotsRemaining = 0xddc;
   public const nint m_silencedModelIndex = 0xde8;
   public const nint m_inPrecache = 0xdec;
   public const nint m_bNeedsBoltAction = 0xded;
   public const nint m_bSkillReloadAvailable = 0xdee;
   public const nint m_bSkillReloadLiftedReloadKey = 0xdef;
   public const nint m_bSkillBoltInterruptAvailable = 0xdf0;
   public const nint m_bSkillBoltLiftedFireKey = 0xdf1;

}

public static class CC4 {

   public const nint m_vecLastValidPlayerHeldPosition = 0xdd8;
   public const nint m_vecLastValidDroppedPosition = 0xde4;
   public const nint m_bDoValidDroppedPositionCheck = 0xdf0;
   public const nint m_bStartedArming = 0xdf1;
   public const nint m_fArmedTime = 0xdf4;
   public const nint m_bBombPlacedAnimation = 0xdf8;
   public const nint m_bIsPlantingViaUse = 0xdf9;
   public const nint m_entitySpottedState = 0xe00;
   public const nint m_nSpotRules = 0xe18;
   public const nint m_bPlayedArmingBeeps = 0xe1c;
   public const nint m_bBombPlanted = 0xe23;
   public const nint m_bDroppedFromDeath = 0xe24;

}

public static class CWeaponTaser {

   public const nint m_fFireTime = 0xdf8;

}

public static class CMelee {

   public const nint m_flThrowAt = 0xdd8;
   public const nint m_hThrower = 0xddc;
   public const nint m_bDidThrowDamage = 0xde0;

}

public static class CWeaponShield {

   public const nint m_flBulletDamageAbsorbed = 0xdf8;
   public const nint m_flLastBulletHitSoundTime = 0xdfc;
   public const nint m_flDisplayHealth = 0xe00;

}

public static class CMolotovProjectile {

   public const nint m_bIsIncGrenade = 0xa28;
   public const nint m_bDetonated = 0xa34;
   public const nint m_stillTimer = 0xa38;
   public const nint m_bHasBouncedOffPlayer = 0xb18;

}

public static class CDecoyProjectile {

   public const nint m_shotsRemaining = 0xa30;
   public const nint m_fExpireTime = 0xa34;
   public const nint m_decoyWeaponDefIndex = 0xa40;

}

public static class CSmokeGrenadeProjectile {

   public const nint m_nSmokeEffectTickBegin = 0xa40;
   public const nint m_bDidSmokeEffect = 0xa44;
   public const nint m_nRandomSeed = 0xa48;
   public const nint m_vSmokeColor = 0xa4c;
   public const nint m_vSmokeDetonationPos = 0xa58;
   public const nint m_VoxelFrameData = 0xa68;
   public const nint m_flLastBounce = 0xa80;
   public const nint m_fllastSimulationTime = 0xa84;

}

public static class CBaseCSGrenade {

   public const nint m_bRedraw = 0xdf8;
   public const nint m_bIsHeldByPlayer = 0xdf9;
   public const nint m_bPinPulled = 0xdfa;
   public const nint m_bJumpThrow = 0xdfb;
   public const nint m_eThrowStatus = 0xdfc;
   public const nint m_fThrowTime = 0xe00;
   public const nint m_flThrowStrength = 0xe04;
   public const nint m_flThrowStrengthApproach = 0xe08;
   public const nint m_fDropTime = 0xe0c;

}

public static class CWeaponBaseItem {

   public const nint m_SequenceCompleteTimer = 0xdd8;
   public const nint m_bRedraw = 0xdf0;

}

public static class CFists {

   public const nint m_bPlayingUninterruptableAct = 0xdd8;
   public const nint m_nUninterruptableActivity = 0xddc;
   public const nint m_bRestorePrevWep = 0xde0;
   public const nint m_hWeaponBeforePrevious = 0xde4;
   public const nint m_hWeaponPrevious = 0xde8;
   public const nint m_bDelayedHardPunchIncoming = 0xdec;
   public const nint m_bDestroyAfterTaunt = 0xded;

}

public static class CCSPlayerPawnBase {

   public const nint m_CTouchExpansionComponent = 0xb60;
   public const nint m_pPingServices = 0xbb0;
   public const nint m_pViewModelServices = 0xbb8;
   public const nint m_iDisplayHistoryBits = 0xbc0;
   public const nint m_flLastAttackedTeammate = 0xbc4;
   public const nint m_hOriginalController = 0xbc8;
   public const nint m_blindUntilTime = 0xbcc;
   public const nint m_blindStartTime = 0xbd0;
   public const nint m_allowAutoFollowTime = 0xbd4;
   public const nint m_entitySpottedState = 0xbd8;
   public const nint m_nSpotRules = 0xbf0;
   public const nint m_iPlayerState = 0xbf4;
   public const nint m_chickenIdleSoundTimer = 0xc00;
   public const nint m_chickenJumpSoundTimer = 0xc18;
   public const nint m_vecLastBookmarkedPosition = 0xcd0;
   public const nint m_flLastDistanceTraveledNotice = 0xcdc;
   public const nint m_flAccumulatedDistanceTraveled = 0xce0;
   public const nint m_flLastFriendlyFireDamageReductionRatio = 0xce4;
   public const nint m_bRespawning = 0xce8;
   public const nint m_nLastPickupPriority = 0xcec;
   public const nint m_flLastPickupPriorityTime = 0xcf0;
   public const nint m_bIsScoped = 0xcf4;
   public const nint m_bIsWalking = 0xcf5;
   public const nint m_bResumeZoom = 0xcf6;
   public const nint m_bIsDefusing = 0xcf7;
   public const nint m_bIsGrabbingHostage = 0xcf8;
   public const nint m_iBlockingUseActionInProgress = 0xcfc;
   public const nint m_fImmuneToGunGameDamageTime = 0xd00;
   public const nint m_bGunGameImmunity = 0xd04;
   public const nint m_unTotalRoundDamageDealt = 0xd08;
   public const nint m_fMolotovDamageTime = 0xd0c;
   public const nint m_bHasMovedSinceSpawn = 0xd10;
   public const nint m_bCanMoveDuringFreezePeriod = 0xd11;
   public const nint m_flGuardianTooFarDistFrac = 0xd14;
   public const nint m_flNextGuardianTooFarHurtTime = 0xd18;
   public const nint m_flDetectedByEnemySensorTime = 0xd1c;
   public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0xd20;
   public const nint m_flLastEquippedHelmetTime = 0xd24;
   public const nint m_flLastEquippedArmorTime = 0xd28;
   public const nint m_nHeavyAssaultSuitCooldownRemaining = 0xd2c;
   public const nint m_bResetArmorNextSpawn = 0xd30;
   public const nint m_flLastBumpMineBumpTime = 0xd34;
   public const nint m_flEmitSoundTime = 0xd38;
   public const nint m_iNumSpawns = 0xd3c;
   public const nint m_iShouldHaveCash = 0xd40;
   public const nint m_bInvalidSteamLogonDelayed = 0xd44;
   public const nint m_flLastAction = 0xd48;
   public const nint m_flNameChangeHistory = 0xd4c;
   public const nint m_fLastGivenDefuserTime = 0xd60;
   public const nint m_fLastGivenBombTime = 0xd64;
   public const nint m_bHasNightVision = 0xd68;
   public const nint m_bNightVisionOn = 0xd69;
   public const nint m_fNextRadarUpdateTime = 0xd6c;
   public const nint m_flLastMoneyUpdateTime = 0xd70;
   public const nint m_MenuStringBuffer = 0xd74;
   public const nint m_fIntroCamTime = 0x1174;
   public const nint m_nMyCollisionGroup = 0x1178;
   public const nint m_bInNoDefuseArea = 0x117c;
   public const nint m_bKilledByTaser = 0x117d;
   public const nint m_iMoveState = 0x1180;
   public const nint m_grenadeParameterStashTime = 0x1184;
   public const nint m_bGrenadeParametersStashed = 0x1188;
   public const nint m_angStashedShootAngles = 0x118c;
   public const nint m_vecStashedGrenadeThrowPosition = 0x1198;
   public const nint m_vecStashedVelocity = 0x11a4;
   public const nint m_angShootAngleHistory = 0x11b0;
   public const nint m_vecThrowPositionHistory = 0x11c8;
   public const nint m_vecVelocityHistory = 0x11e0;
   public const nint m_bDiedAirborne = 0x11f8;
   public const nint m_iBombSiteIndex = 0x11fc;
   public const nint m_nWhichBombZone = 0x1200;
   public const nint m_bInBombZoneTrigger = 0x1204;
   public const nint m_bWasInBombZoneTrigger = 0x1205;
   public const nint m_iDirection = 0x1208;
   public const nint m_iShotsFired = 0x120c;
   public const nint m_ArmorValue = 0x1210;
   public const nint m_flFlinchStack = 0x1214;
   public const nint m_flVelocityModifier = 0x1218;
   public const nint m_flHitHeading = 0x121c;
   public const nint m_nHitBodyPart = 0x1220;
   public const nint m_iHostagesKilled = 0x1224;
   public const nint m_vecTotalBulletForce = 0x1228;
   public const nint m_flFlashDuration = 0x1234;
   public const nint m_flFlashMaxAlpha = 0x1238;
   public const nint m_flProgressBarStartTime = 0x123c;
   public const nint m_iProgressBarDuration = 0x1240;
   public const nint m_bWaitForNoAttack = 0x1244;
   public const nint m_flLowerBodyYawTarget = 0x1248;
   public const nint m_bStrafing = 0x124c;
   public const nint m_lastStandingPos = 0x1250;
   public const nint m_ignoreLadderJumpTime = 0x125c;
   public const nint m_ladderSurpressionTimer = 0x1260;
   public const nint m_lastLadderNormal = 0x1278;
   public const nint m_lastLadderPos = 0x1284;
   public const nint m_thirdPersonHeading = 0x1290;
   public const nint m_flSlopeDropOffset = 0x129c;
   public const nint m_flSlopeDropHeight = 0x12a0;
   public const nint m_vHeadConstraintOffset = 0x12a4;
   public const nint m_iLastWeaponFireUsercmd = 0x12b8;
   public const nint m_angEyeAngles = 0x12bc;
   public const nint m_bVCollisionInitted = 0x12c8;
   public const nint m_storedSpawnPosition = 0x12cc;
   public const nint m_storedSpawnAngle = 0x12d8;
   public const nint m_bIsSpawning = 0x12e4;
   public const nint m_bHideTargetID = 0x12e5;
   public const nint m_nNumDangerZoneDamageHits = 0x12e8;
   public const nint m_bHud_MiniScoreHidden = 0x12ec;
   public const nint m_bHud_RadarHidden = 0x12ed;
   public const nint m_nLastKillerIndex = 0x12f0;
   public const nint m_nLastConcurrentKilled = 0x12f4;
   public const nint m_nDeathCamMusic = 0x12f8;
   public const nint m_iAddonBits = 0x12fc;
   public const nint m_iPrimaryAddon = 0x1300;
   public const nint m_iSecondaryAddon = 0x1304;
   public const nint m_currentDeafnessFilter = 0x1308;
   public const nint m_NumEnemiesKilledThisSpawn = 0x130c;
   public const nint m_NumEnemiesKilledThisRound = 0x1310;
   public const nint m_NumEnemiesAtRoundStart = 0x1314;
   public const nint m_wasNotKilledNaturally = 0x1318;
   public const nint m_vecPlayerPatchEconIndices = 0x131c;
   public const nint m_iDeathFlags = 0x1330;
   public const nint m_hPet = 0x1334;
   public const nint m_unCurrentEquipmentValue = 0x1500;
   public const nint m_unRoundStartEquipmentValue = 0x1502;
   public const nint m_unFreezetimeEndEquipmentValue = 0x1504;
   public const nint m_nSurvivalTeamNumber = 0x1508;
   public const nint m_bHasDeathInfo = 0x150c;
   public const nint m_flDeathInfoTime = 0x1510;
   public const nint m_vecDeathInfoOrigin = 0x1514;
   public const nint m_bKilledByHeadshot = 0x1520;
   public const nint m_LastHitBox = 0x1524;
   public const nint m_LastHealth = 0x1528;
   public const nint m_flLastCollisionCeiling = 0x152c;
   public const nint m_flLastCollisionCeilingChangeTime = 0x1530;
   public const nint m_pBot = 0x1538;
   public const nint m_bBotAllowActive = 0x1540;
   public const nint m_bCommittingSuicideOnTeamChange = 0x1541;

}

public static class CCSPlayerPawn {

   public const nint m_pBulletServices = 0x1548;
   public const nint m_pHostageServices = 0x1550;
   public const nint m_pBuyServices = 0x1558;
   public const nint m_pActionTrackingServices = 0x1560;
   public const nint m_pRadioServices = 0x1568;
   public const nint m_pDamageReactServices = 0x1570;
   public const nint m_nCharacterDefIndex = 0x1578;
   public const nint m_hPreviousModel = 0x1580;
   public const nint m_bHasFemaleVoice = 0x1588;
   public const nint m_strVOPrefix = 0x1590;
   public const nint m_szLastPlaceName = 0x1598;
   public const nint m_bInBuyZone = 0x1658;
   public const nint m_bWasInBuyZone = 0x1659;
   public const nint m_bInHostageRescueZone = 0x165a;
   public const nint m_bInBombZone = 0x165b;
   public const nint m_bWasInHostageRescueZone = 0x165c;
   public const nint m_iRetakesOffering = 0x1660;
   public const nint m_iRetakesOfferingCard = 0x1664;
   public const nint m_bRetakesHasDefuseKit = 0x1668;
   public const nint m_bRetakesMVPLastRound = 0x1669;
   public const nint m_iRetakesMVPBoostItem = 0x166c;
   public const nint m_RetakesMVPBoostExtraUtility = 0x1670;
   public const nint m_flHealthShotBoostExpirationTime = 0x1674;
   public const nint m_flLandseconds = 0x1678;
   public const nint m_aimPunchAngle = 0x167c;
   public const nint m_aimPunchAngleVel = 0x1688;
   public const nint m_aimPunchTickBase = 0x1694;
   public const nint m_aimPunchTickFraction = 0x1698;
   public const nint m_aimPunchCache = 0x16a0;
   public const nint m_bIsBuyMenuOpen = 0x16b8;
   public const nint m_xLastHeadBoneTransform = 0x1c30;
   public const nint m_bLastHeadBoneTransformIsValid = 0x1c50;
   public const nint m_lastLandTime = 0x1c54;
   public const nint m_bOnGroundLastTick = 0x1c58;
   public const nint m_iPlayerLocked = 0x1c5c;
   public const nint m_flTimeOfLastInjury = 0x1c64;
   public const nint m_flNextSprayDecalTime = 0x1c68;
   public const nint m_bNextSprayDecalTimeExpedited = 0x1c6c;
   public const nint m_nRagdollDamageBone = 0x1c70;
   public const nint m_vRagdollDamageForce = 0x1c74;
   public const nint m_vRagdollDamagePosition = 0x1c80;
   public const nint m_szRagdollDamageWeaponName = 0x1c8c;
   public const nint m_bRagdollDamageHeadshot = 0x1ccc;
   public const nint m_EconGloves = 0x1cd0;
   public const nint m_qDeathEyeAngles = 0x1f48;
   public const nint m_bSkipOneHeadConstraintUpdate = 0x1f54;

}

public static class CHostageExpresserShim {

   public const nint m_pExpresser = 0x9d0;

}

public static class CHostage {

   public const nint m_OnHostageBeginGrab = 0x9e8;
   public const nint m_OnFirstPickedUp = 0xa10;
   public const nint m_OnDroppedNotRescued = 0xa38;
   public const nint m_OnRescued = 0xa60;
   public const nint m_entitySpottedState = 0xa88;
   public const nint m_nSpotRules = 0xaa0;
   public const nint m_uiHostageSpawnExclusionGroupMask = 0xaa4;
   public const nint m_nHostageSpawnRandomFactor = 0xaa8;
   public const nint m_bRemove = 0xaac;
   public const nint m_vel = 0xab0;
   public const nint m_isRescued = 0xabc;
   public const nint m_jumpedThisFrame = 0xabd;
   public const nint m_nHostageState = 0xac0;
   public const nint m_leader = 0xac4;
   public const nint m_lastLeader = 0xac8;
   public const nint m_reuseTimer = 0xad0;
   public const nint m_hasBeenUsed = 0xae8;
   public const nint m_accel = 0xaec;
   public const nint m_isRunning = 0xaf8;
   public const nint m_isCrouching = 0xaf9;
   public const nint m_jumpTimer = 0xb00;
   public const nint m_isWaitingForLeader = 0xb18;
   public const nint m_repathTimer = 0x2b28;
   public const nint m_inhibitDoorTimer = 0x2b40;
   public const nint m_inhibitObstacleAvoidanceTimer = 0x2bd0;
   public const nint m_wiggleTimer = 0x2bf0;
   public const nint m_isAdjusted = 0x2c0c;
   public const nint m_bHandsHaveBeenCut = 0x2c0d;
   public const nint m_hHostageGrabber = 0x2c10;
   public const nint m_fLastGrabTime = 0x2c14;
   public const nint m_vecPositionWhenStartedDroppingToGround = 0x2c18;
   public const nint m_vecGrabbedPos = 0x2c24;
   public const nint m_flRescueStartTime = 0x2c30;
   public const nint m_flGrabSuccessTime = 0x2c34;
   public const nint m_flDropStartTime = 0x2c38;
   public const nint m_nApproachRewardPayouts = 0x2c3c;
   public const nint m_nPickupEventCount = 0x2c40;
   public const nint m_vecSpawnGroundPos = 0x2c44;

}

public static class CRangeFloat {

   public const nint m_pValue = 0x0;

}

public static class CRangeInt {

   public const nint m_pValue = 0x0;

}

public static class Extent {

   public const nint lo = 0x0;
   public const nint hi = 0xc;

}

public static class CNavVolumeVector {

   public const nint m_bHasBeenPreFiltered = 0x78;

}

public static class CNavVolumeSphere {

   public const nint m_vCenter = 0x70;
   public const nint m_flRadius = 0x7c;

}

public static class CNavVolumeSphericalShell {

   public const nint m_flRadiusInner = 0x80;

}

public static class CNavHullVData {

   public const nint m_bAgentEnabled = 0x0;
   public const nint m_agentRadius = 0x4;
   public const nint m_agentHeight = 0x8;
   public const nint m_agentShortHeightEnabled = 0xc;
   public const nint m_agentShortHeight = 0x10;
   public const nint m_agentMaxClimb = 0x14;
   public const nint m_agentMaxSlope = 0x18;
   public const nint m_agentMaxJumpDownDist = 0x1c;
   public const nint m_agentMaxJumpHorizDistBase = 0x20;
   public const nint m_agentMaxJumpUpDist = 0x24;
   public const nint m_agentBorderErosion = 0x28;

}

public static class CNavHullPresetVData {

   public const nint m_vecNavHulls = 0x0;

}

public static class CEntityIdentity {

   public const nint m_nameStringableIndex = 0x14;
   public const nint m_name = 0x18;
   public const nint m_designerName = 0x20;
   public const nint m_flags = 0x30;
   public const nint m_worldGroupId = 0x38;
   public const nint m_fDataObjectTypes = 0x3c;
   public const nint m_PathIndex = 0x40;
   public const nint m_pPrev = 0x58;
   public const nint m_pNext = 0x60;
   public const nint m_pPrevByClass = 0x68;
   public const nint m_pNextByClass = 0x70;

}

public static class CEntityInstance {

   public const nint m_iszPrivateVScripts = 0x8;
   public const nint m_pEntity = 0x10;
   public const nint m_CScriptComponent = 0x28;

}

public static class CScriptComponent {

   public const nint m_scriptClassName = 0x30;

}

public static class CBodyComponent {

   public const nint m_pSceneNode = 0x8;
   public const nint __m_pChainEntity = 0x20;

}

public static class CBodyComponentPoint {

   public const nint m_sceneNode = 0x50;
   public const nint __m_pChainEntity = 0x1a0;

}

public static class CBodyComponentSkeletonInstance {

   public const nint m_skeletonInstance = 0x50;
   public const nint __m_pChainEntity = 0x440;

}

public static class CHitboxComponent {

   public const nint m_bvDisabledHitGroups = 0x24;

}

public static class CLightComponent {

   public const nint __m_pChainEntity = 0x48;
   public const nint m_Color = 0x85;
   public const nint m_SecondaryColor = 0x89;
   public const nint m_flBrightness = 0x90;
   public const nint m_flBrightnessScale = 0x94;
   public const nint m_flBrightnessMult = 0x98;
   public const nint m_flRange = 0x9c;
   public const nint m_flFalloff = 0xa0;
   public const nint m_flAttenuation0 = 0xa4;
   public const nint m_flAttenuation1 = 0xa8;
   public const nint m_flAttenuation2 = 0xac;
   public const nint m_flTheta = 0xb0;
   public const nint m_flPhi = 0xb4;
   public const nint m_hLightCookie = 0xb8;
   public const nint m_nCascades = 0xc0;
   public const nint m_nCastShadows = 0xc4;
   public const nint m_nShadowWidth = 0xc8;
   public const nint m_nShadowHeight = 0xcc;
   public const nint m_bRenderDiffuse = 0xd0;
   public const nint m_nRenderSpecular = 0xd4;
   public const nint m_bRenderTransmissive = 0xd8;
   public const nint m_flOrthoLightWidth = 0xdc;
   public const nint m_flOrthoLightHeight = 0xe0;
   public const nint m_nStyle = 0xe4;
   public const nint m_Pattern = 0xe8;
   public const nint m_nCascadeRenderStaticObjects = 0xf0;
   public const nint m_flShadowCascadeCrossFade = 0xf4;
   public const nint m_flShadowCascadeDistanceFade = 0xf8;
   public const nint m_flShadowCascadeDistance0 = 0xfc;
   public const nint m_flShadowCascadeDistance1 = 0x100;
   public const nint m_flShadowCascadeDistance2 = 0x104;
   public const nint m_flShadowCascadeDistance3 = 0x108;
   public const nint m_nShadowCascadeResolution0 = 0x10c;
   public const nint m_nShadowCascadeResolution1 = 0x110;
   public const nint m_nShadowCascadeResolution2 = 0x114;
   public const nint m_nShadowCascadeResolution3 = 0x118;
   public const nint m_bUsesBakedShadowing = 0x11c;
   public const nint m_nShadowPriority = 0x120;
   public const nint m_nBakedShadowIndex = 0x124;
   public const nint m_bRenderToCubemaps = 0x128;
   public const nint m_LightGroups = 0x130;
   public const nint m_nDirectLight = 0x138;
   public const nint m_nIndirectLight = 0x13c;
   public const nint m_flFadeMinDist = 0x140;
   public const nint m_flFadeMaxDist = 0x144;
   public const nint m_flShadowFadeMinDist = 0x148;
   public const nint m_flShadowFadeMaxDist = 0x14c;
   public const nint m_bEnabled = 0x150;
   public const nint m_bFlicker = 0x151;
   public const nint m_bPrecomputedFieldsValid = 0x152;
   public const nint m_vPrecomputedBoundsMins = 0x154;
   public const nint m_vPrecomputedBoundsMaxs = 0x160;
   public const nint m_vPrecomputedOBBOrigin = 0x16c;
   public const nint m_vPrecomputedOBBAngles = 0x178;
   public const nint m_vPrecomputedOBBExtent = 0x184;
   public const nint m_flPrecomputedMaxRange = 0x190;
   public const nint m_nFogLightingMode = 0x194;
   public const nint m_flFogContributionStength = 0x198;
   public const nint m_flNearClipPlane = 0x19c;
   public const nint m_SkyColor = 0x1a0;
   public const nint m_flSkyIntensity = 0x1a4;
   public const nint m_SkyAmbientBounce = 0x1a8;
   public const nint m_bUseSecondaryColor = 0x1ac;
   public const nint m_bMixedShadows = 0x1ad;
   public const nint m_flLightStyleStartTime = 0x1b0;
   public const nint m_flCapsuleLength = 0x1b4;
   public const nint m_flMinRoughness = 0x1b8;
   public const nint m_bPvsModifyEntity = 0x1c8;

}

public static class CNetworkTransmitComponent {

   public const nint m_nTransmitStateOwnedCounter = 0x16c;

}

public static class CRenderComponent {

   public const nint __m_pChainEntity = 0x10;
   public const nint m_bIsRenderingWithViewModels = 0x50;
   public const nint m_nSplitscreenFlags = 0x54;
   public const nint m_bEnableRendering = 0x60;
   public const nint m_bInterpolationReadyToDraw = 0xb0;

}

public static class AnimationUpdateListHandle_t {

   public const nint m_Value = 0x0;

}

public static class CAnimGraphTagRef {

   public const nint m_nTagIndex = 0x0;
   public const nint m_tagName = 0x10;

}

public static class CBuoyancyHelper {

   public const nint m_flFluidDensity = 0x18;

}

public static class CSkillFloat {

   public const nint m_pValue = 0x0;

}

public static class CSkillInt {

   public const nint m_pValue = 0x0;

}

public static class CSkillDamage {

   public const nint m_flDamage = 0x0;
   public const nint m_flPhysicsForceDamage = 0x10;

}

public static class CRemapFloat {

   public const nint m_pValue = 0x0;

}

public static class CScriptUniformRandomStream {

   public const nint m_hScriptScope = 0x8;
   public const nint m_nInitialSeed = 0x9c;

}

public static class ViewAngleServerChange_t {

   public const nint nType = 0x30;
   public const nint qAngle = 0x34;
   public const nint nIndex = 0x40;

}

public static class CBreakableStageHelper {

   public const nint m_nCurrentStage = 0x8;
   public const nint m_nStageCount = 0xc;

}

public static class CommandToolCommand_t {

   public const nint m_bEnabled = 0x0;
   public const nint m_bOpened = 0x1;
   public const nint m_InternalId = 0x4;
   public const nint m_ShortName = 0x8;
   public const nint m_ExecMode = 0x10;
   public const nint m_SpawnGroup = 0x18;
   public const nint m_PeriodicExecDelay = 0x20;
   public const nint m_SpecType = 0x24;
   public const nint m_EntitySpec = 0x28;
   public const nint m_Commands = 0x30;
   public const nint m_SetDebugBits = 0x38;
   public const nint m_ClearDebugBits = 0x40;

}

public static class CPlayerPawnComponent {

   public const nint __m_pChainEntity = 0x8;

}

public static class CPlayerControllerComponent {

   public const nint __m_pChainEntity = 0x8;

}

public static class audioparams_t {

   public const nint localSound = 0x8;
   public const nint soundscapeIndex = 0x68;
   public const nint localBits = 0x6c;
   public const nint soundscapeEntityListIndex = 0x70;
   public const nint soundEventHash = 0x74;

}

public static class CPlayer_CameraServices {

   public const nint m_vecCsViewPunchAngle = 0x40;
   public const nint m_nCsViewPunchAngleTick = 0x4c;
   public const nint m_flCsViewPunchAngleTickRatio = 0x50;
   public const nint m_PlayerFog = 0x58;
   public const nint m_hColorCorrectionCtrl = 0x98;
   public const nint m_hViewEntity = 0x9c;
   public const nint m_hTonemapController = 0xa0;
   public const nint m_audio = 0xa8;
   public const nint m_PostProcessingVolumes = 0x120;
   public const nint m_flOldPlayerZ = 0x138;
   public const nint m_flOldPlayerViewOffsetZ = 0x13c;
   public const nint m_hTriggerSoundscapeList = 0x158;

}

public static class CPlayer_MovementServices {

   public const nint m_nImpulse = 0x40;
   public const nint m_nButtons = 0x48;
   public const nint m_nQueuedButtonDownMask = 0x68;
   public const nint m_nQueuedButtonChangeMask = 0x70;
   public const nint m_nButtonDoublePressed = 0x78;
   public const nint m_pButtonPressedCmdNumber = 0x80;
   public const nint m_nLastCommandNumberProcessed = 0x180;
   public const nint m_nToggleButtonDownMask = 0x188;
   public const nint m_flMaxspeed = 0x190;
   public const nint m_arrForceSubtickMoveWhen = 0x194;
   public const nint m_flForwardMove = 0x1a4;
   public const nint m_flLeftMove = 0x1a8;
   public const nint m_flUpMove = 0x1ac;
   public const nint m_vecLastMovementImpulses = 0x1b0;
   public const nint m_vecOldViewAngles = 0x1bc;

}

public static class CPlayer_MovementServices_Humanoid {

   public const nint m_flStepSoundTime = 0x1d0;
   public const nint m_flFallVelocity = 0x1d4;
   public const nint m_bInCrouch = 0x1d8;
   public const nint m_nCrouchState = 0x1dc;
   public const nint m_flCrouchTransitionStartTime = 0x1e0;
   public const nint m_bDucked = 0x1e4;
   public const nint m_bDucking = 0x1e5;
   public const nint m_bInDuckJump = 0x1e6;
   public const nint m_groundNormal = 0x1e8;
   public const nint m_flSurfaceFriction = 0x1f4;
   public const nint m_surfaceProps = 0x1f8;
   public const nint m_nStepside = 0x208;
   public const nint m_iTargetVolume = 0x20c;
   public const nint m_vecSmoothedVelocity = 0x210;

}

public static class CPlayer_ObserverServices {

   public const nint m_iObserverMode = 0x40;
   public const nint m_hObserverTarget = 0x44;
   public const nint m_iObserverLastMode = 0x48;
   public const nint m_bForcedObserverMode = 0x4c;

}

public static class CPlayer_WeaponServices {

   public const nint m_bAllowSwitchToNoWeapon = 0x40;
   public const nint m_hMyWeapons = 0x48;
   public const nint m_hActiveWeapon = 0x60;
   public const nint m_hLastWeapon = 0x64;
   public const nint m_iAmmo = 0x68;
   public const nint m_bPreventWeaponPickup = 0xa8;

}

public static class AmmoTypeInfo_t {

   public const nint m_nMaxCarry = 0x10;
   public const nint m_nSplashSize = 0x1c;
   public const nint m_nFlags = 0x24;
   public const nint m_flMass = 0x28;
   public const nint m_flSpeed = 0x2c;

}

public static class CBodyComponentBaseAnimGraph {

   public const nint m_animationController = 0x470;
   public const nint __m_pChainEntity = 0x750;

}

public static class EntityRenderAttribute_t {

   public const nint m_ID = 0x30;
   public const nint m_Values = 0x34;

}

public static class ModelConfigHandle_t {

   public const nint m_Value = 0x0;

}

public static class ActiveModelConfig_t {

   public const nint m_Handle = 0x28;
   public const nint m_Name = 0x30;
   public const nint m_AssociatedEntities = 0x38;
   public const nint m_AssociatedEntityNames = 0x50;

}

public static class CBodyComponentBaseModelEntity {

   public const nint __m_pChainEntity = 0x470;

}

public static class CNetworkOriginCellCoordQuantizedVector {

   public const nint m_cellX = 0x10;
   public const nint m_cellY = 0x12;
   public const nint m_cellZ = 0x14;
   public const nint m_nOutsideWorld = 0x16;
   public const nint m_vecX = 0x18;
   public const nint m_vecY = 0x20;
   public const nint m_vecZ = 0x28;

}

public static class CNetworkOriginQuantizedVector {

   public const nint m_vecX = 0x10;
   public const nint m_vecY = 0x18;
   public const nint m_vecZ = 0x20;

}

public static class CNetworkVelocityVector {

   public const nint m_vecX = 0x10;
   public const nint m_vecY = 0x18;
   public const nint m_vecZ = 0x20;

}

public static class CNetworkViewOffsetVector {

   public const nint m_vecX = 0x10;
   public const nint m_vecY = 0x18;
   public const nint m_vecZ = 0x20;

}

public static class GameTime_t {

   public const nint m_Value = 0x0;

}

public static class GameTick_t {

   public const nint m_Value = 0x0;

}

public static class CGameSceneNodeHandle {

   public const nint m_hOwner = 0x8;
   public const nint m_name = 0xc;

}

public static class CGameSceneNode {

   public const nint m_nodeToWorld = 0x10;
   public const nint m_pOwner = 0x30;
   public const nint m_pParent = 0x38;
   public const nint m_pChild = 0x40;
   public const nint m_pNextSibling = 0x48;
   public const nint m_hParent = 0x70;
   public const nint m_vecOrigin = 0x80;
   public const nint m_angRotation = 0xb8;
   public const nint m_flScale = 0xc4;
   public const nint m_vecAbsOrigin = 0xc8;
   public const nint m_angAbsRotation = 0xd4;
   public const nint m_flAbsScale = 0xe0;
   public const nint m_nParentAttachmentOrBone = 0xe4;
   public const nint m_bDebugAbsOriginChanges = 0xe6;
   public const nint m_bDormant = 0xe7;
   public const nint m_bForceParentToBeNetworked = 0xe8;
   public const nint m_bDirtyHierarchy = 0x0;
   public const nint m_bDirtyBoneMergeInfo = 0x0;
   public const nint m_bNetworkedPositionChanged = 0x0;
   public const nint m_bNetworkedAnglesChanged = 0x0;
   public const nint m_bNetworkedScaleChanged = 0x0;
   public const nint m_bWillBeCallingPostDataUpdate = 0x0;
   public const nint m_bNotifyBoneTransformsChanged = 0x0;
   public const nint m_bBoneMergeFlex = 0x0;
   public const nint m_nLatchAbsOrigin = 0x0;
   public const nint m_bDirtyBoneMergeBoneToRoot = 0x0;
   public const nint m_nHierarchicalDepth = 0xeb;
   public const nint m_nHierarchyType = 0xec;
   public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xed;
   public const nint m_name = 0xf0;
   public const nint m_hierarchyAttachName = 0x130;
   public const nint m_flZOffset = 0x134;
   public const nint m_vRenderOrigin = 0x138;

}

public static class CInButtonState {

   public const nint m_pButtonStates = 0x8;

}

public static class CSkeletonAnimationController {

   public const nint m_pSkeletonInstance = 0x8;

}

public static class CNetworkedSequenceOperation {

   public const nint m_hSequence = 0x8;
   public const nint m_flPrevCycle = 0xc;
   public const nint m_flCycle = 0x10;
   public const nint m_flWeight = 0x14;
   public const nint m_bSequenceChangeNetworked = 0x1c;
   public const nint m_bDiscontinuity = 0x1d;
   public const nint m_flPrevCycleFromDiscontinuity = 0x20;
   public const nint m_flPrevCycleForAnimEventDetection = 0x24;

}

public static class CModelState {

   public const nint m_hModel = 0xa0;
   public const nint m_ModelName = 0xa8;
   public const nint m_bClientClothCreationSuppressed = 0xe8;
   public const nint m_MeshGroupMask = 0x180;
   public const nint m_nIdealMotionType = 0x222;
   public const nint m_nForceLOD = 0x223;
   public const nint m_nClothUpdateFlags = 0x224;

}

public static class CSkeletonInstance {

   public const nint m_modelState = 0x160;
   public const nint m_bIsAnimationEnabled = 0x390;
   public const nint m_bUseParentRenderBounds = 0x391;
   public const nint m_bDisableSolidCollisionsForHierarchy = 0x392;
   public const nint m_bDirtyMotionType = 0x0;
   public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0;
   public const nint m_materialGroup = 0x394;
   public const nint m_nHitboxSet = 0x398;

}

public static class IntervalTimer {

   public const nint m_timestamp = 0x8;
   public const nint m_nWorldGroupId = 0xc;

}

public static class CountdownTimer {

   public const nint m_duration = 0x8;
   public const nint m_timestamp = 0xc;
   public const nint m_timescale = 0x10;
   public const nint m_nWorldGroupId = 0x14;

}

public static class EngineCountdownTimer {

   public const nint m_duration = 0x8;
   public const nint m_timestamp = 0xc;
   public const nint m_timescale = 0x10;

}

public static class CTimeline {

   public const nint m_flValues = 0x10;
   public const nint m_nValueCounts = 0x110;
   public const nint m_nBucketCount = 0x210;
   public const nint m_flInterval = 0x214;
   public const nint m_flFinalValue = 0x218;
   public const nint m_nCompressionType = 0x21c;
   public const nint m_bStopped = 0x220;

}

public static class CAnimGraphNetworkedVariables {

   public const nint m_PredNetBoolVariables = 0x8;
   public const nint m_PredNetByteVariables = 0x20;
   public const nint m_PredNetUInt16Variables = 0x38;
   public const nint m_PredNetIntVariables = 0x50;
   public const nint m_PredNetUInt32Variables = 0x68;
   public const nint m_PredNetUInt64Variables = 0x80;
   public const nint m_PredNetFloatVariables = 0x98;
   public const nint m_PredNetVectorVariables = 0xb0;
   public const nint m_PredNetQuaternionVariables = 0xc8;
   public const nint m_OwnerOnlyPredNetBoolVariables = 0xe0;
   public const nint m_OwnerOnlyPredNetByteVariables = 0xf8;
   public const nint m_OwnerOnlyPredNetUInt16Variables = 0x110;
   public const nint m_OwnerOnlyPredNetIntVariables = 0x128;
   public const nint m_OwnerOnlyPredNetUInt32Variables = 0x140;
   public const nint m_OwnerOnlyPredNetUInt64Variables = 0x158;
   public const nint m_OwnerOnlyPredNetFloatVariables = 0x170;
   public const nint m_OwnerOnlyPredNetVectorVariables = 0x188;
   public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1a0;
   public const nint m_nBoolVariablesCount = 0x1b8;
   public const nint m_nOwnerOnlyBoolVariablesCount = 0x1bc;
   public const nint m_nRandomSeedOffset = 0x1c0;
   public const nint m_flLastTeleportTime = 0x1c4;

}

public static class ResponseFollowup {

   public const nint followup_concept = 0x0;
   public const nint followup_contexts = 0x8;
   public const nint followup_delay = 0x10;
   public const nint followup_target = 0x14;
   public const nint followup_entityiotarget = 0x1c;
   public const nint followup_entityioinput = 0x24;
   public const nint followup_entityiodelay = 0x2c;
   public const nint bFired = 0x30;

}

public static class ResponseParams {

   public const nint odds = 0x10;
   public const nint flags = 0x12;
   public const nint m_pFollowup = 0x18;

}

public static class CResponseCriteriaSet {

   public const nint m_nNumPrefixedContexts = 0x28;
   public const nint m_bOverrideOnAppend = 0x2c;

}

public static class CRR_Response {

   public const nint m_Type = 0x0;
   public const nint m_szResponseName = 0x1;
   public const nint m_szMatchingRule = 0xc1;
   public const nint m_Params = 0x148;
   public const nint m_fMatchScore = 0x168;
   public const nint m_szSpeakerContext = 0x170;
   public const nint m_szWorldContext = 0x178;
   public const nint m_Followup = 0x180;
   public const nint m_pchCriteriaNames = 0x1b8;
   public const nint m_pchCriteriaValues = 0x1d0;

}

public static class ConceptHistory_t {

   public const nint timeSpoken = 0x0;
   public const nint m_response = 0x8;

}

public static class CAI_Expresser {

   public const nint m_flStopTalkTime = 0x38;
   public const nint m_flStopTalkTimeWithoutDelay = 0x3c;
   public const nint m_flBlockedTalkTime = 0x40;
   public const nint m_voicePitch = 0x44;
   public const nint m_flLastTimeAcceptedSpeak = 0x48;
   public const nint m_bAllowSpeakingInterrupts = 0x4c;
   public const nint m_bConsiderSceneInvolvementAsSpeech = 0x4d;
   public const nint m_nLastSpokenPriority = 0x50;
   public const nint m_pOuter = 0x58;

}

public static class CResponseQueue {

   public const nint m_ExpresserTargets = 0x50;

}

public static class CResponseQueue::CDeferredResponse {

   public const nint m_contexts = 0x10;
   public const nint m_fDispatchTime = 0x40;
   public const nint m_hIssuer = 0x44;
   public const nint m_response = 0x50;
   public const nint m_bResponseValid = 0x238;

}

public static class CAI_ExpresserWithFollowup {

   public const nint m_pPostponedFollowup = 0x60;

}

public static class CMultiplayer_Expresser {

   public const nint m_bAllowMultipleScenes = 0x70;

}

public static class CCommentarySystem {

   public const nint m_bCommentaryConvarsChanging = 0x11;
   public const nint m_bCommentaryEnabledMidGame = 0x12;
   public const nint m_flNextTeleportTime = 0x14;
   public const nint m_iTeleportStage = 0x18;
   public const nint m_bCheatState = 0x1c;
   public const nint m_bIsFirstSpawnGroupToLoad = 0x1d;
   public const nint m_hCurrentNode = 0x38;
   public const nint m_hActiveCommentaryNode = 0x3c;
   public const nint m_hLastCommentaryNode = 0x40;
   public const nint m_vecNodes = 0x48;

}

public static class CPhysicsShake {

   public const nint m_force = 0x8;

}

public static class CGameScriptedMoveData {

   public const nint m_vDest = 0x0;
   public const nint m_vSrc = 0xc;
   public const nint m_angSrc = 0x18;
   public const nint m_angDst = 0x24;
   public const nint m_angCurrent = 0x30;
   public const nint m_flAngRate = 0x3c;
   public const nint m_flDuration = 0x40;
   public const nint m_flStartTime = 0x44;
   public const nint m_nPrevMoveType = 0x48;
   public const nint m_bActive = 0x49;
   public const nint m_bTeleportOnEnd = 0x4a;
   public const nint m_bEndOnDestinationReached = 0x4b;
   public const nint m_bIgnoreRotation = 0x4c;
   public const nint m_nType = 0x50;
   public const nint m_bSuccess = 0x54;
   public const nint m_nForcedCrouchState = 0x58;
   public const nint m_bIgnoreCollisions = 0x5c;

}

public static class CGameChoreoServices {

   public const nint m_hOwner = 0x8;
   public const nint m_hScriptedSequence = 0xc;
   public const nint m_scriptState = 0x10;
   public const nint m_choreoState = 0x14;
   public const nint m_flTimeStartedState = 0x18;

}

public static class HullFlags_t {

   public const nint m_bHull_Human = 0x0;
   public const nint m_bHull_SmallCentered = 0x1;
   public const nint m_bHull_WideHuman = 0x2;
   public const nint m_bHull_Tiny = 0x3;
   public const nint m_bHull_Medium = 0x4;
   public const nint m_bHull_TinyCentered = 0x5;
   public const nint m_bHull_Large = 0x6;
   public const nint m_bHull_LargeCentered = 0x7;
   public const nint m_bHull_MediumTall = 0x8;
   public const nint m_bHull_Small = 0x9;

}

public static class CConstantForceController {

   public const nint m_linear = 0xc;
   public const nint m_angular = 0x18;
   public const nint m_linearSave = 0x24;
   public const nint m_angularSave = 0x30;

}

public static class CMotorController {

   public const nint m_speed = 0x8;
   public const nint m_maxTorque = 0xc;
   public const nint m_axis = 0x10;
   public const nint m_inertiaFactor = 0x1c;

}

public static class CSoundEnvelope {

   public const nint m_current = 0x0;
   public const nint m_target = 0x4;
   public const nint m_rate = 0x8;
   public const nint m_forceupdate = 0xc;

}

public static class CCopyRecipientFilter {

   public const nint m_Flags = 0x8;
   public const nint m_Recipients = 0x10;

}

public static class CSoundPatch {

   public const nint m_pitch = 0x8;
   public const nint m_volume = 0x18;
   public const nint m_shutdownTime = 0x30;
   public const nint m_flLastTime = 0x34;
   public const nint m_iszSoundScriptName = 0x38;
   public const nint m_hEnt = 0x40;
   public const nint m_soundEntityIndex = 0x44;
   public const nint m_soundOrigin = 0x48;
   public const nint m_isPlaying = 0x54;
   public const nint m_Filter = 0x58;
   public const nint m_flCloseCaptionDuration = 0x80;
   public const nint m_bUpdatedSoundOrigin = 0x84;
   public const nint m_iszClassName = 0x88;

}

public static class CPulseCell_Value_FindEntByName {

   public const nint m_EntityType = 0x48;

}

public static class CPulseCell_Step_SetAnimGraphParam {

   public const nint m_ParamName = 0x48;

}

public static class CPulseCell_Step_EntFire {

   public const nint m_Input = 0x48;

}

public static class CPulseCell_Outflow_PlayVCD {

   public const nint m_vcdFilename = 0x48;
   public const nint m_OnFinished = 0x50;
   public const nint m_Triggers = 0x60;

}

public static class CPulseCell_Inflow_GameEvent {

   public const nint m_EventName = 0x70;

}

public static class CPulseCell_SoundEventStart {

   public const nint m_Type = 0x48;

}

public static class dynpitchvol_base_t {

   public const nint preset = 0x0;
   public const nint pitchrun = 0x4;
   public const nint pitchstart = 0x8;
   public const nint spinup = 0xc;
   public const nint spindown = 0x10;
   public const nint volrun = 0x14;
   public const nint volstart = 0x18;
   public const nint fadein = 0x1c;
   public const nint fadeout = 0x20;
   public const nint lfotype = 0x24;
   public const nint lforate = 0x28;
   public const nint lfomodpitch = 0x2c;
   public const nint lfomodvol = 0x30;
   public const nint cspinup = 0x34;
   public const nint cspincount = 0x38;
   public const nint pitch = 0x3c;
   public const nint spinupsav = 0x40;
   public const nint spindownsav = 0x44;
   public const nint pitchfrac = 0x48;
   public const nint vol = 0x4c;
   public const nint fadeinsav = 0x50;
   public const nint fadeoutsav = 0x54;
   public const nint volfrac = 0x58;
   public const nint lfofrac = 0x5c;
   public const nint lfomult = 0x60;

}

public static class ResponseContext_t {

   public const nint m_iszName = 0x0;
   public const nint m_iszValue = 0x8;
   public const nint m_fExpirationTime = 0x10;

}

public static class Relationship_t {

   public const nint disposition = 0x0;
   public const nint priority = 0x4;

}

public static class CBaseEntity {

   public const nint m_CBodyComponent = 0x30;
   public const nint m_NetworkTransmitComponent = 0x38;
   public const nint m_aThinkFunctions = 0x228;
   public const nint m_iCurrentThinkContext = 0x240;
   public const nint m_nLastThinkTick = 0x244;
   public const nint m_isSteadyState = 0x250;
   public const nint m_lastNetworkChange = 0x258;
   public const nint m_ResponseContexts = 0x268;
   public const nint m_iszResponseContext = 0x280;
   public const nint m_iHealth = 0x2a8;
   public const nint m_iMaxHealth = 0x2ac;
   public const nint m_lifeState = 0x2b0;
   public const nint m_flDamageAccumulator = 0x2b4;
   public const nint m_bTakesDamage = 0x2b8;
   public const nint m_nTakeDamageFlags = 0x2bc;
   public const nint m_MoveCollide = 0x2c1;
   public const nint m_MoveType = 0x2c2;
   public const nint m_nWaterTouch = 0x2c3;
   public const nint m_nSlimeTouch = 0x2c4;
   public const nint m_bRestoreInHierarchy = 0x2c5;
   public const nint m_target = 0x2c8;
   public const nint m_flMoveDoneTime = 0x2d0;
   public const nint m_hDamageFilter = 0x2d4;
   public const nint m_iszDamageFilterName = 0x2d8;
   public const nint m_nSubclassID = 0x2e0;
   public const nint m_flAnimTime = 0x2f0;
   public const nint m_flSimulationTime = 0x2f4;
   public const nint m_flCreateTime = 0x2f8;
   public const nint m_bClientSideRagdoll = 0x2fc;
   public const nint m_ubInterpolationFrame = 0x2fd;
   public const nint m_vPrevVPhysicsUpdatePos = 0x300;
   public const nint m_iTeamNum = 0x30c;
   public const nint m_iGlobalname = 0x310;
   public const nint m_iSentToClients = 0x318;
   public const nint m_flSpeed = 0x31c;
   public const nint m_sUniqueHammerID = 0x320;
   public const nint m_spawnflags = 0x328;
   public const nint m_nNextThinkTick = 0x32c;
   public const nint m_nSimulationTick = 0x330;
   public const nint m_OnKilled = 0x338;
   public const nint m_fFlags = 0x360;
   public const nint m_vecAbsVelocity = 0x364;
   public const nint m_vecVelocity = 0x370;
   public const nint m_vecBaseVelocity = 0x3a0;
   public const nint m_nPushEnumCount = 0x3ac;
   public const nint m_pCollision = 0x3b0;
   public const nint m_hEffectEntity = 0x3b8;
   public const nint m_hOwnerEntity = 0x3bc;
   public const nint m_fEffects = 0x3c0;
   public const nint m_hGroundEntity = 0x3c4;
   public const nint m_flFriction = 0x3c8;
   public const nint m_flElasticity = 0x3cc;
   public const nint m_flGravityScale = 0x3d0;
   public const nint m_flTimeScale = 0x3d4;
   public const nint m_flWaterLevel = 0x3d8;
   public const nint m_bSimulatedEveryTick = 0x3dc;
   public const nint m_bAnimatedEveryTick = 0x3dd;
   public const nint m_bDisableLowViolence = 0x3de;
   public const nint m_nWaterType = 0x3df;
   public const nint m_iEFlags = 0x3e0;
   public const nint m_OnUser1 = 0x3e8;
   public const nint m_OnUser2 = 0x410;
   public const nint m_OnUser3 = 0x438;
   public const nint m_OnUser4 = 0x460;
   public const nint m_iInitialTeamNum = 0x488;
   public const nint m_flNavIgnoreUntilTime = 0x48c;
   public const nint m_vecAngVelocity = 0x490;
   public const nint m_bNetworkQuantizeOriginAndAngles = 0x49c;
   public const nint m_bLagCompensate = 0x49d;
   public const nint m_flOverriddenFriction = 0x4a0;
   public const nint m_pBlocker = 0x4a4;
   public const nint m_flLocalTime = 0x4a8;
   public const nint m_flVPhysicsUpdateLocalTime = 0x4ac;

}

public static class CColorCorrection {

   public const nint m_flFadeInDuration = 0x4b0;
   public const nint m_flFadeOutDuration = 0x4b4;
   public const nint m_flStartFadeInWeight = 0x4b8;
   public const nint m_flStartFadeOutWeight = 0x4bc;
   public const nint m_flTimeStartFadeIn = 0x4c0;
   public const nint m_flTimeStartFadeOut = 0x4c4;
   public const nint m_flMaxWeight = 0x4c8;
   public const nint m_bStartDisabled = 0x4cc;
   public const nint m_bEnabled = 0x4cd;
   public const nint m_bMaster = 0x4ce;
   public const nint m_bClientSide = 0x4cf;
   public const nint m_bExclusive = 0x4d0;
   public const nint m_MinFalloff = 0x4d4;
   public const nint m_MaxFalloff = 0x4d8;
   public const nint m_flCurWeight = 0x4dc;
   public const nint m_netlookupFilename = 0x4e0;
   public const nint m_lookupFilename = 0x6e0;

}

public static class CEntityFlame {

   public const nint m_hEntAttached = 0x4b0;
   public const nint m_bCheapEffect = 0x4b4;
   public const nint m_flSize = 0x4b8;
   public const nint m_bUseHitboxes = 0x4bc;
   public const nint m_iNumHitboxFires = 0x4c0;
   public const nint m_flHitboxFireScale = 0x4c4;
   public const nint m_flLifetime = 0x4c8;
   public const nint m_hAttacker = 0x4cc;
   public const nint m_iDangerSound = 0x4d0;
   public const nint m_flDirectDamagePerSecond = 0x4d4;
   public const nint m_iCustomDamageType = 0x4d8;

}

public static class CBaseFilter {

   public const nint m_bNegated = 0x4b0;
   public const nint m_OnPass = 0x4b8;
   public const nint m_OnFail = 0x4e0;

}

public static class CFilterMultiple {

   public const nint m_nFilterType = 0x508;
   public const nint m_iFilterName = 0x510;
   public const nint m_hFilter = 0x560;
   public const nint m_nFilterCount = 0x588;

}

public static class CFilterProximity {

   public const nint m_flRadius = 0x508;

}

public static class CFilterClass {

   public const nint m_iFilterClass = 0x508;

}

public static class CBaseFire {

   public const nint m_flScale = 0x4b0;
   public const nint m_flStartScale = 0x4b4;
   public const nint m_flScaleTime = 0x4b8;
   public const nint m_nFlags = 0x4bc;

}

public static class CFireSmoke {

   public const nint m_nFlameModelIndex = 0x4c0;
   public const nint m_nFlameFromAboveModelIndex = 0x4c4;

}

public static class CFishPool {

   public const nint m_fishCount = 0x4c0;
   public const nint m_maxRange = 0x4c4;
   public const nint m_swimDepth = 0x4c8;
   public const nint m_waterLevel = 0x4cc;
   public const nint m_isDormant = 0x4d0;
   public const nint m_fishes = 0x4d8;
   public const nint m_visTimer = 0x4f0;

}

public static class locksound_t {

   public const nint sLockedSound = 0x8;
   public const nint sUnlockedSound = 0x10;
   public const nint flwaitSound = 0x18;

}

public static class CLogicBranch {

   public const nint m_bInValue = 0x4b0;
   public const nint m_Listeners = 0x4b8;
   public const nint m_OnTrue = 0x4d0;
   public const nint m_OnFalse = 0x4f8;

}

public static class CLogicDistanceCheck {

   public const nint m_iszEntityA = 0x4b0;
   public const nint m_iszEntityB = 0x4b8;
   public const nint m_flZone1Distance = 0x4c0;
   public const nint m_flZone2Distance = 0x4c4;
   public const nint m_InZone1 = 0x4c8;
   public const nint m_InZone2 = 0x4f0;
   public const nint m_InZone3 = 0x518;

}

public static class VelocitySampler {

   public const nint m_prevSample = 0x0;
   public const nint m_fPrevSampleTime = 0xc;
   public const nint m_fIdealSampleRate = 0x10;

}

public static class SimpleConstraintSoundProfile {

   public const nint eKeypoints = 0x8;
   public const nint m_keyPoints = 0xc;
   public const nint m_reversalSoundThresholds = 0x14;

}

public static class ConstraintSoundInfo {

   public const nint m_vSampler = 0x8;
   public const nint m_soundProfile = 0x20;
   public const nint m_forwardAxis = 0x40;
   public const nint m_iszTravelSoundFwd = 0x50;
   public const nint m_iszTravelSoundBack = 0x58;
   public const nint m_iszReversalSounds = 0x68;
   public const nint m_bPlayTravelSound = 0x80;
   public const nint m_bPlayReversalSound = 0x81;

}

public static class CSmoothFunc {

   public const nint m_flSmoothAmplitude = 0x8;
   public const nint m_flSmoothBias = 0xc;
   public const nint m_flSmoothDuration = 0x10;
   public const nint m_flSmoothRemainingTime = 0x14;
   public const nint m_nSmoothDir = 0x18;

}

public static class magnetted_objects_t {

   public const nint hEntity = 0x8;

}

public static class CPointPrefab {

   public const nint m_targetMapName = 0x4b0;
   public const nint m_forceWorldGroupID = 0x4b8;
   public const nint m_associatedRelayTargetName = 0x4c0;
   public const nint m_fixupNames = 0x4c8;
   public const nint m_bLoadDynamic = 0x4c9;
   public const nint m_associatedRelayEntity = 0x4cc;

}

public static class CSkyboxReference {

   public const nint m_worldGroupId = 0x4b0;
   public const nint m_hSkyCamera = 0x4b4;

}

public static class CSkyCamera {

   public const nint m_skyboxData = 0x4b0;
   public const nint m_skyboxSlotToken = 0x540;
   public const nint m_bUseAngles = 0x544;
   public const nint m_pNext = 0x548;

}

public static class CSound {

   public const nint m_hOwner = 0x0;
   public const nint m_hTarget = 0x4;
   public const nint m_iVolume = 0x8;
   public const nint m_flOcclusionScale = 0xc;
   public const nint m_iType = 0x10;
   public const nint m_iNextAudible = 0x14;
   public const nint m_flExpireTime = 0x18;
   public const nint m_iNext = 0x1c;
   public const nint m_bNoExpirationTime = 0x1e;
   public const nint m_ownerChannelIndex = 0x20;
   public const nint m_vecOrigin = 0x24;
   public const nint m_bHasOwner = 0x30;

}

public static class CEnvSoundscape {

   public const nint m_OnPlay = 0x4b0;
   public const nint m_flRadius = 0x4d8;
   public const nint m_soundscapeName = 0x4e0;
   public const nint m_soundEventName = 0x4e8;
   public const nint m_bOverrideWithEvent = 0x4f0;
   public const nint m_soundscapeIndex = 0x4f4;
   public const nint m_soundscapeEntityListId = 0x4f8;
   public const nint m_soundEventHash = 0x4fc;
   public const nint m_positionNames = 0x500;
   public const nint m_hProxySoundscape = 0x540;
   public const nint m_bDisabled = 0x544;

}

public static class CEnvSoundscapeProxy {

   public const nint m_MainSoundscapeName = 0x548;

}

public static class lerpdata_t {

   public const nint m_hEnt = 0x0;
   public const nint m_MoveType = 0x4;
   public const nint m_flStartTime = 0x8;
   public const nint m_vecStartOrigin = 0xc;
   public const nint m_qStartRot = 0x20;
   public const nint m_nFXIndex = 0x30;

}

public static class CNavLinkAnimgraphVar {

   public const nint m_strAnimgraphVar = 0x0;
   public const nint m_unAlignmentDegrees = 0x8;

}

public static class CNavLinkMovementVData {

   public const nint m_bIsInterpolated = 0x0;
   public const nint m_unRecommendedDistance = 0x4;
   public const nint m_vecAnimgraphVars = 0x8;

}

public static class CNavVolumeBreadthFirstSearch {

   public const nint m_vStartPos = 0xa0;
   public const nint m_flSearchDist = 0xac;

}

public static class VPhysicsCollisionAttribute_t {

   public const nint m_nInteractsAs = 0x8;
   public const nint m_nInteractsWith = 0x10;
   public const nint m_nInteractsExclude = 0x18;
   public const nint m_nEntityId = 0x20;
   public const nint m_nOwnerId = 0x24;
   public const nint m_nHierarchyId = 0x28;
   public const nint m_nCollisionGroup = 0x2a;
   public const nint m_nCollisionFunctionMask = 0x2b;

}

public static class CCollisionProperty {

   public const nint m_collisionAttribute = 0x10;
   public const nint m_vecMins = 0x40;
   public const nint m_vecMaxs = 0x4c;
   public const nint m_usSolidFlags = 0x5a;
   public const nint m_nSolidType = 0x5b;
   public const nint m_triggerBloat = 0x5c;
   public const nint m_nSurroundType = 0x5d;
   public const nint m_CollisionGroup = 0x5e;
   public const nint m_nEnablePhysics = 0x5f;
   public const nint m_flBoundingRadius = 0x60;
   public const nint m_vecSpecifiedSurroundingMins = 0x64;
   public const nint m_vecSpecifiedSurroundingMaxs = 0x70;
   public const nint m_vecSurroundingMaxs = 0x7c;
   public const nint m_vecSurroundingMins = 0x88;
   public const nint m_vCapsuleCenter1 = 0x94;
   public const nint m_vCapsuleCenter2 = 0xa0;
   public const nint m_flCapsuleRadius = 0xac;

}

public static class CEffectData {

   public const nint m_vOrigin = 0x8;
   public const nint m_vStart = 0x14;
   public const nint m_vNormal = 0x20;
   public const nint m_vAngles = 0x2c;
   public const nint m_hEntity = 0x38;
   public const nint m_hOtherEntity = 0x3c;
   public const nint m_flScale = 0x40;
   public const nint m_flMagnitude = 0x44;
   public const nint m_flRadius = 0x48;
   public const nint m_nSurfaceProp = 0x4c;
   public const nint m_nEffectIndex = 0x50;
   public const nint m_nDamageType = 0x58;
   public const nint m_nPenetrate = 0x5c;
   public const nint m_nMaterial = 0x5e;
   public const nint m_nHitBox = 0x60;
   public const nint m_nColor = 0x62;
   public const nint m_fFlags = 0x63;
   public const nint m_nAttachmentIndex = 0x64;
   public const nint m_nAttachmentName = 0x68;
   public const nint m_iEffectName = 0x6c;
   public const nint m_nExplosionType = 0x6e;

}

public static class CEnvDetailController {

   public const nint m_flFadeStartDist = 0x4b0;
   public const nint m_flFadeEndDist = 0x4b4;

}

public static class CEnvWindShared {

   public const nint m_flStartTime = 0x8;
   public const nint m_iWindSeed = 0xc;
   public const nint m_iMinWind = 0x10;
   public const nint m_iMaxWind = 0x12;
   public const nint m_windRadius = 0x14;
   public const nint m_iMinGust = 0x18;
   public const nint m_iMaxGust = 0x1a;
   public const nint m_flMinGustDelay = 0x1c;
   public const nint m_flMaxGustDelay = 0x20;
   public const nint m_flGustDuration = 0x24;
   public const nint m_iGustDirChange = 0x28;
   public const nint m_location = 0x2c;
   public const nint m_iszGustSound = 0x38;
   public const nint m_iWindDir = 0x3c;
   public const nint m_flWindSpeed = 0x40;
   public const nint m_currentWindVector = 0x44;
   public const nint m_CurrentSwayVector = 0x50;
   public const nint m_PrevSwayVector = 0x5c;
   public const nint m_iInitialWindDir = 0x68;
   public const nint m_flInitialWindSpeed = 0x6c;
   public const nint m_OnGustStart = 0x70;
   public const nint m_OnGustEnd = 0x98;
   public const nint m_flVariationTime = 0xc0;
   public const nint m_flSwayTime = 0xc4;
   public const nint m_flSimTime = 0xc8;
   public const nint m_flSwitchTime = 0xcc;
   public const nint m_flAveWindSpeed = 0xd0;
   public const nint m_bGusting = 0xd4;
   public const nint m_flWindAngleVariation = 0xd8;
   public const nint m_flWindSpeedVariation = 0xdc;
   public const nint m_iEntIndex = 0xe0;

}

public static class CEnvWindShared::WindAveEvent_t {

   public const nint m_flStartWindSpeed = 0x0;
   public const nint m_flAveWindSpeed = 0x4;

}

public static class CEnvWindShared::WindVariationEvent_t {

   public const nint m_flWindAngleVariation = 0x0;
   public const nint m_flWindSpeedVariation = 0x4;

}

public static class shard_model_desc_t {

   public const nint m_nModelID = 0x8;
   public const nint m_hMaterial = 0x10;
   public const nint m_solid = 0x18;
   public const nint m_ShatterPanelMode = 0x19;
   public const nint m_vecPanelSize = 0x1c;
   public const nint m_vecStressPositionA = 0x24;
   public const nint m_vecStressPositionB = 0x2c;
   public const nint m_vecPanelVertices = 0x38;
   public const nint m_flGlassHalfThickness = 0x50;
   public const nint m_bHasParent = 0x54;
   public const nint m_bParentFrozen = 0x55;
   public const nint m_SurfacePropStringToken = 0x58;
   public const nint m_LightGroup = 0x5c;

}

public static class CShatterGlassShard {

   public const nint m_hShardHandle = 0x8;
   public const nint m_vecPanelVertices = 0x10;
   public const nint m_vLocalPanelSpaceOrigin = 0x28;
   public const nint m_hModel = 0x30;
   public const nint m_hPhysicsEntity = 0x38;
   public const nint m_hParentPanel = 0x3c;
   public const nint m_hParentShard = 0x40;
   public const nint m_ShatterStressType = 0x44;
   public const nint m_vecStressVelocity = 0x48;
   public const nint m_bCreatedModel = 0x54;
   public const nint m_flLongestEdge = 0x58;
   public const nint m_flShortestEdge = 0x5c;
   public const nint m_flLongestAcross = 0x60;
   public const nint m_flShortestAcross = 0x64;
   public const nint m_flSumOfAllEdges = 0x68;
   public const nint m_flArea = 0x6c;
   public const nint m_nOnFrameEdge = 0x70;
   public const nint m_nParentPanelsNthShard = 0x74;
   public const nint m_nSubShardGeneration = 0x78;
   public const nint m_vecAverageVertPosition = 0x7c;
   public const nint m_bAverageVertPositionIsValid = 0x84;
   public const nint m_vecPanelSpaceStressPositionA = 0x88;
   public const nint m_vecPanelSpaceStressPositionB = 0x90;
   public const nint m_bStressPositionAIsValid = 0x98;
   public const nint m_bStressPositionBIsValid = 0x99;
   public const nint m_bFlaggedForRemoval = 0x9a;
   public const nint m_flPhysicsEntitySpawnedAtTime = 0x9c;
   public const nint m_bShatterRateLimited = 0xa0;
   public const nint m_hEntityHittingMe = 0xa4;
   public const nint m_vecNeighbors = 0xa8;

}

public static class CGameRules {

   public const nint m_szQuestName = 0x8;
   public const nint m_nQuestPhase = 0x88;

}

public static class CGlowProperty {

   public const nint m_fGlowColor = 0x8;
   public const nint m_iGlowType = 0x30;
   public const nint m_iGlowTeam = 0x34;
   public const nint m_nGlowRange = 0x38;
   public const nint m_nGlowRangeMin = 0x3c;
   public const nint m_glowColorOverride = 0x40;
   public const nint m_bFlashing = 0x44;
   public const nint m_flGlowTime = 0x48;
   public const nint m_flGlowStartTime = 0x4c;
   public const nint m_bEligibleForScreenHighlight = 0x50;
   public const nint m_bGlowing = 0x51;

}

public static class fogparams_t {

   public const nint dirPrimary = 0x8;
   public const nint colorPrimary = 0x14;
   public const nint colorSecondary = 0x18;
   public const nint colorPrimaryLerpTo = 0x1c;
   public const nint colorSecondaryLerpTo = 0x20;
   public const nint start = 0x24;
   public const nint end = 0x28;
   public const nint farz = 0x2c;
   public const nint maxdensity = 0x30;
   public const nint exponent = 0x34;
   public const nint HDRColorScale = 0x38;
   public const nint skyboxFogFactor = 0x3c;
   public const nint skyboxFogFactorLerpTo = 0x40;
   public const nint startLerpTo = 0x44;
   public const nint endLerpTo = 0x48;
   public const nint maxdensityLerpTo = 0x4c;
   public const nint lerptime = 0x50;
   public const nint duration = 0x54;
   public const nint blendtobackground = 0x58;
   public const nint scattering = 0x5c;
   public const nint locallightscale = 0x60;
   public const nint enable = 0x64;
   public const nint blend = 0x65;
   public const nint m_bNoReflectionFog = 0x66;
   public const nint m_bPadding = 0x67;

}

public static class fogplayerparams_t {

   public const nint m_hCtrl = 0x8;
   public const nint m_flTransitionTime = 0xc;
   public const nint m_OldColor = 0x10;
   public const nint m_flOldStart = 0x14;
   public const nint m_flOldEnd = 0x18;
   public const nint m_flOldMaxDensity = 0x1c;
   public const nint m_flOldHDRColorScale = 0x20;
   public const nint m_flOldFarZ = 0x24;
   public const nint m_NewColor = 0x28;
   public const nint m_flNewStart = 0x2c;
   public const nint m_flNewEnd = 0x30;
   public const nint m_flNewMaxDensity = 0x34;
   public const nint m_flNewHDRColorScale = 0x38;
   public const nint m_flNewFarZ = 0x3c;

}

public static class sky3dparams_t {

   public const nint scale = 0x8;
   public const nint origin = 0xc;
   public const nint bClip3DSkyBoxNearToWorldFar = 0x18;
   public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1c;
   public const nint fog = 0x20;
   public const nint m_nWorldGroupID = 0x88;

}

public static class ragdollelement_t {

   public const nint originParentSpace = 0x0;
   public const nint parentIndex = 0x20;
   public const nint m_flRadius = 0x24;

}

public static class ragdoll_t {

   public const nint list = 0x0;
   public const nint boneIndex = 0x18;
   public const nint allowStretch = 0x30;
   public const nint unused = 0x31;

}

public static class PhysicsRagdollPose_t {

   public const nint __m_pChainEntity = 0x8;
   public const nint m_Transforms = 0x30;
   public const nint m_hOwner = 0x48;

}

public static class CSceneEventInfo {

   public const nint m_iLayer = 0x0;
   public const nint m_iPriority = 0x4;
   public const nint m_hSequence = 0x8;
   public const nint m_flWeight = 0xc;
   public const nint m_bIsMoving = 0x10;
   public const nint m_bHasArrived = 0x11;
   public const nint m_flInitialYaw = 0x14;
   public const nint m_flTargetYaw = 0x18;
   public const nint m_flFacingYaw = 0x1c;
   public const nint m_nType = 0x20;
   public const nint m_flNext = 0x24;
   public const nint m_bIsGesture = 0x28;
   public const nint m_bShouldRemove = 0x29;
   public const nint m_hTarget = 0x54;
   public const nint m_nSceneEventId = 0x58;
   public const nint m_bClientSide = 0x5c;
   public const nint m_bStarted = 0x5d;

}

public static class ParticleIndex_t {

   public const nint m_Value = 0x0;

}

public static class AmmoIndex_t {

   public const nint m_Value = 0x0;

}

public static class thinkfunc_t {

   public const nint m_hFn = 0x8;
   public const nint m_nContext = 0x10;
   public const nint m_nNextThinkTick = 0x14;
   public const nint m_nLastThinkTick = 0x18;

}

public static class RagdollCreationParams_t {

   public const nint m_vForce = 0x0;
   public const nint m_nForceBone = 0xc;

}

public static class hudtextparms_t {

   public const nint color1 = 0x0;
   public const nint color2 = 0x4;
   public const nint effect = 0x8;
   public const nint channel = 0x9;
   public const nint x = 0xc;
   public const nint y = 0x10;

}

public static class CSimpleSimTimer {

   public const nint m_next = 0x0;
   public const nint m_nWorldGroupId = 0x4;

}

public static class CSimTimer {

   public const nint m_interval = 0x8;

}

public static class CRandSimTimer {

   public const nint m_minInterval = 0x8;
   public const nint m_maxInterval = 0xc;

}

public static class CStopwatchBase {

   public const nint m_fIsRunning = 0x8;

}

public static class CStopwatch {

   public const nint m_interval = 0xc;

}

public static class CRandStopwatch {

   public const nint m_minInterval = 0xc;
   public const nint m_maxInterval = 0x10;

}

public static class CSingleplayRules {

   public const nint m_bSinglePlayerGameEnding = 0x90;

}

public static class CSoundOpvarSetPointBase {

   public const nint m_bDisabled = 0x4b0;
   public const nint m_hSource = 0x4b4;
   public const nint m_iszSourceEntityName = 0x4c0;
   public const nint m_vLastPosition = 0x518;
   public const nint m_iszStackName = 0x528;
   public const nint m_iszOperatorName = 0x530;
   public const nint m_iszOpvarName = 0x538;
   public const nint m_iOpvarIndex = 0x540;
   public const nint m_bUseAutoCompare = 0x544;

}

public static class CSoundOpvarSetPointEntity {

   public const nint m_OnEnter = 0x548;
   public const nint m_OnExit = 0x570;
   public const nint m_bAutoDisable = 0x598;
   public const nint m_flDistanceMin = 0x5dc;
   public const nint m_flDistanceMax = 0x5e0;
   public const nint m_flDistanceMapMin = 0x5e4;
   public const nint m_flDistanceMapMax = 0x5e8;
   public const nint m_flOcclusionRadius = 0x5ec;
   public const nint m_flOcclusionMin = 0x5f0;
   public const nint m_flOcclusionMax = 0x5f4;
   public const nint m_flValSetOnDisable = 0x5f8;
   public const nint m_bSetValueOnDisable = 0x5fc;
   public const nint m_nSimulationMode = 0x600;
   public const nint m_nVisibilitySamples = 0x604;
   public const nint m_vDynamicProxyPoint = 0x608;
   public const nint m_flDynamicMaximumOcclusion = 0x614;
   public const nint m_hDynamicEntity = 0x618;
   public const nint m_iszDynamicEntityName = 0x620;
   public const nint m_flPathingDistanceNormFactor = 0x628;
   public const nint m_vPathingSourcePos = 0x62c;
   public const nint m_vPathingListenerPos = 0x638;
   public const nint m_nPathingSourceIndex = 0x644;

}

public static class CSoundOpvarSetAABBEntity {

   public const nint m_vDistanceInnerMins = 0x648;
   public const nint m_vDistanceInnerMaxs = 0x654;
   public const nint m_vDistanceOuterMins = 0x660;
   public const nint m_vDistanceOuterMaxs = 0x66c;
   public const nint m_nAABBDirection = 0x678;
   public const nint m_vInnerMins = 0x67c;
   public const nint m_vInnerMaxs = 0x688;
   public const nint m_vOuterMins = 0x694;
   public const nint m_vOuterMaxs = 0x6a0;

}

public static class CSoundOpvarSetPathCornerEntity {

   public const nint m_flDistMinSqr = 0x660;
   public const nint m_flDistMaxSqr = 0x664;
   public const nint m_iszPathCornerEntityName = 0x668;

}

public static class CSoundOpvarSetOBBWindEntity {

   public const nint m_vMins = 0x548;
   public const nint m_vMaxs = 0x554;
   public const nint m_vDistanceMins = 0x560;
   public const nint m_vDistanceMaxs = 0x56c;
   public const nint m_flWindMin = 0x578;
   public const nint m_flWindMax = 0x57c;
   public const nint m_flWindMapMin = 0x580;
   public const nint m_flWindMapMax = 0x584;

}

public static class CTakeDamageInfo {

   public const nint m_vecDamageForce = 0x8;
   public const nint m_vecDamagePosition = 0x14;
   public const nint m_vecReportedPosition = 0x20;
   public const nint m_vecDamageDirection = 0x2c;
   public const nint m_hInflictor = 0x38;
   public const nint m_hAttacker = 0x3c;
   public const nint m_hAbility = 0x40;
   public const nint m_flDamage = 0x44;
   public const nint m_bitsDamageType = 0x48;
   public const nint m_iDamageCustom = 0x4c;
   public const nint m_iAmmoType = 0x50;
   public const nint m_flOriginalDamage = 0x60;
   public const nint m_bShouldBleed = 0x64;
   public const nint m_bShouldSpark = 0x65;
   public const nint m_nDamageFlags = 0x70;
   public const nint m_nNumObjectsPenetrated = 0x74;
   public const nint m_hScriptInstance = 0x78;
   public const nint m_bInTakeDamageFlow = 0x94;

}

public static class CTakeDamageResult {

   public const nint m_nHealthLost = 0x0;
   public const nint m_nDamageTaken = 0x4;

}

public static class SummaryTakeDamageInfo_t {

   public const nint nSummarisedCount = 0x0;
   public const nint info = 0x8;
   public const nint result = 0xa0;
   public const nint hTarget = 0xa8;

}

public static class CTakeDamageSummaryScopeGuard {

   public const nint m_vecSummaries = 0x8;

}

public static class CAttributeList {

   public const nint m_Attributes = 0x8;
   public const nint m_pManager = 0x58;

}

public static class CEconItemAttribute {

   public const nint m_iAttributeDefinitionIndex = 0x30;
   public const nint m_flValue = 0x34;
   public const nint m_flInitialValue = 0x38;
   public const nint m_nRefundableCurrency = 0x3c;
   public const nint m_bSetBonus = 0x40;

}

public static class CAttributeManager {

   public const nint m_Providers = 0x8;
   public const nint m_iReapplyProvisionParity = 0x20;
   public const nint m_hOuter = 0x24;
   public const nint m_bPreventLoopback = 0x28;
   public const nint m_ProviderType = 0x2c;
   public const nint m_CachedResults = 0x30;

}

public static class CAttributeManager::cached_attribute_float_t {

   public const nint flIn = 0x0;
   public const nint iAttribHook = 0x8;
   public const nint flOut = 0x10;

}

public static class CAttributeContainer {

   public const nint m_Item = 0x50;

}

public static class GameAmmoTypeInfo_t {

   public const nint m_nBuySize = 0x38;
   public const nint m_nCost = 0x3c;

}

public static class EntitySpottedState_t {

   public const nint m_bSpotted = 0x8;
   public const nint m_bSpottedByMask = 0xc;

}

public static class SpawnPoint {

   public const nint m_iPriority = 0x4b0;
   public const nint m_bEnabled = 0x4b4;
   public const nint m_nType = 0x4b8;

}

public static class SpawnPointCoopEnemy {

   public const nint m_szWeaponsToGive = 0x4c0;
   public const nint m_szPlayerModelToUse = 0x4c8;
   public const nint m_nArmorToSpawnWith = 0x4d0;
   public const nint m_nDefaultBehavior = 0x4d4;
   public const nint m_nBotDifficulty = 0x4d8;
   public const nint m_bIsAgressive = 0x4dc;
   public const nint m_bStartAsleep = 0x4dd;
   public const nint m_flHideRadius = 0x4e0;
   public const nint m_szBehaviorTreeFile = 0x4f0;

}

public static class CCSGameRulesProxy {

   public const nint m_pGameRules = 0x4b0;

}

public static class CCSGameRules {

   public const nint __m_pChainEntity = 0x98;
   public const nint m_coopMissionManager = 0xc0;
   public const nint m_bFreezePeriod = 0xc4;
   public const nint m_bWarmupPeriod = 0xc5;
   public const nint m_fWarmupPeriodEnd = 0xc8;
   public const nint m_fWarmupPeriodStart = 0xcc;
   public const nint m_nTotalPausedTicks = 0xd0;
   public const nint m_nPauseStartTick = 0xd4;
   public const nint m_bServerPaused = 0xd8;
   public const nint m_bGamePaused = 0xd9;
   public const nint m_bTerroristTimeOutActive = 0xda;
   public const nint m_bCTTimeOutActive = 0xdb;
   public const nint m_flTerroristTimeOutRemaining = 0xdc;
   public const nint m_flCTTimeOutRemaining = 0xe0;
   public const nint m_nTerroristTimeOuts = 0xe4;
   public const nint m_nCTTimeOuts = 0xe8;
   public const nint m_bTechnicalTimeOut = 0xec;
   public const nint m_bMatchWaitingForResume = 0xed;
   public const nint m_iRoundTime = 0xf0;
   public const nint m_fMatchStartTime = 0xf4;
   public const nint m_fRoundStartTime = 0xf8;
   public const nint m_flRestartRoundTime = 0xfc;
   public const nint m_bGameRestart = 0x100;
   public const nint m_flGameStartTime = 0x104;
   public const nint m_timeUntilNextPhaseStarts = 0x108;
   public const nint m_gamePhase = 0x10c;
   public const nint m_totalRoundsPlayed = 0x110;
   public const nint m_nRoundsPlayedThisPhase = 0x114;
   public const nint m_nOvertimePlaying = 0x118;
   public const nint m_iHostagesRemaining = 0x11c;
   public const nint m_bAnyHostageReached = 0x120;
   public const nint m_bMapHasBombTarget = 0x121;
   public const nint m_bMapHasRescueZone = 0x122;
   public const nint m_bMapHasBuyZone = 0x123;
   public const nint m_bIsQueuedMatchmaking = 0x124;
   public const nint m_nQueuedMatchmakingMode = 0x128;
   public const nint m_bIsValveDS = 0x12c;
   public const nint m_bLogoMap = 0x12d;
   public const nint m_bPlayAllStepSoundsOnServer = 0x12e;
   public const nint m_iSpectatorSlotCount = 0x130;
   public const nint m_MatchDevice = 0x134;
   public const nint m_bHasMatchStarted = 0x138;
   public const nint m_nNextMapInMapgroup = 0x13c;
   public const nint m_szTournamentEventName = 0x140;
   public const nint m_szTournamentEventStage = 0x340;
   public const nint m_szMatchStatTxt = 0x540;
   public const nint m_szTournamentPredictionsTxt = 0x740;
   public const nint m_nTournamentPredictionsPct = 0x940;
   public const nint m_flCMMItemDropRevealStartTime = 0x944;
   public const nint m_flCMMItemDropRevealEndTime = 0x948;
   public const nint m_bIsDroppingItems = 0x94c;
   public const nint m_bIsQuestEligible = 0x94d;
   public const nint m_bIsHltvActive = 0x94e;
   public const nint m_nGuardianModeWaveNumber = 0x950;
   public const nint m_nGuardianModeSpecialKillsRemaining = 0x954;
   public const nint m_nGuardianModeSpecialWeaponNeeded = 0x958;
   public const nint m_nGuardianGrenadesToGiveBots = 0x95c;
   public const nint m_nNumHeaviesToSpawn = 0x960;
   public const nint m_numGlobalGiftsGiven = 0x964;
   public const nint m_numGlobalGifters = 0x968;
   public const nint m_numGlobalGiftsPeriodSeconds = 0x96c;
   public const nint m_arrFeaturedGiftersAccounts = 0x970;
   public const nint m_arrFeaturedGiftersGifts = 0x980;
   public const nint m_arrProhibitedItemIndices = 0x990;
   public const nint m_arrTournamentActiveCasterAccounts = 0xa58;
   public const nint m_numBestOfMaps = 0xa68;
   public const nint m_nHalloweenMaskListSeed = 0xa6c;
   public const nint m_bBombDropped = 0xa70;
   public const nint m_bBombPlanted = 0xa71;
   public const nint m_iRoundWinStatus = 0xa74;
   public const nint m_eRoundWinReason = 0xa78;
   public const nint m_bTCantBuy = 0xa7c;
   public const nint m_bCTCantBuy = 0xa7d;
   public const nint m_flGuardianBuyUntilTime = 0xa80;
   public const nint m_iMatchStats_RoundResults = 0xa84;
   public const nint m_iMatchStats_PlayersAlive_CT = 0xafc;
   public const nint m_iMatchStats_PlayersAlive_T = 0xb74;
   public const nint m_TeamRespawnWaveTimes = 0xbec;
   public const nint m_flNextRespawnWave = 0xc6c;
   public const nint m_nServerQuestID = 0xcec;
   public const nint m_vMinimapMins = 0xcf0;
   public const nint m_vMinimapMaxs = 0xcfc;
   public const nint m_MinimapVerticalSectionHeights = 0xd08;
   public const nint m_bDontIncrementCoopWave = 0xd28;
   public const nint m_bSpawnedTerrorHuntHeavy = 0xd29;
   public const nint m_nEndMatchMapGroupVoteTypes = 0xd2c;
   public const nint m_nEndMatchMapGroupVoteOptions = 0xd54;
   public const nint m_nEndMatchMapVoteWinner = 0xd7c;
   public const nint m_iNumConsecutiveCTLoses = 0xd80;
   public const nint m_iNumConsecutiveTerroristLoses = 0xd84;
   public const nint m_bHasHostageBeenTouched = 0xda0;
   public const nint m_flIntermissionStartTime = 0xda4;
   public const nint m_flIntermissionEndTime = 0xda8;
   public const nint m_bLevelInitialized = 0xdac;
   public const nint m_iTotalRoundsPlayed = 0xdb0;
   public const nint m_iUnBalancedRounds = 0xdb4;
   public const nint m_endMatchOnRoundReset = 0xdb8;
   public const nint m_endMatchOnThink = 0xdb9;
   public const nint m_iFreezeTime = 0xdbc;
   public const nint m_iNumTerrorist = 0xdc0;
   public const nint m_iNumCT = 0xdc4;
   public const nint m_iNumSpawnableTerrorist = 0xdc8;
   public const nint m_iNumSpawnableCT = 0xdcc;
   public const nint m_arrSelectedHostageSpawnIndices = 0xdd0;
   public const nint m_bFirstConnected = 0xde8;
   public const nint m_bCompleteReset = 0xde9;
   public const nint m_bPickNewTeamsOnReset = 0xdea;
   public const nint m_bScrambleTeamsOnRestart = 0xdeb;
   public const nint m_bSwapTeamsOnRestart = 0xdec;
   public const nint m_nEndMatchTiedVotes = 0xdf8;
   public const nint m_bNeedToAskPlayersForContinueVote = 0xe14;
   public const nint m_numQueuedMatchmakingAccounts = 0xe18;
   public const nint m_pQueuedMatchmakingReservationString = 0xe20;
   public const nint m_numTotalTournamentDrops = 0xe28;
   public const nint m_numSpectatorsCountMax = 0xe2c;
   public const nint m_numSpectatorsCountMaxTV = 0xe30;
   public const nint m_numSpectatorsCountMaxLnk = 0xe34;
   public const nint m_bForceTeamChangeSilent = 0xe40;
   public const nint m_bLoadingRoundBackupData = 0xe41;
   public const nint m_nMatchInfoShowType = 0xe78;
   public const nint m_flMatchInfoDecidedTime = 0xe7c;
   public const nint m_flCoopRespawnAndHealTime = 0xe98;
   public const nint m_coopBonusCoinsFound = 0xe9c;
   public const nint m_coopBonusPistolsOnly = 0xea0;
   public const nint m_coopPlayersInDeploymentZone = 0xea1;
   public const nint m_coopMissionDeadPlayerRespawnEnabled = 0xea2;
   public const nint mTeamDMLastWinningTeamNumber = 0xea4;
   public const nint mTeamDMLastThinkTime = 0xea8;
   public const nint m_flTeamDMLastAnnouncementTime = 0xeac;
   public const nint m_iAccountTerrorist = 0xeb0;
   public const nint m_iAccountCT = 0xeb4;
   public const nint m_iSpawnPointCount_Terrorist = 0xeb8;
   public const nint m_iSpawnPointCount_CT = 0xebc;
   public const nint m_iMaxNumTerrorists = 0xec0;
   public const nint m_iMaxNumCTs = 0xec4;
   public const nint m_iLoserBonus = 0xec8;
   public const nint m_iLoserBonusMostRecentTeam = 0xecc;
   public const nint m_tmNextPeriodicThink = 0xed0;
   public const nint m_bVoiceWonMatchBragFired = 0xed4;
   public const nint m_fWarmupNextChatNoticeTime = 0xed8;
   public const nint m_iHostagesRescued = 0xee0;
   public const nint m_iHostagesTouched = 0xee4;
   public const nint m_flNextHostageAnnouncement = 0xee8;
   public const nint m_bNoTerroristsKilled = 0xeec;
   public const nint m_bNoCTsKilled = 0xeed;
   public const nint m_bNoEnemiesKilled = 0xeee;
   public const nint m_bCanDonateWeapons = 0xeef;
   public const nint m_firstKillTime = 0xef4;
   public const nint m_firstBloodTime = 0xefc;
   public const nint m_hostageWasInjured = 0xf18;
   public const nint m_hostageWasKilled = 0xf19;
   public const nint m_bVoteCalled = 0xf28;
   public const nint m_bServerVoteOnReset = 0xf29;
   public const nint m_flVoteCheckThrottle = 0xf2c;
   public const nint m_bBuyTimeEnded = 0xf30;
   public const nint m_nLastFreezeEndBeep = 0xf34;
   public const nint m_bTargetBombed = 0xf38;
   public const nint m_bBombDefused = 0xf39;
   public const nint m_bMapHasBombZone = 0xf3a;
   public const nint m_vecMainCTSpawnPos = 0xf58;
   public const nint m_CTSpawnPointsMasterList = 0xf68;
   public const nint m_TerroristSpawnPointsMasterList = 0xf80;
   public const nint m_iNextCTSpawnPoint = 0xf98;
   public const nint m_iNextTerroristSpawnPoint = 0xf9c;
   public const nint m_CTSpawnPoints = 0xfa0;
   public const nint m_TerroristSpawnPoints = 0xfb8;
   public const nint m_bIsUnreservedGameServer = 0xfd0;
   public const nint m_fAutobalanceDisplayTime = 0xfd4;
   public const nint m_bAllowWeaponSwitch = 0x1240;
   public const nint m_bRoundTimeWarningTriggered = 0x1241;
   public const nint m_phaseChangeAnnouncementTime = 0x1244;
   public const nint m_fNextUpdateTeamClanNamesTime = 0x1248;
   public const nint m_flLastThinkTime = 0x124c;
   public const nint m_fAccumulatedRoundOffDamage = 0x1250;
   public const nint m_nShorthandedBonusLastEvalRound = 0x1254;
   public const nint m_bMatchAbortedDueToPlayerBan = 0x14d0;
   public const nint m_bHasTriggeredRoundStartMusic = 0x14d1;
   public const nint m_bHasTriggeredCoopSpawnReset = 0x14d2;
   public const nint m_bSwitchingTeamsAtRoundReset = 0x14d3;
   public const nint m_pGameModeRules = 0x14f0;
   public const nint m_BtGlobalBlackboard = 0x14f8;
   public const nint m_hPlayerResource = 0x1560;
   public const nint m_RetakeRules = 0x1568;
   public const nint m_GuardianBotSkillLevelMax = 0x174c;
   public const nint m_GuardianBotSkillLevelMin = 0x1750;
   public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1758;
   public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17b8;
   public const nint m_nMatchEndCount = 0x17e0;
   public const nint m_nTTeamIntroVariant = 0x17e4;
   public const nint m_nCTTeamIntroVariant = 0x17e8;
   public const nint m_bTeamIntroPeriod = 0x17ec;
   public const nint m_fTeamIntroPeriodEnd = 0x17f0;
   public const nint m_bPlayedTeamIntroVO = 0x17f4;
   public const nint m_flLastPerfSampleTime = 0x5800;
   public const nint m_bSkipNextServerPerfSample = 0x5808;

}

public static class CCSGameModeRules {

   public const nint __m_pChainEntity = 0x8;

}

public static class CCSGameModeRules_Deathmatch {

   public const nint m_bFirstThink = 0x30;
   public const nint m_bFirstThinkAfterConnected = 0x31;
   public const nint m_flDMBonusStartTime = 0x34;
   public const nint m_flDMBonusTimeLength = 0x38;
   public const nint m_nDMBonusWeaponLoadoutSlot = 0x3c;

}

public static class CRetakeGameRules {

   public const nint m_nMatchSeed = 0xf8;
   public const nint m_bBlockersPresent = 0xfc;
   public const nint m_bRoundInProgress = 0xfd;
   public const nint m_iFirstSecondHalfRound = 0x100;
   public const nint m_iBombSite = 0x104;

}

public static class CSPerRoundStats_t {

   public const nint m_iKills = 0x30;
   public const nint m_iDeaths = 0x34;
   public const nint m_iAssists = 0x38;
   public const nint m_iDamage = 0x3c;
   public const nint m_iEquipmentValue = 0x40;
   public const nint m_iMoneySaved = 0x44;
   public const nint m_iKillReward = 0x48;
   public const nint m_iLiveTime = 0x4c;
   public const nint m_iHeadShotKills = 0x50;
   public const nint m_iObjective = 0x54;
   public const nint m_iCashEarned = 0x58;
   public const nint m_iUtilityDamage = 0x5c;
   public const nint m_iEnemiesFlashed = 0x60;

}

public static class CSMatchStats_t {

   public const nint m_iEnemy5Ks = 0x68;
   public const nint m_iEnemy4Ks = 0x6c;
   public const nint m_iEnemy3Ks = 0x70;
   public const nint m_iEnemy2Ks = 0x74;
   public const nint m_iUtility_Count = 0x78;
   public const nint m_iUtility_Successes = 0x7c;
   public const nint m_iUtility_Enemies = 0x80;
   public const nint m_iFlash_Count = 0x84;
   public const nint m_iFlash_Successes = 0x88;
   public const nint m_nHealthPointsRemovedTotal = 0x8c;
   public const nint m_nHealthPointsDealtTotal = 0x90;
   public const nint m_nShotsFiredTotal = 0x94;
   public const nint m_nShotsOnTargetTotal = 0x98;
   public const nint m_i1v1Count = 0x9c;
   public const nint m_i1v1Wins = 0xa0;
   public const nint m_i1v2Count = 0xa4;
   public const nint m_i1v2Wins = 0xa8;
   public const nint m_iEntryCount = 0xac;
   public const nint m_iEntryWins = 0xb0;

}

public static class CCSGO_TeamPreviewCharacterPosition {

   public const nint m_nVariant = 0x4b0;
   public const nint m_nRandom = 0x4b4;
   public const nint m_nOrdinal = 0x4b8;
   public const nint m_sWeaponName = 0x4c0;
   public const nint m_xuid = 0x4c8;
   public const nint m_agentItem = 0x4d0;
   public const nint m_glovesItem = 0x748;
   public const nint m_weaponItem = 0x9c0;

}

public static class CPlayerPing {

   public const nint m_hPlayer = 0x4b8;
   public const nint m_hPingedEntity = 0x4bc;
   public const nint m_iType = 0x4c0;
   public const nint m_bUrgent = 0x4c4;
   public const nint m_szPlaceName = 0x4c5;

}

public static class CCSPlayer_PingServices {

   public const nint m_flPlayerPingTokens = 0x40;
   public const nint m_hPlayerPing = 0x54;

}

public static class CCSPlayerResource {

   public const nint m_bHostageAlive = 0x4b0;
   public const nint m_isHostageFollowingSomeone = 0x4bc;
   public const nint m_iHostageEntityIDs = 0x4c8;
   public const nint m_bombsiteCenterA = 0x4f8;
   public const nint m_bombsiteCenterB = 0x504;
   public const nint m_hostageRescueX = 0x510;
   public const nint m_hostageRescueY = 0x520;
   public const nint m_hostageRescueZ = 0x530;
   public const nint m_bEndMatchNextMapAllVoted = 0x540;
   public const nint m_foundGoalPositions = 0x541;

}

public static class CCSPlayerBase_CameraServices {

   public const nint m_iFOV = 0x170;
   public const nint m_iFOVStart = 0x174;
   public const nint m_flFOVTime = 0x178;
   public const nint m_flFOVRate = 0x17c;
   public const nint m_hZoomOwner = 0x180;
   public const nint m_hTriggerFogList = 0x188;
   public const nint m_hLastFogTrigger = 0x1a0;

}

public static class WeaponPurchaseCount_t {

   public const nint m_nItemDefIndex = 0x30;
   public const nint m_nCount = 0x32;

}

public static class WeaponPurchaseTracker_t {

   public const nint m_weaponPurchases = 0x8;

}

public static class CCSPlayer_ActionTrackingServices {

   public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x208;
   public const nint m_bIsRescuing = 0x23c;
   public const nint m_weaponPurchasesThisMatch = 0x240;
   public const nint m_weaponPurchasesThisRound = 0x298;

}

public static class CCSPlayer_BulletServices {

   public const nint m_totalHitsOnServer = 0x40;

}

public static class SellbackPurchaseEntry_t {

   public const nint m_unDefIdx = 0x30;
   public const nint m_nCost = 0x34;
   public const nint m_nPrevArmor = 0x38;
   public const nint m_bPrevHelmet = 0x3c;
   public const nint m_hItem = 0x40;

}

public static class CCSPlayer_BuyServices {

   public const nint m_vecSellbackPurchaseEntries = 0xc8;

}

public static class CCSPlayer_HostageServices {

   public const nint m_hCarriedHostage = 0x40;
   public const nint m_hCarriedHostageProp = 0x44;

}

public static class CCSPlayer_ItemServices {

   public const nint m_bHasDefuser = 0x40;
   public const nint m_bHasHelmet = 0x41;
   public const nint m_bHasHeavyArmor = 0x42;

}

public static class CCSPlayer_MovementServices {

   public const nint m_flMaxFallVelocity = 0x220;
   public const nint m_vecLadderNormal = 0x224;
   public const nint m_nLadderSurfacePropIndex = 0x230;
   public const nint m_flDuckAmount = 0x234;
   public const nint m_flDuckSpeed = 0x238;
   public const nint m_bDuckOverride = 0x23c;
   public const nint m_bDesiresDuck = 0x23d;
   public const nint m_flDuckOffset = 0x240;
   public const nint m_nDuckTimeMsecs = 0x244;
   public const nint m_nDuckJumpTimeMsecs = 0x248;
   public const nint m_nJumpTimeMsecs = 0x24c;
   public const nint m_flLastDuckTime = 0x250;
   public const nint m_vecLastPositionAtFullCrouchSpeed = 0x260;
   public const nint m_duckUntilOnGround = 0x268;
   public const nint m_bHasWalkMovedSinceLastJump = 0x269;
   public const nint m_bInStuckTest = 0x26a;
   public const nint m_flStuckCheckTime = 0x278;
   public const nint m_nTraceCount = 0x478;
   public const nint m_StuckLast = 0x47c;
   public const nint m_bSpeedCropped = 0x480;
   public const nint m_nOldWaterLevel = 0x484;
   public const nint m_flWaterEntryTime = 0x488;
   public const nint m_vecForward = 0x48c;
   public const nint m_vecLeft = 0x498;
   public const nint m_vecUp = 0x4a4;
   public const nint m_vecPreviouslyPredictedOrigin = 0x4b0;
   public const nint m_bMadeFootstepNoise = 0x4bc;
   public const nint m_iFootsteps = 0x4c0;
   public const nint m_bOldJumpPressed = 0x4c4;
   public const nint m_flJumpPressedTime = 0x4c8;
   public const nint m_flJumpUntil = 0x4cc;
   public const nint m_flJumpVel = 0x4d0;
   public const nint m_fStashGrenadeParameterWhen = 0x4d4;
   public const nint m_nButtonDownMaskPrev = 0x4d8;
   public const nint m_flOffsetTickCompleteTime = 0x4e0;
   public const nint m_flOffsetTickStashedSpeed = 0x4e4;
   public const nint m_flStamina = 0x4e8;

}

public static class CCSPlayer_UseServices {

   public const nint m_hLastKnownUseEntity = 0x40;
   public const nint m_flLastUseTimeStamp = 0x44;
   public const nint m_flTimeStartedHoldingUse = 0x48;
   public const nint m_flTimeLastUsedWindow = 0x4c;

}

public static class CCSPlayer_ViewModelServices {

   public const nint m_hViewModel = 0x40;

}

public static class CCSPlayer_WaterServices {

   public const nint m_NextDrownDamageTime = 0x40;
   public const nint m_nDrownDmgRate = 0x44;
   public const nint m_AirFinishedTime = 0x48;
   public const nint m_flWaterJumpTime = 0x4c;
   public const nint m_vecWaterJumpVel = 0x50;
   public const nint m_flSwimSoundTime = 0x5c;

}

public static class CCSPlayer_WeaponServices {

   public const nint m_flNextAttack = 0xb0;
   public const nint m_bIsLookingAtWeapon = 0xb4;
   public const nint m_bIsHoldingLookAtWeapon = 0xb5;
   public const nint m_hSavedWeapon = 0xb8;
   public const nint m_nTimeToMelee = 0xbc;
   public const nint m_nTimeToSecondary = 0xc0;
   public const nint m_nTimeToPrimary = 0xc4;
   public const nint m_nTimeToSniperRifle = 0xc8;
   public const nint m_bIsBeingGivenItem = 0xcc;
   public const nint m_bIsPickingUpItemWithUse = 0xcd;
   public const nint m_bPickedUpWeapon = 0xce;

}

public static class CSAdditionalPerRoundStats_t {

   public const nint m_numChickensKilled = 0x0;
   public const nint m_killsWhileBlind = 0x4;
   public const nint m_bombCarrierkills = 0x8;
   public const nint m_iBurnDamageInflicted = 0xc;
   public const nint m_iDinks = 0x10;

}

public static class CSAdditionalMatchStats_t {

   public const nint m_numRoundsSurvived = 0x14;
   public const nint m_maxNumRoundsSurvived = 0x18;
   public const nint m_numRoundsSurvivedTotal = 0x1c;
   public const nint m_iRoundsWonWithoutPurchase = 0x20;
   public const nint m_iRoundsWonWithoutPurchaseTotal = 0x24;
   public const nint m_numFirstKills = 0x28;
   public const nint m_numClutchKills = 0x2c;
   public const nint m_numPistolKills = 0x30;
   public const nint m_numSniperKills = 0x34;
   public const nint m_iNumSuicides = 0x38;
   public const nint m_iNumTeamKills = 0x3c;
   public const nint m_iTeamDamage = 0x40;

}

public static class CCSPlayerController_ActionTrackingServices {

   public const nint m_perRoundStats = 0x40;
   public const nint m_matchStats = 0x90;
   public const nint m_iNumRoundKills = 0x148;
   public const nint m_iNumRoundKillsHeadshots = 0x14c;

}

public static class CDamageRecord {

   public const nint m_PlayerDamager = 0x28;
   public const nint m_PlayerRecipient = 0x2c;
   public const nint m_hPlayerControllerDamager = 0x30;
   public const nint m_hPlayerControllerRecipient = 0x34;
   public const nint m_szPlayerDamagerName = 0x38;
   public const nint m_szPlayerRecipientName = 0x40;
   public const nint m_DamagerXuid = 0x48;
   public const nint m_RecipientXuid = 0x50;
   public const nint m_iDamage = 0x58;
   public const nint m_iActualHealthRemoved = 0x5c;
   public const nint m_iNumHits = 0x60;
   public const nint m_iLastBulletUpdate = 0x64;
   public const nint m_bIsOtherEnemy = 0x68;
   public const nint m_killType = 0x69;

}

