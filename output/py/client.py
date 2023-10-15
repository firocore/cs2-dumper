



class C_TriggerBuoyancy:

   m_BuoyancyHelper: int = 3272
   m_flFluidDensity: int = 3304



class CFuncWater:

   m_BuoyancyHelper: int = 3264



class CCSPlayerController:

   m_pInGameMoneyServices: int = 1744
   m_pInventoryServices: int = 1752
   m_pActionTrackingServices: int = 1760
   m_pDamageServices: int = 1768
   m_iPing: int = 1776
   m_bHasCommunicationAbuseMute: int = 1780
   m_szCrosshairCodes: int = 1784
   m_iPendingTeamNum: int = 1792
   m_flForceTeamTime: int = 1796
   m_iCompTeammateColor: int = 1800
   m_bEverPlayedOnTeam: int = 1804
   m_flPreviousForceJoinTeamTime: int = 1808
   m_szClan: int = 1816
   m_sSanitizedPlayerName: int = 1824
   m_iCoachingTeam: int = 1832
   m_nPlayerDominated: int = 1840
   m_nPlayerDominatingMe: int = 1848
   m_iCompetitiveRanking: int = 1856
   m_iCompetitiveWins: int = 1860
   m_iCompetitiveRankType: int = 1864
   m_iCompetitiveRankingPredicted_Win: int = 1868
   m_iCompetitiveRankingPredicted_Loss: int = 1872
   m_iCompetitiveRankingPredicted_Tie: int = 1876
   m_nEndMatchNextMapVote: int = 1880
   m_unActiveQuestId: int = 1884
   m_nQuestProgressReason: int = 1888
   m_unPlayerTvControlFlags: int = 1892
   m_iDraftIndex: int = 1936
   m_msQueuedModeDisconnectionTimestamp: int = 1940
   m_uiAbandonRecordedReason: int = 1944
   m_bEverFullyConnected: int = 1948
   m_bAbandonAllowsSurrender: int = 1949
   m_bAbandonOffersInstantSurrender: int = 1950
   m_bDisconnection1MinWarningPrinted: int = 1951
   m_bScoreReported: int = 1952
   m_nDisconnectionTick: int = 1956
   m_bControllingBot: int = 1968
   m_bHasControlledBotThisRound: int = 1969
   m_bHasBeenControlledByPlayerThisRound: int = 1970
   m_nBotsControlledThisRound: int = 1972
   m_bCanControlObservedBot: int = 1976
   m_hPlayerPawn: int = 1980
   m_hObserverPawn: int = 1984
   m_bPawnIsAlive: int = 1988
   m_iPawnHealth: int = 1992
   m_iPawnArmor: int = 1996
   m_bPawnHasDefuser: int = 2000
   m_bPawnHasHelmet: int = 2001
   m_nPawnCharacterDefIndex: int = 2002
   m_iPawnLifetimeStart: int = 2004
   m_iPawnLifetimeEnd: int = 2008
   m_iPawnBotDifficulty: int = 2012
   m_hOriginalControllerOfCurrentPawn: int = 2016
   m_iScore: int = 2020
   m_vecKills: int = 2024
   m_iMVPs: int = 2048
   m_bIsPlayerNameDirty: int = 2052



class C_FootstepControl:

   m_source: int = 3272
   m_destination: int = 3280



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



class C_PlayerSprayDecal:

   m_nUniqueID: int = 3264
   m_unAccountID: int = 3268
   m_unTraceID: int = 3272
   m_rtGcTime: int = 3276
   m_vecEndPos: int = 3280
   m_vecStart: int = 3292
   m_vecLeft: int = 3304
   m_vecNormal: int = 3316
   m_nPlayer: int = 3328
   m_nEntity: int = 3332
   m_nHitbox: int = 3336
   m_flCreationTime: int = 3340
   m_nTintID: int = 3344
   m_nVersion: int = 3348
   m_ubSignature: int = 3349
   m_SprayRenderHelper: int = 3488



class C_FuncConveyor:

   m_vecMoveDirEntitySpace: int = 3272
   m_flTargetSpeed: int = 3284
   m_nTransitionStartTick: int = 3288
   m_nTransitionDurationTicks: int = 3292
   m_flTransitionStartSpeed: int = 3296
   m_hConveyorModels: int = 3304
   m_flCurrentConveyorOffset: int = 3328
   m_flCurrentConveyorSpeed: int = 3332



class CGrenadeTracer:

   m_flTracerDuration: int = 3296
   m_nType: int = 3300



class C_Inferno:

   m_nfxFireDamageEffect: int = 3328
   m_fireXDelta: int = 3332
   m_fireYDelta: int = 3588
   m_fireZDelta: int = 3844
   m_fireParentXDelta: int = 4100
   m_fireParentYDelta: int = 4356
   m_fireParentZDelta: int = 4612
   m_bFireIsBurning: int = 4868
   m_BurnNormal: int = 4932
   m_fireCount: int = 5700
   m_nInfernoType: int = 5704
   m_nFireLifetime: int = 5708
   m_bInPostEffectTime: int = 5712
   m_lastFireCount: int = 5716
   m_nFireEffectTickBegin: int = 5720
   m_drawableCount: int = 33376
   m_blosCheck: int = 33380
   m_nlosperiod: int = 33384
   m_maxFireHalfWidth: int = 33388
   m_maxFireHeight: int = 33392
   m_minBounds: int = 33396
   m_maxBounds: int = 33408
   m_flLastGrassBurnThink: int = 33420



class C_BarnLight:

   m_bEnabled: int = 3264
   m_nColorMode: int = 3268
   m_Color: int = 3272
   m_flColorTemperature: int = 3276
   m_flBrightness: int = 3280
   m_flBrightnessScale: int = 3284
   m_nDirectLight: int = 3288
   m_nBakedShadowIndex: int = 3292
   m_nLuminaireShape: int = 3296
   m_flLuminaireSize: int = 3300
   m_flLuminaireAnisotropy: int = 3304
   m_LightStyleString: int = 3312
   m_flLightStyleStartTime: int = 3320
   m_QueuedLightStyleStrings: int = 3328
   m_LightStyleEvents: int = 3352
   m_LightStyleTargets: int = 3376
   m_StyleEvent: int = 3400
   m_hLightCookie: int = 3560
   m_flShape: int = 3568
   m_flSoftX: int = 3572
   m_flSoftY: int = 3576
   m_flSkirt: int = 3580
   m_flSkirtNear: int = 3584
   m_vSizeParams: int = 3588
   m_flRange: int = 3600
   m_vShear: int = 3604
   m_nBakeSpecularToCubemaps: int = 3616
   m_vBakeSpecularToCubemapsSize: int = 3620
   m_nCastShadows: int = 3632
   m_nShadowMapSize: int = 3636
   m_nShadowPriority: int = 3640
   m_bContactShadow: int = 3644
   m_nBounceLight: int = 3648
   m_flBounceScale: int = 3652
   m_flMinRoughness: int = 3656
   m_vAlternateColor: int = 3660
   m_fAlternateColorBrightness: int = 3672
   m_nFog: int = 3676
   m_flFogStrength: int = 3680
   m_nFogShadows: int = 3684
   m_flFogScale: int = 3688
   m_flFadeSizeStart: int = 3692
   m_flFadeSizeEnd: int = 3696
   m_flShadowFadeSizeStart: int = 3700
   m_flShadowFadeSizeEnd: int = 3704
   m_bPrecomputedFieldsValid: int = 3708
   m_vPrecomputedBoundsMins: int = 3712
   m_vPrecomputedBoundsMaxs: int = 3724
   m_vPrecomputedOBBOrigin: int = 3736
   m_vPrecomputedOBBAngles: int = 3748
   m_vPrecomputedOBBExtent: int = 3760



class C_RectLight:

   m_bShowLight: int = 3848



class C_OmniLight:

   m_flInnerAngle: int = 3848
   m_flOuterAngle: int = 3852
   m_bShowLight: int = 3856



class C_CSTeam:

   m_szTeamMatchStat: int = 1528
   m_numMapVictories: int = 2040
   m_bSurrendered: int = 2044
   m_scoreFirstHalf: int = 2048
   m_scoreSecondHalf: int = 2052
   m_scoreOvertime: int = 2056
   m_szClanTeamname: int = 2060
   m_iClanID: int = 2192
   m_szTeamFlagImage: int = 2196
   m_szTeamLogoImage: int = 2204



class CInfoDynamicShadowHint:

   m_bDisabled: int = 1344
   m_flRange: int = 1348
   m_nImportance: int = 1352
   m_nLightChoice: int = 1356
   m_hLight: int = 1360



class CInfoDynamicShadowHintBox:

   m_vBoxMins: int = 1368
   m_vBoxMaxs: int = 1380



class C_EnvSky:

   m_hSkyMaterial: int = 3264
   m_hSkyMaterialLightingOnly: int = 3272
   m_bStartDisabled: int = 3280
   m_vTintColor: int = 3281
   m_vTintColorLightingOnly: int = 3285
   m_flBrightnessScale: int = 3292
   m_nFogType: int = 3296
   m_flFogMinStart: int = 3300
   m_flFogMinEnd: int = 3304
   m_flFogMaxStart: int = 3308
   m_flFogMaxEnd: int = 3312
   m_bEnabled: int = 3316



class C_LightEntity:

   m_CLightComponent: int = 3264



class C_PostProcessingVolume:

   m_hPostSettings: int = 3288
   m_flFadeDuration: int = 3296
   m_flMinLogExposure: int = 3300
   m_flMaxLogExposure: int = 3304
   m_flMinExposure: int = 3308
   m_flMaxExposure: int = 3312
   m_flExposureCompensation: int = 3316
   m_flExposureFadeSpeedUp: int = 3320
   m_flExposureFadeSpeedDown: int = 3324
   m_flTonemapEVSmoothingRange: int = 3328
   m_bMaster: int = 3332
   m_bExposureControl: int = 3333
   m_flRate: int = 3336
   m_flTonemapPercentTarget: int = 3340
   m_flTonemapPercentBrightPixels: int = 3344
   m_flTonemapMinAvgLum: int = 3348



class C_EnvParticleGlow:

   m_flAlphaScale: int = 4720
   m_flRadiusScale: int = 4724
   m_flSelfIllumScale: int = 4728
   m_ColorTint: int = 4732
   m_hTextureOverride: int = 4736



class C_TextureBasedAnimatable:

   m_bLoop: int = 3264
   m_flFPS: int = 3268
   m_hPositionKeys: int = 3272
   m_hRotationKeys: int = 3280
   m_vAnimationBoundsMin: int = 3288
   m_vAnimationBoundsMax: int = 3300
   m_flStartTime: int = 3312
   m_flStartFrame: int = 3316



class CBaseAnimGraph:

   m_bInitiallyPopulateInterpHistory: int = 3264
   m_bShouldAnimateDuringGameplayPause: int = 3265
   m_bSuppressAnimEventSounds: int = 3267
   m_bAnimGraphUpdateEnabled: int = 3280
   m_flMaxSlopeDistance: int = 3284
   m_vLastSlopeCheckPos: int = 3288
   m_vecForce: int = 3304
   m_nForceBone: int = 3316
   m_pClientsideRagdoll: int = 3320
   m_bBuiltRagdoll: int = 3328
   m_pRagdollPose: int = 3352
   m_bClientRagdoll: int = 3360
   m_bHasAnimatedMaterialAttributes: int = 3376



class CBaseProp:

   m_bModelOverrodeBlockLOS: int = 3712
   m_iShapeType: int = 3716
   m_bConformToCollisionBounds: int = 3720
   m_mPreferredCatchTransform: int = 3724



class C_BreakableProp:

   m_OnBreak: int = 3784
   m_OnHealthChanged: int = 3824
   m_OnTakeDamage: int = 3864
   m_impactEnergyScale: int = 3904
   m_iMinHealthDmg: int = 3908
   m_flPressureDelay: int = 3912
   m_hBreaker: int = 3916
   m_PerformanceMode: int = 3920
   m_flDmgModBullet: int = 3924
   m_flDmgModClub: int = 3928
   m_flDmgModExplosive: int = 3932
   m_flDmgModFire: int = 3936
   m_iszPhysicsDamageTableName: int = 3944
   m_iszBasePropData: int = 3952
   m_iInteractions: int = 3960
   m_flPreventDamageBeforeTime: int = 3964
   m_bHasBreakPiecesOrCommands: int = 3968
   m_explodeDamage: int = 3972
   m_explodeRadius: int = 3976
   m_explosionDelay: int = 3984
   m_explosionBuildupSound: int = 3992
   m_explosionCustomEffect: int = 4000
   m_explosionCustomSound: int = 4008
   m_explosionModifier: int = 4016
   m_hPhysicsAttacker: int = 4024
   m_flLastPhysicsInfluenceTime: int = 4028
   m_flDefaultFadeScale: int = 4032
   m_hLastAttacker: int = 4036
   m_hFlareEnt: int = 4040
   m_noGhostCollision: int = 4044



class C_DynamicProp:

   m_bUseHitboxesForRenderBox: int = 4048
   m_bUseAnimGraph: int = 4049
   m_pOutputAnimBegun: int = 4056
   m_pOutputAnimOver: int = 4096
   m_pOutputAnimLoopCycleOver: int = 4136
   m_OnAnimReachedStart: int = 4176
   m_OnAnimReachedEnd: int = 4216
   m_iszDefaultAnim: int = 4256
   m_nDefaultAnimLoopMode: int = 4264
   m_bAnimateOnServer: int = 4268
   m_bRandomizeCycle: int = 4269
   m_bStartDisabled: int = 4270
   m_bScriptedMovement: int = 4271
   m_bFiredStartEndOutput: int = 4272
   m_bForceNpcExclude: int = 4273
   m_bCreateNonSolid: int = 4274
   m_bIsOverrideProp: int = 4275
   m_iInitialGlowState: int = 4276
   m_nGlowRange: int = 4280
   m_nGlowRangeMin: int = 4284
   m_glowColor: int = 4288
   m_nGlowTeam: int = 4292
   m_iCachedFrameCount: int = 4296
   m_vecCachedRenderMins: int = 4300
   m_vecCachedRenderMaxs: int = 4312



class C_ColorCorrectionVolume:

   m_LastEnterWeight: int = 3272
   m_LastEnterTime: int = 3276
   m_LastExitWeight: int = 3280
   m_LastExitTime: int = 3284
   m_bEnabled: int = 3288
   m_MaxWeight: int = 3292
   m_FadeDuration: int = 3296
   m_Weight: int = 3300
   m_lookupFilename: int = 3304



class C_FuncMonitor:

   m_targetCamera: int = 3264
   m_nResolutionEnum: int = 3272
   m_bRenderShadows: int = 3276
   m_bUseUniqueColorTarget: int = 3277
   m_brushModelName: int = 3280
   m_hTargetCamera: int = 3288
   m_bEnabled: int = 3292
   m_bDraw3DSkybox: int = 3293



class C_PhysMagnet:

   m_aAttachedObjectsFromServer: int = 3712
   m_aAttachedObjects: int = 3736



class C_PointCommentaryNode:

   m_bActive: int = 3720
   m_bWasActive: int = 3721
   m_flEndTime: int = 3724
   m_flStartTime: int = 3728
   m_flStartTimeInCommentary: int = 3732
   m_iszCommentaryFile: int = 3736
   m_iszTitle: int = 3744
   m_iszSpeakers: int = 3752
   m_iNodeNumber: int = 3760
   m_iNodeNumberMax: int = 3764
   m_bListenedTo: int = 3768
   m_hViewPosition: int = 3784
   m_bRestartAfterRestore: int = 3788



class C_BaseDoor:

   m_bIsUsable: int = 3264



class C_BaseFlex:

   m_flexWeight: int = 3728
   m_vLookTargetPosition: int = 3752
   m_blinktoggle: int = 3776
   m_nLastFlexUpdateFrameCount: int = 3872
   m_CachedViewTarget: int = 3876
   m_nNextSceneEventId: int = 3888
   m_iBlink: int = 3892
   m_blinktime: int = 3896
   m_prevblinktoggle: int = 3900
   m_iJawOpen: int = 3904
   m_flJawOpenAmount: int = 3908
   m_flBlinkAmount: int = 3912
   m_iMouthAttachment: int = 3916
   m_iEyeAttachment: int = 3917
   m_bResetFlexWeightsOnModelChange: int = 3918
   m_nEyeOcclusionRendererBone: int = 3944
   m_mEyeOcclusionRendererCameraToBoneTransform: int = 3948
   m_vEyeOcclusionRendererHalfExtent: int = 3996
   m_PhonemeClasses: int = 4024



class C_ClientRagdoll:

   m_bFadeOut: int = 3712
   m_bImportant: int = 3713
   m_flEffectTime: int = 3716
   m_gibDespawnTime: int = 3720
   m_iCurrentFriction: int = 3724
   m_iMinFriction: int = 3728
   m_iMaxFriction: int = 3732
   m_iFrictionAnimState: int = 3736
   m_bReleaseRagdoll: int = 3740
   m_iEyeAttachment: int = 3741
   m_bFadingOut: int = 3742
   m_flScaleEnd: int = 3744
   m_flScaleTimeStart: int = 3784
   m_flScaleTimeEnd: int = 3824



class C_Precipitation:

   m_flDensity: int = 3272
   m_flParticleInnerDist: int = 3288
   m_pParticleDef: int = 3296
   m_tParticlePrecipTraceTimer: int = 3336
   m_bActiveParticlePrecipEmitter: int = 3344
   m_bParticlePrecipInitialized: int = 3345
   m_bHasSimulatedSinceLastSceneObjectUpdate: int = 3346
   m_nAvailableSheetSequencesMaxIndex: int = 3348



class C_FireSprite:

   m_vecMoveDir: int = 3568
   m_bFadeFromAbove: int = 3580



class C_Fish:

   m_pos: int = 3712
   m_vel: int = 3724
   m_angles: int = 3736
   m_localLifeState: int = 3748
   m_deathDepth: int = 3752
   m_deathAngle: int = 3756
   m_buoyancy: int = 3760
   m_wiggleTimer: int = 3768
   m_wigglePhase: int = 3792
   m_wiggleRate: int = 3796
   m_actualPos: int = 3800
   m_actualAngles: int = 3812
   m_poolOrigin: int = 3824
   m_waterLevel: int = 3836
   m_gotUpdate: int = 3840
   m_x: int = 3844
   m_y: int = 3848
   m_z: int = 3852
   m_angle: int = 3856
   m_errorHistory: int = 3860
   m_errorHistoryIndex: int = 3940
   m_errorHistoryCount: int = 3944
   m_averageError: int = 3948



class C_PhysicsProp:

   m_bAwake: int = 4048



class C_BasePropDoor:

   m_eDoorState: int = 4344
   m_modelChanged: int = 4348
   m_bLocked: int = 4349
   m_closedPosition: int = 4352
   m_closedAngles: int = 4364
   m_hMaster: int = 4376
   m_vWhereToSetLightingOrigin: int = 4380



class C_PhysPropClientside:

   m_flTouchDelta: int = 4048
   m_fDeathTime: int = 4052
   m_impactEnergyScale: int = 4056
   m_inertiaScale: int = 4060
   m_flDmgModBullet: int = 4064
   m_flDmgModClub: int = 4068
   m_flDmgModExplosive: int = 4072
   m_flDmgModFire: int = 4076
   m_iszPhysicsDamageTableName: int = 4080
   m_iszBasePropData: int = 4088
   m_iInteractions: int = 4096
   m_bHasBreakPiecesOrCommands: int = 4100
   m_vecDamagePosition: int = 4104
   m_vecDamageDirection: int = 4116
   m_nDamageType: int = 4128



class C_RagdollProp:

   m_ragPos: int = 3720
   m_ragAngles: int = 3744
   m_flBlendWeight: int = 3768
   m_hRagdollSource: int = 3772
   m_iEyeAttachment: int = 3776
   m_flBlendWeightCurrent: int = 3780
   m_parentPhysicsBoneIndices: int = 3784
   m_worldSpaceBoneComputationOrder: int = 3808



class C_LocalTempEntity:

   flags: int = 3736
   die: int = 3740
   m_flFrameMax: int = 3744
   x: int = 3748
   y: int = 3752
   fadeSpeed: int = 3756
   bounceFactor: int = 3760
   hitSound: int = 3764
   priority: int = 3768
   tentOffset: int = 3772
   m_vecTempEntAngVelocity: int = 3784
   tempent_renderamt: int = 3796
   m_vecNormal: int = 3800
   m_flSpriteScale: int = 3812
   m_nFlickerFrame: int = 3816
   m_flFrameRate: int = 3820
   m_flFrame: int = 3824
   m_pszImpactEffect: int = 3832
   m_pszParticleEffect: int = 3840
   m_bParticleCollision: int = 3848
   m_iLastCollisionFrame: int = 3852
   m_vLastCollisionOrigin: int = 3856
   m_vecTempEntVelocity: int = 3868
   m_vecPrevAbsOrigin: int = 3880
   m_vecTempEntAcceleration: int = 3892



class C_ShatterGlassShardPhysics:

   m_ShardDesc: int = 4064



class C_EconEntity:

   m_flFlexDelayTime: int = 4136
   m_flFlexDelayedWeight: int = 4144
   m_bAttributesInitialized: int = 4152
   m_AttributeManager: int = 4160
   m_OriginalOwnerXuidLow: int = 5352
   m_OriginalOwnerXuidHigh: int = 5356
   m_nFallbackPaintKit: int = 5360
   m_nFallbackSeed: int = 5364
   m_flFallbackWear: int = 5368
   m_nFallbackStatTrak: int = 5372
   m_bClientside: int = 5376
   m_bParticleSystemsCreated: int = 5377
   m_vecAttachedParticles: int = 5384
   m_hViewmodelAttachment: int = 5408
   m_iOldTeam: int = 5412
   m_bAttachmentDirty: int = 5416
   m_nUnloadedModelIndex: int = 5420
   m_iNumOwnerValidationRetries: int = 5424
   m_hOldProvidee: int = 5440
   m_vecAttachedModels: int = 5448



class C_EconWearable:

   m_nForceSkin: int = 5472
   m_bAlwaysAllow: int = 5476



class C_BaseGrenade:

   m_bHasWarnedAI: int = 4120
   m_bIsSmokeGrenade: int = 4121
   m_bIsLive: int = 4122
   m_DmgRadius: int = 4124
   m_flDetonateTime: int = 4128
   m_flWarnAITime: int = 4132
   m_flDamage: int = 4136
   m_iszBounceSound: int = 4144
   m_ExplosionSound: int = 4152
   m_hThrower: int = 4164
   m_flNextAttack: int = 4188
   m_hOriginalThrower: int = 4192



class C_ViewmodelWeapon:

   m_worldModel: int = 3712



class C_BaseViewModel:

   m_vecLastFacing: int = 3720
   m_nViewModelIndex: int = 3732
   m_nAnimationParity: int = 3736
   m_flAnimationStartTime: int = 3740
   m_hWeapon: int = 3744
   m_sVMName: int = 3752
   m_sAnimationPrefix: int = 3760
   m_hWeaponModel: int = 3768
   m_iCameraAttachment: int = 3772
   m_vecLastCameraAngles: int = 3776
   m_previousElapsedDuration: int = 3788
   m_previousCycle: int = 3792
   m_nOldAnimationParity: int = 3796
   m_hOldLayerSequence: int = 3800
   m_oldLayer: int = 3804
   m_oldLayerStartTime: int = 3808
   m_hControlPanel: int = 3812



class C_PredictedViewModel:

   m_LagAnglesHistory: int = 3816
   m_vPredictedOffset: int = 3840



class C_BaseCSGrenadeProjectile:

   m_vInitialVelocity: int = 4200
   m_nBounces: int = 4212
   m_nExplodeEffectIndex: int = 4216
   m_nExplodeEffectTickBegin: int = 4224
   m_vecExplodeEffectOrigin: int = 4228
   m_flSpawnTime: int = 4240
   vecLastTrailLinePos: int = 4244
   flNextTrailLineTime: int = 4256
   m_bExplodeEffectBegan: int = 4260
   m_bCanCreateGrenadeTrail: int = 4261
   m_nSnapshotTrajectoryEffectIndex: int = 4264
   m_hSnapshotTrajectoryParticleSnapshot: int = 4272
   m_arrTrajectoryTrailPoints: int = 4280
   m_arrTrajectoryTrailPointCreationTimes: int = 4304
   m_flTrajectoryTrailEffectCreationTime: int = 4328



class C_CSGO_PreviewModel:

   m_animgraph: int = 4120
   m_animgraphCharacterModeString: int = 4128
   m_defaultAnim: int = 4136
   m_nDefaultAnimLoopMode: int = 4144
   m_flInitialModelScale: int = 4148



class C_BulletHitModel:

   m_matLocal: int = 3712
   m_iBoneIndex: int = 3760
   m_hPlayerParent: int = 3764
   m_bIsHit: int = 3768
   m_flTimeCreated: int = 3772
   m_vecStartPos: int = 3776



class C_PickUpModelSlerper:

   m_hPlayerParent: int = 3712
   m_hItem: int = 3716
   m_flTimePickedUp: int = 3720
   m_angOriginal: int = 3724
   m_vecPosOriginal: int = 3736
   m_angRandom: int = 3752



class C_Multimeter:

   m_hTargetC4: int = 3720



class C_PlantedC4:

   m_bBombTicking: int = 3712
   m_nBombSite: int = 3716
   m_nSourceSoundscapeHash: int = 3720
   m_entitySpottedState: int = 3728
   m_flNextGlow: int = 3752
   m_flNextBeep: int = 3756
   m_flC4Blow: int = 3760
   m_bCannotBeDefused: int = 3764
   m_bHasExploded: int = 3765
   m_flTimerLength: int = 3768
   m_bBeingDefused: int = 3772
   m_bTenSecWarning: int = 3776
   m_bTriggerWarning: int = 3780
   m_bExplodeWarning: int = 3784
   m_bC4Activated: int = 3788
   m_flDefuseLength: int = 3792
   m_flDefuseCountDown: int = 3796
   m_bBombDefused: int = 3800
   m_hBombDefuser: int = 3804
   m_hControlPanel: int = 3808
   m_hDefuserMultimeter: int = 3812
   m_flNextRadarFlashTime: int = 3816
   m_bRadarFlash: int = 3820
   m_pBombDefuser: int = 3824
   m_fLastDefuseTime: int = 3828
   m_pPredictionOwner: int = 3832



class C_Item:

   m_bShouldGlow: int = 5472
   m_pReticleHintTextName: int = 5473



class C_Chicken:

   m_hHolidayHatAddon: int = 4336
   m_jumpedThisFrame: int = 4340
   m_leader: int = 4344
   m_AttributeManager: int = 4352
   m_OriginalOwnerXuidLow: int = 5544
   m_OriginalOwnerXuidHigh: int = 5548
   m_bAttributesInitialized: int = 5552
   m_hWaterWakeParticles: int = 5556



class C_BasePlayerWeapon:

   m_nNextPrimaryAttackTick: int = 5472
   m_flNextPrimaryAttackTickRatio: int = 5476
   m_nNextSecondaryAttackTick: int = 5480
   m_flNextSecondaryAttackTickRatio: int = 5484
   m_iClip1: int = 5488
   m_iClip2: int = 5492
   m_pReserveAmmo: int = 5496



class C_RagdollPropAttached:

   m_boneIndexAttached: int = 3832
   m_ragdollAttachedObjectIndex: int = 3836
   m_attachmentPointBoneSpace: int = 3840
   m_attachmentPointRagdollSpace: int = 3852
   m_vecOffset: int = 3864
   m_parentTime: int = 3876
   m_bHasParent: int = 3880



class C_BaseCombatCharacter:

   m_hMyWearables: int = 4120
   m_bloodColor: int = 4144
   m_leftFootAttachment: int = 4148
   m_rightFootAttachment: int = 4149
   m_nWaterWakeMode: int = 4152
   m_flWaterWorldZ: int = 4156
   m_flWaterNextTraceTime: int = 4160
   m_flFieldOfView: int = 4164



class C_BasePlayerPawn:

   m_pWeaponServices: int = 4264
   m_pItemServices: int = 4272
   m_pAutoaimServices: int = 4280
   m_pObserverServices: int = 4288
   m_pWaterServices: int = 4296
   m_pUseServices: int = 4304
   m_pFlashlightServices: int = 4312
   m_pCameraServices: int = 4320
   m_pMovementServices: int = 4328
   m_ServerViewAngleChanges: int = 4344
   m_nHighestConsumedServerViewAngleChangeIndex: int = 4424
   v_angle: int = 4428
   v_anglePrevious: int = 4440
   m_iHideHUD: int = 4452
   m_skybox3d: int = 4456
   m_flDeathTime: int = 4600
   m_vecPredictionError: int = 4604
   m_flPredictionErrorTime: int = 4616
   m_flFOVSensitivityAdjust: int = 4620
   m_flMouseSensitivity: int = 4624
   m_vOldOrigin: int = 4628
   m_flOldSimulationTime: int = 4640
   m_nLastExecutedCommandNumber: int = 4644
   m_nLastExecutedCommandTick: int = 4648
   m_hController: int = 4652
   m_bIsSwappingToPredictableController: int = 4656



class C_CSGOViewModel:

   m_bShouldIgnoreOffsetAndAccuracy: int = 3856
   m_nWeaponParity: int = 3860
   m_nOldWeaponParity: int = 3864
   m_nLastKnownAssociatedWeaponEntIndex: int = 3868
   m_bNeedToQueueHighResComposite: int = 3872
   m_vLoweredWeaponOffset: int = 3940



class C_CSWeaponBase:

   m_flFireSequenceStartTime: int = 5584
   m_nFireSequenceStartTimeChange: int = 5588
   m_nFireSequenceStartTimeAck: int = 5592
   m_bPlayerFireEventIsPrimary: int = 5596
   m_seqIdle: int = 5600
   m_seqFirePrimary: int = 5604
   m_seqFireSecondary: int = 5608
   m_ClientPreviousWeaponState: int = 5632
   m_iState: int = 5636
   m_flCrosshairDistance: int = 5640
   m_iAmmoLastCheck: int = 5644
   m_iAlpha: int = 5648
   m_iScopeTextureID: int = 5652
   m_iCrosshairTextureID: int = 5656
   m_flGunAccuracyPosition: int = 5660
   m_nViewModelIndex: int = 5664
   m_bReloadsWithClips: int = 5668
   m_flTimeWeaponIdle: int = 5672
   m_bFireOnEmpty: int = 5676
   m_OnPlayerPickup: int = 5680
   m_weaponMode: int = 5720
   m_flTurningInaccuracyDelta: int = 5724
   m_vecTurningInaccuracyEyeDirLast: int = 5728
   m_flTurningInaccuracy: int = 5740
   m_fAccuracyPenalty: int = 5744
   m_flLastAccuracyUpdateTime: int = 5748
   m_fAccuracySmoothedForZoom: int = 5752
   m_fScopeZoomEndTime: int = 5756
   m_iRecoilIndex: int = 5760
   m_flRecoilIndex: int = 5764
   m_bBurstMode: int = 5768
   m_flPostponeFireReadyTime: int = 5772
   m_bInReload: int = 5776
   m_bReloadVisuallyComplete: int = 5777
   m_flDroppedAtTime: int = 5780
   m_bIsHauledBack: int = 5784
   m_bSilencerOn: int = 5785
   m_flTimeSilencerSwitchComplete: int = 5788
   m_iOriginalTeamNumber: int = 5792
   m_flNextAttackRenderTimeOffset: int = 5796
   m_bVisualsDataSet: int = 5920
   m_bOldFirstPersonSpectatedState: int = 5921
   m_hOurPing: int = 5924
   m_nOurPingIndex: int = 5928
   m_vecOurPingPos: int = 5932
   m_bGlowForPing: int = 5944
   m_bUIWeapon: int = 5945
   m_hPrevOwner: int = 5960
   m_nDropTick: int = 5964
   m_donated: int = 5996
   m_fLastShotTime: int = 6000
   m_bWasOwnedByCT: int = 6004
   m_bWasOwnedByTerrorist: int = 6005
   m_gunHeat: int = 6008
   m_smokeAttachments: int = 6012
   m_lastSmokeTime: int = 6016
   m_flLastClientFireBulletTime: int = 6020
   m_IronSightController: int = 6208
   m_iIronSightMode: int = 6384
   m_flLastLOSTraceFailureTime: int = 6400
   m_iNumEmptyAttacks: int = 6404



class C_CSWeaponBaseGun:

   m_zoomLevel: int = 6464
   m_iBurstShotsRemaining: int = 6468
   m_iSilencerBodygroup: int = 6472
   m_silencedModelIndex: int = 6488
   m_inPrecache: int = 6492
   m_bNeedsBoltAction: int = 6493



class C_C4:

   m_szScreenText: int = 6464
   m_bombdroppedlightParticleIndex: int = 6496
   m_bStartedArming: int = 6500
   m_fArmedTime: int = 6504
   m_bBombPlacedAnimation: int = 6508
   m_bIsPlantingViaUse: int = 6509
   m_entitySpottedState: int = 6512
   m_nSpotRules: int = 6536
   m_bPlayedArmingBeeps: int = 6540
   m_bBombPlanted: int = 6547
   m_bDroppedFromDeath: int = 6548



class C_WeaponTaser:

   m_fFireTime: int = 6496



class C_Melee:

   m_flThrowAt: int = 6464



class C_WeaponShield:

   m_flDisplayHealth: int = 6496



class C_MolotovProjectile:

   m_bIsIncGrenade: int = 4336



class C_DecoyProjectile:

   m_flTimeParticleEffectSpawn: int = 4368



class C_SmokeGrenadeProjectile:

   m_nSmokeEffectTickBegin: int = 4344
   m_bDidSmokeEffect: int = 4348
   m_nRandomSeed: int = 4352
   m_vSmokeColor: int = 4356
   m_vSmokeDetonationPos: int = 4368
   m_VoxelFrameData: int = 4384
   m_bSmokeVolumeDataReceived: int = 4408
   m_bSmokeEffectSpawned: int = 4409



class C_BaseCSGrenade:

   m_bClientPredictDelete: int = 6464
   m_bRedraw: int = 6504
   m_bIsHeldByPlayer: int = 6505
   m_bPinPulled: int = 6506
   m_bJumpThrow: int = 6507
   m_eThrowStatus: int = 6508
   m_fThrowTime: int = 6512
   m_flThrowStrength: int = 6516
   m_flThrowStrengthApproach: int = 6520
   m_fDropTime: int = 6524



class C_WeaponBaseItem:

   m_SequenceCompleteTimer: int = 6464
   m_bRedraw: int = 6488



class C_ItemDogtags:

   m_OwningPlayer: int = 5736
   m_KillingPlayer: int = 5740



class C_Fists:

   m_bPlayingUninterruptableAct: int = 6464
   m_nUninterruptableActivity: int = 6468



class C_CSPlayerPawnBase:

   m_pPingServices: int = 4688
   m_pViewModelServices: int = 4696
   m_fRenderingClipPlane: int = 4704
   m_nLastClipPlaneSetupFrame: int = 4720
   m_vecLastClipCameraPos: int = 4724
   m_vecLastClipCameraForward: int = 4736
   m_bClipHitStaticWorld: int = 4748
   m_bCachedPlaneIsValid: int = 4749
   m_pClippingWeapon: int = 4752
   m_previousPlayerState: int = 4760
   m_flLastCollisionCeiling: int = 4764
   m_flLastCollisionCeilingChangeTime: int = 4768
   m_grenadeParameterStashTime: int = 4800
   m_bGrenadeParametersStashed: int = 4804
   m_angStashedShootAngles: int = 4808
   m_vecStashedGrenadeThrowPosition: int = 4820
   m_vecStashedVelocity: int = 4832
   m_angShootAngleHistory: int = 4844
   m_vecThrowPositionHistory: int = 4868
   m_vecVelocityHistory: int = 4892
   m_thirdPersonHeading: int = 4920
   m_flSlopeDropOffset: int = 4944
   m_flSlopeDropHeight: int = 4960
   m_vHeadConstraintOffset: int = 4976
   m_bIsScoped: int = 5000
   m_bIsWalking: int = 5001
   m_bResumeZoom: int = 5002
   m_iPlayerState: int = 5004
   m_bIsDefusing: int = 5008
   m_bIsGrabbingHostage: int = 5009
   m_iBlockingUseActionInProgress: int = 5012
   m_bIsRescuing: int = 5016
   m_fImmuneToGunGameDamageTime: int = 5020
   m_fImmuneToGunGameDamageTimeLast: int = 5024
   m_bGunGameImmunity: int = 5028
   m_bHasMovedSinceSpawn: int = 5029
   m_unTotalRoundDamageDealt: int = 5032
   m_fMolotovUseTime: int = 5036
   m_fMolotovDamageTime: int = 5040
   m_nWhichBombZone: int = 5044
   m_bInNoDefuseArea: int = 5048
   m_iThrowGrenadeCounter: int = 5052
   m_bWaitForNoAttack: int = 5056
   m_flGuardianTooFarDistFrac: int = 5060
   m_flDetectedByEnemySensorTime: int = 5064
   m_flNextGuardianTooFarWarning: int = 5068
   m_bSuppressGuardianTooFarWarningAudio: int = 5072
   m_bKilledByTaser: int = 5073
   m_iMoveState: int = 5076
   m_bCanMoveDuringFreezePeriod: int = 5080
   m_flLowerBodyYawTarget: int = 5084
   m_bStrafing: int = 5088
   m_flLastSpawnTimeIndex: int = 5092
   m_flEmitSoundTime: int = 5096
   m_iAddonBits: int = 5100
   m_iPrimaryAddon: int = 5104
   m_iSecondaryAddon: int = 5108
   m_iProgressBarDuration: int = 5112
   m_flProgressBarStartTime: int = 5116
   m_iDirection: int = 5120
   m_iShotsFired: int = 5124
   m_bNightVisionOn: int = 5128
   m_bHasNightVision: int = 5129
   m_flVelocityModifier: int = 5132
   m_flHitHeading: int = 5136
   m_nHitBodyPart: int = 5140
   m_iStartAccount: int = 5144
   m_vecIntroStartEyePosition: int = 5148
   m_vecIntroStartPlayerForward: int = 5160
   m_flClientDeathTime: int = 5172
   m_flNightVisionAlpha: int = 5176
   m_bScreenTearFrameCaptured: int = 5180
   m_flFlashBangTime: int = 5184
   m_flFlashScreenshotAlpha: int = 5188
   m_flFlashOverlayAlpha: int = 5192
   m_bFlashBuildUp: int = 5196
   m_bFlashDspHasBeenCleared: int = 5197
   m_bFlashScreenshotHasBeenGrabbed: int = 5198
   m_flFlashMaxAlpha: int = 5200
   m_flFlashDuration: int = 5204
   m_lastStandingPos: int = 5208
   m_vecLastMuzzleFlashPos: int = 5220
   m_angLastMuzzleFlashAngle: int = 5232
   m_hMuzzleFlashShape: int = 5244
   m_iHealthBarRenderMaskIndex: int = 5248
   m_flHealthFadeValue: int = 5252
   m_flHealthFadeAlpha: int = 5256
   m_nMyCollisionGroup: int = 5260
   m_ignoreLadderJumpTime: int = 5264
   m_ladderSurpressionTimer: int = 5272
   m_lastLadderNormal: int = 5296
   m_lastLadderPos: int = 5308
   m_flDeathCCWeight: int = 5328
   m_bOldIsScoped: int = 5332
   m_flPrevRoundEndTime: int = 5336
   m_flPrevMatchEndTime: int = 5340
   m_unCurrentEquipmentValue: int = 5344
   m_unRoundStartEquipmentValue: int = 5346
   m_unFreezetimeEndEquipmentValue: int = 5348
   m_vecThirdPersonViewPositionOverride: int = 5352
   m_nHeavyAssaultSuitCooldownRemaining: int = 5364
   m_ArmorValue: int = 5368
   m_angEyeAngles: int = 5376
   m_fNextThinkPushAway: int = 5400
   m_bShouldAutobuyDMWeapons: int = 5404
   m_bShouldAutobuyNow: int = 5405
   m_bHud_MiniScoreHidden: int = 5406
   m_bHud_RadarHidden: int = 5407
   m_nLastKillerIndex: int = 5408
   m_nLastConcurrentKilled: int = 5412
   m_nDeathCamMusic: int = 5416
   m_iIDEntIndex: int = 5420
   m_delayTargetIDTimer: int = 5424
   m_iTargetedWeaponEntIndex: int = 5448
   m_iOldIDEntIndex: int = 5452
   m_holdTargetIDTimer: int = 5456
   m_flCurrentMusicStartTime: int = 5484
   m_flMusicRoundStartTime: int = 5488
   m_bDeferStartMusicOnWarmup: int = 5492
   m_cycleLatch: int = 5496
   m_serverIntendedCycle: int = 5500
   m_vecPlayerPatchEconIndices: int = 5504
   m_bHideTargetID: int = 5532
   m_nextTaserShakeTime: int = 5536
   m_firstTaserShakeTime: int = 5540
   m_flLastSmokeOverlayAlpha: int = 5544
   m_vLastSmokeOverlayColor: int = 5548
   m_nPlayerSmokedFx: int = 5560
   m_flNextMagDropTime: int = 5564
   m_nLastMagDropAttachmentIndex: int = 5568
   m_vecBulletHitModels: int = 5576
   m_vecPickupModelSlerpers: int = 5600
   m_vecLastAliveLocalVelocity: int = 5624
   m_entitySpottedState: int = 5664
   m_nSurvivalTeamNumber: int = 5688
   m_bGuardianShouldSprayCustomXMark: int = 5692
   m_bHasDeathInfo: int = 5693
   m_flDeathInfoTime: int = 5696
   m_vecDeathInfoOrigin: int = 5700
   m_bKilledByHeadshot: int = 5712
   m_hOriginalController: int = 5716



class C_CSObserverPawn:

   m_hDetectParentChange: int = 5792



class C_CSPlayerPawn:

   m_pBulletServices: int = 5792
   m_pHostageServices: int = 5800
   m_pBuyServices: int = 5808
   m_pGlowServices: int = 5816
   m_pActionTrackingServices: int = 5824
   m_flHealthShotBoostExpirationTime: int = 5832
   m_flLastFiredWeaponTime: int = 5836
   m_bHasFemaleVoice: int = 5840
   m_flLandseconds: int = 5844
   m_flOldFallVelocity: int = 5848
   m_szLastPlaceName: int = 5852
   m_bPrevDefuser: int = 5870
   m_bPrevHelmet: int = 5871
   m_nPrevArmorVal: int = 5872
   m_nPrevGrenadeAmmoCount: int = 5876
   m_unPreviousWeaponHash: int = 5880
   m_unWeaponHash: int = 5884
   m_bInBuyZone: int = 5888
   m_bPreviouslyInBuyZone: int = 5889
   m_aimPunchAngle: int = 5892
   m_aimPunchAngleVel: int = 5904
   m_aimPunchTickBase: int = 5916
   m_aimPunchTickFraction: int = 5920
   m_aimPunchCache: int = 5928
   m_bInLanding: int = 5960
   m_flLandingTime: int = 5964
   m_bInHostageRescueZone: int = 5968
   m_bInBombZone: int = 5969
   m_bIsBuyMenuOpen: int = 5970
   m_flTimeOfLastInjury: int = 5972
   m_flNextSprayDecalTime: int = 5976
   m_iRetakesOffering: int = 6256
   m_iRetakesOfferingCard: int = 6260
   m_bRetakesHasDefuseKit: int = 6264
   m_bRetakesMVPLastRound: int = 6265
   m_iRetakesMVPBoostItem: int = 6268
   m_RetakesMVPBoostExtraUtility: int = 6272
   m_bNeedToReApplyGloves: int = 6304
   m_EconGloves: int = 6312
   m_bMustSyncRagdollState: int = 7408
   m_nRagdollDamageBone: int = 7412
   m_vRagdollDamageForce: int = 7416
   m_vRagdollDamagePosition: int = 7428
   m_szRagdollDamageWeaponName: int = 7440
   m_bRagdollDamageHeadshot: int = 7504
   m_bLastHeadBoneTransformIsValid: int = 8848
   m_lastLandTime: int = 8852
   m_bOnGroundLastTick: int = 8856
   m_qDeathEyeAngles: int = 8884
   m_bSkipOneHeadConstraintUpdate: int = 8896



class C_Hostage:

   m_entitySpottedState: int = 4264
   m_leader: int = 4288
   m_reuseTimer: int = 4296
   m_vel: int = 4320
   m_isRescued: int = 4332
   m_jumpedThisFrame: int = 4333
   m_nHostageState: int = 4336
   m_bHandsHaveBeenCut: int = 4340
   m_hHostageGrabber: int = 4344
   m_fLastGrabTime: int = 4348
   m_vecGrabbedPos: int = 4352
   m_flRescueStartTime: int = 4364
   m_flGrabSuccessTime: int = 4368
   m_flDropStartTime: int = 4372
   m_flDeadOrRescuedTime: int = 4376
   m_blinkTimer: int = 4384
   m_lookAt: int = 4408
   m_lookAroundTimer: int = 4424
   m_isInit: int = 4448
   m_eyeAttachment: int = 4449
   m_chestAttachment: int = 4450
   m_pPredictionOwner: int = 4456
   m_fNewestAlphaThinkTime: int = 4464



class C_CSGO_PreviewPlayer:

   m_animgraph: int = 8904
   m_animgraphCharacterModeString: int = 8912
   m_flInitialModelScale: int = 8920



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



class CRenderComponent:

   __m_pChainEntity: int = 16
   m_bIsRenderingWithViewModels: int = 80
   m_nSplitscreenFlags: int = 84
   m_bEnableRendering: int = 96
   m_bInterpolationReadyToDraw: int = 176



class CBuoyancyHelper:

   m_flFluidDensity: int = 24



class C_CommandContext:

   needsprocessing: int = 0
   command_number: int = 120



class ViewAngleServerChange_t:

   nType: int = 48
   qAngle: int = 52
   nIndex: int = 64



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
   m_CurrentFog: int = 320
   m_hOldFogController: int = 424
   m_bOverrideFogColor: int = 428
   m_OverrideFogColor: int = 433
   m_bOverrideFogStartEnd: int = 453
   m_fOverrideFogStart: int = 460
   m_fOverrideFogEnd: int = 480
   m_hActivePostProcessingVolume: int = 500
   m_angDemoViewAngles: int = 504



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



class CPlayer_ObserverServices:

   m_iObserverMode: int = 64
   m_hObserverTarget: int = 68
   m_iObserverLastMode: int = 72
   m_bForcedObserverMode: int = 76
   m_flObserverChaseDistance: int = 80
   m_flObserverChaseDistanceCalcTime: int = 84



class CPlayer_WeaponServices:

   m_bAllowSwitchToNoWeapon: int = 64
   m_hMyWeapons: int = 72
   m_hActiveWeapon: int = 96
   m_hLastWeapon: int = 100
   m_iAmmo: int = 104



class CBodyComponentBaseAnimGraph:

   m_animationController: int = 1136
   __m_pChainEntity: int = 6320



class EntityRenderAttribute_t:

   m_ID: int = 48
   m_Values: int = 52



class ActiveModelConfig_t:

   m_Handle: int = 40
   m_Name: int = 48
   m_AssociatedEntities: int = 56
   m_AssociatedEntityNames: int = 80



class CBodyComponentBaseModelEntity:

   __m_pChainEntity: int = 1136



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



class C_BaseEntity:

   m_CBodyComponent: int = 48
   m_NetworkTransmitComponent: int = 56
   m_nLastThinkTick: int = 776
   m_pGameSceneNode: int = 784
   m_pRenderComponent: int = 792
   m_pCollision: int = 800
   m_iMaxHealth: int = 808
   m_iHealth: int = 812
   m_lifeState: int = 816
   m_bTakesDamage: int = 817
   m_nTakeDamageFlags: int = 820
   m_ubInterpolationFrame: int = 824
   m_hSceneObjectController: int = 828
   m_nNoInterpolationTick: int = 832
   m_nVisibilityNoInterpolationTick: int = 836
   m_flProxyRandomValue: int = 840
   m_iEFlags: int = 844
   m_nWaterType: int = 848
   m_bInterpolateEvenWithNoModel: int = 849
   m_bPredictionEligible: int = 850
   m_bApplyLayerMatchIDToModel: int = 851
   m_tokLayerMatchID: int = 852
   m_nSubclassID: int = 856
   m_nSimulationTick: int = 872
   m_iCurrentThinkContext: int = 876
   m_aThinkFunctions: int = 880
   m_flAnimTime: int = 904
   m_flSimulationTime: int = 908
   m_nSceneObjectOverrideFlags: int = 912
   m_bHasSuccessfullyInterpolated: int = 913
   m_bHasAddedVarsToInterpolation: int = 914
   m_bRenderEvenWhenNotSuccessfullyInterpolated: int = 915
   m_nInterpolationLatchDirtyFlags: int = 916
   m_ListEntry: int = 924
   m_flCreateTime: int = 948
   m_flSpeed: int = 952
   m_EntClientFlags: int = 956
   m_bClientSideRagdoll: int = 958
   m_iTeamNum: int = 959
   m_spawnflags: int = 960
   m_nNextThinkTick: int = 964
   m_fFlags: int = 968
   m_vecAbsVelocity: int = 972
   m_vecVelocity: int = 984
   m_vecBaseVelocity: int = 1032
   m_hEffectEntity: int = 1044
   m_hOwnerEntity: int = 1048
   m_MoveCollide: int = 1052
   m_MoveType: int = 1053
   m_flWaterLevel: int = 1056
   m_fEffects: int = 1060
   m_hGroundEntity: int = 1064
   m_flFriction: int = 1068
   m_flElasticity: int = 1072
   m_flGravityScale: int = 1076
   m_flTimeScale: int = 1080
   m_bSimulatedEveryTick: int = 1084
   m_bAnimatedEveryTick: int = 1085
   m_flNavIgnoreUntilTime: int = 1088
   m_hThink: int = 1092
   m_fBBoxVisFlags: int = 1104
   m_bPredictable: int = 1105
   m_bRenderWithViewModels: int = 1106
   m_nSplitUserPlayerPredictionSlot: int = 1108
   m_nFirstPredictableCommand: int = 1112
   m_nLastPredictableCommand: int = 1116
   m_hOldMoveParent: int = 1120
   m_Particles: int = 1128
   m_vecPredictedScriptFloats: int = 1168
   m_vecPredictedScriptFloatIDs: int = 1192
   m_nNextScriptVarRecordID: int = 1240
   m_vecAngVelocity: int = 1256
   m_DataChangeEventRef: int = 1268
   m_dependencies: int = 1272
   m_nCreationTick: int = 1296
   m_bAnimTimeChanged: int = 1321
   m_bSimulationTimeChanged: int = 1322
   m_sUniqueHammerID: int = 1336



class C_BaseFlex_Emphasized_Phoneme:

   m_sClassName: int = 0
   m_flAmount: int = 24
   m_bRequired: int = 28
   m_bBasechecked: int = 29
   m_bValid: int = 30



class C_ColorCorrection:

   m_vecOrigin: int = 1344
   m_MinFalloff: int = 1356
   m_MaxFalloff: int = 1360
   m_flFadeInDuration: int = 1364
   m_flFadeOutDuration: int = 1368
   m_flMaxWeight: int = 1372
   m_flCurWeight: int = 1376
   m_netlookupFilename: int = 1380
   m_bEnabled: int = 1892
   m_bMaster: int = 1893
   m_bClientSide: int = 1894
   m_bExclusive: int = 1895
   m_bEnabledOnClient: int = 1896
   m_flCurWeightOnClient: int = 1900
   m_bFadingIn: int = 1904
   m_flFadeStartWeight: int = 1908
   m_flFadeStartTime: int = 1912
   m_flFadeDuration: int = 1916



class C_EnvWindClientside:

   m_EnvWindShared: int = 1344



class C_EntityFlame:

   m_hEntAttached: int = 1344
   m_hOldAttached: int = 1384
   m_bCheapEffect: int = 1388



class CProjectedTextureBase:

   m_hTargetEntity: int = 12
   m_bState: int = 16
   m_bAlwaysUpdate: int = 17
   m_flLightFOV: int = 20
   m_bEnableShadows: int = 24
   m_bSimpleProjection: int = 25
   m_bLightOnlyTarget: int = 26
   m_bLightWorld: int = 27
   m_bCameraSpace: int = 28
   m_flBrightnessScale: int = 32
   m_LightColor: int = 36
   m_flIntensity: int = 40
   m_flLinearAttenuation: int = 44
   m_flQuadraticAttenuation: int = 48
   m_bVolumetric: int = 52
   m_flVolumetricIntensity: int = 56
   m_flNoiseStrength: int = 60
   m_flFlashlightTime: int = 64
   m_nNumPlanes: int = 68
   m_flPlaneOffset: int = 72
   m_flColorTransitionTime: int = 76
   m_flAmbient: int = 80
   m_SpotlightTextureName: int = 84
   m_nSpotlightTextureFrame: int = 596
   m_nShadowQuality: int = 600
   m_flNearZ: int = 604
   m_flFarZ: int = 608
   m_flProjectionSize: int = 612
   m_flRotation: int = 616
   m_bFlipHorizontal: int = 620



class C_BaseFire:

   m_flScale: int = 1344
   m_flStartScale: int = 1348
   m_flScaleTime: int = 1352
   m_nFlags: int = 1356



class C_FireSmoke:

   m_nFlameModelIndex: int = 1360
   m_nFlameFromAboveModelIndex: int = 1364
   m_flScaleRegister: int = 1368
   m_flScaleStart: int = 1372
   m_flScaleEnd: int = 1376
   m_flScaleTimeStart: int = 1380
   m_flScaleTimeEnd: int = 1384
   m_flChildFlameSpread: int = 1388
   m_flClipPerc: int = 1408
   m_bClipTested: int = 1412
   m_bFadingOut: int = 1413
   m_tParticleSpawn: int = 1416
   m_pFireOverlay: int = 1424



class C_RopeKeyframe_CPhysicsDelegate:

   m_pKeyframe: int = 8



class C_SceneEntity_QueuedEvents_t:

   starttime: int = 0



class CFlashlightEffect:

   m_bIsOn: int = 16
   m_bMuzzleFlashEnabled: int = 32
   m_flMuzzleFlashBrightness: int = 36
   m_quatMuzzleFlashOrientation: int = 48
   m_vecMuzzleFlashOrigin: int = 64
   m_flFov: int = 76
   m_flFarZ: int = 80
   m_flLinearAtten: int = 84
   m_bCastsShadows: int = 88
   m_flCurrentPullBackDist: int = 92
   m_FlashlightTexture: int = 96
   m_MuzzleFlashTexture: int = 104
   m_textureName: int = 112



class CInterpolatedValue:

   m_flStartTime: int = 0
   m_flEndTime: int = 4
   m_flStartValue: int = 8
   m_flEndValue: int = 12
   m_nInterpType: int = 16



class CGlowSprite:

   m_vColor: int = 0
   m_flHorzSize: int = 12
   m_flVertSize: int = 16
   m_hMaterial: int = 24



class CGlowOverlay:

   m_vPos: int = 8
   m_bDirectional: int = 20
   m_vDirection: int = 24
   m_bInSky: int = 36
   m_skyObstructionScale: int = 40
   m_Sprites: int = 48
   m_nSprites: int = 176
   m_flProxyRadius: int = 180
   m_flHDRColorScale: int = 184
   m_flGlowObstructionScale: int = 188
   m_bCacheGlowObstruction: int = 192
   m_bCacheSkyObstruction: int = 193
   m_bActivated: int = 194
   m_ListIndex: int = 196
   m_queryHandle: int = 200



class CSkyboxReference:

   m_worldGroupId: int = 1344
   m_hSkyCamera: int = 1348



class C_SkyCamera:

   m_skyboxData: int = 1344
   m_skyboxSlotToken: int = 1488
   m_bUseAngles: int = 1492
   m_pNext: int = 1496



class TimedEvent:

   m_TimeBetweenEvents: int = 0
   m_fNextEvent: int = 4



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



class CDecalInfo:

   m_flAnimationScale: int = 0
   m_flAnimationLifeSpan: int = 4
   m_flPlaceTime: int = 8
   m_flFadeStartTime: int = 12
   m_flFadeDuration: int = 16
   m_nVBSlot: int = 20
   m_nBoneIndex: int = 24
   m_pNext: int = 40
   m_pPrev: int = 48
   m_nDecalMaterialIndex: int = 144



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



class C_EnvDetailController:

   m_flFadeStartDist: int = 1344
   m_flFadeEndDist: int = 1348



class C_EnvWindShared:

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
   m_flVariationTime: int = 112
   m_flSwayTime: int = 116
   m_flSimTime: int = 120
   m_flSwitchTime: int = 124
   m_flAveWindSpeed: int = 128
   m_bGusting: int = 132
   m_flWindAngleVariation: int = 136
   m_flWindSpeedVariation: int = 140
   m_iEntIndex: int = 144



class C_EnvWindShared_WindAveEvent_t:

   m_flStartWindSpeed: int = 0
   m_flAveWindSpeed: int = 4



class C_EnvWindShared_WindVariationEvent_t:

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



class C_fogplayerparams_t:

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



class PhysicsRagdollPose_t:

   __m_pChainEntity: int = 8
   m_Transforms: int = 48
   m_hOwner: int = 72
   m_bDirty: int = 104



class C_SoundOpvarSetPointBase:

   m_iszStackName: int = 1344
   m_iszOperatorName: int = 1352
   m_iszOpvarName: int = 1360
   m_iOpvarIndex: int = 1368
   m_bUseAutoCompare: int = 1372



class C_TeamRoundTimer:

   m_bTimerPaused: int = 1344
   m_flTimeRemaining: int = 1348
   m_flTimerEndTime: int = 1352
   m_bIsDisabled: int = 1356
   m_bShowInHUD: int = 1357
   m_nTimerLength: int = 1360
   m_nTimerInitialLength: int = 1364
   m_nTimerMaxLength: int = 1368
   m_bAutoCountdown: int = 1372
   m_nSetupTimeLength: int = 1376
   m_nState: int = 1380
   m_bStartPaused: int = 1384
   m_bInCaptureWatchState: int = 1385
   m_flTotalTime: int = 1388
   m_bStopWatchTimer: int = 1392
   m_bFireFinished: int = 1393
   m_bFire5MinRemain: int = 1394
   m_bFire4MinRemain: int = 1395
   m_bFire3MinRemain: int = 1396
   m_bFire2MinRemain: int = 1397
   m_bFire1MinRemain: int = 1398
   m_bFire30SecRemain: int = 1399
   m_bFire10SecRemain: int = 1400
   m_bFire5SecRemain: int = 1401
   m_bFire4SecRemain: int = 1402
   m_bFire3SecRemain: int = 1403
   m_bFire2SecRemain: int = 1404
   m_bFire1SecRemain: int = 1405
   m_nOldTimerLength: int = 1408
   m_nOldTimerState: int = 1412



class CComicBook:

   m_CoverImage: int = 8
   m_XmlFile: int = 24



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



class C_AttributeContainer:

   m_Item: int = 80
   m_iExternalItemProviderRegisteredToken: int = 1176
   m_ullRegisteredAsItemID: int = 1184



class C_EconEntity_AttachedModelData_t:

   m_iModelDisplayFlags: int = 0



class EntitySpottedState_t:

   m_bSpotted: int = 8
   m_bSpottedByMask: int = 12



class C_CSGameRulesProxy:

   m_pGameRules: int = 1344



class C_CSGameRules:

   __m_pChainEntity: int = 8
   m_bFreezePeriod: int = 48
   m_bWarmupPeriod: int = 49
   m_fWarmupPeriodEnd: int = 52
   m_fWarmupPeriodStart: int = 56
   m_nTotalPausedTicks: int = 60
   m_nPauseStartTick: int = 64
   m_bServerPaused: int = 68
   m_bGamePaused: int = 69
   m_bTerroristTimeOutActive: int = 70
   m_bCTTimeOutActive: int = 71
   m_flTerroristTimeOutRemaining: int = 72
   m_flCTTimeOutRemaining: int = 76
   m_nTerroristTimeOuts: int = 80
   m_nCTTimeOuts: int = 84
   m_bTechnicalTimeOut: int = 88
   m_bMatchWaitingForResume: int = 89
   m_iRoundTime: int = 92
   m_fMatchStartTime: int = 96
   m_fRoundStartTime: int = 100
   m_flRestartRoundTime: int = 104
   m_bGameRestart: int = 108
   m_flGameStartTime: int = 112
   m_timeUntilNextPhaseStarts: int = 116
   m_gamePhase: int = 120
   m_totalRoundsPlayed: int = 124
   m_nRoundsPlayedThisPhase: int = 128
   m_nOvertimePlaying: int = 132
   m_iHostagesRemaining: int = 136
   m_bAnyHostageReached: int = 140
   m_bMapHasBombTarget: int = 141
   m_bMapHasRescueZone: int = 142
   m_bMapHasBuyZone: int = 143
   m_bIsQueuedMatchmaking: int = 144
   m_nQueuedMatchmakingMode: int = 148
   m_bIsValveDS: int = 152
   m_bLogoMap: int = 153
   m_bPlayAllStepSoundsOnServer: int = 154
   m_iSpectatorSlotCount: int = 156
   m_MatchDevice: int = 160
   m_bHasMatchStarted: int = 164
   m_nNextMapInMapgroup: int = 168
   m_szTournamentEventName: int = 172
   m_szTournamentEventStage: int = 684
   m_szMatchStatTxt: int = 1196
   m_szTournamentPredictionsTxt: int = 1708
   m_nTournamentPredictionsPct: int = 2220
   m_flCMMItemDropRevealStartTime: int = 2224
   m_flCMMItemDropRevealEndTime: int = 2228
   m_bIsDroppingItems: int = 2232
   m_bIsQuestEligible: int = 2233
   m_bIsHltvActive: int = 2234
   m_nGuardianModeWaveNumber: int = 2236
   m_nGuardianModeSpecialKillsRemaining: int = 2240
   m_nGuardianModeSpecialWeaponNeeded: int = 2244
   m_nGuardianGrenadesToGiveBots: int = 2248
   m_nNumHeaviesToSpawn: int = 2252
   m_numGlobalGiftsGiven: int = 2256
   m_numGlobalGifters: int = 2260
   m_numGlobalGiftsPeriodSeconds: int = 2264
   m_arrFeaturedGiftersAccounts: int = 2268
   m_arrFeaturedGiftersGifts: int = 2284
   m_arrProhibitedItemIndices: int = 2300
   m_arrTournamentActiveCasterAccounts: int = 2500
   m_numBestOfMaps: int = 2516
   m_nHalloweenMaskListSeed: int = 2520
   m_bBombDropped: int = 2524
   m_bBombPlanted: int = 2525
   m_iRoundWinStatus: int = 2528
   m_eRoundWinReason: int = 2532
   m_bTCantBuy: int = 2536
   m_bCTCantBuy: int = 2537
   m_flGuardianBuyUntilTime: int = 2540
   m_iMatchStats_RoundResults: int = 2544
   m_iMatchStats_PlayersAlive_CT: int = 2664
   m_iMatchStats_PlayersAlive_T: int = 2784
   m_TeamRespawnWaveTimes: int = 2904
   m_flNextRespawnWave: int = 3032
   m_nServerQuestID: int = 3160
   m_vMinimapMins: int = 3164
   m_vMinimapMaxs: int = 3176
   m_MinimapVerticalSectionHeights: int = 3188
   m_bDontIncrementCoopWave: int = 3220
   m_bSpawnedTerrorHuntHeavy: int = 3221
   m_nEndMatchMapGroupVoteTypes: int = 3224
   m_nEndMatchMapGroupVoteOptions: int = 3264
   m_nEndMatchMapVoteWinner: int = 3304
   m_iNumConsecutiveCTLoses: int = 3308
   m_iNumConsecutiveTerroristLoses: int = 3312
   m_bMarkClientStopRecordAtRoundEnd: int = 3344
   m_bMatchAbortedDueToPlayerBan: int = 3432
   m_bHasTriggeredRoundStartMusic: int = 3433
   m_bHasTriggeredCoopSpawnReset: int = 3434
   m_bSwitchingTeamsAtRoundReset: int = 3435
   m_pGameModeRules: int = 3464
   m_RetakeRules: int = 3472
   m_nMatchEndCount: int = 3752
   m_nTTeamIntroVariant: int = 3756
   m_nCTTeamIntroVariant: int = 3760
   m_bTeamIntroPeriod: int = 3764
   m_flLastPerfSampleTime: int = 20160



class CCSGameModeRules:

   __m_pChainEntity: int = 8



class CCSGameModeRules_Deathmatch:

   m_bFirstThink: int = 48
   m_bFirstThinkAfterConnected: int = 49
   m_flDMBonusStartTime: int = 52
   m_flDMBonusTimeLength: int = 56
   m_nDMBonusWeaponLoadoutSlot: int = 60



class C_RetakeGameRules:

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



class C_CSGO_TeamPreviewCharacterPosition:

   m_nVariant: int = 1344
   m_nRandom: int = 1348
   m_nOrdinal: int = 1352
   m_sWeaponName: int = 1360
   m_xuid: int = 1368
   m_agentItem: int = 1376
   m_glovesItem: int = 2472
   m_weaponItem: int = 3568



class C_PlayerPing:

   m_hPlayer: int = 1392
   m_hPingedEntity: int = 1396
   m_iType: int = 1400
   m_bUrgent: int = 1404
   m_szPlaceName: int = 1405



class CCSPlayer_PingServices:

   m_hPlayerPing: int = 64



class C_CSPlayerResource:

   m_bHostageAlive: int = 1344
   m_isHostageFollowingSomeone: int = 1356
   m_iHostageEntityIDs: int = 1368
   m_bombsiteCenterA: int = 1416
   m_bombsiteCenterB: int = 1428
   m_hostageRescueX: int = 1440
   m_hostageRescueY: int = 1456
   m_hostageRescueZ: int = 1472
   m_bEndMatchNextMapAllVoted: int = 1488
   m_foundGoalPositions: int = 1489



class CCSPlayerBase_CameraServices:

   m_iFOV: int = 528
   m_iFOVStart: int = 532
   m_flFOVTime: int = 536
   m_flFOVRate: int = 540
   m_hZoomOwner: int = 544
   m_flLastShotFOV: int = 548



class WeaponPurchaseCount_t:

   m_nItemDefIndex: int = 48
   m_nCount: int = 50



class WeaponPurchaseTracker_t:

   m_weaponPurchases: int = 8



class CCSPlayer_ActionTrackingServices:

   m_hLastWeaponBeforeC4AutoSwitch: int = 64
   m_bIsRescuing: int = 68
   m_weaponPurchasesThisMatch: int = 72
   m_weaponPurchasesThisRound: int = 160



class CCSPlayer_BulletServices:

   m_totalHitsOnServer: int = 64



class SellbackPurchaseEntry_t:

   m_unDefIdx: int = 48
   m_nCost: int = 52
   m_nPrevArmor: int = 56
   m_bPrevHelmet: int = 60
   m_hItem: int = 64



class CCSPlayer_BuyServices:

   m_vecSellbackPurchaseEntries: int = 64



class CCSPlayer_CameraServices:

   m_flDeathCamTilt: int = 552



class CCSPlayer_HostageServices:

   m_hCarriedHostage: int = 64
   m_hCarriedHostageProp: int = 68



class CCSPlayer_ItemServices:

   m_bHasDefuser: int = 64
   m_bHasHelmet: int = 65
   m_bHasHeavyArmor: int = 66



class CCSPlayer_MovementServices:

   m_flMaxFallVelocity: int = 528
   m_vecLadderNormal: int = 532
   m_nLadderSurfacePropIndex: int = 544
   m_flDuckAmount: int = 548
   m_flDuckSpeed: int = 552
   m_bDuckOverride: int = 556
   m_bDesiresDuck: int = 557
   m_flDuckOffset: int = 560
   m_nDuckTimeMsecs: int = 564
   m_nDuckJumpTimeMsecs: int = 568
   m_nJumpTimeMsecs: int = 572
   m_flLastDuckTime: int = 576
   m_vecLastPositionAtFullCrouchSpeed: int = 592
   m_duckUntilOnGround: int = 600
   m_bHasWalkMovedSinceLastJump: int = 601
   m_bInStuckTest: int = 602
   m_flStuckCheckTime: int = 616
   m_nTraceCount: int = 1128
   m_StuckLast: int = 1132
   m_bSpeedCropped: int = 1136
   m_nOldWaterLevel: int = 1140
   m_flWaterEntryTime: int = 1144
   m_vecForward: int = 1148
   m_vecLeft: int = 1160
   m_vecUp: int = 1172
   m_vecPreviouslyPredictedOrigin: int = 1184
   m_bOldJumpPressed: int = 1196
   m_flJumpPressedTime: int = 1200
   m_flJumpUntil: int = 1204
   m_flJumpVel: int = 1208
   m_fStashGrenadeParameterWhen: int = 1212
   m_nButtonDownMaskPrev: int = 1216
   m_flOffsetTickCompleteTime: int = 1224
   m_flOffsetTickStashedSpeed: int = 1228
   m_flStamina: int = 1232
   m_bUpdatePredictedOriginAfterDataUpdate: int = 1236



class CCSPlayer_ViewModelServices:

   m_hViewModel: int = 64



class CCSPlayer_WaterServices:

   m_flWaterJumpTime: int = 64
   m_vecWaterJumpVel: int = 68
   m_flSwimSoundTime: int = 80



class CCSPlayer_WeaponServices:

   m_flNextAttack: int = 168
   m_bIsLookingAtWeapon: int = 172
   m_bIsHoldingLookAtWeapon: int = 173



class CCSObserver_ObserverServices:

   m_hLastObserverTarget: int = 88
   m_vecObserverInterpolateOffset: int = 92
   m_vecObserverInterpStartPos: int = 104
   m_flObsInterp_PathLength: int = 116
   m_qObsInterp_OrientationStart: int = 128
   m_qObsInterp_OrientationTravelDir: int = 144
   m_obsInterpState: int = 160
   m_bObserverInterpolationNeedsDeferredSetup: int = 164



class CCSPlayerController_ActionTrackingServices:

   m_perRoundStats: int = 64
   m_matchStats: int = 144
   m_iNumRoundKills: int = 264
   m_iNumRoundKillsHeadshots: int = 268



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



class CCSPlayerController_DamageServices:

   m_nSendUpdate: int = 64
   m_DamageList: int = 72



class CCSPlayerController_InGameMoneyServices:

   m_iAccount: int = 64
   m_iStartAccount: int = 68
   m_iTotalCashSpent: int = 72
   m_iCashSpentThisRound: int = 76
   m_nPreviousAccount: int = 80



class ServerAuthoritativeWeaponSlot_t:

   unClass: int = 40
   unSlot: int = 42
   unItemDefIdx: int = 44



class CCSPlayerController_InventoryServices:

   m_unMusicID: int = 64
   m_rank: int = 68
   m_nPersonaDataPublicLevel: int = 92
   m_nPersonaDataPublicCommendsLeader: int = 96
   m_nPersonaDataPublicCommendsTeacher: int = 100
   m_nPersonaDataPublicCommendsFriendly: int = 104
   m_vecServerAuthoritativeWeaponSlots: int = 112



class C_IronSightController:

   m_bIronSightAvailable: int = 16
   m_flIronSightAmount: int = 20
   m_flIronSightAmountGained: int = 24
   m_flIronSightAmountBiased: int = 28
   m_flIronSightAmount_Interpolated: int = 32
   m_flIronSightAmountGained_Interpolated: int = 36
   m_flIronSightAmountBiased_Interpolated: int = 40
   m_flInterpolationLastUpdated: int = 44
   m_angDeltaAverage: int = 48
   m_angViewLast: int = 144
   m_vecDotCoords: int = 156
   m_flDotBlur: int = 164
   m_flSpeedRatio: int = 168



class CompositeMaterialMatchFilter_t:

   m_nCompositeMaterialMatchFilterType: int = 0
   m_strMatchFilter: int = 8
   m_strMatchValue: int = 16
   m_bPassWhenTrue: int = 24



class CompositeMaterialInputLooseVariable_t:

   m_strName: int = 0
   m_bExposeExternally: int = 8
   m_strExposedFriendlyName: int = 16
   m_strExposedFriendlyGroupName: int = 24
   m_bExposedVariableIsFixedRange: int = 32
   m_strExposedVisibleWhenTrue: int = 40
   m_strExposedHiddenWhenTrue: int = 48
   m_nVariableType: int = 56
   m_bValueBoolean: int = 60
   m_nValueIntX: int = 64
   m_nValueIntY: int = 68
   m_nValueIntZ: int = 72
   m_nValueIntW: int = 76
   m_bHasFloatBounds: int = 80
   m_flValueFloatX: int = 84
   m_flValueFloatX_Min: int = 88
   m_flValueFloatX_Max: int = 92
   m_flValueFloatY: int = 96
   m_flValueFloatY_Min: int = 100
   m_flValueFloatY_Max: int = 104
   m_flValueFloatZ: int = 108
   m_flValueFloatZ_Min: int = 112
   m_flValueFloatZ_Max: int = 116
   m_flValueFloatW: int = 120
   m_flValueFloatW_Min: int = 124
   m_flValueFloatW_Max: int = 128
   m_cValueColor4: int = 132
   m_nValueSystemVar: int = 136
   m_strResourceMaterial: int = 144
   m_strTextureContentAssetPath: int = 368
   m_strTextureRuntimeResourcePath: int = 376
   m_strTextureCompilationVtexTemplate: int = 600
   m_nTextureType: int = 608
   m_strString: int = 616



class CompMatMutatorCondition_t:

   m_nMutatorCondition: int = 0
   m_strMutatorConditionContainerName: int = 8
   m_strMutatorConditionContainerVarName: int = 16
   m_strMutatorConditionContainerVarValue: int = 24
   m_bPassWhenTrue: int = 32



class CompMatPropertyMutator_t:

   m_bEnabled: int = 0
   m_nMutatorCommandType: int = 4
   m_strInitWith_Container: int = 8
   m_strCopyProperty_InputContainerSrc: int = 16
   m_strCopyProperty_InputContainerProperty: int = 24
   m_strCopyProperty_TargetProperty: int = 32
   m_strRandomRollInputVars_SeedInputVar: int = 40
   m_vecRandomRollInputVars_InputVarsToRoll: int = 48
   m_strCopyMatchingKeys_InputContainerSrc: int = 72
   m_strCopyKeysWithSuffix_InputContainerSrc: int = 80
   m_strCopyKeysWithSuffix_FindSuffix: int = 88
   m_strCopyKeysWithSuffix_ReplaceSuffix: int = 96
   m_nSetValue_Value: int = 104
   m_strGenerateTexture_TargetParam: int = 728
   m_strGenerateTexture_InitialContainer: int = 736
   m_nResolution: int = 744
   m_bIsScratchTarget: int = 748
   m_bSplatDebugInfo: int = 749
   m_bCaptureInRenderDoc: int = 750
   m_vecTexGenInstructions: int = 752
   m_vecConditionalMutators: int = 776
   m_strPopInputQueue_Container: int = 800
   m_strDrawText_InputContainerSrc: int = 808
   m_strDrawText_InputContainerProperty: int = 816
   m_vecDrawText_Position: int = 824
   m_colDrawText_Color: int = 832
   m_strDrawText_Font: int = 840
   m_vecConditions: int = 848



class CompositeMaterialInputContainer_t:

   m_bEnabled: int = 0
   m_nCompositeMaterialInputContainerSourceType: int = 4
   m_strSpecificContainerMaterial: int = 8
   m_strAttrName: int = 232
   m_strAlias: int = 240
   m_vecLooseVariables: int = 248
   m_strAttrNameForVar: int = 272
   m_bExposeExternally: int = 280



class CompositeMaterialAssemblyProcedure_t:

   m_vecCompMatIncludes: int = 0
   m_vecMatchFilters: int = 24
   m_vecCompositeInputContainers: int = 48
   m_vecPropertyMutators: int = 72



class GeneratedTextureHandle_t:

   m_strBitmapName: int = 0



class CompositeMaterial_t:

   m_TargetKVs: int = 8
   m_PreGenerationKVs: int = 24
   m_FinalKVs: int = 40
   m_vecGeneratedTextures: int = 64



class CompositeMaterialEditorPoint_t:

   m_ModelName: int = 0
   m_nSequenceIndex: int = 224
   m_flCycle: int = 228
   m_KVModelStateChoices: int = 232
   m_bEnableChildModel: int = 248
   m_ChildModelName: int = 256
   m_vecCompositeMaterialAssemblyProcedures: int = 480
   m_vecCompositeMaterials: int = 504



class CCompositeMaterialEditorDoc:

   m_nVersion: int = 8
   m_Points: int = 16
   m_KVthumbnail: int = 40



class CGlobalLightBase:

   m_bSpotLight: int = 16
   m_SpotLightOrigin: int = 20
   m_SpotLightAngles: int = 32
   m_ShadowDirection: int = 44
   m_AmbientDirection: int = 56
   m_SpecularDirection: int = 68
   m_InspectorSpecularDirection: int = 80
   m_flSpecularPower: int = 92
   m_flSpecularIndependence: int = 96
   m_SpecularColor: int = 100
   m_bStartDisabled: int = 104
   m_bEnabled: int = 105
   m_LightColor: int = 106
   m_AmbientColor1: int = 110
   m_AmbientColor2: int = 114
   m_AmbientColor3: int = 118
   m_flSunDistance: int = 124
   m_flFOV: int = 128
   m_flNearZ: int = 132
   m_flFarZ: int = 136
   m_bEnableShadows: int = 140
   m_bOldEnableShadows: int = 141
   m_bBackgroundClearNotRequired: int = 142
   m_flCloudScale: int = 144
   m_flCloud1Speed: int = 148
   m_flCloud1Direction: int = 152
   m_flCloud2Speed: int = 156
   m_flCloud2Direction: int = 160
   m_flAmbientScale1: int = 176
   m_flAmbientScale2: int = 180
   m_flGroundScale: int = 184
   m_flLightScale: int = 188
   m_flFoWDarkness: int = 192
   m_bEnableSeparateSkyboxFog: int = 196
   m_vFowColor: int = 200
   m_ViewOrigin: int = 212
   m_ViewAngles: int = 224
   m_flViewFoV: int = 236
   m_WorldPoints: int = 240
   m_vFogOffsetLayer0: int = 1192
   m_vFogOffsetLayer1: int = 1200
   m_hEnvWind: int = 1208
   m_hEnvSky: int = 1212



class C_GlobalLight:

   m_WindClothForceHandle: int = 2560



class C_CSGO_MapPreviewCameraPathNode:

   m_szParentPathUniqueID: int = 1344
   m_nPathIndex: int = 1352
   m_vInTangentLocal: int = 1356
   m_vOutTangentLocal: int = 1368
   m_flFOV: int = 1380
   m_flSpeed: int = 1384
   m_flEaseIn: int = 1388
   m_flEaseOut: int = 1392
   m_vInTangentWorld: int = 1396
   m_vOutTangentWorld: int = 1408



class C_CSGO_MapPreviewCameraPath:

   m_flZFar: int = 1344
   m_flZNear: int = 1348
   m_bLoop: int = 1352
   m_bVerticalFOV: int = 1353
   m_bConstantSpeed: int = 1354
   m_flDuration: int = 1356
   m_flPathLength: int = 1424
   m_flPathDuration: int = 1428



class C_VoteController:

   m_iActiveIssueIndex: int = 1360
   m_iOnlyTeamToVote: int = 1364
   m_nVoteOptionCount: int = 1368
   m_nPotentialVotes: int = 1388
   m_bVotesDirty: int = 1392
   m_bTypeDirty: int = 1393
   m_bIsYesNoVote: int = 1394



class C_MapVetoPickController:

   m_nDraftType: int = 1360
   m_nTeamWinningCoinToss: int = 1364
   m_nTeamWithFirstChoice: int = 1368
   m_nVoteMapIdsList: int = 1624
   m_nAccountIDs: int = 1652
   m_nMapId0: int = 1908
   m_nMapId1: int = 2164
   m_nMapId2: int = 2420
   m_nMapId3: int = 2676
   m_nMapId4: int = 2932
   m_nMapId5: int = 3188
   m_nStartingSide0: int = 3444
   m_nCurrentPhase: int = 3700
   m_nPhaseStartTick: int = 3704
   m_nPhaseDurationTicks: int = 3708
   m_nPostDataUpdateTick: int = 3712
   m_bDisabledHud: int = 3716



class C_CSGO_TeamPreviewCamera:

   m_nVariant: int = 1440
   m_bDofEnabled: int = 1444
   m_flDofNearBlurry: int = 1448
   m_flDofNearCrisp: int = 1452
   m_flDofFarCrisp: int = 1456
   m_flDofFarBlurry: int = 1460
   m_flDofTiltToGround: int = 1464



class C_CsmFovOverride:

   m_cameraName: int = 1344
   m_flCsmFovOverrideValue: int = 1352



class C_EnvCombinedLightProbeVolume:

   m_Color: int = 5544
   m_flBrightness: int = 5548
   m_hCubemapTexture: int = 5552
   m_bCustomCubemapTexture: int = 5560
   m_hLightProbeTexture: int = 5568
   m_hLightProbeDirectLightIndicesTexture: int = 5576
   m_hLightProbeDirectLightScalarsTexture: int = 5584
   m_hLightProbeDirectLightShadowsTexture: int = 5592
   m_vBoxMins: int = 5600
   m_vBoxMaxs: int = 5612
   m_LightGroups: int = 5624
   m_bMoveable: int = 5632
   m_nHandshake: int = 5636
   m_nEnvCubeMapArrayIndex: int = 5640
   m_nPriority: int = 5644
   m_bStartDisabled: int = 5648
   m_flEdgeFadeDist: int = 5652
   m_vEdgeFadeDists: int = 5656
   m_nLightProbeSizeX: int = 5668
   m_nLightProbeSizeY: int = 5672
   m_nLightProbeSizeZ: int = 5676
   m_nLightProbeAtlasX: int = 5680
   m_nLightProbeAtlasY: int = 5684
   m_nLightProbeAtlasZ: int = 5688
   m_bEnabled: int = 5713



class C_EnvCubemap:

   m_hCubemapTexture: int = 1480
   m_bCustomCubemapTexture: int = 1488
   m_flInfluenceRadius: int = 1492
   m_vBoxProjectMins: int = 1496
   m_vBoxProjectMaxs: int = 1508
   m_LightGroups: int = 1520
   m_bMoveable: int = 1528
   m_nHandshake: int = 1532
   m_nEnvCubeMapArrayIndex: int = 1536
   m_nPriority: int = 1540
   m_flEdgeFadeDist: int = 1544
   m_vEdgeFadeDists: int = 1548
   m_flDiffuseScale: int = 1560
   m_bStartDisabled: int = 1564
   m_bDefaultEnvMap: int = 1565
   m_bDefaultSpecEnvMap: int = 1566
   m_bIndoorCubeMap: int = 1567
   m_bCopyDiffuseFromDefaultCubemap: int = 1568
   m_bEnabled: int = 1584



class C_EnvCubemapFog:

   m_flEndDistance: int = 1344
   m_flStartDistance: int = 1348
   m_flFogFalloffExponent: int = 1352
   m_bHeightFogEnabled: int = 1356
   m_flFogHeightWidth: int = 1360
   m_flFogHeightEnd: int = 1364
   m_flFogHeightStart: int = 1368
   m_flFogHeightExponent: int = 1372
   m_flLODBias: int = 1376
   m_bActive: int = 1380
   m_bStartDisabled: int = 1381
   m_flFogMaxOpacity: int = 1384
   m_nCubemapSourceType: int = 1388
   m_hSkyMaterial: int = 1392
   m_iszSkyEntity: int = 1400
   m_hFogCubemapTexture: int = 1408
   m_bHasHeightFogEnd: int = 1416
   m_bFirstTime: int = 1417



class C_GradientFog:

   m_hGradientFogTexture: int = 1344
   m_flFogStartDistance: int = 1352
   m_flFogEndDistance: int = 1356
   m_bHeightFogEnabled: int = 1360
   m_flFogStartHeight: int = 1364
   m_flFogEndHeight: int = 1368
   m_flFarZ: int = 1372
   m_flFogMaxOpacity: int = 1376
   m_flFogFalloffExponent: int = 1380
   m_flFogVerticalExponent: int = 1384
   m_fogColor: int = 1388
   m_flFogStrength: int = 1392
   m_flFadeTime: int = 1396
   m_bStartDisabled: int = 1400
   m_bIsEnabled: int = 1401
   m_bGradientFogNeedsTextures: int = 1402



class C_EnvLightProbeVolume:

   m_hLightProbeTexture: int = 5408
   m_hLightProbeDirectLightIndicesTexture: int = 5416
   m_hLightProbeDirectLightScalarsTexture: int = 5424
   m_hLightProbeDirectLightShadowsTexture: int = 5432
   m_vBoxMins: int = 5440
   m_vBoxMaxs: int = 5452
   m_LightGroups: int = 5464
   m_bMoveable: int = 5472
   m_nHandshake: int = 5476
   m_nPriority: int = 5480
   m_bStartDisabled: int = 5484
   m_nLightProbeSizeX: int = 5488
   m_nLightProbeSizeY: int = 5492
   m_nLightProbeSizeZ: int = 5496
   m_nLightProbeAtlasX: int = 5500
   m_nLightProbeAtlasY: int = 5504
   m_nLightProbeAtlasZ: int = 5508
   m_bEnabled: int = 5521



class C_PlayerVisibility:

   m_flVisibilityStrength: int = 1344
   m_flFogDistanceMultiplier: int = 1348
   m_flFogMaxDensityMultiplier: int = 1352
   m_flFadeTime: int = 1356
   m_bStartDisabled: int = 1360
   m_bIsEnabled: int = 1361



class C_TonemapController2:

   m_flAutoExposureMin: int = 1344
   m_flAutoExposureMax: int = 1348
   m_flTonemapPercentTarget: int = 1352
   m_flTonemapPercentBrightPixels: int = 1356
   m_flTonemapMinAvgLum: int = 1360
   m_flExposureAdaptationSpeedUp: int = 1364
   m_flExposureAdaptationSpeedDown: int = 1368
   m_flTonemapEVSmoothingRange: int = 1372



class C_EnvVolumetricFogController:

   m_flScattering: int = 1344
   m_flAnisotropy: int = 1348
   m_flFadeSpeed: int = 1352
   m_flDrawDistance: int = 1356
   m_flFadeInStart: int = 1360
   m_flFadeInEnd: int = 1364
   m_flIndirectStrength: int = 1368
   m_nIndirectTextureDimX: int = 1372
   m_nIndirectTextureDimY: int = 1376
   m_nIndirectTextureDimZ: int = 1380
   m_vBoxMins: int = 1384
   m_vBoxMaxs: int = 1396
   m_bActive: int = 1408
   m_flStartAnisoTime: int = 1412
   m_flStartScatterTime: int = 1416
   m_flStartDrawDistanceTime: int = 1420
   m_flStartAnisotropy: int = 1424
   m_flStartScattering: int = 1428
   m_flStartDrawDistance: int = 1432
   m_flDefaultAnisotropy: int = 1436
   m_flDefaultScattering: int = 1440
   m_flDefaultDrawDistance: int = 1444
   m_bStartDisabled: int = 1448
   m_bEnableIndirect: int = 1449
   m_bIsMaster: int = 1450
   m_hFogIndirectTexture: int = 1456
   m_nForceRefreshCount: int = 1464
   m_bFirstTime: int = 1468



class C_EnvVolumetricFogVolume:

   m_bActive: int = 1344
   m_vBoxMins: int = 1348
   m_vBoxMaxs: int = 1360
   m_bStartDisabled: int = 1372
   m_flStrength: int = 1376
   m_nFalloffShape: int = 1380
   m_flFalloffExponent: int = 1384



class C_FogController:

   m_fog: int = 1344
   m_bUseAngles: int = 1448
   m_iChangedVariables: int = 1452



class C_InfoVisibilityBox:

   m_nMode: int = 1348
   m_vBoxSize: int = 1352
   m_bEnabled: int = 1364



class CInfoWorldLayer:

   m_pOutputOnEntitiesSpawned: int = 1344
   m_worldName: int = 1384
   m_layerName: int = 1392
   m_bWorldLayerVisible: int = 1400
   m_bEntitiesSpawned: int = 1401
   m_bCreateAsChildSpawnGroup: int = 1402
   m_hLayerSpawnGroup: int = 1404
   m_bWorldLayerActuallyVisible: int = 1408



class C_PointCamera:

   m_FOV: int = 1344
   m_Resolution: int = 1348
   m_bFogEnable: int = 1352
   m_FogColor: int = 1353
   m_flFogStart: int = 1360
   m_flFogEnd: int = 1364
   m_flFogMaxDensity: int = 1368
   m_bActive: int = 1372
   m_bUseScreenAspectRatio: int = 1373
   m_flAspectRatio: int = 1376
   m_bNoSky: int = 1380
   m_fBrightness: int = 1384
   m_flZFar: int = 1388
   m_flZNear: int = 1392
   m_bCanHLTVUse: int = 1396
   m_bDofEnabled: int = 1397
   m_flDofNearBlurry: int = 1400
   m_flDofNearCrisp: int = 1404
   m_flDofFarCrisp: int = 1408
   m_flDofFarBlurry: int = 1412
   m_flDofTiltToGround: int = 1416
   m_TargetFOV: int = 1420
   m_DegreesPerSecond: int = 1424
   m_bIsOn: int = 1428
   m_pNext: int = 1432



class C_PointCameraVFOV:

   m_flVerticalFOV: int = 1440



class CPointTemplate:

   m_iszWorldName: int = 1344
   m_iszSource2EntityLumpName: int = 1352
   m_iszEntityFilterName: int = 1360
   m_flTimeoutInterval: int = 1368
   m_bAsynchronouslySpawnEntities: int = 1372
   m_pOutputOnSpawned: int = 1376
   m_clientOnlyEntityBehavior: int = 1416
   m_ownerSpawnGroupType: int = 1420
   m_createdSpawnGroupHandles: int = 1424
   m_SpawnedEntityHandles: int = 1448
   m_ScriptSpawnCallback: int = 1472
   m_ScriptCallbackScope: int = 1480



class C_SoundAreaEntityBase:

   m_bDisabled: int = 1344
   m_bWasEnabled: int = 1352
   m_iszSoundAreaType: int = 1360
   m_vPos: int = 1368



class C_SoundAreaEntitySphere:

   m_flRadius: int = 1384



class C_SoundAreaEntityOrientedBox:

   m_vMin: int = 1384
   m_vMax: int = 1396



class C_Team:

   m_aPlayerControllers: int = 1344
   m_aPlayers: int = 1368
   m_iScore: int = 1392
   m_szTeamname: int = 1396



class CBasePlayerController:

   m_nFinalPredictedTick: int = 1352
   m_CommandContext: int = 1360
   m_nInButtonsWhichAreToggles: int = 1488
   m_nTickBase: int = 1496
   m_hPawn: int = 1500
   m_hPredictedPawn: int = 1504
   m_nSplitScreenSlot: int = 1508
   m_hSplitOwner: int = 1512
   m_hSplitScreenPlayers: int = 1520
   m_bIsHLTV: int = 1544
   m_iConnected: int = 1548
   m_iszPlayerName: int = 1552
   m_steamID: int = 1688
   m_bIsLocalPlayerController: int = 1696
   m_iDesiredFOV: int = 1700



class CBasePlayerVData:

   m_sModelName: int = 40
   m_flHeadDamageMultiplier: int = 264
   m_flChestDamageMultiplier: int = 280
   m_flStomachDamageMultiplier: int = 296
   m_flArmDamageMultiplier: int = 312
   m_flLegDamageMultiplier: int = 328
   m_flHoldBreathTime: int = 344
   m_flDrowningDamageInterval: int = 348
   m_nDrowningDamageInitial: int = 352
   m_nDrowningDamageMax: int = 356
   m_nWaterSpeed: int = 360
   m_flUseRange: int = 364
   m_flUseAngleTolerance: int = 368
   m_flCrouchTime: int = 372



class CBasePlayerWeaponVData:

   m_szWorldModel: int = 40
   m_bBuiltRightHanded: int = 264
   m_bAllowFlipping: int = 265
   m_bIsFullAuto: int = 266
   m_nNumBullets: int = 268
   m_sMuzzleAttachment: int = 272
   m_szMuzzleFlashParticle: int = 280
   m_iFlags: int = 504
   m_nPrimaryAmmoType: int = 505
   m_nSecondaryAmmoType: int = 506
   m_iMaxClip1: int = 508
   m_iMaxClip2: int = 512
   m_iDefaultClip1: int = 516
   m_iDefaultClip2: int = 520
   m_iWeight: int = 524
   m_bAutoSwitchTo: int = 528
   m_bAutoSwitchFrom: int = 529
   m_iRumbleEffect: int = 532
   m_aShootSounds: int = 536
   m_iSlot: int = 568
   m_iPosition: int = 572



class CBaseAnimGraphController:

   m_baseLayer: int = 24
   m_animGraphNetworkedVars: int = 64
   m_bSequenceFinished: int = 4896
   m_flLastEventCycle: int = 4900
   m_flLastEventAnimTime: int = 4904
   m_flPlaybackRate: int = 4908
   m_flPrevAnimTime: int = 4916
   m_bClientSideAnimation: int = 4920
   m_bNetworkedAnimationInputsChanged: int = 4921
   m_nPrevNewSequenceParity: int = 4922
   m_nPrevResetEventsParity: int = 4923
   m_nNewSequenceParity: int = 4924
   m_nResetEventsParity: int = 4928
   m_nAnimLoopMode: int = 4932
   m_hAnimationUpdate: int = 5092
   m_hLastAnimEventSequence: int = 5096



class C_BaseModelEntity:

   m_CRenderComponent: int = 2576
   m_CHitboxComponent: int = 2584
   m_bInitModelEffects: int = 2656
   m_bIsStaticProp: int = 2657
   m_nLastAddDecal: int = 2660
   m_nDecalsAdded: int = 2664
   m_iOldHealth: int = 2668
   m_nRenderMode: int = 2672
   m_nRenderFX: int = 2673
   m_bAllowFadeInView: int = 2674
   m_clrRender: int = 2675
   m_vecRenderAttributes: int = 2680
   m_LightGroup: int = 2784
   m_bRenderToCubemaps: int = 2788
   m_Collision: int = 2792
   m_Glow: int = 2968
   m_flGlowBackfaceMult: int = 3056
   m_fadeMinDist: int = 3060
   m_fadeMaxDist: int = 3064
   m_flFadeScale: int = 3068
   m_flShadowStrength: int = 3072
   m_nObjectCulling: int = 3076
   m_nAddDecal: int = 3080
   m_vDecalPosition: int = 3084
   m_vDecalForwardAxis: int = 3096
   m_flDecalHealBloodRate: int = 3108
   m_flDecalHealHeightRate: int = 3112
   m_ConfigEntitiesToPropagateMaterialDecalsTo: int = 3120
   m_vecViewOffset: int = 3144
   m_pClientAlphaProperty: int = 3192
   m_ClientOverrideTint: int = 3200
   m_bUseClientOverrideTint: int = 3204



class CLogicRelay:

   m_OnTrigger: int = 1344
   m_OnSpawn: int = 1384
   m_bDisabled: int = 1424
   m_bWaitForRefire: int = 1425
   m_bTriggerOnce: int = 1426
   m_bFastRetrigger: int = 1427
   m_bPassthoughCaller: int = 1428



class C_ParticleSystem:

   m_szSnapshotFileName: int = 3264
   m_bActive: int = 3776
   m_bFrozen: int = 3777
   m_flFreezeTransitionDuration: int = 3780
   m_nStopType: int = 3784
   m_bAnimateDuringGameplayPause: int = 3788
   m_iEffectIndex: int = 3792
   m_flStartTime: int = 3800
   m_flPreSimTime: int = 3804
   m_vServerControlPoints: int = 3808
   m_iServerControlPointAssignments: int = 3856
   m_hControlPointEnts: int = 3860
   m_bNoSave: int = 4116
   m_bNoFreeze: int = 4117
   m_bNoRamp: int = 4118
   m_bStartActive: int = 4119
   m_iszEffectName: int = 4120
   m_iszControlPointNames: int = 4128
   m_nDataCP: int = 4640
   m_vecDataCPValue: int = 4644
   m_nTintCP: int = 4656
   m_clrTint: int = 4660
   m_bOldActive: int = 4696
   m_bOldFrozen: int = 4697



class C_PathParticleRope:

   m_bStartActive: int = 1344
   m_flMaxSimulationTime: int = 1348
   m_iszEffectName: int = 1352
   m_PathNodes_Name: int = 1360
   m_flParticleSpacing: int = 1384
   m_flSlack: int = 1388
   m_flRadius: int = 1392
   m_ColorTint: int = 1396
   m_nEffectState: int = 1400
   m_iEffectIndex: int = 1408
   m_PathNodes_Position: int = 1416
   m_PathNodes_TangentIn: int = 1440
   m_PathNodes_TangentOut: int = 1464
   m_PathNodes_Color: int = 1488
   m_PathNodes_PinEnabled: int = 1512
   m_PathNodes_RadiusScale: int = 1536



class C_DynamicLight:

   m_Flags: int = 3264
   m_LightStyle: int = 3265
   m_Radius: int = 3268
   m_Exponent: int = 3272
   m_InnerAngle: int = 3276
   m_OuterAngle: int = 3280
   m_SpotRadius: int = 3284



class C_EnvScreenOverlay:

   m_iszOverlayNames: int = 1344
   m_flOverlayTimes: int = 1424
   m_flStartTime: int = 1464
   m_iDesiredOverlay: int = 1468
   m_bIsActive: int = 1472
   m_bWasActive: int = 1473
   m_iCachedDesiredOverlay: int = 1476
   m_iCurrentOverlay: int = 1480
   m_flCurrentOverlayTime: int = 1484



class C_FuncTrackTrain:

   m_nLongAxis: int = 3264
   m_flRadius: int = 3268
   m_flLineLength: int = 3272



class C_LightGlowOverlay:

   m_vecOrigin: int = 208
   m_vecDirection: int = 220
   m_nMinDist: int = 232
   m_nMaxDist: int = 236
   m_nOuterMaxDist: int = 240
   m_bOneSided: int = 244
   m_bModulateByDot: int = 245



class C_LightGlow:

   m_nHorizontalSize: int = 3264
   m_nVerticalSize: int = 3268
   m_nMinDist: int = 3272
   m_nMaxDist: int = 3276
   m_nOuterMaxDist: int = 3280
   m_flGlowProxySize: int = 3284
   m_flHDRColorScale: int = 3288
   m_Glow: int = 3296



class C_RagdollManager:

   m_iCurrentMaxRagdollCount: int = 1344



class C_SpotlightEnd:

   m_flLightScale: int = 3264
   m_Radius: int = 3268



class C_PointValueRemapper:

   m_bDisabled: int = 1344
   m_bDisabledOld: int = 1345
   m_bUpdateOnClient: int = 1346
   m_nInputType: int = 1348
   m_hRemapLineStart: int = 1352
   m_hRemapLineEnd: int = 1356
   m_flMaximumChangePerSecond: int = 1360
   m_flDisengageDistance: int = 1364
   m_flEngageDistance: int = 1368
   m_bRequiresUseKey: int = 1372
   m_nOutputType: int = 1376
   m_hOutputEntities: int = 1384
   m_nHapticsType: int = 1408
   m_nMomentumType: int = 1412
   m_flMomentumModifier: int = 1416
   m_flSnapValue: int = 1420
   m_flCurrentMomentum: int = 1424
   m_nRatchetType: int = 1428
   m_flRatchetOffset: int = 1432
   m_flInputOffset: int = 1436
   m_bEngaged: int = 1440
   m_bFirstUpdate: int = 1441
   m_flPreviousValue: int = 1444
   m_flPreviousUpdateTickTime: int = 1448
   m_vecPreviousTestPoint: int = 1452



class C_PointWorldText:

   m_bForceRecreateNextUpdate: int = 3272
   m_messageText: int = 3288
   m_FontName: int = 3800
   m_bEnabled: int = 3864
   m_bFullbright: int = 3865
   m_flWorldUnitsPerPx: int = 3868
   m_flFontSize: int = 3872
   m_flDepthOffset: int = 3876
   m_Color: int = 3880
   m_nJustifyHorizontal: int = 3884
   m_nJustifyVertical: int = 3888
   m_nReorientMode: int = 3892



class C_HandleTest:

   m_Handle: int = 1344
   m_bSendHandle: int = 1348



class C_EnvWind:

   m_EnvWindShared: int = 1344



class C_BaseButton:

   m_glowEntity: int = 3264
   m_usable: int = 3268
   m_szDisplayText: int = 3272



class C_EntityDissolve:

   m_flStartTime: int = 3272
   m_flFadeInStart: int = 3276
   m_flFadeInLength: int = 3280
   m_flFadeOutModelStart: int = 3284
   m_flFadeOutModelLength: int = 3288
   m_flFadeOutStart: int = 3292
   m_flFadeOutLength: int = 3296
   m_flNextSparkTime: int = 3300
   m_nDissolveType: int = 3304
   m_vDissolverOrigin: int = 3308
   m_nMagnitude: int = 3320
   m_bCoreExplode: int = 3324
   m_bLinkedToServerEnt: int = 3325



class C_EnvDecal:

   m_hDecalMaterial: int = 3264
   m_flWidth: int = 3272
   m_flHeight: int = 3276
   m_flDepth: int = 3280
   m_nRenderOrder: int = 3284
   m_bProjectOnWorld: int = 3288
   m_bProjectOnCharacters: int = 3289
   m_bProjectOnWater: int = 3290
   m_flDepthSortBias: int = 3292



class CFireOverlay:

   m_pOwner: int = 208
   m_vBaseColors: int = 216
   m_flScale: int = 264
   m_nGUID: int = 268



class C_FuncElectrifiedVolume:

   m_nAmbientEffect: int = 3264
   m_EffectName: int = 3272
   m_bState: int = 3280



class C_RopeKeyframe:

   m_LinksTouchingSomething: int = 3272
   m_nLinksTouchingSomething: int = 3276
   m_bApplyWind: int = 3280
   m_fPrevLockedPoints: int = 3284
   m_iForcePointMoveCounter: int = 3288
   m_bPrevEndPointPos: int = 3292
   m_vPrevEndPointPos: int = 3296
   m_flCurScroll: int = 3320
   m_flScrollSpeed: int = 3324
   m_RopeFlags: int = 3328
   m_iRopeMaterialModelIndex: int = 3336
   m_LightValues: int = 3968
   m_nSegments: int = 4088
   m_hStartPoint: int = 4092
   m_hEndPoint: int = 4096
   m_iStartAttachment: int = 4100
   m_iEndAttachment: int = 4101
   m_Subdiv: int = 4102
   m_RopeLength: int = 4104
   m_Slack: int = 4106
   m_TextureScale: int = 4108
   m_fLockedPoints: int = 4112
   m_nChangeCount: int = 4113
   m_Width: int = 4116
   m_PhysicsDelegate: int = 4120
   m_hMaterial: int = 4136
   m_TextureHeight: int = 4144
   m_vecImpulse: int = 4148
   m_vecPreviousImpulse: int = 4160
   m_flCurrentGustTimer: int = 4172
   m_flCurrentGustLifetime: int = 4176
   m_flTimeToNextGust: int = 4180
   m_vWindDir: int = 4184
   m_vColorMod: int = 4196
   m_vCachedEndPointAttachmentPos: int = 4208
   m_vCachedEndPointAttachmentAngle: int = 4232
   m_bConstrainBetweenEndpoints: int = 4256
   m_bEndPointAttachmentPositionsDirty: int = 0
   m_bEndPointAttachmentAnglesDirty: int = 0
   m_bNewDataThisFrame: int = 0
   m_bPhysicsInitted: int = 0



class C_SceneEntity:

   m_bIsPlayingBack: int = 1352
   m_bPaused: int = 1353
   m_bMultiplayer: int = 1354
   m_bAutogenerated: int = 1355
   m_flForceClientTime: int = 1356
   m_nSceneStringIndex: int = 1360
   m_bClientOnly: int = 1362
   m_hOwner: int = 1364
   m_hActorList: int = 1368
   m_bWasPlaying: int = 1392
   m_QueuedEvents: int = 1408
   m_flCurrentTime: int = 1432



class C_SunGlowOverlay:

   m_bModulateByDot: int = 208



class C_Sun:

   m_fxSSSunFlareEffectIndex: int = 3264
   m_fxSunFlareEffectIndex: int = 3268
   m_fdistNormalize: int = 3272
   m_vSunPos: int = 3276
   m_vDirection: int = 3288
   m_iszEffectName: int = 3304
   m_iszSSEffectName: int = 3312
   m_clrOverlay: int = 3320
   m_bOn: int = 3324
   m_bmaxColor: int = 3325
   m_flSize: int = 3328
   m_flHazeScale: int = 3332
   m_flRotation: int = 3336
   m_flHDRColorScale: int = 3340
   m_flAlphaHaze: int = 3344
   m_flAlphaScale: int = 3348
   m_flAlphaHdr: int = 3352
   m_flFarZScale: int = 3356



class C_BaseTrigger:

   m_bDisabled: int = 3264
   m_bClientSidePredicted: int = 3265



class CClientAlphaProperty:

   m_nRenderFX: int = 16
   m_nRenderMode: int = 17
   m_bAlphaOverride: int = 0
   m_bShadowAlphaOverride: int = 0
   m_nReserved: int = 0
   m_nAlpha: int = 19
   m_nDesyncOffset: int = 20
   m_nReserved2: int = 22
   m_nDistFadeStart: int = 24
   m_nDistFadeEnd: int = 26
   m_flFadeScale: int = 28
   m_flRenderFxStartTime: int = 32
   m_flRenderFxDuration: int = 36



class C_Beam:

   m_flFrameRate: int = 3264
   m_flHDRColorScale: int = 3268
   m_flFireTime: int = 3272
   m_flDamage: int = 3276
   m_nNumBeamEnts: int = 3280
   m_queryHandleHalo: int = 3284
   m_hBaseMaterial: int = 3320
   m_nHaloIndex: int = 3328
   m_nBeamType: int = 3336
   m_nBeamFlags: int = 3340
   m_hAttachEntity: int = 3344
   m_nAttachIndex: int = 3384
   m_fWidth: int = 3396
   m_fEndWidth: int = 3400
   m_fFadeLength: int = 3404
   m_fHaloScale: int = 3408
   m_fAmplitude: int = 3412
   m_fStartFrame: int = 3416
   m_fSpeed: int = 3420
   m_flFrame: int = 3424
   m_nClipStyle: int = 3428
   m_bTurnedOff: int = 3432
   m_vecEndPos: int = 3436
   m_hEndEntity: int = 3448



class C_FuncLadder:

   m_vecLadderDir: int = 3264
   m_Dismounts: int = 3280
   m_vecLocalTop: int = 3304
   m_vecPlayerMountPositionTop: int = 3316
   m_vecPlayerMountPositionBottom: int = 3328
   m_flAutoRideSpeed: int = 3340
   m_bDisabled: int = 3344
   m_bFakeLadder: int = 3345
   m_bHasSlack: int = 3346



class CPrecipitationVData:

   m_szParticlePrecipitationEffect: int = 40
   m_flInnerDistance: int = 264
   m_nAttachType: int = 268
   m_bBatchSameVolumeType: int = 272
   m_nRTEnvCP: int = 276
   m_nRTEnvCPComponent: int = 280
   m_szModifier: int = 288



class C_Sprite:

   m_hSpriteMaterial: int = 3288
   m_hAttachedToEntity: int = 3296
   m_nAttachment: int = 3300
   m_flSpriteFramerate: int = 3304
   m_flFrame: int = 3308
   m_flDieTime: int = 3312
   m_nBrightness: int = 3328
   m_flBrightnessDuration: int = 3332
   m_flSpriteScale: int = 3336
   m_flScaleDuration: int = 3340
   m_bWorldSpaceScale: int = 3344
   m_flGlowProxySize: int = 3348
   m_flHDRColorScale: int = 3352
   m_flLastTime: int = 3356
   m_flMaxFrame: int = 3360
   m_flStartScale: int = 3364
   m_flDestScale: int = 3368
   m_flScaleTimeStart: int = 3372
   m_nStartBrightness: int = 3376
   m_nDestBrightness: int = 3380
   m_flBrightnessTimeStart: int = 3384
   m_hOldSpriteMaterial: int = 3392
   m_nSpriteWidth: int = 3560
   m_nSpriteHeight: int = 3564



class C_BaseClientUIEntity:

   m_bEnabled: int = 3272
   m_DialogXMLName: int = 3280
   m_PanelClassName: int = 3288
   m_PanelID: int = 3296



class C_PointClientUIDialog:

   m_hActivator: int = 3312
   m_bStartEnabled: int = 3316



class C_PointClientUIHUD:

   m_bCheckCSSClasses: int = 3320
   m_bIgnoreInput: int = 3712
   m_flWidth: int = 3716
   m_flHeight: int = 3720
   m_flDPI: int = 3724
   m_flInteractDistance: int = 3728
   m_flDepthOffset: int = 3732
   m_unOwnerContext: int = 3736
   m_unHorizontalAlign: int = 3740
   m_unVerticalAlign: int = 3744
   m_unOrientation: int = 3748
   m_bAllowInteractionFromAllSceneWorlds: int = 3752
   m_vecCSSClasses: int = 3760



class C_PointClientUIWorldPanel:

   m_bForceRecreateNextUpdate: int = 3320
   m_bMoveViewToPlayerNextThink: int = 3321
   m_bCheckCSSClasses: int = 3322
   m_anchorDeltaTransform: int = 3328
   m_pOffScreenIndicator: int = 3744
   m_bIgnoreInput: int = 3784
   m_bLit: int = 3785
   m_bFollowPlayerAcrossTeleport: int = 3786
   m_flWidth: int = 3788
   m_flHeight: int = 3792
   m_flDPI: int = 3796
   m_flInteractDistance: int = 3800
   m_flDepthOffset: int = 3804
   m_unOwnerContext: int = 3808
   m_unHorizontalAlign: int = 3812
   m_unVerticalAlign: int = 3816
   m_unOrientation: int = 3820
   m_bAllowInteractionFromAllSceneWorlds: int = 3824
   m_vecCSSClasses: int = 3832
   m_bOpaque: int = 3856
   m_bNoDepth: int = 3857
   m_bRenderBackface: int = 3858
   m_bUseOffScreenIndicator: int = 3859
   m_bExcludeFromSaveGames: int = 3860
   m_bGrabbable: int = 3861
   m_bOnlyRenderToTexture: int = 3862
   m_bDisableMipGen: int = 3863
   m_nExplicitImageLayout: int = 3864



class CPointOffScreenIndicatorUi:

   m_bBeenEnabled: int = 3872
   m_bHide: int = 3873
   m_flSeenTargetTime: int = 3876
   m_pTargetPanel: int = 3880



class C_PointClientUIWorldTextPanel:

   m_messageText: int = 3872



class CInfoOffscreenPanoramaTexture:

   m_bDisabled: int = 1344
   m_nResolutionX: int = 1348
   m_nResolutionY: int = 1352
   m_szLayoutFileName: int = 1360
   m_RenderAttrName: int = 1368
   m_TargetEntities: int = 1376
   m_nTargetChangeCount: int = 1400
   m_vecCSSClasses: int = 1408
   m_bCheckCSSClasses: int = 1784



class C_EconItemView:

   m_bInventoryImageRgbaRequested: int = 96
   m_bInventoryImageTriedCache: int = 97
   m_nInventoryImageRgbaWidth: int = 128
   m_nInventoryImageRgbaHeight: int = 132
   m_szCurrentLoadCachedFileName: int = 136
   m_bRestoreCustomMaterialAfterPrecache: int = 440
   m_iItemDefinitionIndex: int = 442
   m_iEntityQuality: int = 444
   m_iEntityLevel: int = 448
   m_iItemID: int = 456
   m_iItemIDHigh: int = 464
   m_iItemIDLow: int = 468
   m_iAccountID: int = 472
   m_iInventoryPosition: int = 476
   m_bInitialized: int = 488
   m_bIsStoreItem: int = 489
   m_bIsTradeItem: int = 490
   m_iEntityQuantity: int = 492
   m_iRarityOverride: int = 496
   m_iQualityOverride: int = 500
   m_unClientFlags: int = 504
   m_unOverrideStyle: int = 505
   m_AttributeList: int = 528
   m_NetworkedDynamicAttributes: int = 624
   m_szCustomName: int = 720
   m_szCustomNameOverride: int = 881
   m_bInitializedTags: int = 1088



class CBombTarget:

   m_bBombPlantedHere: int = 3272