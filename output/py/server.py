



class CChangeLevel:

   m_sMapName: int = 2216
   m_sLandmarkName: int = 2224
   m_OnChangeLevel: int = 2232
   m_bTouched: int = 2272
   m_bNoTouch: int = 2273
   m_bNewChapter: int = 2274
   m_bOnChangeLevelFired: int = 2275



class CTriggerTeleport:

   m_iLandmark: int = 2216
   m_bUseLandmarkAngles: int = 2224
   m_bMirrorPlayer: int = 2225



class CTriggerFan:

   m_vFanOrigin: int = 2216
   m_vFanEnd: int = 2228
   m_vNoise: int = 2240
   m_flForce: int = 2252
   m_flPlayerForce: int = 2256
   m_flRampTime: int = 2260
   m_bFalloff: int = 2264
   m_bPushPlayer: int = 2265
   m_bRampDown: int = 2266
   m_bAddNoise: int = 2267
   m_RampTimer: int = 2272



class CFuncNavBlocker:

   m_bDisabled: int = 1792
   m_nBlockedTeamNumber: int = 1796



class CNavLinkAreaEntity:

   m_flWidth: int = 1200
   m_vLocatorOffset: int = 1204
   m_qLocatorAnglesOffset: int = 1216
   m_strMovementForward: int = 1232
   m_strMovementReverse: int = 1240
   m_nNavLinkIdForward: int = 1248
   m_nNavLinkIdReverse: int = 1252
   m_bEnabled: int = 1256
   m_strFilterName: int = 1264
   m_hFilter: int = 1272
   m_OnNavLinkStart: int = 1280
   m_OnNavLinkFinish: int = 1320
   m_bIsTerminus: int = 1360



class CNavSpaceInfo:

   m_bCreateFlightSpace: int = 1200



class CBeam:

   m_flFrameRate: int = 1792
   m_flHDRColorScale: int = 1796
   m_flFireTime: int = 1800
   m_flDamage: int = 1804
   m_nNumBeamEnts: int = 1808
   m_hBaseMaterial: int = 1816
   m_nHaloIndex: int = 1824
   m_nBeamType: int = 1832
   m_nBeamFlags: int = 1836
   m_hAttachEntity: int = 1840
   m_nAttachIndex: int = 1880
   m_fWidth: int = 1892
   m_fEndWidth: int = 1896
   m_fFadeLength: int = 1900
   m_fHaloScale: int = 1904
   m_fAmplitude: int = 1908
   m_fStartFrame: int = 1912
   m_fSpeed: int = 1916
   m_flFrame: int = 1920
   m_nClipStyle: int = 1924
   m_bTurnedOff: int = 1928
   m_vecEndPos: int = 1932
   m_hEndEntity: int = 1944
   m_nDissolveType: int = 1948



class CFuncLadder:

   m_vecLadderDir: int = 1792
   m_Dismounts: int = 1808
   m_vecLocalTop: int = 1832
   m_vecPlayerMountPositionTop: int = 1844
   m_vecPlayerMountPositionBottom: int = 1856
   m_flAutoRideSpeed: int = 1868
   m_bDisabled: int = 1872
   m_bFakeLadder: int = 1873
   m_bHasSlack: int = 1874
   m_surfacePropName: int = 1880
   m_OnPlayerGotOnLadder: int = 1888
   m_OnPlayerGotOffLadder: int = 1928



class CFuncShatterglass:

   m_hGlassMaterialDamaged: int = 1792
   m_hGlassMaterialUndamaged: int = 1800
   m_hConcreteMaterialEdgeFace: int = 1808
   m_hConcreteMaterialEdgeCaps: int = 1816
   m_hConcreteMaterialEdgeFins: int = 1824
   m_matPanelTransform: int = 1832
   m_matPanelTransformWsTemp: int = 1880
   m_vecShatterGlassShards: int = 1928
   m_PanelSize: int = 1952
   m_vecPanelNormalWs: int = 1960
   m_nNumShardsEverCreated: int = 1972
   m_flLastShatterSoundEmitTime: int = 1976
   m_flLastCleanupTime: int = 1980
   m_flInitAtTime: int = 1984
   m_flGlassThickness: int = 1988
   m_flSpawnInvulnerability: int = 1992
   m_bBreakSilent: int = 1996
   m_bBreakShardless: int = 1997
   m_bBroken: int = 1998
   m_bHasRateLimitedShards: int = 1999
   m_bGlassNavIgnore: int = 2000
   m_bGlassInFrame: int = 2001
   m_bStartBroken: int = 2002
   m_iInitialDamageType: int = 2003
   m_szDamagePositioningEntityName01: int = 2008
   m_szDamagePositioningEntityName02: int = 2016
   m_szDamagePositioningEntityName03: int = 2024
   m_szDamagePositioningEntityName04: int = 2032
   m_vInitialDamagePositions: int = 2040
   m_vExtraDamagePositions: int = 2064
   m_OnBroken: int = 2088
   m_iSurfaceType: int = 2129



class CPrecipitationVData:

   m_szParticlePrecipitationEffect: int = 40
   m_flInnerDistance: int = 264
   m_nAttachType: int = 268
   m_bBatchSameVolumeType: int = 272
   m_nRTEnvCP: int = 276
   m_nRTEnvCPComponent: int = 280
   m_szModifier: int = 288



class CSprite:

   m_hSpriteMaterial: int = 1792
   m_hAttachedToEntity: int = 1800
   m_nAttachment: int = 1804
   m_flSpriteFramerate: int = 1808
   m_flFrame: int = 1812
   m_flDieTime: int = 1816
   m_nBrightness: int = 1832
   m_flBrightnessDuration: int = 1836
   m_flSpriteScale: int = 1840
   m_flScaleDuration: int = 1844
   m_bWorldSpaceScale: int = 1848
   m_flGlowProxySize: int = 1852
   m_flHDRColorScale: int = 1856
   m_flLastTime: int = 1860
   m_flMaxFrame: int = 1864
   m_flStartScale: int = 1868
   m_flDestScale: int = 1872
   m_flScaleTimeStart: int = 1876
   m_nStartBrightness: int = 1880
   m_nDestBrightness: int = 1884
   m_flBrightnessTimeStart: int = 1888
   m_nSpriteWidth: int = 1892
   m_nSpriteHeight: int = 1896



class CBaseClientUIEntity:

   m_bEnabled: int = 1792
   m_DialogXMLName: int = 1800
   m_PanelClassName: int = 1808
   m_PanelID: int = 1816
   m_CustomOutput0: int = 1824
   m_CustomOutput1: int = 1864
   m_CustomOutput2: int = 1904
   m_CustomOutput3: int = 1944
   m_CustomOutput4: int = 1984
   m_CustomOutput5: int = 2024
   m_CustomOutput6: int = 2064
   m_CustomOutput7: int = 2104
   m_CustomOutput8: int = 2144
   m_CustomOutput9: int = 2184



class CPointClientUIDialog:

   m_hActivator: int = 2224
   m_bStartEnabled: int = 2228



class CPointClientUIWorldPanel:

   m_bIgnoreInput: int = 2224
   m_bLit: int = 2225
   m_bFollowPlayerAcrossTeleport: int = 2226
   m_flWidth: int = 2228
   m_flHeight: int = 2232
   m_flDPI: int = 2236
   m_flInteractDistance: int = 2240
   m_flDepthOffset: int = 2244
   m_unOwnerContext: int = 2248
   m_unHorizontalAlign: int = 2252
   m_unVerticalAlign: int = 2256
   m_unOrientation: int = 2260
   m_bAllowInteractionFromAllSceneWorlds: int = 2264
   m_vecCSSClasses: int = 2272
   m_bOpaque: int = 2296
   m_bNoDepth: int = 2297
   m_bRenderBackface: int = 2298
   m_bUseOffScreenIndicator: int = 2299
   m_bExcludeFromSaveGames: int = 2300
   m_bGrabbable: int = 2301
   m_bOnlyRenderToTexture: int = 2302
   m_bDisableMipGen: int = 2303
   m_nExplicitImageLayout: int = 2304



class CPointClientUIWorldTextPanel:

   m_messageText: int = 2312



class CInfoOffscreenPanoramaTexture:

   m_bDisabled: int = 1200
   m_nResolutionX: int = 1204
   m_nResolutionY: int = 1208
   m_szLayoutFileName: int = 1216
   m_RenderAttrName: int = 1224
   m_TargetEntities: int = 1232
   m_nTargetChangeCount: int = 1256
   m_vecCSSClasses: int = 1264
   m_szTargetsName: int = 1288
   m_AdditionalTargetEntities: int = 1296



class CEconItemView:

   m_iItemDefinitionIndex: int = 56
   m_iEntityQuality: int = 60
   m_iEntityLevel: int = 64
   m_iItemID: int = 72
   m_iItemIDHigh: int = 80
   m_iItemIDLow: int = 84
   m_iAccountID: int = 88
   m_iInventoryPosition: int = 92
   m_bInitialized: int = 104
   m_AttributeList: int = 112
   m_NetworkedDynamicAttributes: int = 208
   m_szCustomName: int = 304
   m_szCustomNameOverride: int = 465



class CPointGiveAmmo:

   m_pActivator: int = 1200



class CBombTarget:

   m_OnBombExplode: int = 2216
   m_OnBombPlanted: int = 2256
   m_OnBombDefused: int = 2296
   m_bIsBombSiteB: int = 2336
   m_bIsHeistBombTarget: int = 2337
   m_bBombPlantedHere: int = 2338
   m_szMountTarget: int = 2344
   m_hInstructorHint: int = 2352
   m_nBombSiteDesignation: int = 2356



class CTriggerBuoyancy:

   m_BuoyancyHelper: int = 2216
   m_flFluidDensity: int = 2248



class CFuncWater:

   m_BuoyancyHelper: int = 1792



class CCSPlayerController:

   m_pInGameMoneyServices: int = 1696
   m_pInventoryServices: int = 1704
   m_pActionTrackingServices: int = 1712
   m_pDamageServices: int = 1720
   m_iPing: int = 1728
   m_bHasCommunicationAbuseMute: int = 1732
   m_szCrosshairCodes: int = 1736
   m_iPendingTeamNum: int = 1744
   m_flForceTeamTime: int = 1748
   m_iCompTeammateColor: int = 1752
   m_bEverPlayedOnTeam: int = 1756
   m_bAttemptedToGetColor: int = 1757
   m_iTeammatePreferredColor: int = 1760
   m_bTeamChanged: int = 1764
   m_bInSwitchTeam: int = 1765
   m_bHasSeenJoinGame: int = 1766
   m_bJustBecameSpectator: int = 1767
   m_bSwitchTeamsOnNextRoundReset: int = 1768
   m_bRemoveAllItemsOnNextRoundReset: int = 1769
   m_szClan: int = 1776
   m_szClanName: int = 1784
   m_iCoachingTeam: int = 1816
   m_nPlayerDominated: int = 1824
   m_nPlayerDominatingMe: int = 1832
   m_iCompetitiveRanking: int = 1840
   m_iCompetitiveWins: int = 1844
   m_iCompetitiveRankType: int = 1848
   m_iCompetitiveRankingPredicted_Win: int = 1852
   m_iCompetitiveRankingPredicted_Loss: int = 1856
   m_iCompetitiveRankingPredicted_Tie: int = 1860
   m_nEndMatchNextMapVote: int = 1864
   m_unActiveQuestId: int = 1868
   m_nQuestProgressReason: int = 1872
   m_unPlayerTvControlFlags: int = 1876
   m_iDraftIndex: int = 1920
   m_msQueuedModeDisconnectionTimestamp: int = 1924
   m_uiAbandonRecordedReason: int = 1928
   m_bEverFullyConnected: int = 1932
   m_bAbandonAllowsSurrender: int = 1933
   m_bAbandonOffersInstantSurrender: int = 1934
   m_bDisconnection1MinWarningPrinted: int = 1935
   m_bScoreReported: int = 1936
   m_nDisconnectionTick: int = 1940
   m_bControllingBot: int = 1952
   m_bHasControlledBotThisRound: int = 1953
   m_bHasBeenControlledByPlayerThisRound: int = 1954
   m_nBotsControlledThisRound: int = 1956
   m_bCanControlObservedBot: int = 1960
   m_hPlayerPawn: int = 1964
   m_hObserverPawn: int = 1968
   m_DesiredObserverMode: int = 1972
   m_hDesiredObserverTarget: int = 1976
   m_bPawnIsAlive: int = 1980
   m_iPawnHealth: int = 1984
   m_iPawnArmor: int = 1988
   m_bPawnHasDefuser: int = 1992
   m_bPawnHasHelmet: int = 1993
   m_nPawnCharacterDefIndex: int = 1994
   m_iPawnLifetimeStart: int = 1996
   m_iPawnLifetimeEnd: int = 2000
   m_iPawnBotDifficulty: int = 2004
   m_hOriginalControllerOfCurrentPawn: int = 2008
   m_iScore: int = 2012
   m_iRoundScore: int = 2016
   m_iRoundsWon: int = 2020
   m_vecKills: int = 2024
   m_iMVPs: int = 2048
   m_nUpdateCounter: int = 2052
   m_lastHeldVoteTimer: int = 63656
   m_bShowHints: int = 63680
   m_iNextTimeCheck: int = 63684
   m_bJustDidTeamKill: int = 63688
   m_bPunishForTeamKill: int = 63689
   m_bGaveTeamDamageWarning: int = 63690
   m_bGaveTeamDamageWarningThisRound: int = 63691
   m_LastTeamDamageWarningTime: int = 63692



class CFootstepControl:

   m_source: int = 2216
   m_destination: int = 2224



class CCSWeaponBaseVData:

   m_WeaponType: int = 576
   m_WeaponCategory: int = 580
   m_szViewModel: int = 584
   m_szPlayerModel: int = 808
   m_szWorldDroppedModel: int = 1032
   m_szAimsightLensMaskModel: int = 1256
   m_szMagazineModel: int = 1480
   m_szHeatEffect: int = 1704
   m_szEjectBrassEffect: int = 1928
   m_szMuzzleFlashParticleAlt: int = 2152
   m_szMuzzleFlashThirdPersonParticle: int = 2376
   m_szMuzzleFlashThirdPersonParticleAlt: int = 2600
   m_szTracerParticle: int = 2824
   m_GearSlot: int = 3048
   m_GearSlotPosition: int = 3052
   m_DefaultLoadoutSlot: int = 3056
   m_sWrongTeamMsg: int = 3064
   m_nPrice: int = 3072
   m_nKillAward: int = 3076
   m_nPrimaryReserveAmmoMax: int = 3080
   m_nSecondaryReserveAmmoMax: int = 3084
   m_bMeleeWeapon: int = 3088
   m_bHasBurstMode: int = 3089
   m_bIsRevolver: int = 3090
   m_bCannotShootUnderwater: int = 3091
   m_szName: int = 3096
   m_szAnimExtension: int = 3104
   m_eSilencerType: int = 3112
   m_nCrosshairMinDistance: int = 3116
   m_nCrosshairDeltaDistance: int = 3120
   m_flCycleTime: int = 3124
   m_flMaxSpeed: int = 3132
   m_flSpread: int = 3140
   m_flInaccuracyCrouch: int = 3148
   m_flInaccuracyStand: int = 3156
   m_flInaccuracyJump: int = 3164
   m_flInaccuracyLand: int = 3172
   m_flInaccuracyLadder: int = 3180
   m_flInaccuracyFire: int = 3188
   m_flInaccuracyMove: int = 3196
   m_flRecoilAngle: int = 3204
   m_flRecoilAngleVariance: int = 3212
   m_flRecoilMagnitude: int = 3220
   m_flRecoilMagnitudeVariance: int = 3228
   m_nTracerFrequency: int = 3236
   m_flInaccuracyJumpInitial: int = 3244
   m_flInaccuracyJumpApex: int = 3248
   m_flInaccuracyReload: int = 3252
   m_nRecoilSeed: int = 3256
   m_nSpreadSeed: int = 3260
   m_flTimeToIdleAfterFire: int = 3264
   m_flIdleInterval: int = 3268
   m_flAttackMovespeedFactor: int = 3272
   m_flHeatPerShot: int = 3276
   m_flInaccuracyPitchShift: int = 3280
   m_flInaccuracyAltSoundThreshold: int = 3284
   m_flBotAudibleRange: int = 3288
   m_szUseRadioSubtitle: int = 3296
   m_bUnzoomsAfterShot: int = 3304
   m_bHideViewModelWhenZoomed: int = 3305
   m_nZoomLevels: int = 3308
   m_nZoomFOV1: int = 3312
   m_nZoomFOV2: int = 3316
   m_flZoomTime0: int = 3320
   m_flZoomTime1: int = 3324
   m_flZoomTime2: int = 3328
   m_flIronSightPullUpSpeed: int = 3332
   m_flIronSightPutDownSpeed: int = 3336
   m_flIronSightFOV: int = 3340
   m_flIronSightPivotForward: int = 3344
   m_flIronSightLooseness: int = 3348
   m_angPivotAngle: int = 3352
   m_vecIronSightEyePos: int = 3364
   m_nDamage: int = 3376
   m_flHeadshotMultiplier: int = 3380
   m_flArmorRatio: int = 3384
   m_flPenetration: int = 3388
   m_flRange: int = 3392
   m_flRangeModifier: int = 3396
   m_flFlinchVelocityModifierLarge: int = 3400
   m_flFlinchVelocityModifierSmall: int = 3404
   m_flRecoveryTimeCrouch: int = 3408
   m_flRecoveryTimeStand: int = 3412
   m_flRecoveryTimeCrouchFinal: int = 3416
   m_flRecoveryTimeStandFinal: int = 3420
   m_nRecoveryTransitionStartBullet: int = 3424
   m_nRecoveryTransitionEndBullet: int = 3428
   m_flThrowVelocity: int = 3432
   m_vSmokeColor: int = 3436
   m_szAnimClass: int = 3448



class CPointGamestatsCounter:

   m_strStatisticName: int = 1200
   m_bDisabled: int = 1208



class CEnvHudHint:

   m_iszMessage: int = 1200



class CBuyZone:

   m_LegacyTeamNum: int = 2216



class CFuncConveyor:

   m_szConveyorModels: int = 1792
   m_flTransitionDurationSeconds: int = 1800
   m_angMoveEntitySpace: int = 1804
   m_vecMoveDirEntitySpace: int = 1816
   m_flTargetSpeed: int = 1828
   m_nTransitionStartTick: int = 1832
   m_nTransitionDurationTicks: int = 1836
   m_flTransitionStartSpeed: int = 1840
   m_hConveyorModels: int = 1848



class CCSPlace:

   m_name: int = 1800



class CPlayerSprayDecal:

   m_nUniqueID: int = 1792
   m_unAccountID: int = 1796
   m_unTraceID: int = 1800
   m_rtGcTime: int = 1804
   m_vecEndPos: int = 1808
   m_vecStart: int = 1820
   m_vecLeft: int = 1832
   m_vecNormal: int = 1844
   m_nPlayer: int = 1856
   m_nEntity: int = 1860
   m_nHitbox: int = 1864
   m_flCreationTime: int = 1868
   m_nTintID: int = 1872
   m_nVersion: int = 1876
   m_ubSignature: int = 1877



class CInferno:

   m_fireXDelta: int = 1808
   m_fireYDelta: int = 2064
   m_fireZDelta: int = 2320
   m_fireParentXDelta: int = 2576
   m_fireParentYDelta: int = 2832
   m_fireParentZDelta: int = 3088
   m_bFireIsBurning: int = 3344
   m_BurnNormal: int = 3408
   m_fireCount: int = 4176
   m_nInfernoType: int = 4180
   m_nFireEffectTickBegin: int = 4184
   m_nFireLifetime: int = 4188
   m_bInPostEffectTime: int = 4192
   m_nFiresExtinguishCount: int = 4196
   m_bWasCreatedInSmoke: int = 4200
   m_extent: int = 4720
   m_damageTimer: int = 4744
   m_damageRampTimer: int = 4768
   m_splashVelocity: int = 4792
   m_InitialSplashVelocity: int = 4804
   m_startPos: int = 4816
   m_vecOriginalSpawnLocation: int = 4828
   m_activeTimer: int = 4840
   m_fireSpawnOffset: int = 4856
   m_nMaxFlames: int = 4860
   m_BookkeepingTimer: int = 4864
   m_NextSpreadTimer: int = 4888
   m_nSourceItemDefIndex: int = 4912



class CBarnLight:

   m_bEnabled: int = 1792
   m_nColorMode: int = 1796
   m_Color: int = 1800
   m_flColorTemperature: int = 1804
   m_flBrightness: int = 1808
   m_flBrightnessScale: int = 1812
   m_nDirectLight: int = 1816
   m_nBakedShadowIndex: int = 1820
   m_nLuminaireShape: int = 1824
   m_flLuminaireSize: int = 1828
   m_flLuminaireAnisotropy: int = 1832
   m_LightStyleString: int = 1840
   m_flLightStyleStartTime: int = 1848
   m_QueuedLightStyleStrings: int = 1856
   m_LightStyleEvents: int = 1880
   m_LightStyleTargets: int = 1904
   m_StyleEvent: int = 1928
   m_StyleRadianceVar: int = 2088
   m_StyleVar: int = 2096
   m_hLightCookie: int = 2136
   m_flShape: int = 2144
   m_flSoftX: int = 2148
   m_flSoftY: int = 2152
   m_flSkirt: int = 2156
   m_flSkirtNear: int = 2160
   m_vSizeParams: int = 2164
   m_flRange: int = 2176
   m_vShear: int = 2180
   m_nBakeSpecularToCubemaps: int = 2192
   m_vBakeSpecularToCubemapsSize: int = 2196
   m_nCastShadows: int = 2208
   m_nShadowMapSize: int = 2212
   m_nShadowPriority: int = 2216
   m_bContactShadow: int = 2220
   m_nBounceLight: int = 2224
   m_flBounceScale: int = 2228
   m_flMinRoughness: int = 2232
   m_vAlternateColor: int = 2236
   m_fAlternateColorBrightness: int = 2248
   m_nFog: int = 2252
   m_flFogStrength: int = 2256
   m_nFogShadows: int = 2260
   m_flFogScale: int = 2264
   m_flFadeSizeStart: int = 2268
   m_flFadeSizeEnd: int = 2272
   m_flShadowFadeSizeStart: int = 2276
   m_flShadowFadeSizeEnd: int = 2280
   m_bPrecomputedFieldsValid: int = 2284
   m_vPrecomputedBoundsMins: int = 2288
   m_vPrecomputedBoundsMaxs: int = 2300
   m_vPrecomputedOBBOrigin: int = 2312
   m_vPrecomputedOBBAngles: int = 2324
   m_vPrecomputedOBBExtent: int = 2336
   m_bPvsModifyEntity: int = 2348



class CRectLight:

   m_bShowLight: int = 2360



class COmniLight:

   m_flInnerAngle: int = 2360
   m_flOuterAngle: int = 2364
   m_bShowLight: int = 2368



class CCSTeam:

   m_nLastRecievedShorthandedRoundBonus: int = 1384
   m_nShorthandedRoundBonusStartRound: int = 1388
   m_bSurrendered: int = 1392
   m_szTeamMatchStat: int = 1393
   m_numMapVictories: int = 1908
   m_scoreFirstHalf: int = 1912
   m_scoreSecondHalf: int = 1916
   m_scoreOvertime: int = 1920
   m_szClanTeamname: int = 1924
   m_iClanID: int = 2056
   m_szTeamFlagImage: int = 2060
   m_szTeamLogoImage: int = 2068
   m_flNextResourceTime: int = 2076
   m_iLastUpdateSentAt: int = 2080



class CMapInfo:

   m_iBuyingStatus: int = 1200
   m_flBombRadius: int = 1204
   m_iPetPopulation: int = 1208
   m_bUseNormalSpawnsForDM: int = 1212
   m_bDisableAutoGeneratedDMSpawns: int = 1213
   m_flBotMaxVisionDistance: int = 1216
   m_iHostageCount: int = 1220
   m_bFadePlayerVisibilityFarZ: int = 1224



class CCSBot:

   m_lastCoopSpawnPoint: int = 216
   m_eyePosition: int = 232
   m_name: int = 244
   m_combatRange: int = 308
   m_isRogue: int = 312
   m_rogueTimer: int = 320
   m_diedLastRound: int = 348
   m_safeTime: int = 352
   m_wasSafe: int = 356
   m_blindFire: int = 364
   m_surpriseTimer: int = 368
   m_bAllowActive: int = 392
   m_isFollowing: int = 393
   m_leader: int = 396
   m_followTimestamp: int = 400
   m_allowAutoFollowTime: int = 404
   m_hurryTimer: int = 408
   m_alertTimer: int = 432
   m_sneakTimer: int = 456
   m_panicTimer: int = 480
   m_stateTimestamp: int = 1200
   m_isAttacking: int = 1204
   m_isOpeningDoor: int = 1205
   m_taskEntity: int = 1212
   m_goalPosition: int = 1228
   m_goalEntity: int = 1240
   m_avoid: int = 1244
   m_avoidTimestamp: int = 1248
   m_isStopping: int = 1252
   m_hasVisitedEnemySpawn: int = 1253
   m_stillTimer: int = 1256
   m_bEyeAnglesUnderPathFinderControl: int = 1272
   m_pathIndex: int = 26096
   m_areaEnteredTimestamp: int = 26100
   m_repathTimer: int = 26104
   m_avoidFriendTimer: int = 26128
   m_isFriendInTheWay: int = 26152
   m_politeTimer: int = 26160
   m_isWaitingBehindFriend: int = 26184
   m_pathLadderEnd: int = 26228
   m_mustRunTimer: int = 26304
   m_waitTimer: int = 26328
   m_updateTravelDistanceTimer: int = 26352
   m_playerTravelDistance: int = 26376
   m_travelDistancePhase: int = 26632
   m_hostageEscortCount: int = 27040
   m_hostageEscortCountTimestamp: int = 27044
   m_desiredTeam: int = 27048
   m_hasJoined: int = 27052
   m_isWaitingForHostage: int = 27053
   m_inhibitWaitingForHostageTimer: int = 27056
   m_waitForHostageTimer: int = 27080
   m_noisePosition: int = 27104
   m_noiseTravelDistance: int = 27116
   m_noiseTimestamp: int = 27120
   m_noiseSource: int = 27128
   m_noiseBendTimer: int = 27152
   m_bentNoisePosition: int = 27176
   m_bendNoisePositionValid: int = 27188
   m_lookAroundStateTimestamp: int = 27192
   m_lookAheadAngle: int = 27196
   m_forwardAngle: int = 27200
   m_inhibitLookAroundTimestamp: int = 27204
   m_lookAtSpot: int = 27212
   m_lookAtSpotDuration: int = 27228
   m_lookAtSpotTimestamp: int = 27232
   m_lookAtSpotAngleTolerance: int = 27236
   m_lookAtSpotClearIfClose: int = 27240
   m_lookAtSpotAttack: int = 27241
   m_lookAtDesc: int = 27248
   m_peripheralTimestamp: int = 27256
   m_approachPointCount: int = 27648
   m_approachPointViewPosition: int = 27652
   m_viewSteadyTimer: int = 27664
   m_tossGrenadeTimer: int = 27688
   m_isAvoidingGrenade: int = 27720
   m_spotCheckTimestamp: int = 27752
   m_checkedHidingSpotCount: int = 28784
   m_lookPitch: int = 28788
   m_lookPitchVel: int = 28792
   m_lookYaw: int = 28796
   m_lookYawVel: int = 28800
   m_targetSpot: int = 28804
   m_targetSpotVelocity: int = 28816
   m_targetSpotPredicted: int = 28828
   m_aimError: int = 28840
   m_aimGoal: int = 28852
   m_targetSpotTime: int = 28864
   m_aimFocus: int = 28868
   m_aimFocusInterval: int = 28872
   m_aimFocusNextUpdate: int = 28876
   m_ignoreEnemiesTimer: int = 28888
   m_enemy: int = 28912
   m_isEnemyVisible: int = 28916
   m_visibleEnemyParts: int = 28917
   m_lastEnemyPosition: int = 28920
   m_lastSawEnemyTimestamp: int = 28932
   m_firstSawEnemyTimestamp: int = 28936
   m_currentEnemyAcquireTimestamp: int = 28940
   m_enemyDeathTimestamp: int = 28944
   m_friendDeathTimestamp: int = 28948
   m_isLastEnemyDead: int = 28952
   m_nearbyEnemyCount: int = 28956
   m_bomber: int = 29480
   m_nearbyFriendCount: int = 29484
   m_closestVisibleFriend: int = 29488
   m_closestVisibleHumanFriend: int = 29492
   m_attentionInterval: int = 29496
   m_attacker: int = 29512
   m_attackedTimestamp: int = 29516
   m_burnedByFlamesTimer: int = 29520
   m_lastVictimID: int = 29536
   m_isAimingAtEnemy: int = 29540
   m_isRapidFiring: int = 29541
   m_equipTimer: int = 29544
   m_zoomTimer: int = 29560
   m_fireWeaponTimestamp: int = 29584
   m_lookForWeaponsOnGroundTimer: int = 29592
   m_bIsSleeping: int = 29616
   m_isEnemySniperVisible: int = 29617
   m_sawEnemySniperTimer: int = 29624
   m_enemyQueueIndex: int = 29808
   m_enemyQueueCount: int = 29809
   m_enemyQueueAttendIndex: int = 29810
   m_isStuck: int = 29811
   m_stuckTimestamp: int = 29812
   m_stuckSpot: int = 29816
   m_wiggleTimer: int = 29832
   m_stuckJumpTimer: int = 29856
   m_nextCleanupCheckTimestamp: int = 29880
   m_avgVel: int = 29884
   m_avgVelIndex: int = 29924
   m_avgVelCount: int = 29928
   m_lastOrigin: int = 29932
   m_lastRadioRecievedTimestamp: int = 29948
   m_lastRadioSentTimestamp: int = 29952
   m_radioSubject: int = 29956
   m_radioPosition: int = 29960
   m_voiceEndTimestamp: int = 29972
   m_lastValidReactionQueueFrame: int = 29984



class CFogVolume:

   m_fogName: int = 1792
   m_postProcessName: int = 1800
   m_colorCorrectionName: int = 1808
   m_bDisabled: int = 1824
   m_bInFogVolumesList: int = 1825



class CInfoDynamicShadowHint:

   m_bDisabled: int = 1200
   m_flRange: int = 1204
   m_nImportance: int = 1208
   m_nLightChoice: int = 1212
   m_hLight: int = 1216



class CInfoDynamicShadowHintBox:

   m_vBoxMins: int = 1224
   m_vBoxMaxs: int = 1236



class CEnvSky:

   m_hSkyMaterial: int = 1792
   m_hSkyMaterialLightingOnly: int = 1800
   m_bStartDisabled: int = 1808
   m_vTintColor: int = 1809
   m_vTintColorLightingOnly: int = 1813
   m_flBrightnessScale: int = 1820
   m_nFogType: int = 1824
   m_flFogMinStart: int = 1828
   m_flFogMinEnd: int = 1832
   m_flFogMaxStart: int = 1836
   m_flFogMaxEnd: int = 1840
   m_bEnabled: int = 1844



class CTonemapTrigger:

   m_tonemapControllerName: int = 2216
   m_hTonemapController: int = 2224



class CFogTrigger:

   m_fog: int = 2216



class CLightEntity:

   m_CLightComponent: int = 1792



class CPostProcessingVolume:

   m_hPostSettings: int = 2232
   m_flFadeDuration: int = 2240
   m_flMinLogExposure: int = 2244
   m_flMaxLogExposure: int = 2248
   m_flMinExposure: int = 2252
   m_flMaxExposure: int = 2256
   m_flExposureCompensation: int = 2260
   m_flExposureFadeSpeedUp: int = 2264
   m_flExposureFadeSpeedDown: int = 2268
   m_flTonemapEVSmoothingRange: int = 2272
   m_bMaster: int = 2276
   m_bExposureControl: int = 2277
   m_flRate: int = 2280
   m_flTonemapPercentTarget: int = 2284
   m_flTonemapPercentBrightPixels: int = 2288
   m_flTonemapMinAvgLum: int = 2292



class CEnvParticleGlow:

   m_flAlphaScale: int = 3192
   m_flRadiusScale: int = 3196
   m_flSelfIllumScale: int = 3200
   m_ColorTint: int = 3204
   m_hTextureOverride: int = 3208



class CTextureBasedAnimatable:

   m_bLoop: int = 1792
   m_flFPS: int = 1796
   m_hPositionKeys: int = 1800
   m_hRotationKeys: int = 1808
   m_vAnimationBoundsMin: int = 1816
   m_vAnimationBoundsMax: int = 1828
   m_flStartTime: int = 1840
   m_flStartFrame: int = 1844



class CBaseAnimGraph:

   m_bInitiallyPopulateInterpHistory: int = 1792
   m_bShouldAnimateDuringGameplayPause: int = 1793
   m_pChoreoServices: int = 1800
   m_bAnimGraphUpdateEnabled: int = 1808
   m_flMaxSlopeDistance: int = 1812
   m_vLastSlopeCheckPos: int = 1816
   m_bAnimGraphDirty: int = 1828
   m_vecForce: int = 1832
   m_nForceBone: int = 1844
   m_pRagdollPose: int = 1864
   m_bClientRagdoll: int = 1872



class CBaseProp:

   m_bModelOverrodeBlockLOS: int = 2192
   m_iShapeType: int = 2196
   m_bConformToCollisionBounds: int = 2200
   m_mPreferredCatchTransform: int = 2204



class CBreakableProp:

   m_OnBreak: int = 2272
   m_OnHealthChanged: int = 2312
   m_OnTakeDamage: int = 2352
   m_impactEnergyScale: int = 2392
   m_iMinHealthDmg: int = 2396
   m_preferredCarryAngles: int = 2400
   m_flPressureDelay: int = 2412
   m_hBreaker: int = 2416
   m_PerformanceMode: int = 2420
   m_flDmgModBullet: int = 2424
   m_flDmgModClub: int = 2428
   m_flDmgModExplosive: int = 2432
   m_flDmgModFire: int = 2436
   m_iszPhysicsDamageTableName: int = 2440
   m_iszBasePropData: int = 2448
   m_iInteractions: int = 2456
   m_flPreventDamageBeforeTime: int = 2460
   m_bHasBreakPiecesOrCommands: int = 2464
   m_explodeDamage: int = 2468
   m_explodeRadius: int = 2472
   m_explosionDelay: int = 2480
   m_explosionBuildupSound: int = 2488
   m_explosionCustomEffect: int = 2496
   m_explosionCustomSound: int = 2504
   m_explosionModifier: int = 2512
   m_hPhysicsAttacker: int = 2520
   m_flLastPhysicsInfluenceTime: int = 2524
   m_bOriginalBlockLOS: int = 2528
   m_flDefaultFadeScale: int = 2532
   m_hLastAttacker: int = 2536
   m_hFlareEnt: int = 2540
   m_bUsePuntSound: int = 2544
   m_iszPuntSound: int = 2552
   m_noGhostCollision: int = 2560



class CDynamicProp:

   m_bCreateNavObstacle: int = 2576
   m_bUseHitboxesForRenderBox: int = 2577
   m_bUseAnimGraph: int = 2578
   m_pOutputAnimBegun: int = 2584
   m_pOutputAnimOver: int = 2624
   m_pOutputAnimLoopCycleOver: int = 2664
   m_OnAnimReachedStart: int = 2704
   m_OnAnimReachedEnd: int = 2744
   m_iszDefaultAnim: int = 2784
   m_nDefaultAnimLoopMode: int = 2792
   m_bAnimateOnServer: int = 2796
   m_bRandomizeCycle: int = 2797
   m_bStartDisabled: int = 2798
   m_bScriptedMovement: int = 2799
   m_bFiredStartEndOutput: int = 2800
   m_bForceNpcExclude: int = 2801
   m_bCreateNonSolid: int = 2802
   m_bIsOverrideProp: int = 2803
   m_iInitialGlowState: int = 2804
   m_nGlowRange: int = 2808
   m_nGlowRangeMin: int = 2812
   m_glowColor: int = 2816
   m_nGlowTeam: int = 2820



class CColorCorrectionVolume:

   m_bEnabled: int = 2216
   m_MaxWeight: int = 2220
   m_FadeDuration: int = 2224
   m_bStartDisabled: int = 2228
   m_Weight: int = 2232
   m_lookupFilename: int = 2236
   m_LastEnterWeight: int = 2748
   m_LastEnterTime: int = 2752
   m_LastExitWeight: int = 2756
   m_LastExitTime: int = 2760



class CPointCommentaryNode:

   m_iszPreCommands: int = 2192
   m_iszPostCommands: int = 2200
   m_iszCommentaryFile: int = 2208
   m_iszViewTarget: int = 2216
   m_hViewTarget: int = 2224
   m_hViewTargetAngles: int = 2228
   m_iszViewPosition: int = 2232
   m_hViewPosition: int = 2240
   m_hViewPositionMover: int = 2244
   m_bPreventMovement: int = 2248
   m_bUnderCrosshair: int = 2249
   m_bUnstoppable: int = 2250
   m_flFinishedTime: int = 2252
   m_vecFinishOrigin: int = 2256
   m_vecOriginalAngles: int = 2268
   m_vecFinishAngles: int = 2280
   m_bPreventChangesWhileMoving: int = 2292
   m_bDisabled: int = 2293
   m_vecTeleportOrigin: int = 2296
   m_flAbortedPlaybackAt: int = 2308
   m_pOnCommentaryStarted: int = 2312
   m_pOnCommentaryStopped: int = 2352
   m_bActive: int = 2392
   m_flStartTime: int = 2396
   m_flStartTimeInCommentary: int = 2400
   m_iszTitle: int = 2408
   m_iszSpeakers: int = 2416
   m_iNodeNumber: int = 2424
   m_iNodeNumberMax: int = 2428
   m_bListenedTo: int = 2432



class CRotDoor:

   m_bSolidBsp: int = 2440



class CEnvBeam:

   m_active: int = 1952
   m_spriteTexture: int = 1960
   m_iszStartEntity: int = 1968
   m_iszEndEntity: int = 1976
   m_life: int = 1984
   m_boltWidth: int = 1988
   m_noiseAmplitude: int = 1992
   m_speed: int = 1996
   m_restrike: int = 2000
   m_iszSpriteName: int = 2008
   m_frameStart: int = 2016
   m_vEndPointWorld: int = 2020
   m_vEndPointRelative: int = 2032
   m_radius: int = 2044
   m_TouchType: int = 2048
   m_iFilterName: int = 2056
   m_hFilter: int = 2064
   m_iszDecal: int = 2072
   m_OnTouchedByEntity: int = 2080



class CFuncMonitor:

   m_targetCamera: int = 1824
   m_nResolutionEnum: int = 1832
   m_bRenderShadows: int = 1836
   m_bUseUniqueColorTarget: int = 1837
   m_brushModelName: int = 1840
   m_hTargetCamera: int = 1848
   m_bEnabled: int = 1852
   m_bDraw3DSkybox: int = 1853
   m_bStartEnabled: int = 1854



class CGunTarget:

   m_on: int = 1920
   m_hTargetEnt: int = 1924
   m_OnDeath: int = 1928



class CTriggerGameEvent:

   m_strStartTouchEventName: int = 2216
   m_strEndTouchEventName: int = 2224
   m_strTriggerID: int = 2232



class CGameText:

   m_iszMessage: int = 1808
   m_textParms: int = 1816



class CGamePlayerZone:

   m_OnPlayerInZone: int = 1800
   m_OnPlayerOutZone: int = 1840
   m_PlayersInCount: int = 1880
   m_PlayersOutCount: int = 1920



class CMarkupVolumeTagged_NavGame:

   m_bFloodFillAttribute: int = 1880



class CFuncElectrifiedVolume:

   m_EffectName: int = 1824
   m_EffectInterpenetrateName: int = 1832
   m_EffectZapName: int = 1840
   m_iszEffectSource: int = 1848



class CConstraintAnchor:

   m_massScale: int = 2192



class COrnamentProp:

   m_initialOwner: int = 2824



class CInstancedSceneEntity:

   m_hOwner: int = 2568
   m_bHadOwner: int = 2572
   m_flPostSpeakDelay: int = 2576
   m_flPreDelay: int = 2580
   m_bIsBackground: int = 2584



class CTriggerSoundscape:

   m_hSoundscape: int = 2216
   m_SoundscapeName: int = 2224
   m_spectators: int = 2232



class CFuncTankTrain:

   m_OnDeath: int = 2128



class CBasePlatTrain:

   m_NoiseMoving: int = 1920
   m_NoiseArrived: int = 1928
   m_volume: int = 1944
   m_flTWidth: int = 1948
   m_flTLength: int = 1952



class CFuncPlat:

   m_sNoise: int = 1960



class CFuncPlatRot:

   m_end: int = 1968
   m_start: int = 1980



class CFuncTrain:

   m_hCurrentTarget: int = 1960
   m_activated: int = 1964
   m_hEnemy: int = 1968
   m_flBlockDamage: int = 1972
   m_flNextBlockTime: int = 1976
   m_iszLastTarget: int = 1984



class CFuncTrackChange:

   m_trackTop: int = 1992
   m_trackBottom: int = 2000
   m_train: int = 2008
   m_trackTopName: int = 2016
   m_trackBottomName: int = 2024
   m_trainName: int = 2032
   m_code: int = 2040
   m_targetState: int = 2044
   m_use: int = 2048



class CTriggerRemove:

   m_OnRemove: int = 2216



class CScriptTriggerHurt:

   m_vExtent: int = 2376



class CScriptTriggerMultiple:

   m_vExtent: int = 2256



class CScriptTriggerOnce:

   m_vExtent: int = 2256



class CTriggerLook:

   m_hLookTarget: int = 2256
   m_flFieldOfView: int = 2260
   m_flLookTime: int = 2264
   m_flLookTimeTotal: int = 2268
   m_flLookTimeLast: int = 2272
   m_flTimeoutDuration: int = 2276
   m_bTimeoutFired: int = 2280
   m_bIsLooking: int = 2281
   m_b2DFOV: int = 2282
   m_bUseVelocity: int = 2283
   m_hActivator: int = 2284
   m_bTestOcclusion: int = 2288
   m_OnTimeout: int = 2296
   m_OnStartLook: int = 2336
   m_OnEndLook: int = 2376



class CTriggerPush:

   m_angPushEntitySpace: int = 2216
   m_vecPushDirEntitySpace: int = 2228
   m_bTriggerOnStartTouch: int = 2240
   m_flAlternateTicksFix: int = 2244
   m_flPushSpeed: int = 2248



class CScriptTriggerPush:

   m_vExtent: int = 2256



class CTriggerToggleSave:

   m_bDisabled: int = 2216



class CTriggerSave:

   m_bForceNewLevelUnit: int = 2216
   m_fDangerousTimer: int = 2220
   m_minHitPoints: int = 2224



class CTriggerProximity:

   m_hMeasureTarget: int = 2216
   m_iszMeasureTarget: int = 2224
   m_fRadius: int = 2232
   m_nTouchers: int = 2236
   m_NearestEntityDistance: int = 2240



class CTriggerImpact:

   m_flMagnitude: int = 2256
   m_flNoise: int = 2260
   m_flViewkick: int = 2264
   m_pOutputForce: int = 2272



class CTriggerActiveWeaponDetect:

   m_OnTouchedActiveWeapon: int = 2216
   m_iszWeaponClassName: int = 2256



class CTriggerPhysics:

   m_gravityScale: int = 2232
   m_linearLimit: int = 2236
   m_linearDamping: int = 2240
   m_angularLimit: int = 2244
   m_angularDamping: int = 2248
   m_linearForce: int = 2252
   m_flFrequency: int = 2256
   m_flDampingRatio: int = 2260
   m_vecLinearForcePointAt: int = 2264
   m_bCollapseToForcePoint: int = 2276
   m_vecLinearForcePointAtWorld: int = 2280
   m_vecLinearForceDirection: int = 2292
   m_bConvertToDebrisWhenPossible: int = 2304



class CTriggerDetectBulletFire:

   m_bPlayerFireOnly: int = 2216
   m_OnDetectedBulletFire: int = 2224



class CTriggerDetectExplosion:

   m_OnDetectedExplosion: int = 2272



class CScriptNavBlocker:

   m_vExtent: int = 1808



class CBaseFlex:

   m_flexWeight: int = 2192
   m_vLookTargetPosition: int = 2216
   m_blinktoggle: int = 2228
   m_flAllowResponsesEndTime: int = 2312
   m_flLastFlexAnimationTime: int = 2316
   m_nNextSceneEventId: int = 2320
   m_bUpdateLayerPriorities: int = 2324



class CBasePropDoor:

   m_flAutoReturnDelay: int = 2840
   m_hDoorList: int = 2848
   m_nHardwareType: int = 2872
   m_bNeedsHardware: int = 2876
   m_eDoorState: int = 2880
   m_bLocked: int = 2884
   m_closedPosition: int = 2888
   m_closedAngles: int = 2900
   m_hBlocker: int = 2912
   m_bFirstBlocked: int = 2916
   m_ls: int = 2920
   m_bForceClosed: int = 2952
   m_vecLatchWorldPosition: int = 2956
   m_hActivator: int = 2968
   m_SoundMoving: int = 2984
   m_SoundOpen: int = 2992
   m_SoundClose: int = 3000
   m_SoundLock: int = 3008
   m_SoundUnlock: int = 3016
   m_SoundLatch: int = 3024
   m_SoundPound: int = 3032
   m_SoundJiggle: int = 3040
   m_SoundLockedAnim: int = 3048
   m_numCloseAttempts: int = 3056
   m_nPhysicsMaterial: int = 3060
   m_SlaveName: int = 3064
   m_hMaster: int = 3072
   m_OnBlockedClosing: int = 3080
   m_OnBlockedOpening: int = 3120
   m_OnUnblockedClosing: int = 3160
   m_OnUnblockedOpening: int = 3200
   m_OnFullyClosed: int = 3240
   m_OnFullyOpen: int = 3280
   m_OnClose: int = 3320
   m_OnOpen: int = 3360
   m_OnLockedUse: int = 3400
   m_OnAjarOpen: int = 3440



class CEnvLaser:

   m_iszLaserTarget: int = 1952
   m_pSprite: int = 1960
   m_iszSpriteName: int = 1968
   m_firePosition: int = 1976
   m_flStartFrame: int = 1988



class CFish:

   m_pool: int = 2192
   m_id: int = 2196
   m_x: int = 2200
   m_y: int = 2204
   m_z: int = 2208
   m_angle: int = 2212
   m_angleChange: int = 2216
   m_forward: int = 2220
   m_perp: int = 2232
   m_poolOrigin: int = 2244
   m_waterLevel: int = 2256
   m_speed: int = 2260
   m_desiredSpeed: int = 2264
   m_calmSpeed: int = 2268
   m_panicSpeed: int = 2272
   m_avoidRange: int = 2276
   m_turnTimer: int = 2280
   m_turnClockwise: int = 2304
   m_goTimer: int = 2312
   m_moveTimer: int = 2336
   m_panicTimer: int = 2360
   m_disperseTimer: int = 2384
   m_proximityTimer: int = 2408
   m_visible: int = 2432



class CItem:

   m_OnPlayerTouch: int = 2200
   m_bActivateWhenAtRest: int = 2240
   m_OnCacheInteraction: int = 2248
   m_OnPlayerPickup: int = 2288
   m_OnGlovePulled: int = 2328
   m_vOriginalSpawnOrigin: int = 2368
   m_vOriginalSpawnAngles: int = 2380
   m_bPhysStartAsleep: int = 2392



class CRagdollProp:

   m_ragdoll: int = 2200
   m_bStartDisabled: int = 2256
   m_ragPos: int = 2264
   m_ragAngles: int = 2288
   m_hRagdollSource: int = 2312
   m_lastUpdateTickCount: int = 2316
   m_allAsleep: int = 2320
   m_bFirstCollisionAfterLaunch: int = 2321
   m_hDamageEntity: int = 2324
   m_hKiller: int = 2328
   m_hPhysicsAttacker: int = 2332
   m_flLastPhysicsInfluenceTime: int = 2336
   m_flFadeOutStartTime: int = 2340
   m_flFadeTime: int = 2344
   m_vecLastOrigin: int = 2348
   m_flAwakeTime: int = 2360
   m_flLastOriginChangeTime: int = 2364
   m_nBloodColor: int = 2368
   m_strOriginClassName: int = 2376
   m_strSourceClassName: int = 2384
   m_bHasBeenPhysgunned: int = 2392
   m_bShouldTeleportPhysics: int = 2393
   m_flBlendWeight: int = 2396
   m_flDefaultFadeScale: int = 2400
   m_ragdollMins: int = 2408
   m_ragdollMaxs: int = 2432
   m_bShouldDeleteActivationRecord: int = 2456
   m_bValidatePoweredRagdollPose: int = 2552



class CPhysMagnet:

   m_OnMagnetAttach: int = 2192
   m_OnMagnetDetach: int = 2232
   m_massScale: int = 2272
   m_forceLimit: int = 2276
   m_torqueLimit: int = 2280
   m_MagnettedEntities: int = 2288
   m_bActive: int = 2312
   m_bHasHitSomething: int = 2313
   m_flTotalMass: int = 2316
   m_flRadius: int = 2320
   m_flNextSuckTime: int = 2324
   m_iMaxObjectsAttached: int = 2328



class CPhysicsProp:

   m_MotionEnabled: int = 2576
   m_OnAwakened: int = 2616
   m_OnAwake: int = 2656
   m_OnAsleep: int = 2696
   m_OnPlayerUse: int = 2736
   m_OnPlayerPickup: int = 2776
   m_OnOutOfWorld: int = 2816
   m_massScale: int = 2856
   m_inertiaScale: int = 2860
   m_buoyancyScale: int = 2864
   m_damageType: int = 2868
   m_damageToEnableMotion: int = 2872
   m_flForceToEnableMotion: int = 2876
   m_bThrownByPlayer: int = 2880
   m_bDroppedByPlayer: int = 2881
   m_bTouchedByPlayer: int = 2882
   m_bFirstCollisionAfterLaunch: int = 2883
   m_iExploitableByPlayer: int = 2884
   m_bHasBeenAwakened: int = 2888
   m_bIsOverrideProp: int = 2889
   m_fNextCheckDisableMotionContactsTime: int = 2892
   m_iInitialGlowState: int = 2896
   m_nGlowRange: int = 2900
   m_nGlowRangeMin: int = 2904
   m_glowColor: int = 2908
   m_bForceNavIgnore: int = 2912
   m_bNoNavmeshBlocker: int = 2913
   m_bForceNpcExclude: int = 2914
   m_bShouldAutoConvertBackFromDebris: int = 2915
   m_bMuteImpactEffects: int = 2916
   m_bAcceptDamageFromHeldObjects: int = 2924
   m_bEnableUseOutput: int = 2925
   m_bAwake: int = 2926
   m_nCollisionGroupOverride: int = 2928



class CPhysicsPropRespawnable:

   m_vOriginalSpawnOrigin: int = 2936
   m_vOriginalSpawnAngles: int = 2948
   m_vOriginalMins: int = 2960
   m_vOriginalMaxs: int = 2972
   m_flRespawnDuration: int = 2984



class CShatterGlassShardPhysics:

   m_bDebris: int = 2936
   m_hParentShard: int = 2940
   m_ShardDesc: int = 2944



class CEconEntity:

   m_AttributeManager: int = 2352
   m_OriginalOwnerXuidLow: int = 3064
   m_OriginalOwnerXuidHigh: int = 3068
   m_nFallbackPaintKit: int = 3072
   m_nFallbackSeed: int = 3076
   m_flFallbackWear: int = 3080
   m_nFallbackStatTrak: int = 3084
   m_hOldProvidee: int = 3088
   m_iOldOwnerClass: int = 3092



class CEconWearable:

   m_nForceSkin: int = 3096
   m_bAlwaysAllow: int = 3100



class CBaseGrenade:

   m_OnPlayerPickup: int = 2344
   m_OnExplode: int = 2384
   m_bHasWarnedAI: int = 2424
   m_bIsSmokeGrenade: int = 2425
   m_bIsLive: int = 2426
   m_DmgRadius: int = 2428
   m_flDetonateTime: int = 2432
   m_flWarnAITime: int = 2436
   m_flDamage: int = 2440
   m_iszBounceSound: int = 2448
   m_ExplosionSound: int = 2456
   m_hThrower: int = 2468
   m_flNextAttack: int = 2492
   m_hOriginalThrower: int = 2496



class CBaseViewModel:

   m_vecLastFacing: int = 2200
   m_nViewModelIndex: int = 2212
   m_nAnimationParity: int = 2216
   m_flAnimationStartTime: int = 2220
   m_hWeapon: int = 2224
   m_sVMName: int = 2232
   m_sAnimationPrefix: int = 2240
   m_hOldLayerSequence: int = 2248
   m_oldLayer: int = 2252
   m_oldLayerStartTime: int = 2256
   m_hControlPanel: int = 2260



class CPlantedC4:

   m_bBombTicking: int = 2192
   m_flC4Blow: int = 2196
   m_nBombSite: int = 2200
   m_nSourceSoundscapeHash: int = 2204
   m_OnBombDefused: int = 2208
   m_OnBombBeginDefuse: int = 2248
   m_OnBombDefuseAborted: int = 2288
   m_bCannotBeDefused: int = 2328
   m_entitySpottedState: int = 2336
   m_nSpotRules: int = 2360
   m_bTrainingPlacedByPlayer: int = 2364
   m_bHasExploded: int = 2365
   m_flTimerLength: int = 2368
   m_bBeingDefused: int = 2372
   m_fLastDefuseTime: int = 2380
   m_flDefuseLength: int = 2388
   m_flDefuseCountDown: int = 2392
   m_bBombDefused: int = 2396
   m_hBombDefuser: int = 2400
   m_hControlPanel: int = 2404
   m_iProgressBarTime: int = 2408
   m_bVoiceAlertFired: int = 2412
   m_bVoiceAlertPlayed: int = 2413
   m_flNextBotBeepTime: int = 2420
   m_bPlantedAfterPickup: int = 2428
   m_angCatchUpToPlayerEye: int = 2432
   m_flLastSpinDetectionTime: int = 2444



class CBaseCSGrenadeProjectile:

   m_vInitialVelocity: int = 2504
   m_nBounces: int = 2516
   m_nExplodeEffectIndex: int = 2520
   m_nExplodeEffectTickBegin: int = 2528
   m_vecExplodeEffectOrigin: int = 2532
   m_unOGSExtraFlags: int = 2544
   m_bDetonationRecorded: int = 2545
   m_flDetonateTime: int = 2548
   m_nItemIndex: int = 2552
   m_vecOriginalSpawnLocation: int = 2556
   m_flLastBounceSoundTime: int = 2568
   m_vecGrenadeSpin: int = 2572
   m_vecLastHitSurfaceNormal: int = 2584
   m_nTicksAtZeroVelocity: int = 2596



class CItemDogtags:

   m_OwningPlayer: int = 2408
   m_KillingPlayer: int = 2412



class CSensorGrenadeProjectile:

   m_fExpireTime: int = 2600
   m_fNextDetectPlayerSound: int = 2604
   m_hDisplayGrenade: int = 2608



class CFlashbangProjectile:

   m_flTimeToDetonate: int = 2600
   m_numOpponentsHit: int = 2604
   m_numTeammatesHit: int = 2605



class CChicken:

   m_AttributeManager: int = 2856
   m_OriginalOwnerXuidLow: int = 3568
   m_OriginalOwnerXuidHigh: int = 3572
   m_updateTimer: int = 3576
   m_stuckAnchor: int = 3600
   m_stuckTimer: int = 3616
   m_collisionStuckTimer: int = 3640
   m_isOnGround: int = 3664
   m_vFallVelocity: int = 3668
   m_activity: int = 3680
   m_activityTimer: int = 3688
   m_turnRate: int = 3712
   m_fleeFrom: int = 3716
   m_moveRateThrottleTimer: int = 3720
   m_startleTimer: int = 3744
   m_vocalizeTimer: int = 3768
   m_flWhenZombified: int = 3792
   m_jumpedThisFrame: int = 3796
   m_leader: int = 3800
   m_reuseTimer: int = 3808
   m_hasBeenUsed: int = 3832
   m_jumpTimer: int = 3840
   m_flLastJumpTime: int = 3864
   m_bInJump: int = 3868
   m_isWaitingForLeader: int = 3869
   m_repathTimer: int = 12072
   m_inhibitDoorTimer: int = 12096
   m_inhibitObstacleAvoidanceTimer: int = 12240
   m_vecPathGoal: int = 12272
   m_flActiveFollowStartTime: int = 12284
   m_followMinuteTimer: int = 12288
   m_vecLastEggPoopPosition: int = 12312
   m_vecEggsPooped: int = 12328
   m_BlockDirectionTimer: int = 12360



class CItemDefuser:

   m_entitySpottedState: int = 2408
   m_nSpotRules: int = 2432



class CBasePlayerWeapon:

   m_nNextPrimaryAttackTick: int = 3096
   m_flNextPrimaryAttackTickRatio: int = 3100
   m_nNextSecondaryAttackTick: int = 3104
   m_flNextSecondaryAttackTickRatio: int = 3108
   m_iClip1: int = 3112
   m_iClip2: int = 3116
   m_pReserveAmmo: int = 3120
   m_OnPlayerUse: int = 3128



class CScriptItem:

   m_OnPlayerPickup: int = 2408
   m_MoveTypeOverride: int = 2448



class CRagdollPropAttached:

   m_boneIndexAttached: int = 2616
   m_ragdollAttachedObjectIndex: int = 2620
   m_attachmentPointBoneSpace: int = 2624
   m_attachmentPointRagdollSpace: int = 2636
   m_bShouldDetach: int = 2648
   m_bShouldDeleteAttachedActivationRecord: int = 2664



class CPropDoorRotating:

   m_vecAxis: int = 3480
   m_flDistance: int = 3492
   m_eSpawnPosition: int = 3496
   m_eOpenDirection: int = 3500
   m_eCurrentOpenDirection: int = 3504
   m_flAjarAngle: int = 3508
   m_angRotationAjarDeprecated: int = 3512
   m_angRotationClosed: int = 3524
   m_angRotationOpenForward: int = 3536
   m_angRotationOpenBack: int = 3548
   m_angGoal: int = 3560
   m_vecForwardBoundsMin: int = 3572
   m_vecForwardBoundsMax: int = 3584
   m_vecBackBoundsMin: int = 3596
   m_vecBackBoundsMax: int = 3608
   m_bAjarDoorShouldntAlwaysOpen: int = 3620
   m_hEntityBlocker: int = 3624



class CPropDoorRotatingBreakable:

   m_bBreakable: int = 3632
   m_isAbleToCloseAreaPortals: int = 3633
   m_currentDamageState: int = 3636
   m_damageStates: int = 3640



class CBaseCombatCharacter:

   m_bForceServerRagdoll: int = 2336
   m_hMyWearables: int = 2344
   m_flFieldOfView: int = 2368
   m_impactEnergyScale: int = 2372
   m_LastHitGroup: int = 2376
   m_bApplyStressDamage: int = 2380
   m_bloodColor: int = 2384
   m_navMeshID: int = 2480
   m_iDamageCount: int = 2484
   m_pVecRelationships: int = 2488
   m_strRelationships: int = 2496
   m_eHull: int = 2504
   m_nNavHullIdx: int = 2508



class CItemGeneric:

   m_bHasTriggerRadius: int = 2416
   m_bHasPickupRadius: int = 2417
   m_flPickupRadiusSqr: int = 2420
   m_flTriggerRadiusSqr: int = 2424
   m_flLastPickupCheck: int = 2428
   m_bPlayerCounterListenerAdded: int = 2432
   m_bPlayerInTriggerRadius: int = 2433
   m_hSpawnParticleEffect: int = 2440
   m_pAmbientSoundEffect: int = 2448
   m_bAutoStartAmbientSound: int = 2456
   m_pSpawnScriptFunction: int = 2464
   m_hPickupParticleEffect: int = 2472
   m_pPickupSoundEffect: int = 2480
   m_pPickupScriptFunction: int = 2488
   m_hTimeoutParticleEffect: int = 2496
   m_pTimeoutSoundEffect: int = 2504
   m_pTimeoutScriptFunction: int = 2512
   m_pPickupFilterName: int = 2520
   m_hPickupFilter: int = 2528
   m_OnPickup: int = 2536
   m_OnTimeout: int = 2576
   m_OnTriggerStartTouch: int = 2616
   m_OnTriggerTouch: int = 2656
   m_OnTriggerEndTouch: int = 2696
   m_pAllowPickupScriptFunction: int = 2736
   m_flPickupRadius: int = 2744
   m_flTriggerRadius: int = 2748
   m_pTriggerSoundEffect: int = 2752
   m_bGlowWhenInTrigger: int = 2760
   m_glowColor: int = 2761
   m_bUseable: int = 2765
   m_hTriggerHelper: int = 2768



class CBasePlayerPawn:

   m_pWeaponServices: int = 2512
   m_pItemServices: int = 2520
   m_pAutoaimServices: int = 2528
   m_pObserverServices: int = 2536
   m_pWaterServices: int = 2544
   m_pUseServices: int = 2552
   m_pFlashlightServices: int = 2560
   m_pCameraServices: int = 2568
   m_pMovementServices: int = 2576
   m_ServerViewAngleChanges: int = 2592
   m_nHighestGeneratedServerViewAngleChangeIndex: int = 2672
   v_angle: int = 2676
   v_anglePrevious: int = 2688
   m_iHideHUD: int = 2700
   m_skybox3d: int = 2704
   m_fTimeLastHurt: int = 2848
   m_flDeathTime: int = 2852
   m_fNextSuicideTime: int = 2856
   m_fInitHUD: int = 2860
   m_pExpresser: int = 2864
   m_hController: int = 2872
   m_fHltvReplayDelay: int = 2880
   m_fHltvReplayEnd: int = 2884
   m_iHltvReplayEntity: int = 2888



class CCSGOViewModel:

   m_bShouldIgnoreOffsetAndAccuracy: int = 2264
   m_nWeaponParity: int = 2268
   m_nOldWeaponParity: int = 2272



class CCSWeaponBase:

   m_bRemoveable: int = 3208
   m_flFireSequenceStartTime: int = 3212
   m_nFireSequenceStartTimeChange: int = 3216
   m_nFireSequenceStartTimeAck: int = 3220
   m_bPlayerFireEventIsPrimary: int = 3224
   m_seqIdle: int = 3228
   m_seqFirePrimary: int = 3232
   m_seqFireSecondary: int = 3236
   m_bPlayerAmmoStockOnPickup: int = 3248
   m_bRequireUseToTouch: int = 3249
   m_iState: int = 3252
   m_flLastTimeInAir: int = 3256
   m_flLastDeployTime: int = 3260
   m_nViewModelIndex: int = 3264
   m_bReloadsWithClips: int = 3268
   m_flTimeWeaponIdle: int = 3296
   m_bFireOnEmpty: int = 3300
   m_OnPlayerPickup: int = 3304
   m_weaponMode: int = 3344
   m_flTurningInaccuracyDelta: int = 3348
   m_vecTurningInaccuracyEyeDirLast: int = 3352
   m_flTurningInaccuracy: int = 3364
   m_fAccuracyPenalty: int = 3368
   m_flLastAccuracyUpdateTime: int = 3372
   m_fAccuracySmoothedForZoom: int = 3376
   m_fScopeZoomEndTime: int = 3380
   m_iRecoilIndex: int = 3384
   m_flRecoilIndex: int = 3388
   m_bBurstMode: int = 3392
   m_flPostponeFireReadyTime: int = 3396
   m_bInReload: int = 3400
   m_bReloadVisuallyComplete: int = 3401
   m_flDroppedAtTime: int = 3404
   m_bIsHauledBack: int = 3408
   m_bSilencerOn: int = 3409
   m_flTimeSilencerSwitchComplete: int = 3412
   m_iOriginalTeamNumber: int = 3416
   m_flNextAttackRenderTimeOffset: int = 3420
   m_bCanBePickedUp: int = 3432
   m_bUseCanOverrideNextOwnerTouchTime: int = 3433
   m_nextOwnerTouchTime: int = 3436
   m_nextPrevOwnerTouchTime: int = 3440
   m_hPrevOwner: int = 3444
   m_nDropTick: int = 3448
   m_donated: int = 3484
   m_fLastShotTime: int = 3488
   m_bWasOwnedByCT: int = 3492
   m_bWasOwnedByTerrorist: int = 3493
   m_bFiredOutOfAmmoEvent: int = 3494
   m_numRemoveUnownedWeaponThink: int = 3496
   m_IronSightController: int = 3504
   m_iIronSightMode: int = 3528
   m_flLastLOSTraceFailureTime: int = 3532
   m_iNumEmptyAttacks: int = 3536



class CCSWeaponBaseGun:

   m_zoomLevel: int = 3544
   m_iBurstShotsRemaining: int = 3548
   m_silencedModelIndex: int = 3560
   m_inPrecache: int = 3564
   m_bNeedsBoltAction: int = 3565
   m_bSkillReloadAvailable: int = 3566
   m_bSkillReloadLiftedReloadKey: int = 3567
   m_bSkillBoltInterruptAvailable: int = 3568
   m_bSkillBoltLiftedFireKey: int = 3569



class CC4:

   m_vecLastValidPlayerHeldPosition: int = 3544
   m_vecLastValidDroppedPosition: int = 3556
   m_bDoValidDroppedPositionCheck: int = 3568
   m_bStartedArming: int = 3569
   m_fArmedTime: int = 3572
   m_bBombPlacedAnimation: int = 3576
   m_bIsPlantingViaUse: int = 3577
   m_entitySpottedState: int = 3584
   m_nSpotRules: int = 3608
   m_bPlayedArmingBeeps: int = 3612
   m_bBombPlanted: int = 3619
   m_bDroppedFromDeath: int = 3620



class CWeaponTaser:

   m_fFireTime: int = 3576



class CMelee:

   m_flThrowAt: int = 3544
   m_hThrower: int = 3548
   m_bDidThrowDamage: int = 3552



class CWeaponShield:

   m_flBulletDamageAbsorbed: int = 3576
   m_flLastBulletHitSoundTime: int = 3580
   m_flDisplayHealth: int = 3584



class CMolotovProjectile:

   m_bIsIncGrenade: int = 2600
   m_bDetonated: int = 2612
   m_stillTimer: int = 2616
   m_bHasBouncedOffPlayer: int = 2840



class CDecoyProjectile:

   m_shotsRemaining: int = 2608
   m_fExpireTime: int = 2612
   m_decoyWeaponDefIndex: int = 2624



class CSmokeGrenadeProjectile:

   m_nSmokeEffectTickBegin: int = 2624
   m_bDidSmokeEffect: int = 2628
   m_nRandomSeed: int = 2632
   m_vSmokeColor: int = 2636
   m_vSmokeDetonationPos: int = 2648
   m_VoxelFrameData: int = 2664
   m_flLastBounce: int = 2688
   m_fllastSimulationTime: int = 2692



class CBaseCSGrenade:

   m_bRedraw: int = 3576
   m_bIsHeldByPlayer: int = 3577
   m_bPinPulled: int = 3578
   m_bJumpThrow: int = 3579
   m_eThrowStatus: int = 3580
   m_fThrowTime: int = 3584
   m_flThrowStrength: int = 3588
   m_flThrowStrengthApproach: int = 3592
   m_fDropTime: int = 3596



class CWeaponBaseItem:

   m_SequenceCompleteTimer: int = 3544
   m_bRedraw: int = 3568



class CFists:

   m_bPlayingUninterruptableAct: int = 3544
   m_nUninterruptableActivity: int = 3548
   m_bRestorePrevWep: int = 3552
   m_hWeaponBeforePrevious: int = 3556
   m_hWeaponPrevious: int = 3560
   m_bDelayedHardPunchIncoming: int = 3564
   m_bDestroyAfterTaunt: int = 3565



class CCSPlayerPawnBase:

   m_CTouchExpansionComponent: int = 2912
   m_pPingServices: int = 2992
   m_pViewModelServices: int = 3000
   m_iDisplayHistoryBits: int = 3008
   m_flLastAttackedTeammate: int = 3012
   m_hOriginalController: int = 3016
   m_blindUntilTime: int = 3020
   m_blindStartTime: int = 3024
   m_allowAutoFollowTime: int = 3028
   m_entitySpottedState: int = 3032
   m_nSpotRules: int = 3056
   m_iPlayerState: int = 3060
   m_chickenIdleSoundTimer: int = 3072
   m_chickenJumpSoundTimer: int = 3096
   m_vecLastBookmarkedPosition: int = 3280
   m_flLastDistanceTraveledNotice: int = 3292
   m_flAccumulatedDistanceTraveled: int = 3296
   m_flLastFriendlyFireDamageReductionRatio: int = 3300
   m_bRespawning: int = 3304
   m_nLastPickupPriority: int = 3308
   m_flLastPickupPriorityTime: int = 3312
   m_bIsScoped: int = 3316
   m_bIsWalking: int = 3317
   m_bResumeZoom: int = 3318
   m_bIsDefusing: int = 3319
   m_bIsGrabbingHostage: int = 3320
   m_iBlockingUseActionInProgress: int = 3324
   m_fImmuneToGunGameDamageTime: int = 3328
   m_bGunGameImmunity: int = 3332
   m_unTotalRoundDamageDealt: int = 3336
   m_fMolotovDamageTime: int = 3340
   m_bHasMovedSinceSpawn: int = 3344
   m_bCanMoveDuringFreezePeriod: int = 3345
   m_flGuardianTooFarDistFrac: int = 3348
   m_flNextGuardianTooFarHurtTime: int = 3352
   m_flDetectedByEnemySensorTime: int = 3356
   m_flDealtDamageToEnemyMostRecentTimestamp: int = 3360
   m_flLastEquippedHelmetTime: int = 3364
   m_flLastEquippedArmorTime: int = 3368
   m_nHeavyAssaultSuitCooldownRemaining: int = 3372
   m_bResetArmorNextSpawn: int = 3376
   m_flLastBumpMineBumpTime: int = 3380
   m_flEmitSoundTime: int = 3384
   m_iNumSpawns: int = 3388
   m_iShouldHaveCash: int = 3392
   m_bInvalidSteamLogonDelayed: int = 3396
   m_flLastAction: int = 3400
   m_flNameChangeHistory: int = 3404
   m_fLastGivenDefuserTime: int = 3424
   m_fLastGivenBombTime: int = 3428
   m_bHasNightVision: int = 3432
   m_bNightVisionOn: int = 3433
   m_fNextRadarUpdateTime: int = 3436
   m_flLastMoneyUpdateTime: int = 3440
   m_MenuStringBuffer: int = 3444
   m_fIntroCamTime: int = 4468
   m_nMyCollisionGroup: int = 4472
   m_bInNoDefuseArea: int = 4476
   m_bKilledByTaser: int = 4477
   m_iMoveState: int = 4480
   m_grenadeParameterStashTime: int = 4484
   m_bGrenadeParametersStashed: int = 4488
   m_angStashedShootAngles: int = 4492
   m_vecStashedGrenadeThrowPosition: int = 4504
   m_vecStashedVelocity: int = 4516
   m_angShootAngleHistory: int = 4528
   m_vecThrowPositionHistory: int = 4552
   m_vecVelocityHistory: int = 4576
   m_bDiedAirborne: int = 4600
   m_iBombSiteIndex: int = 4604
   m_nWhichBombZone: int = 4608
   m_bInBombZoneTrigger: int = 4612
   m_bWasInBombZoneTrigger: int = 4613
   m_iDirection: int = 4616
   m_iShotsFired: int = 4620
   m_ArmorValue: int = 4624
   m_flFlinchStack: int = 4628
   m_flVelocityModifier: int = 4632
   m_flHitHeading: int = 4636
   m_nHitBodyPart: int = 4640
   m_iHostagesKilled: int = 4644
   m_vecTotalBulletForce: int = 4648
   m_flFlashDuration: int = 4660
   m_flFlashMaxAlpha: int = 4664
   m_flProgressBarStartTime: int = 4668
   m_iProgressBarDuration: int = 4672
   m_bWaitForNoAttack: int = 4676
   m_flLowerBodyYawTarget: int = 4680
   m_bStrafing: int = 4684
   m_lastStandingPos: int = 4688
   m_ignoreLadderJumpTime: int = 4700
   m_ladderSurpressionTimer: int = 4704
   m_lastLadderNormal: int = 4728
   m_lastLadderPos: int = 4740
   m_thirdPersonHeading: int = 4752
   m_flSlopeDropOffset: int = 4764
   m_flSlopeDropHeight: int = 4768
   m_vHeadConstraintOffset: int = 4772
   m_iLastWeaponFireUsercmd: int = 4792
   m_angEyeAngles: int = 4796
   m_bVCollisionInitted: int = 4808
   m_storedSpawnPosition: int = 4812
   m_storedSpawnAngle: int = 4824
   m_bIsSpawning: int = 4836
   m_bHideTargetID: int = 4837
   m_nNumDangerZoneDamageHits: int = 4840
   m_bHud_MiniScoreHidden: int = 4844
   m_bHud_RadarHidden: int = 4845
   m_nLastKillerIndex: int = 4848
   m_nLastConcurrentKilled: int = 4852
   m_nDeathCamMusic: int = 4856
   m_iAddonBits: int = 4860
   m_iPrimaryAddon: int = 4864
   m_iSecondaryAddon: int = 4868
   m_currentDeafnessFilter: int = 4872
   m_NumEnemiesKilledThisSpawn: int = 4876
   m_NumEnemiesKilledThisRound: int = 4880
   m_NumEnemiesAtRoundStart: int = 4884
   m_wasNotKilledNaturally: int = 4888
   m_vecPlayerPatchEconIndices: int = 4892
   m_iDeathFlags: int = 4912
   m_hPet: int = 4916
   m_unCurrentEquipmentValue: int = 5376
   m_unRoundStartEquipmentValue: int = 5378
   m_unFreezetimeEndEquipmentValue: int = 5380
   m_nSurvivalTeamNumber: int = 5384
   m_bHasDeathInfo: int = 5388
   m_flDeathInfoTime: int = 5392
   m_vecDeathInfoOrigin: int = 5396
   m_bKilledByHeadshot: int = 5408
   m_LastHitBox: int = 5412
   m_LastHealth: int = 5416
   m_flLastCollisionCeiling: int = 5420
   m_flLastCollisionCeilingChangeTime: int = 5424
   m_pBot: int = 5432
   m_bBotAllowActive: int = 5440
   m_bCommittingSuicideOnTeamChange: int = 5441



class CCSPlayerPawn:

   m_pBulletServices: int = 5448
   m_pHostageServices: int = 5456
   m_pBuyServices: int = 5464
   m_pActionTrackingServices: int = 5472
   m_pRadioServices: int = 5480
   m_pDamageReactServices: int = 5488
   m_nCharacterDefIndex: int = 5496
   m_hPreviousModel: int = 5504
   m_bHasFemaleVoice: int = 5512
   m_strVOPrefix: int = 5520
   m_szLastPlaceName: int = 5528
   m_bInBuyZone: int = 5720
   m_bWasInBuyZone: int = 5721
   m_bInHostageRescueZone: int = 5722
   m_bInBombZone: int = 5723
   m_bWasInHostageRescueZone: int = 5724
   m_iRetakesOffering: int = 5728
   m_iRetakesOfferingCard: int = 5732
   m_bRetakesHasDefuseKit: int = 5736
   m_bRetakesMVPLastRound: int = 5737
   m_iRetakesMVPBoostItem: int = 5740
   m_RetakesMVPBoostExtraUtility: int = 5744
   m_flHealthShotBoostExpirationTime: int = 5748
   m_flLandseconds: int = 5752
   m_aimPunchAngle: int = 5756
   m_aimPunchAngleVel: int = 5768
   m_aimPunchTickBase: int = 5780
   m_aimPunchTickFraction: int = 5784
   m_aimPunchCache: int = 5792
   m_bIsBuyMenuOpen: int = 5816
   m_xLastHeadBoneTransform: int = 7216
   m_bLastHeadBoneTransformIsValid: int = 7248
   m_lastLandTime: int = 7252
   m_bOnGroundLastTick: int = 7256
   m_iPlayerLocked: int = 7260
   m_flTimeOfLastInjury: int = 7268
   m_flNextSprayDecalTime: int = 7272
   m_bNextSprayDecalTimeExpedited: int = 7276
   m_nRagdollDamageBone: int = 7280
   m_vRagdollDamageForce: int = 7284
   m_vRagdollDamagePosition: int = 7296
   m_szRagdollDamageWeaponName: int = 7308
   m_bRagdollDamageHeadshot: int = 7372
   m_EconGloves: int = 7376
   m_qDeathEyeAngles: int = 8008
   m_bSkipOneHeadConstraintUpdate: int = 8020



class CHostageExpresserShim:

   m_pExpresser: int = 2512



class CHostage:

   m_OnHostageBeginGrab: int = 2536
   m_OnFirstPickedUp: int = 2576
   m_OnDroppedNotRescued: int = 2616
   m_OnRescued: int = 2656
   m_entitySpottedState: int = 2696
   m_nSpotRules: int = 2720
   m_uiHostageSpawnExclusionGroupMask: int = 2724
   m_nHostageSpawnRandomFactor: int = 2728
   m_bRemove: int = 2732
   m_vel: int = 2736
   m_isRescued: int = 2748
   m_jumpedThisFrame: int = 2749
   m_nHostageState: int = 2752
   m_leader: int = 2756
   m_lastLeader: int = 2760
   m_reuseTimer: int = 2768
   m_hasBeenUsed: int = 2792
   m_accel: int = 2796
   m_isRunning: int = 2808
   m_isCrouching: int = 2809
   m_jumpTimer: int = 2816
   m_isWaitingForLeader: int = 2840
   m_repathTimer: int = 11048
   m_inhibitDoorTimer: int = 11072
   m_inhibitObstacleAvoidanceTimer: int = 11216
   m_wiggleTimer: int = 11248
   m_isAdjusted: int = 11276
   m_bHandsHaveBeenCut: int = 11277
   m_hHostageGrabber: int = 11280
   m_fLastGrabTime: int = 11284
   m_vecPositionWhenStartedDroppingToGround: int = 11288
   m_vecGrabbedPos: int = 11300
   m_flRescueStartTime: int = 11312
   m_flGrabSuccessTime: int = 11316
   m_flDropStartTime: int = 11320
   m_nApproachRewardPayouts: int = 11324
   m_nPickupEventCount: int = 11328
   m_vecSpawnGroundPos: int = 11332



class CRangeFloat:

   m_pValue: int = 0



class CRangeInt:

   m_pValue: int = 0



class Extent:

   lo: int = 0
   hi: int = 12



class CNavVolumeVector:

   m_bHasBeenPreFiltered: int = 120



class CNavVolumeSphere:

   m_vCenter: int = 112
   m_flRadius: int = 124



class CNavVolumeSphericalShell:

   m_flRadiusInner: int = 128



class CNavHullVData:

   m_bAgentEnabled: int = 0
   m_agentRadius: int = 4
   m_agentHeight: int = 8
   m_agentShortHeightEnabled: int = 12
   m_agentShortHeight: int = 16
   m_agentMaxClimb: int = 20
   m_agentMaxSlope: int = 24
   m_agentMaxJumpDownDist: int = 28
   m_agentMaxJumpHorizDistBase: int = 32
   m_agentMaxJumpUpDist: int = 36
   m_agentBorderErosion: int = 40



class CNavHullPresetVData:

   m_vecNavHulls: int = 0



class CEntityIdentity:

   m_nameStringableIndex: int = 20
   m_name: int = 24
   m_designerName: int = 32
   m_flags: int = 48
   m_worldGroupId: int = 56
   m_fDataObjectTypes: int = 60
   m_PathIndex: int = 64
   m_pPrev: int = 88
   m_pNext: int = 96
   m_pPrevByClass: int = 104
   m_pNextByClass: int = 112



class CEntityInstance:

   m_iszPrivateVScripts: int = 8
   m_pEntity: int = 16
   m_CScriptComponent: int = 40



class CScriptComponent:

   m_scriptClassName: int = 48



class CBodyComponent:

   m_pSceneNode: int = 8
   __m_pChainEntity: int = 32



class CBodyComponentPoint:

   m_sceneNode: int = 80
   __m_pChainEntity: int = 416



class CBodyComponentSkeletonInstance:

   m_skeletonInstance: int = 80
   __m_pChainEntity: int = 1088



class CHitboxComponent:

   m_bvDisabledHitGroups: int = 36



class CLightComponent:

   __m_pChainEntity: int = 72
   m_Color: int = 133
   m_SecondaryColor: int = 137
   m_flBrightness: int = 144
   m_flBrightnessScale: int = 148
   m_flBrightnessMult: int = 152
   m_flRange: int = 156
   m_flFalloff: int = 160
   m_flAttenuation0: int = 164
   m_flAttenuation1: int = 168
   m_flAttenuation2: int = 172
   m_flTheta: int = 176
   m_flPhi: int = 180
   m_hLightCookie: int = 184
   m_nCascades: int = 192
   m_nCastShadows: int = 196
   m_nShadowWidth: int = 200
   m_nShadowHeight: int = 204
   m_bRenderDiffuse: int = 208
   m_nRenderSpecular: int = 212
   m_bRenderTransmissive: int = 216
   m_flOrthoLightWidth: int = 220
   m_flOrthoLightHeight: int = 224
   m_nStyle: int = 228
   m_Pattern: int = 232
   m_nCascadeRenderStaticObjects: int = 240
   m_flShadowCascadeCrossFade: int = 244
   m_flShadowCascadeDistanceFade: int = 248
   m_flShadowCascadeDistance0: int = 252
   m_flShadowCascadeDistance1: int = 256
   m_flShadowCascadeDistance2: int = 260
   m_flShadowCascadeDistance3: int = 264
   m_nShadowCascadeResolution0: int = 268
   m_nShadowCascadeResolution1: int = 272
   m_nShadowCascadeResolution2: int = 276
   m_nShadowCascadeResolution3: int = 280
   m_bUsesBakedShadowing: int = 284
   m_nShadowPriority: int = 288
   m_nBakedShadowIndex: int = 292
   m_bRenderToCubemaps: int = 296
   m_LightGroups: int = 304
   m_nDirectLight: int = 312
   m_nIndirectLight: int = 316
   m_flFadeMinDist: int = 320
   m_flFadeMaxDist: int = 324
   m_flShadowFadeMinDist: int = 328
   m_flShadowFadeMaxDist: int = 332
   m_bEnabled: int = 336
   m_bFlicker: int = 337
   m_bPrecomputedFieldsValid: int = 338
   m_vPrecomputedBoundsMins: int = 340
   m_vPrecomputedBoundsMaxs: int = 352
   m_vPrecomputedOBBOrigin: int = 364
   m_vPrecomputedOBBAngles: int = 376
   m_vPrecomputedOBBExtent: int = 388
   m_flPrecomputedMaxRange: int = 400
   m_nFogLightingMode: int = 404
   m_flFogContributionStength: int = 408
   m_flNearClipPlane: int = 412
   m_SkyColor: int = 416
   m_flSkyIntensity: int = 420
   m_SkyAmbientBounce: int = 424
   m_bUseSecondaryColor: int = 428
   m_bMixedShadows: int = 429
   m_flLightStyleStartTime: int = 432
   m_flCapsuleLength: int = 436
   m_flMinRoughness: int = 440
   m_bPvsModifyEntity: int = 456



class CNetworkTransmitComponent:

   m_nTransmitStateOwnedCounter: int = 364



class CRenderComponent:

   __m_pChainEntity: int = 16
   m_bIsRenderingWithViewModels: int = 80
   m_nSplitscreenFlags: int = 84
   m_bEnableRendering: int = 96
   m_bInterpolationReadyToDraw: int = 176



class AnimationUpdateListHandle_t:

   m_Value: int = 0



class CAnimGraphTagRef:

   m_nTagIndex: int = 0
   m_tagName: int = 16



class CBuoyancyHelper:

   m_flFluidDensity: int = 24



class CSkillFloat:

   m_pValue: int = 0



class CSkillInt:

   m_pValue: int = 0



class CSkillDamage:

   m_flDamage: int = 0
   m_flPhysicsForceDamage: int = 16



class CRemapFloat:

   m_pValue: int = 0



class CScriptUniformRandomStream:

   m_hScriptScope: int = 8
   m_nInitialSeed: int = 156



class ViewAngleServerChange_t:

   nType: int = 48
   qAngle: int = 52
   nIndex: int = 64



class CBreakableStageHelper:

   m_nCurrentStage: int = 8
   m_nStageCount: int = 12



class CommandToolCommand_t:

   m_bEnabled: int = 0
   m_bOpened: int = 1
   m_InternalId: int = 4
   m_ShortName: int = 8
   m_ExecMode: int = 16
   m_SpawnGroup: int = 24
   m_PeriodicExecDelay: int = 32
   m_SpecType: int = 36
   m_EntitySpec: int = 40
   m_Commands: int = 48
   m_SetDebugBits: int = 56
   m_ClearDebugBits: int = 64



class CPlayerPawnComponent:

   __m_pChainEntity: int = 8



class CPlayerControllerComponent:

   __m_pChainEntity: int = 8



class audioparams_t:

   localSound: int = 8
   soundscapeIndex: int = 104
   localBits: int = 108
   soundscapeEntityListIndex: int = 112
   soundEventHash: int = 116



class CPlayer_CameraServices:

   m_vecCsViewPunchAngle: int = 64
   m_nCsViewPunchAngleTick: int = 76
   m_flCsViewPunchAngleTickRatio: int = 80
   m_PlayerFog: int = 88
   m_hColorCorrectionCtrl: int = 152
   m_hViewEntity: int = 156
   m_hTonemapController: int = 160
   m_audio: int = 168
   m_PostProcessingVolumes: int = 288
   m_flOldPlayerZ: int = 312
   m_flOldPlayerViewOffsetZ: int = 316
   m_hTriggerSoundscapeList: int = 344



class CPlayer_MovementServices:

   m_nImpulse: int = 64
   m_nButtons: int = 72
   m_nQueuedButtonDownMask: int = 104
   m_nQueuedButtonChangeMask: int = 112
   m_nButtonDoublePressed: int = 120
   m_pButtonPressedCmdNumber: int = 128
   m_nLastCommandNumberProcessed: int = 384
   m_nToggleButtonDownMask: int = 392
   m_flMaxspeed: int = 400
   m_arrForceSubtickMoveWhen: int = 404
   m_flForwardMove: int = 420
   m_flLeftMove: int = 424
   m_flUpMove: int = 428
   m_vecLastMovementImpulses: int = 432
   m_vecOldViewAngles: int = 444



class CPlayer_MovementServices_Humanoid:

   m_flStepSoundTime: int = 464
   m_flFallVelocity: int = 468
   m_bInCrouch: int = 472
   m_nCrouchState: int = 476
   m_flCrouchTransitionStartTime: int = 480
   m_bDucked: int = 484
   m_bDucking: int = 485
   m_bInDuckJump: int = 486
   m_groundNormal: int = 488
   m_flSurfaceFriction: int = 500
   m_surfaceProps: int = 504
   m_nStepside: int = 520
   m_iTargetVolume: int = 524
   m_vecSmoothedVelocity: int = 528



class CPlayer_ObserverServices:

   m_iObserverMode: int = 64
   m_hObserverTarget: int = 68
   m_iObserverLastMode: int = 72
   m_bForcedObserverMode: int = 76



class CPlayer_WeaponServices:

   m_bAllowSwitchToNoWeapon: int = 64
   m_hMyWeapons: int = 72
   m_hActiveWeapon: int = 96
   m_hLastWeapon: int = 100
   m_iAmmo: int = 104
   m_bPreventWeaponPickup: int = 168



class AmmoTypeInfo_t:

   m_nMaxCarry: int = 16
   m_nSplashSize: int = 28
   m_nFlags: int = 36
   m_flMass: int = 40
   m_flSpeed: int = 44



class CBodyComponentBaseAnimGraph:

   m_animationController: int = 1136
   __m_pChainEntity: int = 1872



class EntityRenderAttribute_t:

   m_ID: int = 48
   m_Values: int = 52



class ModelConfigHandle_t:

   m_Value: int = 0



class ActiveModelConfig_t:

   m_Handle: int = 40
   m_Name: int = 48
   m_AssociatedEntities: int = 56
   m_AssociatedEntityNames: int = 80



class CBodyComponentBaseModelEntity:

   __m_pChainEntity: int = 1136



class CNetworkOriginCellCoordQuantizedVector:

   m_cellX: int = 16
   m_cellY: int = 18
   m_cellZ: int = 20
   m_nOutsideWorld: int = 22
   m_vecX: int = 24
   m_vecY: int = 32
   m_vecZ: int = 40



class CNetworkOriginQuantizedVector:

   m_vecX: int = 16
   m_vecY: int = 24
   m_vecZ: int = 32



class CNetworkVelocityVector:

   m_vecX: int = 16
   m_vecY: int = 24
   m_vecZ: int = 32



class CNetworkViewOffsetVector:

   m_vecX: int = 16
   m_vecY: int = 24
   m_vecZ: int = 32



class GameTime_t:

   m_Value: int = 0



class GameTick_t:

   m_Value: int = 0



class CGameSceneNodeHandle:

   m_hOwner: int = 8
   m_name: int = 12



class CGameSceneNode:

   m_nodeToWorld: int = 16
   m_pOwner: int = 48
   m_pParent: int = 56
   m_pChild: int = 64
   m_pNextSibling: int = 72
   m_hParent: int = 112
   m_vecOrigin: int = 128
   m_angRotation: int = 184
   m_flScale: int = 196
   m_vecAbsOrigin: int = 200
   m_angAbsRotation: int = 212
   m_flAbsScale: int = 224
   m_nParentAttachmentOrBone: int = 228
   m_bDebugAbsOriginChanges: int = 230
   m_bDormant: int = 231
   m_bForceParentToBeNetworked: int = 232
   m_bDirtyHierarchy: int = 0
   m_bDirtyBoneMergeInfo: int = 0
   m_bNetworkedPositionChanged: int = 0
   m_bNetworkedAnglesChanged: int = 0
   m_bNetworkedScaleChanged: int = 0
   m_bWillBeCallingPostDataUpdate: int = 0
   m_bNotifyBoneTransformsChanged: int = 0
   m_bBoneMergeFlex: int = 0
   m_nLatchAbsOrigin: int = 0
   m_bDirtyBoneMergeBoneToRoot: int = 0
   m_nHierarchicalDepth: int = 235
   m_nHierarchyType: int = 236
   m_nDoNotSetAnimTimeInInvalidatePhysicsCount: int = 237
   m_name: int = 240
   m_hierarchyAttachName: int = 304
   m_flZOffset: int = 308
   m_vRenderOrigin: int = 312



class CInButtonState:

   m_pButtonStates: int = 8



class CSkeletonAnimationController:

   m_pSkeletonInstance: int = 8



class CNetworkedSequenceOperation:

   m_hSequence: int = 8
   m_flPrevCycle: int = 12
   m_flCycle: int = 16
   m_flWeight: int = 20
   m_bSequenceChangeNetworked: int = 28
   m_bDiscontinuity: int = 29
   m_flPrevCycleFromDiscontinuity: int = 32
   m_flPrevCycleForAnimEventDetection: int = 36



class CModelState:

   m_hModel: int = 160
   m_ModelName: int = 168
   m_bClientClothCreationSuppressed: int = 232
   m_MeshGroupMask: int = 384
   m_nIdealMotionType: int = 546
   m_nForceLOD: int = 547
   m_nClothUpdateFlags: int = 548



class CSkeletonInstance:

   m_modelState: int = 352
   m_bIsAnimationEnabled: int = 912
   m_bUseParentRenderBounds: int = 913
   m_bDisableSolidCollisionsForHierarchy: int = 914
   m_bDirtyMotionType: int = 0
   m_bIsGeneratingLatchedParentSpaceState: int = 0
   m_materialGroup: int = 916
   m_nHitboxSet: int = 920



class IntervalTimer:

   m_timestamp: int = 8
   m_nWorldGroupId: int = 12



class CountdownTimer:

   m_duration: int = 8
   m_timestamp: int = 12
   m_timescale: int = 16
   m_nWorldGroupId: int = 20



class EngineCountdownTimer:

   m_duration: int = 8
   m_timestamp: int = 12
   m_timescale: int = 16



class CTimeline:

   m_flValues: int = 16
   m_nValueCounts: int = 272
   m_nBucketCount: int = 528
   m_flInterval: int = 532
   m_flFinalValue: int = 536
   m_nCompressionType: int = 540
   m_bStopped: int = 544



class CAnimGraphNetworkedVariables:

   m_PredNetBoolVariables: int = 8
   m_PredNetByteVariables: int = 32
   m_PredNetUInt16Variables: int = 56
   m_PredNetIntVariables: int = 80
   m_PredNetUInt32Variables: int = 104
   m_PredNetUInt64Variables: int = 128
   m_PredNetFloatVariables: int = 152
   m_PredNetVectorVariables: int = 176
   m_PredNetQuaternionVariables: int = 200
   m_OwnerOnlyPredNetBoolVariables: int = 224
   m_OwnerOnlyPredNetByteVariables: int = 248
   m_OwnerOnlyPredNetUInt16Variables: int = 272
   m_OwnerOnlyPredNetIntVariables: int = 296
   m_OwnerOnlyPredNetUInt32Variables: int = 320
   m_OwnerOnlyPredNetUInt64Variables: int = 344
   m_OwnerOnlyPredNetFloatVariables: int = 368
   m_OwnerOnlyPredNetVectorVariables: int = 392
   m_OwnerOnlyPredNetQuaternionVariables: int = 416
   m_nBoolVariablesCount: int = 440
   m_nOwnerOnlyBoolVariablesCount: int = 444
   m_nRandomSeedOffset: int = 448
   m_flLastTeleportTime: int = 452



class ResponseFollowup:

   followup_concept: int = 0
   followup_contexts: int = 8
   followup_delay: int = 16
   followup_target: int = 20
   followup_entityiotarget: int = 28
   followup_entityioinput: int = 36
   followup_entityiodelay: int = 44
   bFired: int = 48



class ResponseParams:

   odds: int = 16
   flags: int = 18
   m_pFollowup: int = 24



class CResponseCriteriaSet:

   m_nNumPrefixedContexts: int = 40
   m_bOverrideOnAppend: int = 44



class CRR_Response:

   m_Type: int = 0
   m_szResponseName: int = 1
   m_szMatchingRule: int = 193
   m_Params: int = 328
   m_fMatchScore: int = 360
   m_szSpeakerContext: int = 368
   m_szWorldContext: int = 376
   m_Followup: int = 384
   m_pchCriteriaNames: int = 440
   m_pchCriteriaValues: int = 464



class ConceptHistory_t:

   timeSpoken: int = 0
   m_response: int = 8



class CAI_Expresser:

   m_flStopTalkTime: int = 56
   m_flStopTalkTimeWithoutDelay: int = 60
   m_flBlockedTalkTime: int = 64
   m_voicePitch: int = 68
   m_flLastTimeAcceptedSpeak: int = 72
   m_bAllowSpeakingInterrupts: int = 76
   m_bConsiderSceneInvolvementAsSpeech: int = 77
   m_nLastSpokenPriority: int = 80
   m_pOuter: int = 88



class CResponseQueue:

   m_ExpresserTargets: int = 80



class CResponseQueue_CDeferredResponse:

   m_contexts: int = 16
   m_fDispatchTime: int = 64
   m_hIssuer: int = 68
   m_response: int = 80
   m_bResponseValid: int = 568



class CAI_ExpresserWithFollowup:

   m_pPostponedFollowup: int = 96



class CMultiplayer_Expresser:

   m_bAllowMultipleScenes: int = 112



class CCommentarySystem:

   m_bCommentaryConvarsChanging: int = 17
   m_bCommentaryEnabledMidGame: int = 18
   m_flNextTeleportTime: int = 20
   m_iTeleportStage: int = 24
   m_bCheatState: int = 28
   m_bIsFirstSpawnGroupToLoad: int = 29
   m_hCurrentNode: int = 56
   m_hActiveCommentaryNode: int = 60
   m_hLastCommentaryNode: int = 64
   m_vecNodes: int = 72



class CPhysicsShake:

   m_force: int = 8



class CGameScriptedMoveData:

   m_vDest: int = 0
   m_vSrc: int = 12
   m_angSrc: int = 24
   m_angDst: int = 36
   m_angCurrent: int = 48
   m_flAngRate: int = 60
   m_flDuration: int = 64
   m_flStartTime: int = 68
   m_nPrevMoveType: int = 72
   m_bActive: int = 73
   m_bTeleportOnEnd: int = 74
   m_bEndOnDestinationReached: int = 75
   m_bIgnoreRotation: int = 76
   m_nType: int = 80
   m_bSuccess: int = 84
   m_nForcedCrouchState: int = 88
   m_bIgnoreCollisions: int = 92



class CGameChoreoServices:

   m_hOwner: int = 8
   m_hScriptedSequence: int = 12
   m_scriptState: int = 16
   m_choreoState: int = 20
   m_flTimeStartedState: int = 24



class HullFlags_t:

   m_bHull_Human: int = 0
   m_bHull_SmallCentered: int = 1
   m_bHull_WideHuman: int = 2
   m_bHull_Tiny: int = 3
   m_bHull_Medium: int = 4
   m_bHull_TinyCentered: int = 5
   m_bHull_Large: int = 6
   m_bHull_LargeCentered: int = 7
   m_bHull_MediumTall: int = 8
   m_bHull_Small: int = 9



class CConstantForceController:

   m_linear: int = 12
   m_angular: int = 24
   m_linearSave: int = 36
   m_angularSave: int = 48



class CMotorController:

   m_speed: int = 8
   m_maxTorque: int = 12
   m_axis: int = 16
   m_inertiaFactor: int = 28



class CSoundEnvelope:

   m_current: int = 0
   m_target: int = 4
   m_rate: int = 8
   m_forceupdate: int = 12



class CCopyRecipientFilter:

   m_Flags: int = 8
   m_Recipients: int = 16



class CSoundPatch:

   m_pitch: int = 8
   m_volume: int = 24
   m_shutdownTime: int = 48
   m_flLastTime: int = 52
   m_iszSoundScriptName: int = 56
   m_hEnt: int = 64
   m_soundEntityIndex: int = 68
   m_soundOrigin: int = 72
   m_isPlaying: int = 84
   m_Filter: int = 88
   m_flCloseCaptionDuration: int = 128
   m_bUpdatedSoundOrigin: int = 132
   m_iszClassName: int = 136



class CPulseCell_Value_FindEntByName:

   m_EntityType: int = 72



class CPulseCell_Step_SetAnimGraphParam:

   m_ParamName: int = 72



class CPulseCell_Step_EntFire:

   m_Input: int = 72



class CPulseCell_Outflow_PlayVCD:

   m_vcdFilename: int = 72
   m_OnFinished: int = 80
   m_Triggers: int = 96



class CPulseCell_Inflow_GameEvent:

   m_EventName: int = 112



class CPulseCell_SoundEventStart:

   m_Type: int = 72



class dynpitchvol_base_t:

   preset: int = 0
   pitchrun: int = 4
   pitchstart: int = 8
   spinup: int = 12
   spindown: int = 16
   volrun: int = 20
   volstart: int = 24
   fadein: int = 28
   fadeout: int = 32
   lfotype: int = 36
   lforate: int = 40
   lfomodpitch: int = 44
   lfomodvol: int = 48
   cspinup: int = 52
   cspincount: int = 56
   pitch: int = 60
   spinupsav: int = 64
   spindownsav: int = 68
   pitchfrac: int = 72
   vol: int = 76
   fadeinsav: int = 80
   fadeoutsav: int = 84
   volfrac: int = 88
   lfofrac: int = 92
   lfomult: int = 96



class ResponseContext_t:

   m_iszName: int = 0
   m_iszValue: int = 8
   m_fExpirationTime: int = 16



class Relationship_t:

   disposition: int = 0
   priority: int = 4



class CBaseEntity:

   m_CBodyComponent: int = 48
   m_NetworkTransmitComponent: int = 56
   m_aThinkFunctions: int = 552
   m_iCurrentThinkContext: int = 576
   m_nLastThinkTick: int = 580
   m_isSteadyState: int = 592
   m_lastNetworkChange: int = 600
   m_ResponseContexts: int = 616
   m_iszResponseContext: int = 640
   m_iHealth: int = 680
   m_iMaxHealth: int = 684
   m_lifeState: int = 688
   m_flDamageAccumulator: int = 692
   m_bTakesDamage: int = 696
   m_nTakeDamageFlags: int = 700
   m_MoveCollide: int = 705
   m_MoveType: int = 706
   m_nWaterTouch: int = 707
   m_nSlimeTouch: int = 708
   m_bRestoreInHierarchy: int = 709
   m_target: int = 712
   m_flMoveDoneTime: int = 720
   m_hDamageFilter: int = 724
   m_iszDamageFilterName: int = 728
   m_nSubclassID: int = 736
   m_flAnimTime: int = 752
   m_flSimulationTime: int = 756
   m_flCreateTime: int = 760
   m_bClientSideRagdoll: int = 764
   m_ubInterpolationFrame: int = 765
   m_vPrevVPhysicsUpdatePos: int = 768
   m_iTeamNum: int = 780
   m_iGlobalname: int = 784
   m_iSentToClients: int = 792
   m_flSpeed: int = 796
   m_sUniqueHammerID: int = 800
   m_spawnflags: int = 808
   m_nNextThinkTick: int = 812
   m_nSimulationTick: int = 816
   m_OnKilled: int = 824
   m_fFlags: int = 864
   m_vecAbsVelocity: int = 868
   m_vecVelocity: int = 880
   m_vecBaseVelocity: int = 928
   m_nPushEnumCount: int = 940
   m_pCollision: int = 944
   m_hEffectEntity: int = 952
   m_hOwnerEntity: int = 956
   m_fEffects: int = 960
   m_hGroundEntity: int = 964
   m_flFriction: int = 968
   m_flElasticity: int = 972
   m_flGravityScale: int = 976
   m_flTimeScale: int = 980
   m_flWaterLevel: int = 984
   m_bSimulatedEveryTick: int = 988
   m_bAnimatedEveryTick: int = 989
   m_bDisableLowViolence: int = 990
   m_nWaterType: int = 991
   m_iEFlags: int = 992
   m_OnUser1: int = 1000
   m_OnUser2: int = 1040
   m_OnUser3: int = 1080
   m_OnUser4: int = 1120
   m_iInitialTeamNum: int = 1160
   m_flNavIgnoreUntilTime: int = 1164
   m_vecAngVelocity: int = 1168
   m_bNetworkQuantizeOriginAndAngles: int = 1180
   m_bLagCompensate: int = 1181
   m_flOverriddenFriction: int = 1184
   m_pBlocker: int = 1188
   m_flLocalTime: int = 1192
   m_flVPhysicsUpdateLocalTime: int = 1196



class CColorCorrection:

   m_flFadeInDuration: int = 1200
   m_flFadeOutDuration: int = 1204
   m_flStartFadeInWeight: int = 1208
   m_flStartFadeOutWeight: int = 1212
   m_flTimeStartFadeIn: int = 1216
   m_flTimeStartFadeOut: int = 1220
   m_flMaxWeight: int = 1224
   m_bStartDisabled: int = 1228
   m_bEnabled: int = 1229
   m_bMaster: int = 1230
   m_bClientSide: int = 1231
   m_bExclusive: int = 1232
   m_MinFalloff: int = 1236
   m_MaxFalloff: int = 1240
   m_flCurWeight: int = 1244
   m_netlookupFilename: int = 1248
   m_lookupFilename: int = 1760



class CEntityFlame:

   m_hEntAttached: int = 1200
   m_bCheapEffect: int = 1204
   m_flSize: int = 1208
   m_bUseHitboxes: int = 1212
   m_iNumHitboxFires: int = 1216
   m_flHitboxFireScale: int = 1220
   m_flLifetime: int = 1224
   m_hAttacker: int = 1228
   m_iDangerSound: int = 1232
   m_flDirectDamagePerSecond: int = 1236
   m_iCustomDamageType: int = 1240



class CBaseFilter:

   m_bNegated: int = 1200
   m_OnPass: int = 1208
   m_OnFail: int = 1248



class CFilterMultiple:

   m_nFilterType: int = 1288
   m_iFilterName: int = 1296
   m_hFilter: int = 1376
   m_nFilterCount: int = 1416



class CFilterProximity:

   m_flRadius: int = 1288



class CFilterClass:

   m_iFilterClass: int = 1288



class CBaseFire:

   m_flScale: int = 1200
   m_flStartScale: int = 1204
   m_flScaleTime: int = 1208
   m_nFlags: int = 1212



class CFireSmoke:

   m_nFlameModelIndex: int = 1216
   m_nFlameFromAboveModelIndex: int = 1220



class CFishPool:

   m_fishCount: int = 1216
   m_maxRange: int = 1220
   m_swimDepth: int = 1224
   m_waterLevel: int = 1228
   m_isDormant: int = 1232
   m_fishes: int = 1240
   m_visTimer: int = 1264



class locksound_t:

   sLockedSound: int = 8
   sUnlockedSound: int = 16
   flwaitSound: int = 24



class CLogicBranch:

   m_bInValue: int = 1200
   m_Listeners: int = 1208
   m_OnTrue: int = 1232
   m_OnFalse: int = 1272



class CLogicDistanceCheck:

   m_iszEntityA: int = 1200
   m_iszEntityB: int = 1208
   m_flZone1Distance: int = 1216
   m_flZone2Distance: int = 1220
   m_InZone1: int = 1224
   m_InZone2: int = 1264
   m_InZone3: int = 1304



class VelocitySampler:

   m_prevSample: int = 0
   m_fPrevSampleTime: int = 12
   m_fIdealSampleRate: int = 16



class SimpleConstraintSoundProfile:

   eKeypoints: int = 8
   m_keyPoints: int = 12
   m_reversalSoundThresholds: int = 20



class ConstraintSoundInfo:

   m_vSampler: int = 8
   m_soundProfile: int = 32
   m_forwardAxis: int = 64
   m_iszTravelSoundFwd: int = 80
   m_iszTravelSoundBack: int = 88
   m_iszReversalSounds: int = 104
   m_bPlayTravelSound: int = 128
   m_bPlayReversalSound: int = 129



class CSmoothFunc:

   m_flSmoothAmplitude: int = 8
   m_flSmoothBias: int = 12
   m_flSmoothDuration: int = 16
   m_flSmoothRemainingTime: int = 20
   m_nSmoothDir: int = 24



class magnetted_objects_t:

   hEntity: int = 8



class CPointPrefab:

   m_targetMapName: int = 1200
   m_forceWorldGroupID: int = 1208
   m_associatedRelayTargetName: int = 1216
   m_fixupNames: int = 1224
   m_bLoadDynamic: int = 1225
   m_associatedRelayEntity: int = 1228



class CSkyboxReference:

   m_worldGroupId: int = 1200
   m_hSkyCamera: int = 1204



class CSkyCamera:

   m_skyboxData: int = 1200
   m_skyboxSlotToken: int = 1344
   m_bUseAngles: int = 1348
   m_pNext: int = 1352



class CSound:

   m_hOwner: int = 0
   m_hTarget: int = 4
   m_iVolume: int = 8
   m_flOcclusionScale: int = 12
   m_iType: int = 16
   m_iNextAudible: int = 20
   m_flExpireTime: int = 24
   m_iNext: int = 28
   m_bNoExpirationTime: int = 30
   m_ownerChannelIndex: int = 32
   m_vecOrigin: int = 36
   m_bHasOwner: int = 48



class CEnvSoundscape:

   m_OnPlay: int = 1200
   m_flRadius: int = 1240
   m_soundscapeName: int = 1248
   m_soundEventName: int = 1256
   m_bOverrideWithEvent: int = 1264
   m_soundscapeIndex: int = 1268
   m_soundscapeEntityListId: int = 1272
   m_soundEventHash: int = 1276
   m_positionNames: int = 1280
   m_hProxySoundscape: int = 1344
   m_bDisabled: int = 1348



class CEnvSoundscapeProxy:

   m_MainSoundscapeName: int = 1352



class lerpdata_t:

   m_hEnt: int = 0
   m_MoveType: int = 4
   m_flStartTime: int = 8
   m_vecStartOrigin: int = 12
   m_qStartRot: int = 32
   m_nFXIndex: int = 48



class CNavLinkAnimgraphVar:

   m_strAnimgraphVar: int = 0
   m_unAlignmentDegrees: int = 8



class CNavLinkMovementVData:

   m_bIsInterpolated: int = 0
   m_unRecommendedDistance: int = 4
   m_vecAnimgraphVars: int = 8



class CNavVolumeBreadthFirstSearch:

   m_vStartPos: int = 160
   m_flSearchDist: int = 172



class VPhysicsCollisionAttribute_t:

   m_nInteractsAs: int = 8
   m_nInteractsWith: int = 16
   m_nInteractsExclude: int = 24
   m_nEntityId: int = 32
   m_nOwnerId: int = 36
   m_nHierarchyId: int = 40
   m_nCollisionGroup: int = 42
   m_nCollisionFunctionMask: int = 43



class CCollisionProperty:

   m_collisionAttribute: int = 16
   m_vecMins: int = 64
   m_vecMaxs: int = 76
   m_usSolidFlags: int = 90
   m_nSolidType: int = 91
   m_triggerBloat: int = 92
   m_nSurroundType: int = 93
   m_CollisionGroup: int = 94
   m_nEnablePhysics: int = 95
   m_flBoundingRadius: int = 96
   m_vecSpecifiedSurroundingMins: int = 100
   m_vecSpecifiedSurroundingMaxs: int = 112
   m_vecSurroundingMaxs: int = 124
   m_vecSurroundingMins: int = 136
   m_vCapsuleCenter1: int = 148
   m_vCapsuleCenter2: int = 160
   m_flCapsuleRadius: int = 172



class CEffectData:

   m_vOrigin: int = 8
   m_vStart: int = 20
   m_vNormal: int = 32
   m_vAngles: int = 44
   m_hEntity: int = 56
   m_hOtherEntity: int = 60
   m_flScale: int = 64
   m_flMagnitude: int = 68
   m_flRadius: int = 72
   m_nSurfaceProp: int = 76
   m_nEffectIndex: int = 80
   m_nDamageType: int = 88
   m_nPenetrate: int = 92
   m_nMaterial: int = 94
   m_nHitBox: int = 96
   m_nColor: int = 98
   m_fFlags: int = 99
   m_nAttachmentIndex: int = 100
   m_nAttachmentName: int = 104
   m_iEffectName: int = 108
   m_nExplosionType: int = 110



class CEnvDetailController:

   m_flFadeStartDist: int = 1200
   m_flFadeEndDist: int = 1204



class CEnvWindShared:

   m_flStartTime: int = 8
   m_iWindSeed: int = 12
   m_iMinWind: int = 16
   m_iMaxWind: int = 18
   m_windRadius: int = 20
   m_iMinGust: int = 24
   m_iMaxGust: int = 26
   m_flMinGustDelay: int = 28
   m_flMaxGustDelay: int = 32
   m_flGustDuration: int = 36
   m_iGustDirChange: int = 40
   m_location: int = 44
   m_iszGustSound: int = 56
   m_iWindDir: int = 60
   m_flWindSpeed: int = 64
   m_currentWindVector: int = 68
   m_CurrentSwayVector: int = 80
   m_PrevSwayVector: int = 92
   m_iInitialWindDir: int = 104
   m_flInitialWindSpeed: int = 108
   m_OnGustStart: int = 112
   m_OnGustEnd: int = 152
   m_flVariationTime: int = 192
   m_flSwayTime: int = 196
   m_flSimTime: int = 200
   m_flSwitchTime: int = 204
   m_flAveWindSpeed: int = 208
   m_bGusting: int = 212
   m_flWindAngleVariation: int = 216
   m_flWindSpeedVariation: int = 220
   m_iEntIndex: int = 224



class CEnvWindShared_WindAveEvent_t:

   m_flStartWindSpeed: int = 0
   m_flAveWindSpeed: int = 4



class CEnvWindShared_WindVariationEvent_t:

   m_flWindAngleVariation: int = 0
   m_flWindSpeedVariation: int = 4



class shard_model_desc_t:

   m_nModelID: int = 8
   m_hMaterial: int = 16
   m_solid: int = 24
   m_ShatterPanelMode: int = 25
   m_vecPanelSize: int = 28
   m_vecStressPositionA: int = 36
   m_vecStressPositionB: int = 44
   m_vecPanelVertices: int = 56
   m_flGlassHalfThickness: int = 80
   m_bHasParent: int = 84
   m_bParentFrozen: int = 85
   m_SurfacePropStringToken: int = 88
   m_LightGroup: int = 92



class CShatterGlassShard:

   m_hShardHandle: int = 8
   m_vecPanelVertices: int = 16
   m_vLocalPanelSpaceOrigin: int = 40
   m_hModel: int = 48
   m_hPhysicsEntity: int = 56
   m_hParentPanel: int = 60
   m_hParentShard: int = 64
   m_ShatterStressType: int = 68
   m_vecStressVelocity: int = 72
   m_bCreatedModel: int = 84
   m_flLongestEdge: int = 88
   m_flShortestEdge: int = 92
   m_flLongestAcross: int = 96
   m_flShortestAcross: int = 100
   m_flSumOfAllEdges: int = 104
   m_flArea: int = 108
   m_nOnFrameEdge: int = 112
   m_nParentPanelsNthShard: int = 116
   m_nSubShardGeneration: int = 120
   m_vecAverageVertPosition: int = 124
   m_bAverageVertPositionIsValid: int = 132
   m_vecPanelSpaceStressPositionA: int = 136
   m_vecPanelSpaceStressPositionB: int = 144
   m_bStressPositionAIsValid: int = 152
   m_bStressPositionBIsValid: int = 153
   m_bFlaggedForRemoval: int = 154
   m_flPhysicsEntitySpawnedAtTime: int = 156
   m_bShatterRateLimited: int = 160
   m_hEntityHittingMe: int = 164
   m_vecNeighbors: int = 168



class CGameRules:

   m_szQuestName: int = 8
   m_nQuestPhase: int = 136



class CGlowProperty:

   m_fGlowColor: int = 8
   m_iGlowType: int = 48
   m_iGlowTeam: int = 52
   m_nGlowRange: int = 56
   m_nGlowRangeMin: int = 60
   m_glowColorOverride: int = 64
   m_bFlashing: int = 68
   m_flGlowTime: int = 72
   m_flGlowStartTime: int = 76
   m_bEligibleForScreenHighlight: int = 80
   m_bGlowing: int = 81



class fogparams_t:

   dirPrimary: int = 8
   colorPrimary: int = 20
   colorSecondary: int = 24
   colorPrimaryLerpTo: int = 28
   colorSecondaryLerpTo: int = 32
   start: int = 36
   end: int = 40
   farz: int = 44
   maxdensity: int = 48
   exponent: int = 52
   HDRColorScale: int = 56
   skyboxFogFactor: int = 60
   skyboxFogFactorLerpTo: int = 64
   startLerpTo: int = 68
   endLerpTo: int = 72
   maxdensityLerpTo: int = 76
   lerptime: int = 80
   duration: int = 84
   blendtobackground: int = 88
   scattering: int = 92
   locallightscale: int = 96
   enable: int = 100
   blend: int = 101
   m_bNoReflectionFog: int = 102
   m_bPadding: int = 103



class fogplayerparams_t:

   m_hCtrl: int = 8
   m_flTransitionTime: int = 12
   m_OldColor: int = 16
   m_flOldStart: int = 20
   m_flOldEnd: int = 24
   m_flOldMaxDensity: int = 28
   m_flOldHDRColorScale: int = 32
   m_flOldFarZ: int = 36
   m_NewColor: int = 40
   m_flNewStart: int = 44
   m_flNewEnd: int = 48
   m_flNewMaxDensity: int = 52
   m_flNewHDRColorScale: int = 56
   m_flNewFarZ: int = 60



class sky3dparams_t:

   scale: int = 8
   origin: int = 12
   bClip3DSkyBoxNearToWorldFar: int = 24
   flClip3DSkyBoxNearToWorldFarOffset: int = 28
   fog: int = 32
   m_nWorldGroupID: int = 136



class ragdollelement_t:

   originParentSpace: int = 0
   parentIndex: int = 32
   m_flRadius: int = 36



class ragdoll_t:

   list: int = 0
   boneIndex: int = 24
   allowStretch: int = 48
   unused: int = 49



class PhysicsRagdollPose_t:

   __m_pChainEntity: int = 8
   m_Transforms: int = 48
   m_hOwner: int = 72



class CSceneEventInfo:

   m_iLayer: int = 0
   m_iPriority: int = 4
   m_hSequence: int = 8
   m_flWeight: int = 12
   m_bIsMoving: int = 16
   m_bHasArrived: int = 17
   m_flInitialYaw: int = 20
   m_flTargetYaw: int = 24
   m_flFacingYaw: int = 28
   m_nType: int = 32
   m_flNext: int = 36
   m_bIsGesture: int = 40
   m_bShouldRemove: int = 41
   m_hTarget: int = 84
   m_nSceneEventId: int = 88
   m_bClientSide: int = 92
   m_bStarted: int = 93



class ParticleIndex_t:

   m_Value: int = 0



class AmmoIndex_t:

   m_Value: int = 0



class thinkfunc_t:

   m_hFn: int = 8
   m_nContext: int = 16
   m_nNextThinkTick: int = 20
   m_nLastThinkTick: int = 24



class RagdollCreationParams_t:

   m_vForce: int = 0
   m_nForceBone: int = 12



class hudtextparms_t:

   color1: int = 0
   color2: int = 4
   effect: int = 8
   channel: int = 9
   x: int = 12
   y: int = 16



class CSimpleSimTimer:

   m_next: int = 0
   m_nWorldGroupId: int = 4



class CSimTimer:

   m_interval: int = 8



class CRandSimTimer:

   m_minInterval: int = 8
   m_maxInterval: int = 12



class CStopwatchBase:

   m_fIsRunning: int = 8



class CStopwatch:

   m_interval: int = 12



class CRandStopwatch:

   m_minInterval: int = 12
   m_maxInterval: int = 16



class CSingleplayRules:

   m_bSinglePlayerGameEnding: int = 144



class CSoundOpvarSetPointBase:

   m_bDisabled: int = 1200
   m_hSource: int = 1204
   m_iszSourceEntityName: int = 1216
   m_vLastPosition: int = 1304
   m_iszStackName: int = 1320
   m_iszOperatorName: int = 1328
   m_iszOpvarName: int = 1336
   m_iOpvarIndex: int = 1344
   m_bUseAutoCompare: int = 1348



class CSoundOpvarSetPointEntity:

   m_OnEnter: int = 1352
   m_OnExit: int = 1392
   m_bAutoDisable: int = 1432
   m_flDistanceMin: int = 1500
   m_flDistanceMax: int = 1504
   m_flDistanceMapMin: int = 1508
   m_flDistanceMapMax: int = 1512
   m_flOcclusionRadius: int = 1516
   m_flOcclusionMin: int = 1520
   m_flOcclusionMax: int = 1524
   m_flValSetOnDisable: int = 1528
   m_bSetValueOnDisable: int = 1532
   m_nSimulationMode: int = 1536
   m_nVisibilitySamples: int = 1540
   m_vDynamicProxyPoint: int = 1544
   m_flDynamicMaximumOcclusion: int = 1556
   m_hDynamicEntity: int = 1560
   m_iszDynamicEntityName: int = 1568
   m_flPathingDistanceNormFactor: int = 1576
   m_vPathingSourcePos: int = 1580
   m_vPathingListenerPos: int = 1592
   m_nPathingSourceIndex: int = 1604



class CSoundOpvarSetAABBEntity:

   m_vDistanceInnerMins: int = 1608
   m_vDistanceInnerMaxs: int = 1620
   m_vDistanceOuterMins: int = 1632
   m_vDistanceOuterMaxs: int = 1644
   m_nAABBDirection: int = 1656
   m_vInnerMins: int = 1660
   m_vInnerMaxs: int = 1672
   m_vOuterMins: int = 1684
   m_vOuterMaxs: int = 1696



class CSoundOpvarSetPathCornerEntity:

   m_flDistMinSqr: int = 1632
   m_flDistMaxSqr: int = 1636
   m_iszPathCornerEntityName: int = 1640



class CSoundOpvarSetOBBWindEntity:

   m_vMins: int = 1352
   m_vMaxs: int = 1364
   m_vDistanceMins: int = 1376
   m_vDistanceMaxs: int = 1388
   m_flWindMin: int = 1400
   m_flWindMax: int = 1404
   m_flWindMapMin: int = 1408
   m_flWindMapMax: int = 1412



class CTakeDamageInfo:

   m_vecDamageForce: int = 8
   m_vecDamagePosition: int = 20
   m_vecReportedPosition: int = 32
   m_vecDamageDirection: int = 44
   m_hInflictor: int = 56
   m_hAttacker: int = 60
   m_hAbility: int = 64
   m_flDamage: int = 68
   m_bitsDamageType: int = 72
   m_iDamageCustom: int = 76
   m_iAmmoType: int = 80
   m_flOriginalDamage: int = 96
   m_bShouldBleed: int = 100
   m_bShouldSpark: int = 101
   m_nDamageFlags: int = 112
   m_nNumObjectsPenetrated: int = 116
   m_hScriptInstance: int = 120
   m_bInTakeDamageFlow: int = 148



class CTakeDamageResult:

   m_nHealthLost: int = 0
   m_nDamageTaken: int = 4



class SummaryTakeDamageInfo_t:

   nSummarisedCount: int = 0
   info: int = 8
   result: int = 160
   hTarget: int = 168



class CTakeDamageSummaryScopeGuard:

   m_vecSummaries: int = 8



class CAttributeList:

   m_Attributes: int = 8
   m_pManager: int = 88



class CEconItemAttribute:

   m_iAttributeDefinitionIndex: int = 48
   m_flValue: int = 52
   m_flInitialValue: int = 56
   m_nRefundableCurrency: int = 60
   m_bSetBonus: int = 64



class CAttributeManager:

   m_Providers: int = 8
   m_iReapplyProvisionParity: int = 32
   m_hOuter: int = 36
   m_bPreventLoopback: int = 40
   m_ProviderType: int = 44
   m_CachedResults: int = 48



class CAttributeManager_cached_attribute_float_t:

   flIn: int = 0
   iAttribHook: int = 8
   flOut: int = 16



class CAttributeContainer:

   m_Item: int = 80



class GameAmmoTypeInfo_t:

   m_nBuySize: int = 56
   m_nCost: int = 60



class EntitySpottedState_t:

   m_bSpotted: int = 8
   m_bSpottedByMask: int = 12



class SpawnPoint:

   m_iPriority: int = 1200
   m_bEnabled: int = 1204
   m_nType: int = 1208



class SpawnPointCoopEnemy:

   m_szWeaponsToGive: int = 1216
   m_szPlayerModelToUse: int = 1224
   m_nArmorToSpawnWith: int = 1232
   m_nDefaultBehavior: int = 1236
   m_nBotDifficulty: int = 1240
   m_bIsAgressive: int = 1244
   m_bStartAsleep: int = 1245
   m_flHideRadius: int = 1248
   m_szBehaviorTreeFile: int = 1264



class CCSGameRulesProxy:

   m_pGameRules: int = 1200



class CCSGameRules:

   __m_pChainEntity: int = 152
   m_coopMissionManager: int = 192
   m_bFreezePeriod: int = 196
   m_bWarmupPeriod: int = 197
   m_fWarmupPeriodEnd: int = 200
   m_fWarmupPeriodStart: int = 204
   m_nTotalPausedTicks: int = 208
   m_nPauseStartTick: int = 212
   m_bServerPaused: int = 216
   m_bGamePaused: int = 217
   m_bTerroristTimeOutActive: int = 218
   m_bCTTimeOutActive: int = 219
   m_flTerroristTimeOutRemaining: int = 220
   m_flCTTimeOutRemaining: int = 224
   m_nTerroristTimeOuts: int = 228
   m_nCTTimeOuts: int = 232
   m_bTechnicalTimeOut: int = 236
   m_bMatchWaitingForResume: int = 237
   m_iRoundTime: int = 240
   m_fMatchStartTime: int = 244
   m_fRoundStartTime: int = 248
   m_flRestartRoundTime: int = 252
   m_bGameRestart: int = 256
   m_flGameStartTime: int = 260
   m_timeUntilNextPhaseStarts: int = 264
   m_gamePhase: int = 268
   m_totalRoundsPlayed: int = 272
   m_nRoundsPlayedThisPhase: int = 276
   m_nOvertimePlaying: int = 280
   m_iHostagesRemaining: int = 284
   m_bAnyHostageReached: int = 288
   m_bMapHasBombTarget: int = 289
   m_bMapHasRescueZone: int = 290
   m_bMapHasBuyZone: int = 291
   m_bIsQueuedMatchmaking: int = 292
   m_nQueuedMatchmakingMode: int = 296
   m_bIsValveDS: int = 300
   m_bLogoMap: int = 301
   m_bPlayAllStepSoundsOnServer: int = 302
   m_iSpectatorSlotCount: int = 304
   m_MatchDevice: int = 308
   m_bHasMatchStarted: int = 312
   m_nNextMapInMapgroup: int = 316
   m_szTournamentEventName: int = 320
   m_szTournamentEventStage: int = 832
   m_szMatchStatTxt: int = 1344
   m_szTournamentPredictionsTxt: int = 1856
   m_nTournamentPredictionsPct: int = 2368
   m_flCMMItemDropRevealStartTime: int = 2372
   m_flCMMItemDropRevealEndTime: int = 2376
   m_bIsDroppingItems: int = 2380
   m_bIsQuestEligible: int = 2381
   m_bIsHltvActive: int = 2382
   m_nGuardianModeWaveNumber: int = 2384
   m_nGuardianModeSpecialKillsRemaining: int = 2388
   m_nGuardianModeSpecialWeaponNeeded: int = 2392
   m_nGuardianGrenadesToGiveBots: int = 2396
   m_nNumHeaviesToSpawn: int = 2400
   m_numGlobalGiftsGiven: int = 2404
   m_numGlobalGifters: int = 2408
   m_numGlobalGiftsPeriodSeconds: int = 2412
   m_arrFeaturedGiftersAccounts: int = 2416
   m_arrFeaturedGiftersGifts: int = 2432
   m_arrProhibitedItemIndices: int = 2448
   m_arrTournamentActiveCasterAccounts: int = 2648
   m_numBestOfMaps: int = 2664
   m_nHalloweenMaskListSeed: int = 2668
   m_bBombDropped: int = 2672
   m_bBombPlanted: int = 2673
   m_iRoundWinStatus: int = 2676
   m_eRoundWinReason: int = 2680
   m_bTCantBuy: int = 2684
   m_bCTCantBuy: int = 2685
   m_flGuardianBuyUntilTime: int = 2688
   m_iMatchStats_RoundResults: int = 2692
   m_iMatchStats_PlayersAlive_CT: int = 2812
   m_iMatchStats_PlayersAlive_T: int = 2932
   m_TeamRespawnWaveTimes: int = 3052
   m_flNextRespawnWave: int = 3180
   m_nServerQuestID: int = 3308
   m_vMinimapMins: int = 3312
   m_vMinimapMaxs: int = 3324
   m_MinimapVerticalSectionHeights: int = 3336
   m_bDontIncrementCoopWave: int = 3368
   m_bSpawnedTerrorHuntHeavy: int = 3369
   m_nEndMatchMapGroupVoteTypes: int = 3372
   m_nEndMatchMapGroupVoteOptions: int = 3412
   m_nEndMatchMapVoteWinner: int = 3452
   m_iNumConsecutiveCTLoses: int = 3456
   m_iNumConsecutiveTerroristLoses: int = 3460
   m_bHasHostageBeenTouched: int = 3488
   m_flIntermissionStartTime: int = 3492
   m_flIntermissionEndTime: int = 3496
   m_bLevelInitialized: int = 3500
   m_iTotalRoundsPlayed: int = 3504
   m_iUnBalancedRounds: int = 3508
   m_endMatchOnRoundReset: int = 3512
   m_endMatchOnThink: int = 3513
   m_iFreezeTime: int = 3516
   m_iNumTerrorist: int = 3520
   m_iNumCT: int = 3524
   m_iNumSpawnableTerrorist: int = 3528
   m_iNumSpawnableCT: int = 3532
   m_arrSelectedHostageSpawnIndices: int = 3536
   m_bFirstConnected: int = 3560
   m_bCompleteReset: int = 3561
   m_bPickNewTeamsOnReset: int = 3562
   m_bScrambleTeamsOnRestart: int = 3563
   m_bSwapTeamsOnRestart: int = 3564
   m_nEndMatchTiedVotes: int = 3576
   m_bNeedToAskPlayersForContinueVote: int = 3604
   m_numQueuedMatchmakingAccounts: int = 3608
   m_pQueuedMatchmakingReservationString: int = 3616
   m_numTotalTournamentDrops: int = 3624
   m_numSpectatorsCountMax: int = 3628
   m_numSpectatorsCountMaxTV: int = 3632
   m_numSpectatorsCountMaxLnk: int = 3636
   m_bForceTeamChangeSilent: int = 3648
   m_bLoadingRoundBackupData: int = 3649
   m_nMatchInfoShowType: int = 3704
   m_flMatchInfoDecidedTime: int = 3708
   m_flCoopRespawnAndHealTime: int = 3736
   m_coopBonusCoinsFound: int = 3740
   m_coopBonusPistolsOnly: int = 3744
   m_coopPlayersInDeploymentZone: int = 3745
   m_coopMissionDeadPlayerRespawnEnabled: int = 3746
   mTeamDMLastWinningTeamNumber: int = 3748
   mTeamDMLastThinkTime: int = 3752
   m_flTeamDMLastAnnouncementTime: int = 3756
   m_iAccountTerrorist: int = 3760
   m_iAccountCT: int = 3764
   m_iSpawnPointCount_Terrorist: int = 3768
   m_iSpawnPointCount_CT: int = 3772
   m_iMaxNumTerrorists: int = 3776
   m_iMaxNumCTs: int = 3780
   m_iLoserBonus: int = 3784
   m_iLoserBonusMostRecentTeam: int = 3788
   m_tmNextPeriodicThink: int = 3792
   m_bVoiceWonMatchBragFired: int = 3796
   m_fWarmupNextChatNoticeTime: int = 3800
   m_iHostagesRescued: int = 3808
   m_iHostagesTouched: int = 3812
   m_flNextHostageAnnouncement: int = 3816
   m_bNoTerroristsKilled: int = 3820
   m_bNoCTsKilled: int = 3821
   m_bNoEnemiesKilled: int = 3822
   m_bCanDonateWeapons: int = 3823
   m_firstKillTime: int = 3828
   m_firstBloodTime: int = 3836
   m_hostageWasInjured: int = 3864
   m_hostageWasKilled: int = 3865
   m_bVoteCalled: int = 3880
   m_bServerVoteOnReset: int = 3881
   m_flVoteCheckThrottle: int = 3884
   m_bBuyTimeEnded: int = 3888
   m_nLastFreezeEndBeep: int = 3892
   m_bTargetBombed: int = 3896
   m_bBombDefused: int = 3897
   m_bMapHasBombZone: int = 3898
   m_vecMainCTSpawnPos: int = 3928
   m_CTSpawnPointsMasterList: int = 3944
   m_TerroristSpawnPointsMasterList: int = 3968
   m_iNextCTSpawnPoint: int = 3992
   m_iNextTerroristSpawnPoint: int = 3996
   m_CTSpawnPoints: int = 4000
   m_TerroristSpawnPoints: int = 4024
   m_bIsUnreservedGameServer: int = 4048
   m_fAutobalanceDisplayTime: int = 4052
   m_bAllowWeaponSwitch: int = 4672
   m_bRoundTimeWarningTriggered: int = 4673
   m_phaseChangeAnnouncementTime: int = 4676
   m_fNextUpdateTeamClanNamesTime: int = 4680
   m_flLastThinkTime: int = 4684
   m_fAccumulatedRoundOffDamage: int = 4688
   m_nShorthandedBonusLastEvalRound: int = 4692
   m_bMatchAbortedDueToPlayerBan: int = 5328
   m_bHasTriggeredRoundStartMusic: int = 5329
   m_bHasTriggeredCoopSpawnReset: int = 5330
   m_bSwitchingTeamsAtRoundReset: int = 5331
   m_pGameModeRules: int = 5360
   m_BtGlobalBlackboard: int = 5368
   m_hPlayerResource: int = 5472
   m_RetakeRules: int = 5480
   m_GuardianBotSkillLevelMax: int = 5964
   m_GuardianBotSkillLevelMin: int = 5968
   m_arrTeamUniqueKillWeaponsMatch: int = 5976
   m_bTeamLastKillUsedUniqueWeaponMatch: int = 6072
   m_nMatchEndCount: int = 6112
   m_nTTeamIntroVariant: int = 6116
   m_nCTTeamIntroVariant: int = 6120
   m_bTeamIntroPeriod: int = 6124
   m_fTeamIntroPeriodEnd: int = 6128
   m_bPlayedTeamIntroVO: int = 6132
   m_flLastPerfSampleTime: int = 22528
   m_bSkipNextServerPerfSample: int = 22536



class CCSGameModeRules:

   __m_pChainEntity: int = 8



class CCSGameModeRules_Deathmatch:

   m_bFirstThink: int = 48
   m_bFirstThinkAfterConnected: int = 49
   m_flDMBonusStartTime: int = 52
   m_flDMBonusTimeLength: int = 56
   m_nDMBonusWeaponLoadoutSlot: int = 60



class CRetakeGameRules:

   m_nMatchSeed: int = 248
   m_bBlockersPresent: int = 252
   m_bRoundInProgress: int = 253
   m_iFirstSecondHalfRound: int = 256
   m_iBombSite: int = 260



class CSPerRoundStats_t:

   m_iKills: int = 48
   m_iDeaths: int = 52
   m_iAssists: int = 56
   m_iDamage: int = 60
   m_iEquipmentValue: int = 64
   m_iMoneySaved: int = 68
   m_iKillReward: int = 72
   m_iLiveTime: int = 76
   m_iHeadShotKills: int = 80
   m_iObjective: int = 84
   m_iCashEarned: int = 88
   m_iUtilityDamage: int = 92
   m_iEnemiesFlashed: int = 96



class CSMatchStats_t:

   m_iEnemy5Ks: int = 104
   m_iEnemy4Ks: int = 108
   m_iEnemy3Ks: int = 112
   m_iEnemy2Ks: int = 116
   m_iUtility_Count: int = 120
   m_iUtility_Successes: int = 124
   m_iUtility_Enemies: int = 128
   m_iFlash_Count: int = 132
   m_iFlash_Successes: int = 136
   m_nHealthPointsRemovedTotal: int = 140
   m_nHealthPointsDealtTotal: int = 144
   m_nShotsFiredTotal: int = 148
   m_nShotsOnTargetTotal: int = 152
   m_i1v1Count: int = 156
   m_i1v1Wins: int = 160
   m_i1v2Count: int = 164
   m_i1v2Wins: int = 168
   m_iEntryCount: int = 172
   m_iEntryWins: int = 176



class CCSGO_TeamPreviewCharacterPosition:

   m_nVariant: int = 1200
   m_nRandom: int = 1204
   m_nOrdinal: int = 1208
   m_sWeaponName: int = 1216
   m_xuid: int = 1224
   m_agentItem: int = 1232
   m_glovesItem: int = 1864
   m_weaponItem: int = 2496



class CPlayerPing:

   m_hPlayer: int = 1208
   m_hPingedEntity: int = 1212
   m_iType: int = 1216
   m_bUrgent: int = 1220
   m_szPlaceName: int = 1221



class CCSPlayer_PingServices:

   m_flPlayerPingTokens: int = 64
   m_hPlayerPing: int = 84



class CCSPlayerResource:

   m_bHostageAlive: int = 1200
   m_isHostageFollowingSomeone: int = 1212
   m_iHostageEntityIDs: int = 1224
   m_bombsiteCenterA: int = 1272
   m_bombsiteCenterB: int = 1284
   m_hostageRescueX: int = 1296
   m_hostageRescueY: int = 1312
   m_hostageRescueZ: int = 1328
   m_bEndMatchNextMapAllVoted: int = 1344
   m_foundGoalPositions: int = 1345



class CCSPlayerBase_CameraServices:

   m_iFOV: int = 368
   m_iFOVStart: int = 372
   m_flFOVTime: int = 376
   m_flFOVRate: int = 380
   m_hZoomOwner: int = 384
   m_hTriggerFogList: int = 392
   m_hLastFogTrigger: int = 416



class WeaponPurchaseCount_t:

   m_nItemDefIndex: int = 48
   m_nCount: int = 50



class WeaponPurchaseTracker_t:

   m_weaponPurchases: int = 8



class CCSPlayer_ActionTrackingServices:

   m_hLastWeaponBeforeC4AutoSwitch: int = 520
   m_bIsRescuing: int = 572
   m_weaponPurchasesThisMatch: int = 576
   m_weaponPurchasesThisRound: int = 664



class CCSPlayer_BulletServices:

   m_totalHitsOnServer: int = 64



class SellbackPurchaseEntry_t:

   m_unDefIdx: int = 48
   m_nCost: int = 52
   m_nPrevArmor: int = 56
   m_bPrevHelmet: int = 60
   m_hItem: int = 64



class CCSPlayer_BuyServices:

   m_vecSellbackPurchaseEntries: int = 200



class CCSPlayer_HostageServices:

   m_hCarriedHostage: int = 64
   m_hCarriedHostageProp: int = 68



class CCSPlayer_ItemServices:

   m_bHasDefuser: int = 64
   m_bHasHelmet: int = 65
   m_bHasHeavyArmor: int = 66



class CCSPlayer_MovementServices:

   m_flMaxFallVelocity: int = 544
   m_vecLadderNormal: int = 548
   m_nLadderSurfacePropIndex: int = 560
   m_flDuckAmount: int = 564
   m_flDuckSpeed: int = 568
   m_bDuckOverride: int = 572
   m_bDesiresDuck: int = 573
   m_flDuckOffset: int = 576
   m_nDuckTimeMsecs: int = 580
   m_nDuckJumpTimeMsecs: int = 584
   m_nJumpTimeMsecs: int = 588
   m_flLastDuckTime: int = 592
   m_vecLastPositionAtFullCrouchSpeed: int = 608
   m_duckUntilOnGround: int = 616
   m_bHasWalkMovedSinceLastJump: int = 617
   m_bInStuckTest: int = 618
   m_flStuckCheckTime: int = 632
   m_nTraceCount: int = 1144
   m_StuckLast: int = 1148
   m_bSpeedCropped: int = 1152
   m_nOldWaterLevel: int = 1156
   m_flWaterEntryTime: int = 1160
   m_vecForward: int = 1164
   m_vecLeft: int = 1176
   m_vecUp: int = 1188
   m_vecPreviouslyPredictedOrigin: int = 1200
   m_bMadeFootstepNoise: int = 1212
   m_iFootsteps: int = 1216
   m_bOldJumpPressed: int = 1220
   m_flJumpPressedTime: int = 1224
   m_flJumpUntil: int = 1228
   m_flJumpVel: int = 1232
   m_fStashGrenadeParameterWhen: int = 1236
   m_nButtonDownMaskPrev: int = 1240
   m_flOffsetTickCompleteTime: int = 1248
   m_flOffsetTickStashedSpeed: int = 1252
   m_flStamina: int = 1256



class CCSPlayer_UseServices:

   m_hLastKnownUseEntity: int = 64
   m_flLastUseTimeStamp: int = 68
   m_flTimeStartedHoldingUse: int = 72
   m_flTimeLastUsedWindow: int = 76



class CCSPlayer_ViewModelServices:

   m_hViewModel: int = 64



class CCSPlayer_WaterServices:

   m_NextDrownDamageTime: int = 64
   m_nDrownDmgRate: int = 68
   m_AirFinishedTime: int = 72
   m_flWaterJumpTime: int = 76
   m_vecWaterJumpVel: int = 80
   m_flSwimSoundTime: int = 92



class CCSPlayer_WeaponServices:

   m_flNextAttack: int = 176
   m_bIsLookingAtWeapon: int = 180
   m_bIsHoldingLookAtWeapon: int = 181
   m_hSavedWeapon: int = 184
   m_nTimeToMelee: int = 188
   m_nTimeToSecondary: int = 192
   m_nTimeToPrimary: int = 196
   m_nTimeToSniperRifle: int = 200
   m_bIsBeingGivenItem: int = 204
   m_bIsPickingUpItemWithUse: int = 205
   m_bPickedUpWeapon: int = 206



class CSAdditionalPerRoundStats_t:

   m_numChickensKilled: int = 0
   m_killsWhileBlind: int = 4
   m_bombCarrierkills: int = 8
   m_iBurnDamageInflicted: int = 12
   m_iDinks: int = 16



class CSAdditionalMatchStats_t:

   m_numRoundsSurvived: int = 20
   m_maxNumRoundsSurvived: int = 24
   m_numRoundsSurvivedTotal: int = 28
   m_iRoundsWonWithoutPurchase: int = 32
   m_iRoundsWonWithoutPurchaseTotal: int = 36
   m_numFirstKills: int = 40
   m_numClutchKills: int = 44
   m_numPistolKills: int = 48
   m_numSniperKills: int = 52
   m_iNumSuicides: int = 56
   m_iNumTeamKills: int = 60
   m_iTeamDamage: int = 64



class CCSPlayerController_ActionTrackingServices:

   m_perRoundStats: int = 64
   m_matchStats: int = 144
   m_iNumRoundKills: int = 328
   m_iNumRoundKillsHeadshots: int = 332



class CDamageRecord:

   m_PlayerDamager: int = 40
   m_PlayerRecipient: int = 44
   m_hPlayerControllerDamager: int = 48
   m_hPlayerControllerRecipient: int = 52
   m_szPlayerDamagerName: int = 56
   m_szPlayerRecipientName: int = 64
   m_DamagerXuid: int = 72
   m_RecipientXuid: int = 80
   m_iDamage: int = 88
   m_iActualHealthRemoved: int = 92
   m_iNumHits: int = 96
   m_iLastBulletUpdate: int = 100
   m_bIsOtherEnemy: int = 104
   m_killType: int = 105