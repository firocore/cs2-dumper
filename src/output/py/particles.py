



class C_OP_ColorInterpolateRandom:

   m_ColorFadeMin: int = 448
   m_ColorFadeMax: int = 476
   m_flFadeStartTime: int = 492
   m_flFadeEndTime: int = 496
   m_nFieldOutput: int = 500
   m_bEaseInOut: int = 504



class C_OP_PositionLock:

   m_TransformInput: int = 448
   m_flStartTime_min: int = 552
   m_flStartTime_max: int = 556
   m_flStartTime_exp: int = 560
   m_flEndTime_min: int = 564
   m_flEndTime_max: int = 568
   m_flEndTime_exp: int = 572
   m_flRange: int = 576
   m_flRangeBias: int = 584
   m_flJumpThreshold: int = 928
   m_flPrevPosScale: int = 932
   m_bLockRot: int = 936
   m_vecScale: int = 944
   m_nFieldOutput: int = 2568
   m_nFieldOutputPrev: int = 2572



class C_OP_ControlpointLight:

   m_flScale: int = 448
   m_nControlPoint1: int = 1680
   m_nControlPoint2: int = 1684
   m_nControlPoint3: int = 1688
   m_nControlPoint4: int = 1692
   m_vecCPOffset1: int = 1696
   m_vecCPOffset2: int = 1708
   m_vecCPOffset3: int = 1720
   m_vecCPOffset4: int = 1732
   m_LightFiftyDist1: int = 1744
   m_LightZeroDist1: int = 1748
   m_LightFiftyDist2: int = 1752
   m_LightZeroDist2: int = 1756
   m_LightFiftyDist3: int = 1760
   m_LightZeroDist3: int = 1764
   m_LightFiftyDist4: int = 1768
   m_LightZeroDist4: int = 1772
   m_LightColor1: int = 1776
   m_LightColor2: int = 1780
   m_LightColor3: int = 1784
   m_LightColor4: int = 1788
   m_bLightType1: int = 1792
   m_bLightType2: int = 1793
   m_bLightType3: int = 1794
   m_bLightType4: int = 1795
   m_bLightDynamic1: int = 1796
   m_bLightDynamic2: int = 1797
   m_bLightDynamic3: int = 1798
   m_bLightDynamic4: int = 1799
   m_bUseNormal: int = 1800
   m_bUseHLambert: int = 1801
   m_bClampLowerRange: int = 1806
   m_bClampUpperRange: int = 1807



class C_OP_GlobalLight:

   m_flScale: int = 448
   m_bClampLowerRange: int = 452
   m_bClampUpperRange: int = 453



class C_OP_SetChildControlPoints:

   m_nChildGroupID: int = 448
   m_nFirstControlPoint: int = 452
   m_nNumControlPoints: int = 456
   m_nFirstSourcePoint: int = 464
   m_bReverse: int = 808
   m_bSetOrientation: int = 809



class C_OP_SetControlPointsToParticle:

   m_nChildGroupID: int = 448
   m_nFirstControlPoint: int = 452
   m_nNumControlPoints: int = 456
   m_nFirstSourcePoint: int = 460
   m_bSetOrientation: int = 464
   m_nOrientationMode: int = 468
   m_nSetParent: int = 472



class C_OP_SetControlPointsToModelParticles:

   m_HitboxSetName: int = 448
   m_AttachmentName: int = 576
   m_nFirstControlPoint: int = 704
   m_nNumControlPoints: int = 708
   m_nFirstSourcePoint: int = 712
   m_bSkin: int = 716
   m_bAttachment: int = 717



class C_OP_SetPerChildControlPoint:

   m_nChildGroupID: int = 448
   m_nFirstControlPoint: int = 452
   m_nNumControlPoints: int = 456
   m_nParticleIncrement: int = 464
   m_nFirstSourcePoint: int = 808
   m_bSetOrientation: int = 1152
   m_nOrientationField: int = 1156
   m_bNumBasedOnParticleCount: int = 1160



class C_OP_SetPerChildControlPointFromAttribute:

   m_nChildGroupID: int = 448
   m_nFirstControlPoint: int = 452
   m_nNumControlPoints: int = 456
   m_nParticleIncrement: int = 460
   m_nFirstSourcePoint: int = 464
   m_bNumBasedOnParticleCount: int = 468
   m_nAttributeToRead: int = 472
   m_nCPField: int = 476



class C_OP_RemapTransformOrientationToYaw:

   m_TransformInput: int = 448
   m_nFieldOutput: int = 552
   m_flRotOffset: int = 556
   m_flSpinStrength: int = 560



class C_OP_DampenToCP:

   m_nControlPointNumber: int = 448
   m_flRange: int = 452
   m_flScale: int = 456



class C_OP_SetToCP:

   m_nControlPointNumber: int = 448
   m_vecOffset: int = 452
   m_bOffsetLocal: int = 464



class C_OP_PinParticleToCP:

   m_nControlPointNumber: int = 448
   m_vecOffset: int = 456
   m_bOffsetLocal: int = 2080
   m_nParticleSelection: int = 2084
   m_nParticleNumber: int = 2088
   m_nPinBreakType: int = 2432
   m_flBreakDistance: int = 2440
   m_flBreakSpeed: int = 2784
   m_flAge: int = 3128
   m_nBreakControlPointNumber: int = 3472
   m_nBreakControlPointNumber2: int = 3476
   m_flBreakValue: int = 3480
   m_flInterpolation: int = 3824



class C_OP_MovementRigidAttachToCP:

   m_nControlPointNumber: int = 448
   m_nScaleControlPoint: int = 452
   m_nScaleCPField: int = 456
   m_nFieldInput: int = 460
   m_nFieldOutput: int = 464
   m_bOffsetLocal: int = 468



class C_OP_LerpToInitialPosition:

   m_nControlPointNumber: int = 448
   m_flInterpolation: int = 456
   m_nCacheField: int = 800
   m_flScale: int = 808
   m_vecScale: int = 1152



class C_OP_DistanceBetweenTransforms:

   m_nFieldOutput: int = 448
   m_TransformStart: int = 456
   m_TransformEnd: int = 560
   m_flInputMin: int = 664
   m_flInputMax: int = 1008
   m_flOutputMin: int = 1352
   m_flOutputMax: int = 1696
   m_flMaxTraceLength: int = 2040
   m_flLOSScale: int = 2044
   m_CollisionGroupName: int = 2048
   m_nTraceSet: int = 2176
   m_bLOS: int = 2180
   m_nSetMethod: int = 2184



class C_OP_PercentageBetweenTransforms:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 452
   m_flInputMax: int = 456
   m_flOutputMin: int = 460
   m_flOutputMax: int = 464
   m_TransformStart: int = 472
   m_TransformEnd: int = 576
   m_nSetMethod: int = 680
   m_bActiveRange: int = 684
   m_bRadialCheck: int = 685



class C_OP_PercentageBetweenTransformsVector:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 452
   m_flInputMax: int = 456
   m_vecOutputMin: int = 460
   m_vecOutputMax: int = 472
   m_TransformStart: int = 488
   m_TransformEnd: int = 592
   m_nSetMethod: int = 696
   m_bActiveRange: int = 700
   m_bRadialCheck: int = 701



class C_OP_PercentageBetweenTransformLerpCPs:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 452
   m_flInputMax: int = 456
   m_TransformStart: int = 464
   m_TransformEnd: int = 568
   m_nOutputStartCP: int = 672
   m_nOutputStartField: int = 676
   m_nOutputEndCP: int = 680
   m_nOutputEndField: int = 684
   m_nSetMethod: int = 688
   m_bActiveRange: int = 692
   m_bRadialCheck: int = 693



class C_OP_DistanceBetweenVecs:

   m_nFieldOutput: int = 448
   m_vecPoint1: int = 456
   m_vecPoint2: int = 2080
   m_flInputMin: int = 3704
   m_flInputMax: int = 4048
   m_flOutputMin: int = 4392
   m_flOutputMax: int = 4736
   m_nSetMethod: int = 5080
   m_bDeltaTime: int = 5084



class C_OP_DirectionBetweenVecsToVec:

   m_nFieldOutput: int = 448
   m_vecPoint1: int = 456
   m_vecPoint2: int = 2080



class C_OP_DistanceToTransform:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 456
   m_flInputMax: int = 800
   m_flOutputMin: int = 1144
   m_flOutputMax: int = 1488
   m_TransformStart: int = 1832
   m_bLOS: int = 1936
   m_CollisionGroupName: int = 1937
   m_nTraceSet: int = 2068
   m_flMaxTraceLength: int = 2072
   m_flLOSScale: int = 2076
   m_nSetMethod: int = 2080
   m_bActiveRange: int = 2084
   m_bAdditive: int = 2085
   m_vecComponentScale: int = 2088



class C_OP_CylindricalDistanceToTransform:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 456
   m_flInputMax: int = 800
   m_flOutputMin: int = 1144
   m_flOutputMax: int = 1488
   m_TransformStart: int = 1832
   m_TransformEnd: int = 1936
   m_nSetMethod: int = 2040
   m_bActiveRange: int = 2044
   m_bAdditive: int = 2045
   m_bCapsule: int = 2046



class C_OP_RtEnvCull:

   m_vecTestDir: int = 448
   m_vecTestNormal: int = 460
   m_bCullOnMiss: int = 472
   m_bStickInsteadOfCull: int = 473
   m_RtEnvName: int = 474
   m_nRTEnvCP: int = 604
   m_nComponent: int = 608



class C_OP_MovementLoopInsideSphere:

   m_nCP: int = 448
   m_flDistance: int = 456
   m_vecScale: int = 800
   m_nDistSqrAttr: int = 2424



class C_OP_MoveToHitbox:

   m_modelInput: int = 448
   m_transformInput: int = 544
   m_flLifeTimeLerpStart: int = 652
   m_flLifeTimeLerpEnd: int = 656
   m_flPrevPosScale: int = 660
   m_HitboxSetName: int = 664
   m_bUseBones: int = 792
   m_nLerpType: int = 796
   m_flInterpolation: int = 800



class C_OP_LockToBone:

   m_modelInput: int = 448
   m_transformInput: int = 544
   m_flLifeTimeFadeStart: int = 648
   m_flLifeTimeFadeEnd: int = 652
   m_flJumpThreshold: int = 656
   m_flPrevPosScale: int = 660
   m_HitboxSetName: int = 664
   m_bRigid: int = 792
   m_bUseBones: int = 793
   m_nFieldOutput: int = 796
   m_nFieldOutputPrev: int = 800
   m_nRotationSetType: int = 804
   m_bRigidRotationLock: int = 808
   m_vecRotation: int = 816
   m_flRotLerp: int = 2440



class C_OP_SnapshotRigidSkinToBones:

   m_bTransformNormals: int = 448
   m_bTransformRadii: int = 449
   m_nControlPointNumber: int = 452



class C_OP_SnapshotSkinToBones:

   m_bTransformNormals: int = 448
   m_bTransformRadii: int = 449
   m_nControlPointNumber: int = 452
   m_flLifeTimeFadeStart: int = 456
   m_flLifeTimeFadeEnd: int = 460
   m_flJumpThreshold: int = 464
   m_flPrevPosScale: int = 468



class C_OP_CPOffsetToPercentageBetweenCPs:

   m_flInputMin: int = 448
   m_flInputMax: int = 452
   m_flInputBias: int = 456
   m_nStartCP: int = 460
   m_nEndCP: int = 464
   m_nOffsetCP: int = 468
   m_nOuputCP: int = 472
   m_nInputCP: int = 476
   m_bRadialCheck: int = 480
   m_bScaleOffset: int = 481
   m_vecOffset: int = 484



class C_OP_PlaneCull:

   m_nPlaneControlPoint: int = 448
   m_vecPlaneDirection: int = 452
   m_bLocalSpace: int = 464
   m_flPlaneOffset: int = 468



class C_OP_DistanceCull:

   m_nControlPoint: int = 448
   m_vecPointOffset: int = 452
   m_flDistance: int = 464
   m_bCullInside: int = 468



class C_OP_ModelCull:

   m_nControlPointNumber: int = 448
   m_bBoundBox: int = 452
   m_bCullOutside: int = 453
   m_bUseBones: int = 454
   m_HitboxSetName: int = 455



class C_OP_ModelDampenMovement:

   m_nControlPointNumber: int = 448
   m_bBoundBox: int = 452
   m_bOutside: int = 453
   m_bUseBones: int = 454
   m_HitboxSetName: int = 455
   m_vecPosOffset: int = 584
   m_fDrag: int = 2208



class C_OP_SequenceFromModel:

   m_nControlPointNumber: int = 448
   m_nFieldOutput: int = 452
   m_nFieldOutputAnim: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_nSetMethod: int = 476



class C_OP_VelocityMatchingForce:

   m_flDirScale: int = 448
   m_flSpdScale: int = 452
   m_nCPBroadcast: int = 456



class C_OP_MovementMaintainOffset:

   m_vecOffset: int = 448
   m_nCP: int = 460
   m_bRadiusScale: int = 464



class C_OP_MovementPlaceOnGround:

   m_flOffset: int = 448
   m_flMaxTraceLength: int = 792
   m_flTolerance: int = 796
   m_flTraceOffset: int = 800
   m_flLerpRate: int = 804
   m_CollisionGroupName: int = 808
   m_nTraceSet: int = 936
   m_nRefCP1: int = 940
   m_nRefCP2: int = 944
   m_nLerpCP: int = 948
   m_nTraceMissBehavior: int = 960
   m_bIncludeShotHull: int = 964
   m_bIncludeWater: int = 965
   m_bSetNormal: int = 968
   m_bScaleOffset: int = 969
   m_nPreserveOffsetCP: int = 972
   m_nIgnoreCP: int = 976



class C_OP_InheritFromParentParticles:

   m_flScale: int = 448
   m_nFieldOutput: int = 452
   m_nIncrement: int = 456
   m_bRandomDistribution: int = 460



class C_OP_InheritFromParentParticlesV2:

   m_flScale: int = 448
   m_nFieldOutput: int = 452
   m_nIncrement: int = 456
   m_bRandomDistribution: int = 460
   m_nMissingParentBehavior: int = 464



class C_OP_ReadFromNeighboringParticle:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_nIncrement: int = 456
   m_DistanceCheck: int = 464
   m_flInterpolation: int = 808



class C_OP_InheritFromPeerSystem:

   m_nFieldOutput: int = 448
   m_nFieldInput: int = 452
   m_nIncrement: int = 456
   m_nGroupID: int = 460



class C_OP_RemapVectorComponentToScalar:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_nComponent: int = 456



class C_OP_OrientTo2dDirection:

   m_flRotOffset: int = 448
   m_flSpinStrength: int = 452
   m_nFieldOutput: int = 456



class C_OP_RestartAfterDuration:

   m_flDurationMin: int = 448
   m_flDurationMax: int = 452
   m_nCP: int = 456
   m_nCPField: int = 460
   m_nChildGroupID: int = 464
   m_bOnlyChildren: int = 468



class C_OP_Orient2DRelToCP:

   m_flRotOffset: int = 448
   m_flSpinStrength: int = 452
   m_nCP: int = 456
   m_nFieldOutput: int = 460



class C_OP_MovementRotateParticleAroundAxis:

   m_vecRotAxis: int = 448
   m_flRotRate: int = 2072
   m_TransformInput: int = 2416
   m_bLocalSpace: int = 2520



class C_OP_RotateVector:

   m_nFieldOutput: int = 448
   m_vecRotAxisMin: int = 452
   m_vecRotAxisMax: int = 464
   m_flRotRateMin: int = 476
   m_flRotRateMax: int = 480
   m_bNormalize: int = 484
   m_flScale: int = 488



class C_OP_MaxVelocity:

   m_flMaxVelocity: int = 448
   m_flMinVelocity: int = 452
   m_nOverrideCP: int = 456
   m_nOverrideCPField: int = 460



class C_OP_LagCompensation:

   m_nDesiredVelocityCP: int = 448
   m_nLatencyCP: int = 452
   m_nLatencyCPField: int = 456
   m_nDesiredVelocityCPField: int = 460



class C_OP_MaintainSequentialPath:

   m_fMaxDistance: int = 448
   m_flNumToAssign: int = 452
   m_flCohesionStrength: int = 456
   m_flTolerance: int = 460
   m_bLoop: int = 464
   m_bUseParticleCount: int = 465
   m_PathParams: int = 480



class C_OP_LockToSavedSequentialPathV2:

   m_flFadeStart: int = 448
   m_flFadeEnd: int = 452
   m_bCPPairs: int = 456
   m_PathParams: int = 464



class C_OP_LockToSavedSequentialPath:

   m_flFadeStart: int = 452
   m_flFadeEnd: int = 456
   m_bCPPairs: int = 460
   m_PathParams: int = 464



class C_OP_RemapDotProductToScalar:

   m_nInputCP1: int = 448
   m_nInputCP2: int = 452
   m_nFieldOutput: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_bUseParticleVelocity: int = 476
   m_nSetMethod: int = 480
   m_bActiveRange: int = 484
   m_bUseParticleNormal: int = 485



class C_OP_RemapCPtoScalar:

   m_nCPInput: int = 448
   m_nFieldOutput: int = 452
   m_nField: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_flStartTime: int = 476
   m_flEndTime: int = 480
   m_flInterpRate: int = 484
   m_nSetMethod: int = 488



class C_OP_NormalLock:

   m_nControlPointNumber: int = 448



class C_OP_RemapCPtoVector:

   m_nCPInput: int = 448
   m_nFieldOutput: int = 452
   m_nLocalSpaceCP: int = 456
   m_vInputMin: int = 460
   m_vInputMax: int = 472
   m_vOutputMin: int = 484
   m_vOutputMax: int = 496
   m_flStartTime: int = 508
   m_flEndTime: int = 512
   m_flInterpRate: int = 516
   m_nSetMethod: int = 520
   m_bOffset: int = 524
   m_bAccelerate: int = 525



class C_OP_SetCPtoVector:

   m_nCPInput: int = 448
   m_nFieldOutput: int = 452



class C_OP_RemapTransformToVelocity:

   m_TransformInput: int = 448



class C_OP_RemapVelocityToVector:

   m_nFieldOutput: int = 448
   m_flScale: int = 452
   m_bNormalize: int = 456



class C_OP_RemapCPVelocityToVector:

   m_nControlPoint: int = 448
   m_nFieldOutput: int = 452
   m_flScale: int = 456
   m_bNormalize: int = 460



class C_OP_SetCPOrientationToDirection:

   m_nInputControlPoint: int = 448
   m_nOutputControlPoint: int = 452



class C_OP_RemapDirectionToCPToVector:

   m_nCP: int = 448
   m_nFieldOutput: int = 452
   m_flScale: int = 456
   m_flOffsetRot: int = 460
   m_vecOffsetAxis: int = 464
   m_bNormalize: int = 476
   m_nFieldStrength: int = 480



class C_OP_RemapCrossProductOfTwoVectorsToVector:

   m_InputVec1: int = 448
   m_InputVec2: int = 2072
   m_nFieldOutput: int = 3696
   m_bNormalize: int = 3700



class C_OP_NormalizeVector:

   m_nFieldOutput: int = 448
   m_flScale: int = 452



class C_OP_RemapControlPointDirectionToVector:

   m_nFieldOutput: int = 448
   m_flScale: int = 452
   m_nControlPointNumber: int = 456



class C_OP_SetCPOrientationToGroundNormal:

   m_flInterpRate: int = 448
   m_flMaxTraceLength: int = 452
   m_flTolerance: int = 456
   m_flTraceOffset: int = 460
   m_CollisionGroupName: int = 464
   m_nTraceSet: int = 592
   m_nInputCP: int = 596
   m_nOutputCP: int = 600
   m_bIncludeWater: int = 616



class C_OP_RemapTransformOrientationToRotations:

   m_TransformInput: int = 448
   m_vecRotation: int = 552
   m_bUseQuat: int = 564
   m_bWriteNormal: int = 565



class C_OP_RemapControlPointOrientationToRotation:

   m_nCP: int = 448
   m_nFieldOutput: int = 452
   m_flOffsetRot: int = 456
   m_nComponent: int = 460



class C_OP_LockToPointList:

   m_nFieldOutput: int = 448
   m_pointList: int = 456
   m_bPlaceAlongPath: int = 480
   m_bClosedLoop: int = 481
   m_nNumPointsAlongPath: int = 484



class C_OP_RemapNamedModelElementOnceTimed:

   m_hModel: int = 448
   m_inNames: int = 456
   m_outNames: int = 480
   m_fallbackNames: int = 504
   m_bModelFromRenderer: int = 528
   m_bProportional: int = 529
   m_nFieldInput: int = 532
   m_nFieldOutput: int = 536
   m_flRemapTime: int = 540



class C_OP_RemapNamedModelElementEndCap:

   m_hModel: int = 448
   m_inNames: int = 456
   m_outNames: int = 480
   m_fallbackNames: int = 504
   m_bModelFromRenderer: int = 528
   m_nFieldInput: int = 532
   m_nFieldOutput: int = 536



class C_OP_SetFromCPSnapshot:

   m_nControlPointNumber: int = 448
   m_nAttributeToRead: int = 452
   m_nAttributeToWrite: int = 456
   m_nLocalSpaceCP: int = 460
   m_bRandom: int = 464
   m_bReverse: int = 465
   m_nRandomSeed: int = 468
   m_nSnapShotStartPoint: int = 472
   m_nSnapShotIncrement: int = 816
   m_flInterpolation: int = 1160
   m_bSubSample: int = 1504



class C_OP_VectorFieldSnapshot:

   m_nControlPointNumber: int = 448
   m_nAttributeToWrite: int = 452
   m_nLocalSpaceCP: int = 456
   m_flInterpolation: int = 464
   m_vecScale: int = 808
   m_flBoundaryDampening: int = 2432
   m_bSetVelocity: int = 2436
   m_bLockToSurface: int = 2437
   m_flGridSpacing: int = 2440



class C_OP_SetAttributeToScalarExpression:

   m_nExpression: int = 448
   m_flInput1: int = 456
   m_flInput2: int = 800
   m_nOutputField: int = 1144
   m_nSetMethod: int = 1148



class C_OP_SetVectorAttributeToVectorExpression:

   m_nExpression: int = 448
   m_vInput1: int = 456
   m_vInput2: int = 2080
   m_nOutputField: int = 3704
   m_nSetMethod: int = 3708
   m_bNormalizedOutput: int = 3712



class C_OP_SetFloatAttributeToVectorExpression:

   m_nExpression: int = 448
   m_vInput1: int = 456
   m_vInput2: int = 2080
   m_flOutputRemap: int = 3704
   m_nOutputField: int = 4048
   m_nSetMethod: int = 4052



class C_OP_MovementSkinnedPositionFromCPSnapshot:

   m_nSnapshotControlPointNumber: int = 448
   m_nControlPointNumber: int = 452
   m_bRandom: int = 456
   m_nRandomSeed: int = 460
   m_bSetNormal: int = 464
   m_bSetRadius: int = 465
   m_flIncrement: int = 472
   m_nFullLoopIncrement: int = 816
   m_nSnapShotStartPoint: int = 1160
   m_flInterpolation: int = 1504



class C_OP_MovementMoveAlongSkinnedCPSnapshot:

   m_nControlPointNumber: int = 448
   m_nSnapshotControlPointNumber: int = 452
   m_bSetNormal: int = 456
   m_bSetRadius: int = 457
   m_flInterpolation: int = 464
   m_flTValue: int = 808



class C_OP_QuantizeFloat:

   m_InputValue: int = 448
   m_nOutputField: int = 792



class C_OP_SetFloatCollection:

   m_InputValue: int = 448
   m_nOutputField: int = 792
   m_nSetMethod: int = 796
   m_Lerp: int = 800



class C_OP_SetFloat:

   m_InputValue: int = 448
   m_nOutputField: int = 792
   m_nSetMethod: int = 796
   m_Lerp: int = 800
   m_bUseNewCode: int = 1144



class C_OP_SetVec:

   m_InputValue: int = 448
   m_nOutputField: int = 2072
   m_nSetMethod: int = 2076
   m_Lerp: int = 2080
   m_bNormalizedOutput: int = 2424



class C_OP_DragRelativeToPlane:

   m_flDragAtPlane: int = 448
   m_flFalloff: int = 792
   m_bDirectional: int = 1136
   m_vecPlaneNormal: int = 1144
   m_nControlPointNumber: int = 2768



class C_OP_RemapDensityGradientToVectorAttribute:

   m_flRadiusScale: int = 448
   m_nFieldOutput: int = 452



class C_OP_LockPoints:

   m_nMinCol: int = 448
   m_nMaxCol: int = 452
   m_nMinRow: int = 456
   m_nMaxRow: int = 460
   m_nControlPoint: int = 464
   m_flBlendValue: int = 468



class C_OP_RemapDistanceToLineSegmentBase:

   m_nCP0: int = 448
   m_nCP1: int = 452
   m_flMinInputValue: int = 456
   m_flMaxInputValue: int = 460
   m_bInfiniteLine: int = 464



class C_OP_RemapDistanceToLineSegmentToScalar:

   m_nFieldOutput: int = 480
   m_flMinOutputValue: int = 484
   m_flMaxOutputValue: int = 488



class C_OP_RemapDistanceToLineSegmentToVector:

   m_nFieldOutput: int = 480
   m_vMinOutputValue: int = 484
   m_vMaxOutputValue: int = 496



class C_OP_TeleportBeam:

   m_nCPPosition: int = 448
   m_nCPVelocity: int = 452
   m_nCPMisc: int = 456
   m_nCPColor: int = 460
   m_nCPInvalidColor: int = 464
   m_nCPExtraArcData: int = 468
   m_vGravity: int = 472
   m_flArcMaxDuration: int = 484
   m_flSegmentBreak: int = 488
   m_flArcSpeed: int = 492
   m_flAlpha: int = 496



class C_OP_CycleScalar:

   m_nDestField: int = 448
   m_flStartValue: int = 452
   m_flEndValue: int = 456
   m_flCycleTime: int = 460
   m_bDoNotRepeatCycle: int = 464
   m_bSynchronizeParticles: int = 465
   m_nCPScale: int = 468
   m_nCPFieldMin: int = 472
   m_nCPFieldMax: int = 476
   m_nSetMethod: int = 480



class C_OP_CalculateVectorAttribute:

   m_vStartValue: int = 448
   m_nFieldInput1: int = 460
   m_flInputScale1: int = 464
   m_nFieldInput2: int = 468
   m_flInputScale2: int = 472
   m_nControlPointInput1: int = 476
   m_flControlPointScale1: int = 496
   m_nControlPointInput2: int = 500
   m_flControlPointScale2: int = 520
   m_nFieldOutput: int = 524
   m_vFinalOutputScale: int = 528



class C_OP_ColorAdjustHSL:

   m_flHueAdjust: int = 448
   m_flSaturationAdjust: int = 792
   m_flLightnessAdjust: int = 1136



class C_OP_ConnectParentParticleToNearest:

   m_nFirstControlPoint: int = 448
   m_nSecondControlPoint: int = 452



class C_OP_UpdateLightSource:

   m_vColorTint: int = 448
   m_flBrightnessScale: int = 452
   m_flRadiusScale: int = 456
   m_flMinimumLightingRadius: int = 460
   m_flMaximumLightingRadius: int = 464
   m_flPositionDampingConstant: int = 468



class C_OP_RemapSpeedtoCP:

   m_nInControlPointNumber: int = 464
   m_nOutControlPointNumber: int = 468
   m_nField: int = 472
   m_flInputMin: int = 476
   m_flInputMax: int = 480
   m_flOutputMin: int = 484
   m_flOutputMax: int = 488
   m_bUseDeltaV: int = 492



class C_OP_RemapAverageHitboxSpeedtoCP:

   m_nInControlPointNumber: int = 464
   m_nOutControlPointNumber: int = 468
   m_nField: int = 472
   m_nHitboxDataType: int = 476
   m_flInputMin: int = 480
   m_flInputMax: int = 824
   m_flOutputMin: int = 1168
   m_flOutputMax: int = 1512
   m_nHeightControlPointNumber: int = 1856
   m_vecComparisonVelocity: int = 1864
   m_HitboxSetName: int = 3488



class C_OP_RemapDotProductToCP:

   m_nInputCP1: int = 464
   m_nInputCP2: int = 468
   m_nOutputCP: int = 472
   m_nOutVectorField: int = 476
   m_flInputMin: int = 480
   m_flInputMax: int = 824
   m_flOutputMin: int = 1168
   m_flOutputMax: int = 1512



class C_OP_SetControlPointFieldToScalarExpression:

   m_nExpression: int = 464
   m_flInput1: int = 472
   m_flInput2: int = 816
   m_flOutputRemap: int = 1160
   m_nOutputCP: int = 1504
   m_nOutVectorField: int = 1508



class C_OP_SetControlPointFieldFromVectorExpression:

   m_nExpression: int = 464
   m_vecInput1: int = 472
   m_vecInput2: int = 2096
   m_flOutputRemap: int = 3720
   m_nOutputCP: int = 4064
   m_nOutVectorField: int = 4068



class C_OP_SetControlPointToVectorExpression:

   m_nExpression: int = 464
   m_nOutputCP: int = 468
   m_vInput1: int = 472
   m_vInput2: int = 2096
   m_bNormalizedOutput: int = 3720



class C_OP_RemapModelVolumetoCP:

   m_nBBoxType: int = 464
   m_nInControlPointNumber: int = 468
   m_nOutControlPointNumber: int = 472
   m_nOutControlPointMaxNumber: int = 476
   m_nField: int = 480
   m_flInputMin: int = 484
   m_flInputMax: int = 488
   m_flOutputMin: int = 492
   m_flOutputMax: int = 496



class C_OP_RemapBoundingVolumetoCP:

   m_nOutControlPointNumber: int = 464
   m_flInputMin: int = 468
   m_flInputMax: int = 472
   m_flOutputMin: int = 476
   m_flOutputMax: int = 480



class C_OP_RemapAverageScalarValuetoCP:

   m_nOutControlPointNumber: int = 464
   m_nOutVectorField: int = 468
   m_nField: int = 472
   m_flInputMin: int = 476
   m_flInputMax: int = 480
   m_flOutputMin: int = 484
   m_flOutputMax: int = 488



class C_OP_RampCPLinearRandom:

   m_nOutControlPointNumber: int = 464
   m_vecRateMin: int = 468
   m_vecRateMax: int = 480



class C_OP_SetParentControlPointsToChildCP:

   m_nChildGroupID: int = 464
   m_nChildControlPoint: int = 468
   m_nNumControlPoints: int = 472
   m_nFirstSourcePoint: int = 476
   m_bSetOrientation: int = 480



class C_OP_SetVariable:

   m_variableReference: int = 464
   m_transformInput: int = 528
   m_positionOffset: int = 632
   m_rotationOffset: int = 644
   m_vecInput: int = 656
   m_floatInput: int = 2280



class C_OP_SetControlPointPositions:

   m_bUseWorldLocation: int = 464
   m_bOrient: int = 465
   m_bSetOnce: int = 466
   m_nCP1: int = 468
   m_nCP2: int = 472
   m_nCP3: int = 476
   m_nCP4: int = 480
   m_vecCP1Pos: int = 484
   m_vecCP2Pos: int = 496
   m_vecCP3Pos: int = 508
   m_vecCP4Pos: int = 520
   m_nHeadLocation: int = 532



class C_OP_SetSingleControlPointPosition:

   m_bSetOnce: int = 464
   m_nCP1: int = 468
   m_vecCP1Pos: int = 472
   m_transformInput: int = 2096



class C_OP_SetControlPointPositionToRandomActiveCP:

   m_nCP1: int = 464
   m_nHeadLocationMin: int = 468
   m_nHeadLocationMax: int = 472
   m_flResetRate: int = 480



class C_OP_SetRandomControlPointPosition:

   m_bUseWorldLocation: int = 464
   m_bOrient: int = 465
   m_nCP1: int = 468
   m_nHeadLocation: int = 472
   m_flReRandomRate: int = 480
   m_vecCPMinPos: int = 824
   m_vecCPMaxPos: int = 836
   m_flInterpolation: int = 848



class C_OP_SetControlPointOrientation:

   m_bUseWorldLocation: int = 464
   m_bRandomize: int = 466
   m_bSetOnce: int = 467
   m_nCP: int = 468
   m_nHeadLocation: int = 472
   m_vecRotation: int = 476
   m_vecRotationB: int = 488
   m_flInterpolation: int = 504



class C_OP_SetControlPointFromObjectScale:

   m_nCPInput: int = 464
   m_nCPOutput: int = 468



class C_OP_DistanceBetweenCPsToCP:

   m_nStartCP: int = 464
   m_nEndCP: int = 468
   m_nOutputCP: int = 472
   m_nOutputCPField: int = 476
   m_bSetOnce: int = 480
   m_flInputMin: int = 484
   m_flInputMax: int = 488
   m_flOutputMin: int = 492
   m_flOutputMax: int = 496
   m_flMaxTraceLength: int = 500
   m_flLOSScale: int = 504
   m_bLOS: int = 508
   m_CollisionGroupName: int = 509
   m_nTraceSet: int = 640
   m_nSetParent: int = 644



class C_OP_SetControlPointToPlayer:

   m_nCP1: int = 464
   m_vecCP1Pos: int = 468
   m_bOrientToEyes: int = 480



class C_OP_SetControlPointToHand:

   m_nCP1: int = 464
   m_nHand: int = 468
   m_vecCP1Pos: int = 472
   m_bOrientToHand: int = 484



class C_OP_SetControlPointToHMD:

   m_nCP1: int = 464
   m_vecCP1Pos: int = 468
   m_bOrientToHMD: int = 480



class C_OP_SetControlPointPositionToTimeOfDayValue:

   m_nControlPointNumber: int = 464
   m_pszTimeOfDayParameter: int = 468
   m_vecDefaultValue: int = 596



class C_OP_SetControlPointToCenter:

   m_nCP1: int = 464
   m_vecCP1Pos: int = 468
   m_nSetParent: int = 480



class C_OP_SetControlPointToCPVelocity:

   m_nCPInput: int = 464
   m_nCPOutputVel: int = 468
   m_bNormalize: int = 472
   m_nCPOutputMag: int = 476
   m_nCPField: int = 480
   m_vecComparisonVelocity: int = 488



class C_OP_SetControlPointOrientationToCPVelocity:

   m_nCPInput: int = 464
   m_nCPOutput: int = 468



class C_OP_StopAfterCPDuration:

   m_flDuration: int = 464
   m_bDestroyImmediately: int = 808
   m_bPlayEndCap: int = 809



class C_OP_SetControlPointRotation:

   m_vecRotAxis: int = 464
   m_flRotRate: int = 2088
   m_nCP: int = 2432
   m_nLocalCP: int = 2436



class C_OP_RemapCPtoCP:

   m_nInputControlPoint: int = 464
   m_nOutputControlPoint: int = 468
   m_nInputField: int = 472
   m_nOutputField: int = 476
   m_flInputMin: int = 480
   m_flInputMax: int = 484
   m_flOutputMin: int = 488
   m_flOutputMax: int = 492
   m_bDerivative: int = 496
   m_flInterpRate: int = 500



class C_OP_HSVShiftToCP:

   m_nColorCP: int = 464
   m_nColorGemEnableCP: int = 468
   m_nOutputCP: int = 472
   m_DefaultHSVColor: int = 476



class C_OP_SetControlPointToImpactPoint:

   m_nCPOut: int = 464
   m_nCPIn: int = 468
   m_flUpdateRate: int = 472
   m_flTraceLength: int = 480
   m_flStartOffset: int = 824
   m_flOffset: int = 828
   m_vecTraceDir: int = 832
   m_CollisionGroupName: int = 844
   m_nTraceSet: int = 972
   m_bSetToEndpoint: int = 976
   m_bTraceToClosestSurface: int = 977
   m_bIncludeWater: int = 978



class C_OP_SetCPOrientationToPointAtCP:

   m_nInputCP: int = 464
   m_nOutputCP: int = 468
   m_flInterpolation: int = 472
   m_b2DOrientation: int = 816
   m_bAvoidSingularity: int = 817
   m_bPointAway: int = 818



class C_OP_EnableChildrenFromParentParticleCount:

   m_nChildGroupID: int = 464
   m_nFirstChild: int = 468
   m_nNumChildrenToEnable: int = 472
   m_bDisableChildren: int = 816
   m_bPlayEndcapOnStop: int = 817
   m_bDestroyImmediately: int = 818



class C_OP_SelectivelyEnableChildren:

   m_nChildGroupID: int = 464
   m_nFirstChild: int = 808
   m_nNumChildrenToEnable: int = 1152
   m_bPlayEndcapOnStop: int = 1496
   m_bDestroyImmediately: int = 1497



class C_OP_PlayEndCapWhenFinished:

   m_bFireOnEmissionEnd: int = 464
   m_bIncludeChildren: int = 465



class C_OP_ForceControlPointStub:

   m_ControlPoint: int = 464



class C_OP_DriveCPFromGlobalSoundFloat:

   m_nOutputControlPoint: int = 464
   m_nOutputField: int = 468
   m_flInputMin: int = 472
   m_flInputMax: int = 476
   m_flOutputMin: int = 480
   m_flOutputMax: int = 484
   m_StackName: int = 488
   m_OperatorName: int = 496
   m_FieldName: int = 504



class C_OP_SetControlPointFieldToWater:

   m_nSourceCP: int = 464
   m_nDestCP: int = 468
   m_nCPField: int = 472



class C_OP_SetControlPointToWaterSurface:

   m_nSourceCP: int = 464
   m_nDestCP: int = 468
   m_nFlowCP: int = 472
   m_nActiveCP: int = 476
   m_nActiveCPField: int = 480
   m_flRetestRate: int = 488
   m_bAdaptiveThreshold: int = 832



class C_OP_RepeatedTriggerChildGroup:

   m_nChildGroupID: int = 464
   m_flClusterRefireTime: int = 472
   m_flClusterSize: int = 816
   m_flClusterCooldown: int = 1160
   m_bLimitChildCount: int = 1504



class C_OP_ChooseRandomChildrenInGroup:

   m_nChildGroupID: int = 464
   m_flNumberOfChildren: int = 472



class C_OP_SetSimulationRate:

   m_flSimulationScale: int = 464



class C_OP_ControlPointToRadialScreenSpace:

   m_nCPIn: int = 464
   m_vecCP1Pos: int = 468
   m_nCPOut: int = 480
   m_nCPOutField: int = 484
   m_nCPSSPosOut: int = 488



class C_OP_LightningSnapshotGenerator:

   m_nCPSnapshot: int = 464
   m_nCPStartPnt: int = 468
   m_nCPEndPnt: int = 472
   m_flSegments: int = 480
   m_flOffset: int = 824
   m_flOffsetDecay: int = 1168
   m_flRecalcRate: int = 1512
   m_flUVScale: int = 1856
   m_flUVOffset: int = 2200
   m_flSplitRate: int = 2544
   m_flBranchTwist: int = 2888
   m_nBranchBehavior: int = 3232
   m_flRadiusStart: int = 3240
   m_flRadiusEnd: int = 3584
   m_flDedicatedPool: int = 3928



class C_OP_RemapExternalWindToCP:

   m_nCP: int = 464
   m_nCPOutput: int = 468
   m_vecScale: int = 472
   m_bSetMagnitude: int = 2096
   m_nOutVectorField: int = 2100



class C_OP_SetGravityToCP:

   m_nCPInput: int = 464
   m_nCPOutput: int = 468
   m_flScale: int = 472
   m_bSetOrientation: int = 816
   m_bSetZDown: int = 817



class C_OP_QuantizeCPComponent:

   m_flInputValue: int = 464
   m_nCPOutput: int = 808
   m_nOutVectorField: int = 812
   m_flQuantizeValue: int = 816



class C_OP_RenderPoints:

   m_hMaterial: int = 512



class CBaseTrailRenderer:

   m_nOrientationType: int = 9328
   m_nOrientationControlPoint: int = 9332
   m_flMinSize: int = 9336
   m_flMaxSize: int = 9340
   m_flStartFadeSize: int = 9344
   m_flEndFadeSize: int = 9688
   m_bClampV: int = 10032



class C_OP_RenderTrails:

   m_bEnableFadingAndClamping: int = 10048
   m_flStartFadeDot: int = 10052
   m_flEndFadeDot: int = 10056
   m_nPrevPntSource: int = 10060
   m_flMaxLength: int = 10064
   m_flMinLength: int = 10068
   m_bIgnoreDT: int = 10072
   m_flConstrainRadiusToLengthRatio: int = 10076
   m_flLengthScale: int = 10080
   m_flLengthFadeInTime: int = 10084
   m_flRadiusHeadTaper: int = 10088
   m_vecHeadColorScale: int = 10432
   m_flHeadAlphaScale: int = 12056
   m_flRadiusTaper: int = 12400
   m_vecTailColorScale: int = 12744
   m_flTailAlphaScale: int = 14368
   m_nHorizCropField: int = 14712
   m_nVertCropField: int = 14716
   m_flForwardShift: int = 14720
   m_bFlipUVBasedOnPitchYaw: int = 14724



class C_OP_RenderRopes:

   m_bEnableFadingAndClamping: int = 9328
   m_flMinSize: int = 9332
   m_flMaxSize: int = 9336
   m_flStartFadeSize: int = 9340
   m_flEndFadeSize: int = 9344
   m_flStartFadeDot: int = 9348
   m_flEndFadeDot: int = 9352
   m_flRadiusTaper: int = 9356
   m_nMinTesselation: int = 9360
   m_nMaxTesselation: int = 9364
   m_flTessScale: int = 9368
   m_flTextureVWorldSize: int = 9376
   m_flTextureVScrollRate: int = 9720
   m_flTextureVOffset: int = 10064
   m_nTextureVParamsCP: int = 10408
   m_bClampV: int = 10412
   m_nScaleCP1: int = 10416
   m_nScaleCP2: int = 10420
   m_flScaleVSizeByControlPointDistance: int = 10424
   m_flScaleVScrollByControlPointDistance: int = 10428
   m_flScaleVOffsetByControlPointDistance: int = 10432
   m_bUseScalarForTextureCoordinate: int = 10437
   m_nScalarFieldForTextureCoordinate: int = 10440
   m_flScalarAttributeTextureCoordScale: int = 10444
   m_bReverseOrder: int = 10448
   m_bClosedLoop: int = 10449
   m_nOrientationType: int = 10452
   m_nVectorFieldForOrientation: int = 10456
   m_bDrawAsOpaque: int = 10460
   m_bGenerateNormals: int = 10461



class C_OP_RenderAsModels:

   m_ModelList: int = 512
   m_flModelScale: int = 540
   m_bFitToModelSize: int = 544
   m_bNonUniformScaling: int = 545
   m_nXAxisScalingAttribute: int = 548
   m_nYAxisScalingAttribute: int = 552
   m_nZAxisScalingAttribute: int = 556
   m_nSizeCullBloat: int = 560



class C_OP_RenderLights:

   m_flAnimationRate: int = 528
   m_nAnimationType: int = 532
   m_bAnimateInFPS: int = 536
   m_flMinSize: int = 540
   m_flMaxSize: int = 544
   m_flStartFadeSize: int = 548
   m_flEndFadeSize: int = 552



class C_OP_RenderBlobs:

   m_cubeWidth: int = 512
   m_cutoffRadius: int = 856
   m_renderRadius: int = 1200
   m_nScaleCP: int = 1544
   m_MaterialVars: int = 1552
   m_hMaterial: int = 1600



class C_OP_RenderGpuImplicit:

   m_bUsePerParticleRadius: int = 512
   m_fGridSize: int = 520
   m_fRadiusScale: int = 864
   m_fIsosurfaceThreshold: int = 1208
   m_nScaleCP: int = 1552
   m_hMaterial: int = 1560



class C_OP_RenderScreenVelocityRotate:

   m_flRotateRateDegrees: int = 512
   m_flForwardDegrees: int = 516



class C_OP_RenderModels:

   m_bOnlyRenderInEffectsBloomPass: int = 512
   m_bOnlyRenderInEffectsWaterPass: int = 513
   m_bUseMixedResolutionRendering: int = 514
   m_bOnlyRenderInEffecsGameOverlay: int = 515
   m_ModelList: int = 520
   m_nBodyGroupField: int = 548
   m_nSubModelField: int = 552
   m_bIgnoreNormal: int = 556
   m_bOrientZ: int = 557
   m_bCenterOffset: int = 558
   m_vecLocalOffset: int = 560
   m_vecLocalRotation: int = 2184
   m_bIgnoreRadius: int = 3808
   m_nModelScaleCP: int = 3812
   m_vecComponentScale: int = 3816
   m_bLocalScale: int = 5440
   m_nSizeCullBloat: int = 5444
   m_bAnimated: int = 5448
   m_flAnimationRate: int = 5452
   m_bScaleAnimationRate: int = 5456
   m_bForceLoopingAnimation: int = 5457
   m_bResetAnimOnStop: int = 5458
   m_bManualAnimFrame: int = 5459
   m_nAnimationScaleField: int = 5460
   m_nAnimationField: int = 5464
   m_nManualFrameField: int = 5468
   m_ActivityName: int = 5472
   m_SequenceName: int = 5728
   m_bEnableClothSimulation: int = 5984
   m_hOverrideMaterial: int = 5992
   m_bOverrideTranslucentMaterials: int = 6000
   m_nSkin: int = 6008
   m_MaterialVars: int = 6352
   m_modelInput: int = 6376
   m_nLOD: int = 6472
   m_EconSlotName: int = 6476
   m_bOriginalModel: int = 6732
   m_bSuppressTint: int = 6733
   m_bUseRawMeshGroup: int = 6734
   m_bDisableShadows: int = 6735
   m_bAcceptsDecals: int = 6736
   m_bForceDrawInterlevedWithSiblings: int = 6737
   m_bDoNotDrawInParticlePass: int = 6738
   m_szRenderAttribute: int = 6739
   m_flRadiusScale: int = 7000
   m_flAlphaScale: int = 7344
   m_flRollScale: int = 7688
   m_nAlpha2Field: int = 8032
   m_vecColorScale: int = 8040
   m_nColorBlendType: int = 9664



class C_OP_RenderMaterialProxy:

   m_nMaterialControlPoint: int = 512
   m_nProxyType: int = 516
   m_MaterialVars: int = 520
   m_hOverrideMaterial: int = 544
   m_flMaterialOverrideEnabled: int = 552
   m_vecColorScale: int = 896
   m_flAlpha: int = 2520
   m_nColorBlendType: int = 2864



class C_OP_RenderProjected:

   m_bProjectCharacter: int = 512
   m_bProjectWorld: int = 513
   m_bProjectWater: int = 514
   m_bFlipHorizontal: int = 515
   m_bEnableProjectedDepthControls: int = 516
   m_flMinProjectionDepth: int = 520
   m_flMaxProjectionDepth: int = 524
   m_hProjectedMaterial: int = 528
   m_flAnimationTimeScale: int = 536
   m_bOrientToNormal: int = 540
   m_MaterialVars: int = 544



class C_OP_RenderDeferredLight:

   m_bUseAlphaTestWindow: int = 512
   m_bUseTexture: int = 513
   m_flRadiusScale: int = 516
   m_flAlphaScale: int = 520
   m_nAlpha2Field: int = 524
   m_vecColorScale: int = 528
   m_nColorBlendType: int = 2152
   m_flLightDistance: int = 2156
   m_flStartFalloff: int = 2160
   m_flDistanceFalloff: int = 2164
   m_flSpotFoV: int = 2168
   m_nAlphaTestPointField: int = 2172
   m_nAlphaTestRangeField: int = 2176
   m_nAlphaTestSharpnessField: int = 2180
   m_hTexture: int = 2184
   m_nHSVShiftControlPoint: int = 2192



class C_OP_RenderStandardLight:

   m_nLightType: int = 512
   m_vecColorScale: int = 520
   m_nColorBlendType: int = 2144
   m_flIntensity: int = 2152
   m_bCastShadows: int = 2496
   m_flTheta: int = 2504
   m_flPhi: int = 2848
   m_flRadiusMultiplier: int = 3192
   m_nAttenuationStyle: int = 3536
   m_flFalloffLinearity: int = 3544
   m_flFiftyPercentFalloff: int = 3888
   m_flZeroPercentFalloff: int = 4232
   m_bRenderDiffuse: int = 4576
   m_bRenderSpecular: int = 4577
   m_lightCookie: int = 4584
   m_nPriority: int = 4592
   m_nFogLightingMode: int = 4596
   m_flFogContribution: int = 4600
   m_nCapsuleLightBehavior: int = 4944
   m_flCapsuleLength: int = 4948
   m_bReverseOrder: int = 4952
   m_bClosedLoop: int = 4953
   m_nPrevPntSource: int = 4956
   m_flMaxLength: int = 4960
   m_flMinLength: int = 4964
   m_bIgnoreDT: int = 4968
   m_flConstrainRadiusToLengthRatio: int = 4972
   m_flLengthScale: int = 4976
   m_flLengthFadeInTime: int = 4980



class C_OP_RenderOmni2Light:

   m_nLightType: int = 512
   m_vColorBlend: int = 520
   m_nColorBlendType: int = 2144
   m_nBrightnessUnit: int = 2148
   m_flBrightnessLumens: int = 2152
   m_flBrightnessCandelas: int = 2496
   m_bCastShadows: int = 2840
   m_flLuminaireRadius: int = 2848
   m_flSkirt: int = 3192
   m_flRange: int = 3536
   m_flInnerConeAngle: int = 3880
   m_flOuterConeAngle: int = 4224
   m_hLightCookie: int = 4568
   m_bSphericalCookie: int = 4576



class C_OP_RenderLightBeam:

   m_vColorBlend: int = 512
   m_nColorBlendType: int = 2136
   m_flBrightnessLumensPerMeter: int = 2144
   m_bCastShadows: int = 2488
   m_flSkirt: int = 2496
   m_flRange: int = 2840
   m_flThickness: int = 3184



class C_OP_RenderScreenShake:

   m_flDurationScale: int = 512
   m_flRadiusScale: int = 516
   m_flFrequencyScale: int = 520
   m_flAmplitudeScale: int = 524
   m_nRadiusField: int = 528
   m_nDurationField: int = 532
   m_nFrequencyField: int = 536
   m_nAmplitudeField: int = 540
   m_nFilterCP: int = 544



class C_OP_RenderTonemapController:

   m_flTonemapLevel: int = 512
   m_flTonemapWeight: int = 516
   m_nTonemapLevelField: int = 520
   m_nTonemapWeightField: int = 524



class C_OP_RenderPostProcessing:

   m_flPostProcessStrength: int = 512
   m_hPostTexture: int = 856
   m_nPriority: int = 864



class C_OP_RenderSound:

   m_flDurationScale: int = 512
   m_flSndLvlScale: int = 516
   m_flPitchScale: int = 520
   m_flVolumeScale: int = 524
   m_nSndLvlField: int = 528
   m_nDurationField: int = 532
   m_nPitchField: int = 536
   m_nVolumeField: int = 540
   m_nChannel: int = 544
   m_nCPReference: int = 548
   m_pszSoundName: int = 552
   m_bSuppressStopSoundEvent: int = 808



class C_OP_RenderStatusEffect:

   m_pTextureColorWarp: int = 512
   m_pTextureDetail2: int = 520
   m_pTextureDiffuseWarp: int = 528
   m_pTextureFresnelColorWarp: int = 536
   m_pTextureFresnelWarp: int = 544
   m_pTextureSpecularWarp: int = 552
   m_pTextureEnvMap: int = 560



class C_OP_RenderStatusEffectCitadel:

   m_pTextureColorWarp: int = 512
   m_pTextureNormal: int = 520
   m_pTextureMetalness: int = 528
   m_pTextureRoughness: int = 536
   m_pTextureSelfIllum: int = 544
   m_pTextureDetail: int = 552



class C_OP_RenderFlattenGrass:

   m_flFlattenStrength: int = 512
   m_nStrengthFieldOverride: int = 516
   m_flRadiusScale: int = 520



class C_OP_RenderTreeShake:

   m_flPeakStrength: int = 512
   m_nPeakStrengthFieldOverride: int = 516
   m_flRadius: int = 520
   m_nRadiusFieldOverride: int = 524
   m_flShakeDuration: int = 528
   m_flTransitionTime: int = 532
   m_flTwistAmount: int = 536
   m_flRadialAmount: int = 540
   m_flControlPointOrientationAmount: int = 544
   m_nControlPointForLinearDirection: int = 548



class C_OP_RenderText:

   m_OutlineColor: int = 512
   m_DefaultText: int = 520



class C_OP_RenderVRHapticEvent:

   m_nHand: int = 512
   m_nOutputHandCP: int = 516
   m_nOutputField: int = 520
   m_flAmplitude: int = 528



class C_OP_RemapSDFDistanceToScalarAttribute:

   m_nFieldOutput: int = 448
   m_nVectorFieldInput: int = 452
   m_flMinDistance: int = 456
   m_flMaxDistance: int = 800
   m_flValueBelowMin: int = 1144
   m_flValueAtMin: int = 1488
   m_flValueAtMax: int = 1832
   m_flValueAboveMax: int = 2176



class C_OP_RemapSDFDistanceToVectorAttribute:

   m_nVectorFieldOutput: int = 448
   m_nVectorFieldInput: int = 452
   m_flMinDistance: int = 456
   m_flMaxDistance: int = 800
   m_vValueBelowMin: int = 1144
   m_vValueAtMin: int = 1156
   m_vValueAtMax: int = 1168
   m_vValueAboveMax: int = 1180



class C_OP_SDFForce:

   m_flForceScale: int = 464



class C_OP_RemapSDFGradientToVectorAttribute:

   m_nFieldOutput: int = 448



class C_OP_SDFLighting:

   m_vLightingDir: int = 448
   m_vTint_0: int = 460
   m_vTint_1: int = 472



class C_OP_SDFConstraint:

   m_flMinDist: int = 448
   m_flMaxDist: int = 792
   m_nMaxIterations: int = 1136



class C_OP_ParticlePhysics:

   m_Gravity: int = 448
   m_fDrag: int = 2072
   m_nMaxConstraintPasses: int = 2416



class CRandomNumberGeneratorParameters:

   m_bDistributeEvenly: int = 0
   m_nSeed: int = 4



class MaterialVariable_t:

   m_strVariable: int = 0
   m_nVariableField: int = 8
   m_flScale: int = 12



class ParticleAttributeIndex_t:

   m_Value: int = 0



class ParticlePreviewBodyGroup_t:

   m_bodyGroupName: int = 0
   m_nValue: int = 8



class ParticlePreviewState_t:

   m_previewModel: int = 0
   m_nModSpecificData: int = 8
   m_groundType: int = 12
   m_sequenceName: int = 16
   m_nFireParticleOnSequenceFrame: int = 24
   m_hitboxSetName: int = 32
   m_materialGroupName: int = 40
   m_vecBodyGroups: int = 48
   m_flPlaybackSpeed: int = 72
   m_flParticleSimulationRate: int = 76
   m_bShouldDrawHitboxes: int = 80
   m_bShouldDrawAttachments: int = 81
   m_bShouldDrawAttachmentNames: int = 82
   m_bShouldDrawControlPointAxes: int = 83
   m_bAnimationNonLooping: int = 84
   m_vecPreviewGravity: int = 88



class ParticleControlPointDriver_t:

   m_iControlPoint: int = 0
   m_iAttachType: int = 4
   m_attachmentName: int = 8
   m_vecOffset: int = 16
   m_angOffset: int = 28
   m_entityName: int = 40



class ParticleControlPointConfiguration_t:

   m_name: int = 0
   m_drivers: int = 8
   m_previewState: int = 32



class CParticleVisibilityInputs:

   m_flCameraBias: int = 0
   m_nCPin: int = 4
   m_flProxyRadius: int = 8
   m_flInputMin: int = 12
   m_flInputMax: int = 16
   m_flNoPixelVisibilityFallback: int = 20
   m_flDistanceInputMin: int = 24
   m_flDistanceInputMax: int = 28
   m_flDotInputMin: int = 32
   m_flDotInputMax: int = 36
   m_bDotCPAngles: int = 40
   m_bDotCameraAngles: int = 41
   m_flAlphaScaleMin: int = 44
   m_flAlphaScaleMax: int = 48
   m_flRadiusScaleMin: int = 52
   m_flRadiusScaleMax: int = 56
   m_flRadiusScaleFOVBase: int = 60
   m_bRightEye: int = 64



class CPathParameters:

   m_nStartControlPointNumber: int = 0
   m_nEndControlPointNumber: int = 4
   m_nBulgeControl: int = 8
   m_flBulge: int = 12
   m_flMidPoint: int = 16
   m_vStartPointOffset: int = 20
   m_vMidPointOffset: int = 32
   m_vEndOffset: int = 44



class ParticleChildrenInfo_t:

   m_ChildRef: int = 0
   m_flDelay: int = 8
   m_bEndCap: int = 12
   m_bDisableChild: int = 13
   m_nDetailLevel: int = 16



class ControlPointReference_t:

   m_controlPointNameString: int = 0
   m_vOffsetFromControlPoint: int = 4
   m_bOffsetInLocalSpace: int = 16



class ModelReference_t:

   m_model: int = 0
   m_flRelativeProbabilityOfSpawn: int = 8



class SequenceWeightedList_t:

   m_nSequence: int = 0
   m_flRelativeWeight: int = 4



class CollisionGroupContext_t:

   m_nCollisionGroupNumber: int = 0



class PointDefinition_t:

   m_nControlPoint: int = 0
   m_bLocalCoords: int = 4
   m_vOffset: int = 8



class PointDefinitionWithTimeValues_t:

   m_flTimeDuration: int = 20



class CParticleSystemDefinition:

   m_nBehaviorVersion: int = 8
   m_PreEmissionOperators: int = 16
   m_Emitters: int = 40
   m_Initializers: int = 64
   m_Operators: int = 88
   m_ForceGenerators: int = 112
   m_Constraints: int = 136
   m_Renderers: int = 160
   m_Children: int = 184
   m_nFirstMultipleOverride_BackwardCompat: int = 376
   m_nInitialParticles: int = 528
   m_nMaxParticles: int = 532
   m_nGroupID: int = 536
   m_BoundingBoxMin: int = 540
   m_BoundingBoxMax: int = 552
   m_flDepthSortBias: int = 564
   m_nSortOverridePositionCP: int = 568
   m_bInfiniteBounds: int = 572
   m_bEnableNamedValues: int = 573
   m_NamedValueDomain: int = 576
   m_NamedValueLocals: int = 584
   m_ConstantColor: int = 608
   m_ConstantNormal: int = 612
   m_flConstantRadius: int = 624
   m_flConstantRotation: int = 628
   m_flConstantRotationSpeed: int = 632
   m_flConstantLifespan: int = 636
   m_nConstantSequenceNumber: int = 640
   m_nConstantSequenceNumber1: int = 644
   m_nSnapshotControlPoint: int = 648
   m_hSnapshot: int = 656
   m_pszCullReplacementName: int = 664
   m_flCullRadius: int = 672
   m_flCullFillCost: int = 676
   m_nCullControlPoint: int = 680
   m_hFallback: int = 688
   m_nFallbackMaxCount: int = 696
   m_hLowViolenceDef: int = 704
   m_hReferenceReplacement: int = 712
   m_flPreSimulationTime: int = 720
   m_flStopSimulationAfterTime: int = 724
   m_flMaximumTimeStep: int = 728
   m_flMaximumSimTime: int = 732
   m_flMinimumSimTime: int = 736
   m_flMinimumTimeStep: int = 740
   m_nMinimumFrames: int = 744
   m_nMinCPULevel: int = 748
   m_nMinGPULevel: int = 752
   m_flNoDrawTimeToGoToSleep: int = 756
   m_flMaxDrawDistance: int = 760
   m_flStartFadeDistance: int = 764
   m_flMaxCreationDistance: int = 768
   m_nAggregationMinAvailableParticles: int = 772
   m_flAggregateRadius: int = 776
   m_bShouldBatch: int = 780
   m_bShouldHitboxesFallbackToRenderBounds: int = 781
   m_bShouldHitboxesFallbackToSnapshot: int = 782
   m_nViewModelEffect: int = 784
   m_bScreenSpaceEffect: int = 788
   m_pszTargetLayerID: int = 792
   m_nSkipRenderControlPoint: int = 800
   m_nAllowRenderControlPoint: int = 804
   m_bShouldSort: int = 808
   m_controlPointConfigurations: int = 880



class CParticleFunction:

   m_flOpStrength: int = 8
   m_nOpEndCapState: int = 352
   m_flOpStartFadeInTime: int = 356
   m_flOpEndFadeInTime: int = 360
   m_flOpStartFadeOutTime: int = 364
   m_flOpEndFadeOutTime: int = 368
   m_flOpFadeOscillatePeriod: int = 372
   m_bNormalizeToStopTime: int = 376
   m_flOpTimeOffsetMin: int = 380
   m_flOpTimeOffsetMax: int = 384
   m_nOpTimeOffsetSeed: int = 388
   m_nOpTimeScaleSeed: int = 392
   m_flOpTimeScaleMin: int = 396
   m_flOpTimeScaleMax: int = 400
   m_bDisableOperator: int = 406
   m_Notes: int = 408



class CParticleFunctionInitializer:

   m_nAssociatedEmitterIndex: int = 440



class CParticleFunctionEmitter:

   m_nEmitterIndex: int = 440



class CParticleFunctionPreEmission:

   m_bRunOnce: int = 448



class CParticleFunctionRenderer:

   VisibilityInputs: int = 440
   m_bCannotBeRefracted: int = 508
   m_bSkipRenderingOnMobile: int = 509



class TextureControls_t:

   m_flFinalTextureScaleU: int = 0
   m_flFinalTextureScaleV: int = 344
   m_flFinalTextureOffsetU: int = 688
   m_flFinalTextureOffsetV: int = 1032
   m_flFinalTextureUVRotation: int = 1376
   m_flZoomScale: int = 1720
   m_flDistortion: int = 2064
   m_bRandomizeOffsets: int = 2408
   m_bClampUVs: int = 2409
   m_nPerParticleBlend: int = 2412
   m_nPerParticleScale: int = 2416
   m_nPerParticleOffsetU: int = 2420
   m_nPerParticleOffsetV: int = 2424
   m_nPerParticleRotation: int = 2428
   m_nPerParticleZoom: int = 2432
   m_nPerParticleDistortion: int = 2436



class TextureGroup_t:

   m_bEnabled: int = 0
   m_bReplaceTextureWithGradient: int = 1
   m_hTexture: int = 8
   m_Gradient: int = 16
   m_nTextureType: int = 40
   m_nTextureChannels: int = 44
   m_nTextureBlendMode: int = 48
   m_flTextureBlend: int = 56
   m_TextureControls: int = 400



class CBaseRendererSource2:

   m_flRadiusScale: int = 512
   m_flAlphaScale: int = 856
   m_flRollScale: int = 1200
   m_nAlpha2Field: int = 1544
   m_vecColorScale: int = 1552
   m_nColorBlendType: int = 3176
   m_nShaderType: int = 3180
   m_strShaderOverride: int = 3184
   m_flCenterXOffset: int = 3192
   m_flCenterYOffset: int = 3536
   m_flBumpStrength: int = 3880
   m_nCropTextureOverride: int = 3884
   m_vecTexturesInput: int = 3888
   m_flAnimationRate: int = 3912
   m_nAnimationType: int = 3916
   m_bAnimateInFPS: int = 3920
   m_flSelfIllumAmount: int = 3928
   m_flDiffuseAmount: int = 4272
   m_nLightingControlPoint: int = 4616
   m_nSelfIllumPerParticle: int = 4620
   m_nOutputBlendMode: int = 4624
   m_bGammaCorrectVertexColors: int = 4628
   m_bSaturateColorPreAlphaBlend: int = 4629
   m_flAddSelfAmount: int = 4632
   m_flDesaturation: int = 4976
   m_flOverbrightFactor: int = 5320
   m_nHSVShiftControlPoint: int = 5664
   m_nFogType: int = 5668
   m_flFogAmount: int = 5672
   m_bTintByFOW: int = 6016
   m_bTintByGlobalLight: int = 6017
   m_nPerParticleAlphaReference: int = 6020
   m_nPerParticleAlphaRefWindow: int = 6024
   m_nAlphaReferenceType: int = 6028
   m_flAlphaReferenceSoftness: int = 6032
   m_flSourceAlphaValueToMapToZero: int = 6376
   m_flSourceAlphaValueToMapToOne: int = 6720
   m_bRefract: int = 7064
   m_bRefractSolid: int = 7065
   m_flRefractAmount: int = 7072
   m_nRefractBlurRadius: int = 7416
   m_nRefractBlurType: int = 7420
   m_bOnlyRenderInEffectsBloomPass: int = 7424
   m_bOnlyRenderInEffectsWaterPass: int = 7425
   m_bUseMixedResolutionRendering: int = 7426
   m_bOnlyRenderInEffecsGameOverlay: int = 7427
   m_stencilTestID: int = 7428
   m_bStencilTestExclude: int = 7556
   m_stencilWriteID: int = 7557
   m_bWriteStencilOnDepthPass: int = 7685
   m_bWriteStencilOnDepthFail: int = 7686
   m_bReverseZBuffering: int = 7687
   m_bDisableZBuffering: int = 7688
   m_nFeatheringMode: int = 7692
   m_flFeatheringMinDist: int = 7696
   m_flFeatheringMaxDist: int = 8040
   m_flFeatheringFilter: int = 8384
   m_flDepthBias: int = 8728
   m_nSortMethod: int = 8732
   m_bBlendFramesSeq0: int = 8736
   m_bMaxLuminanceBlendingSequence0: int = 8737



class C_OP_RenderSprites:

   m_nSequenceOverride: int = 9328
   m_nOrientationType: int = 9672
   m_nOrientationControlPoint: int = 9676
   m_bUseYawWithNormalAligned: int = 9680
   m_flMinSize: int = 9684
   m_flMaxSize: int = 9688
   m_flAlphaAdjustWithSizeAdjust: int = 9692
   m_flStartFadeSize: int = 9696
   m_flEndFadeSize: int = 10040
   m_flStartFadeDot: int = 10384
   m_flEndFadeDot: int = 10388
   m_bDistanceAlpha: int = 10392
   m_bSoftEdges: int = 10393
   m_flEdgeSoftnessStart: int = 10396
   m_flEdgeSoftnessEnd: int = 10400
   m_bOutline: int = 10404
   m_OutlineColor: int = 10405
   m_nOutlineAlpha: int = 10412
   m_flOutlineStart0: int = 10416
   m_flOutlineStart1: int = 10420
   m_flOutlineEnd0: int = 10424
   m_flOutlineEnd1: int = 10428
   m_nLightingMode: int = 10432
   m_flLightingTessellation: int = 10440
   m_flLightingDirectionality: int = 10784
   m_bParticleShadows: int = 11128
   m_flShadowDensity: int = 11132



class FloatInputMaterialVariable_t:

   m_strVariable: int = 0
   m_flInput: int = 8



class VecInputMaterialVariable_t:

   m_strVariable: int = 0
   m_vecInput: int = 8



class C_OP_RenderCables:

   m_flRadiusScale: int = 512
   m_flAlphaScale: int = 856
   m_vecColorScale: int = 1200
   m_nColorBlendType: int = 2824
   m_hMaterial: int = 2832
   m_nTextureRepetitionMode: int = 2840
   m_flTextureRepeatsPerSegment: int = 2848
   m_flTextureRepeatsCircumference: int = 3192
   m_flColorMapOffsetV: int = 3536
   m_flColorMapOffsetU: int = 3880
   m_flNormalMapOffsetV: int = 4224
   m_flNormalMapOffsetU: int = 4568
   m_bDrawCableCaps: int = 4912
   m_flCapRoundness: int = 4916
   m_flCapOffsetAmount: int = 4920
   m_flTessScale: int = 4924
   m_nMinTesselation: int = 4928
   m_nMaxTesselation: int = 4932
   m_nRoundness: int = 4936
   m_LightingTransform: int = 4944
   m_MaterialFloatVars: int = 5048
   m_MaterialVecVars: int = 5096



class CParticleFloatInput:

   m_nType: int = 16
   m_nMapType: int = 20
   m_flLiteralValue: int = 24
   m_NamedValue: int = 32
   m_nControlPoint: int = 96
   m_nScalarAttribute: int = 100
   m_nVectorAttribute: int = 104
   m_nVectorComponent: int = 108
   m_flRandomMin: int = 112
   m_flRandomMax: int = 116
   m_bHasRandomSignFlip: int = 120
   m_nRandomSeed: int = 124
   m_nRandomMode: int = 128
   m_flLOD0: int = 136
   m_flLOD1: int = 140
   m_flLOD2: int = 144
   m_flLOD3: int = 148
   m_nNoiseInputVectorAttribute: int = 152
   m_flNoiseOutputMin: int = 156
   m_flNoiseOutputMax: int = 160
   m_flNoiseScale: int = 164
   m_vecNoiseOffsetRate: int = 168
   m_flNoiseOffset: int = 180
   m_nNoiseOctaves: int = 184
   m_nNoiseTurbulence: int = 188
   m_nNoiseType: int = 192
   m_nNoiseModifier: int = 196
   m_flNoiseTurbulenceScale: int = 200
   m_flNoiseTurbulenceMix: int = 204
   m_flNoiseImgPreviewScale: int = 208
   m_bNoiseImgPreviewLive: int = 212
   m_flNoCameraFallback: int = 224
   m_bUseBoundsCenter: int = 228
   m_nInputMode: int = 232
   m_flMultFactor: int = 236
   m_flInput0: int = 240
   m_flInput1: int = 244
   m_flOutput0: int = 248
   m_flOutput1: int = 252
   m_flNotchedRangeMin: int = 256
   m_flNotchedRangeMax: int = 260
   m_flNotchedOutputOutside: int = 264
   m_flNotchedOutputInside: int = 268
   m_nBiasType: int = 272
   m_flBiasParameter: int = 276
   m_Curve: int = 280



class CParticleTransformInput:

   m_nType: int = 16
   m_NamedValue: int = 24
   m_bFollowNamedValue: int = 88
   m_bSupportsDisabled: int = 89
   m_bUseOrientation: int = 90
   m_nControlPoint: int = 92
   m_nControlPointRangeMax: int = 96
   m_flEndCPGrowthTime: int = 100



class CParticleModelInput:

   m_nType: int = 16
   m_NamedValue: int = 24
   m_nControlPoint: int = 88



class CParticleVecInput:

   m_nType: int = 16
   m_vLiteralValue: int = 20
   m_LiteralColor: int = 32
   m_NamedValue: int = 40
   m_bFollowNamedValue: int = 104
   m_nVectorAttribute: int = 108
   m_vVectorAttributeScale: int = 112
   m_nControlPoint: int = 124
   m_nDeltaControlPoint: int = 128
   m_vCPValueScale: int = 132
   m_vCPRelativePosition: int = 144
   m_vCPRelativeDir: int = 156
   m_FloatComponentX: int = 168
   m_FloatComponentY: int = 512
   m_FloatComponentZ: int = 856
   m_FloatInterp: int = 1200
   m_flInterpInput0: int = 1544
   m_flInterpInput1: int = 1548
   m_vInterpOutput0: int = 1552
   m_vInterpOutput1: int = 1564
   m_Gradient: int = 1576
   m_vRandomMin: int = 1600
   m_vRandomMax: int = 1612



class PARTICLE_EHANDLE__:

   unused: int = 0



class PARTICLE_WORLD_HANDLE__:

   unused: int = 0



class ParticleNamedValueConfiguration_t:

   m_ConfigName: int = 0
   m_ConfigValue: int = 8
   m_iAttachType: int = 24
   m_BoundEntityPath: int = 32
   m_strEntityScope: int = 40
   m_strAttachmentName: int = 48



class ParticleNamedValueSource_t:

   m_Name: int = 0
   m_IsPublic: int = 8
   m_ValueType: int = 12
   m_DefaultConfig: int = 16
   m_NamedConfigs: int = 72



class CParticleVariableRef:

   m_variableName: int = 0
   m_variableType: int = 56



class CNewParticleEffect:

   m_pNext: int = 16
   m_pPrev: int = 24
   m_pParticles: int = 32
   m_pDebugName: int = 40
   m_bDontRemove: int = 0
   m_bRemove: int = 0
   m_bNeedsBBoxUpdate: int = 0
   m_bIsFirstFrame: int = 0
   m_bAutoUpdateBBox: int = 0
   m_bAllocated: int = 0
   m_bSimulate: int = 0
   m_bShouldPerformCullCheck: int = 0
   m_bForceNoDraw: int = 0
   m_bShouldSave: int = 0
   m_bDisableAggregation: int = 0
   m_bShouldSimulateDuringGamePaused: int = 0
   m_bShouldCheckFoW: int = 0
   m_vSortOrigin: int = 64
   m_flScale: int = 76
   m_hOwner: int = 80
   m_pOwningParticleProperty: int = 88
   m_flFreezeTransitionStart: int = 112
   m_flFreezeTransitionDuration: int = 116
   m_flFreezeTransitionOverride: int = 120
   m_bFreezeTransitionActive: int = 124
   m_bFreezeTargetState: int = 125
   m_bCanFreeze: int = 126
   m_LastMin: int = 128
   m_LastMax: int = 140
   m_nSplitScreenUser: int = 152
   m_vecAggregationCenter: int = 156
   m_RefCount: int = 192



class C_OP_ConstrainDistance:

   m_fMinDistance: int = 448
   m_fMaxDistance: int = 792
   m_nControlPointNumber: int = 1136
   m_CenterOffset: int = 1140
   m_bGlobalCenter: int = 1152



class C_OP_CollideWithSelf:

   m_flRadiusScale: int = 448
   m_flMinimumSpeed: int = 792



class C_OP_CollideWithParentParticles:

   m_flParentRadiusScale: int = 448
   m_flRadiusScale: int = 792



class C_OP_ConstrainDistanceToPath:

   m_fMinDistance: int = 448
   m_flMaxDistance0: int = 452
   m_flMaxDistanceMid: int = 456
   m_flMaxDistance1: int = 460
   m_PathParameters: int = 464
   m_flTravelTime: int = 528
   m_nFieldScale: int = 532
   m_nManualTField: int = 536



class C_OP_ConstrainDistanceToUserSpecifiedPath:

   m_fMinDistance: int = 448
   m_flMaxDistance: int = 452
   m_flTimeScale: int = 456
   m_bLoopedPath: int = 460
   m_pointList: int = 464



class C_OP_PlanarConstraint:

   m_PointOnPlane: int = 448
   m_PlaneNormal: int = 460
   m_nControlPointNumber: int = 472
   m_bGlobalOrigin: int = 476
   m_bGlobalNormal: int = 477
   m_flRadiusScale: int = 480
   m_flMaximumDistanceToCP: int = 824



class C_OP_WorldTraceConstraint:

   m_nCP: int = 448
   m_vecCpOffset: int = 452
   m_nCollisionMode: int = 464
   m_nCollisionModeMin: int = 468
   m_nTraceSet: int = 472
   m_CollisionGroupName: int = 476
   m_bWorldOnly: int = 604
   m_bBrushOnly: int = 605
   m_bIncludeWater: int = 606
   m_nIgnoreCP: int = 608
   m_flCpMovementTolerance: int = 612
   m_flRetestRate: int = 616
   m_flTraceTolerance: int = 620
   m_flCollisionConfirmationSpeed: int = 624
   m_nMaxTracesPerFrame: int = 628
   m_flRadiusScale: int = 632
   m_flBounceAmount: int = 976
   m_flSlideAmount: int = 1320
   m_flRandomDirScale: int = 1664
   m_bDecayBounce: int = 2008
   m_bKillonContact: int = 2009
   m_flMinSpeed: int = 2012
   m_bSetNormal: int = 2016
   m_nStickOnCollisionField: int = 2020
   m_flStopSpeed: int = 2024
   m_nEntityStickDataField: int = 2368
   m_nEntityStickNormalField: int = 2372



class C_OP_BoxConstraint:

   m_vecMin: int = 448
   m_vecMax: int = 2072
   m_nCP: int = 3696
   m_bLocalSpace: int = 3700
   m_bAccountForRadius: int = 3701



class C_OP_ShapeMatchingConstraint:

   m_flShapeRestorationTime: int = 448



class C_OP_RopeSpringConstraint:

   m_flRestLength: int = 448
   m_flMinDistance: int = 792
   m_flMaxDistance: int = 1136
   m_flAdjustmentScale: int = 1480
   m_flInitialRestingLength: int = 1488



class C_OP_SpringToVectorConstraint:

   m_flRestLength: int = 448
   m_flMinDistance: int = 792
   m_flMaxDistance: int = 1136
   m_flRestingLength: int = 1480
   m_vecAnchorVector: int = 1824



class C_OP_ConstrainLineLength:

   m_flMinDistance: int = 448
   m_flMaxDistance: int = 452



class C_INIT_RingWave:

   m_TransformInput: int = 448
   m_flParticlesPerOrbit: int = 552
   m_flInitialRadius: int = 896
   m_flThickness: int = 1240
   m_flInitialSpeedMin: int = 1584
   m_flInitialSpeedMax: int = 1928
   m_flRoll: int = 2272
   m_flPitch: int = 2616
   m_flYaw: int = 2960
   m_bEvenDistribution: int = 3304
   m_bXYVelocityOnly: int = 3305



class C_INIT_CreateSpiralSphere:

   m_nControlPointNumber: int = 448
   m_nOverrideCP: int = 452
   m_nDensity: int = 456
   m_flInitialRadius: int = 460
   m_flInitialSpeedMin: int = 464
   m_flInitialSpeedMax: int = 468
   m_bUseParticleCount: int = 472



class C_INIT_CreateInEpitrochoid:

   m_nComponent1: int = 448
   m_nComponent2: int = 452
   m_TransformInput: int = 456
   m_flParticleDensity: int = 560
   m_flOffset: int = 904
   m_flRadius1: int = 1248
   m_flRadius2: int = 1592
   m_bUseCount: int = 1936
   m_bUseLocalCoords: int = 1937
   m_bOffsetExistingPos: int = 1938



class C_INIT_CreatePhyllotaxis:

   m_nControlPointNumber: int = 448
   m_nScaleCP: int = 452
   m_nComponent: int = 456
   m_fRadCentCore: int = 460
   m_fRadPerPoint: int = 464
   m_fRadPerPointTo: int = 468
   m_fpointAngle: int = 472
   m_fsizeOverall: int = 476
   m_fRadBias: int = 480
   m_fMinRad: int = 484
   m_fDistBias: int = 488
   m_bUseLocalCoords: int = 492
   m_bUseWithContEmit: int = 493
   m_bUseOrigRadius: int = 494



class C_INIT_CreateOnModel:

   m_modelInput: int = 448
   m_transformInput: int = 544
   m_nForceInModel: int = 648
   m_nDesiredHitbox: int = 652
   m_nHitboxValueFromControlPointIndex: int = 656
   m_vecHitBoxScale: int = 664
   m_flBoneVelocity: int = 2288
   m_flMaxBoneVelocity: int = 2292
   m_vecDirectionBias: int = 2296
   m_HitboxSetName: int = 3920
   m_bLocalCoords: int = 4048
   m_bUseBones: int = 4049
   m_flShellSize: int = 4056



class C_INIT_CreateOnModelAtHeight:

   m_bUseBones: int = 448
   m_bForceZ: int = 449
   m_nControlPointNumber: int = 452
   m_nHeightCP: int = 456
   m_bUseWaterHeight: int = 460
   m_flDesiredHeight: int = 464
   m_vecHitBoxScale: int = 808
   m_vecDirectionBias: int = 2432
   m_nBiasType: int = 4056
   m_bLocalCoords: int = 4060
   m_bPreferMovingBoxes: int = 4061
   m_HitboxSetName: int = 4062
   m_flHitboxVelocityScale: int = 4192
   m_flMaxBoneVelocity: int = 4536



class C_INIT_SetHitboxToClosest:

   m_nControlPointNumber: int = 448
   m_nDesiredHitbox: int = 452
   m_vecHitBoxScale: int = 456
   m_HitboxSetName: int = 2080
   m_bUseBones: int = 2208
   m_bUseClosestPointOnHitbox: int = 2209
   m_nTestType: int = 2212
   m_flHybridRatio: int = 2216
   m_bUpdatePosition: int = 2560



class C_INIT_SetHitboxToModel:

   m_nControlPointNumber: int = 448
   m_nForceInModel: int = 452
   m_nDesiredHitbox: int = 456
   m_vecHitBoxScale: int = 464
   m_vecDirectionBias: int = 2088
   m_bMaintainHitbox: int = 2100
   m_bUseBones: int = 2101
   m_HitboxSetName: int = 2102
   m_flShellSize: int = 2232



class C_INIT_CreateWithinSphereTransform:

   m_fRadiusMin: int = 448
   m_fRadiusMax: int = 792
   m_vecDistanceBias: int = 1136
   m_vecDistanceBiasAbs: int = 2760
   m_TransformInput: int = 2776
   m_fSpeedMin: int = 2880
   m_fSpeedMax: int = 3224
   m_fSpeedRandExp: int = 3568
   m_bLocalCoords: int = 3572
   m_flEndCPGrowthTime: int = 3576
   m_LocalCoordinateSystemSpeedMin: int = 3584
   m_LocalCoordinateSystemSpeedMax: int = 5208
   m_nFieldOutput: int = 6832
   m_nFieldVelocity: int = 6836



class C_INIT_CreateWithinBox:

   m_vecMin: int = 448
   m_vecMax: int = 2072
   m_nControlPointNumber: int = 3696
   m_bLocalSpace: int = 3700
   m_randomnessParameters: int = 3704



class C_INIT_CreateOnGrid:

   m_nXCount: int = 448
   m_nYCount: int = 792
   m_nZCount: int = 1136
   m_nXSpacing: int = 1480
   m_nYSpacing: int = 1824
   m_nZSpacing: int = 2168
   m_nControlPointNumber: int = 2512
   m_bLocalSpace: int = 2516
   m_bCenter: int = 2517
   m_bHollow: int = 2518



class C_INIT_PositionOffset:

   m_OffsetMin: int = 448
   m_OffsetMax: int = 2072
   m_TransformInput: int = 3696
   m_bLocalCoords: int = 3800
   m_bProportional: int = 3801
   m_randomnessParameters: int = 3804



class C_INIT_PositionOffsetToCP:

   m_nControlPointNumberStart: int = 448
   m_nControlPointNumberEnd: int = 452
   m_bLocalCoords: int = 456



class C_INIT_PositionPlaceOnGround:

   m_flOffset: int = 448
   m_flMaxTraceLength: int = 792
   m_CollisionGroupName: int = 1136
   m_nTraceSet: int = 1264
   m_nTraceMissBehavior: int = 1280
   m_bIncludeWater: int = 1284
   m_bSetNormal: int = 1285
   m_bSetPXYZOnly: int = 1286
   m_bTraceAlongNormal: int = 1287
   m_bOffsetonColOnly: int = 1288
   m_flOffsetByRadiusFactor: int = 1292
   m_nPreserveOffsetCP: int = 1296
   m_nIgnoreCP: int = 1300



class C_INIT_VelocityFromNormal:

   m_fSpeedMin: int = 448
   m_fSpeedMax: int = 452
   m_bIgnoreDt: int = 456



class C_INIT_VelocityRandom:

   m_nControlPointNumber: int = 448
   m_fSpeedMin: int = 456
   m_fSpeedMax: int = 800
   m_LocalCoordinateSystemSpeedMin: int = 1144
   m_LocalCoordinateSystemSpeedMax: int = 2768
   m_bIgnoreDT: int = 4392
   m_randomnessParameters: int = 4396



class C_INIT_InitialVelocityNoise:

   m_vecAbsVal: int = 448
   m_vecAbsValInv: int = 460
   m_vecOffsetLoc: int = 472
   m_flOffset: int = 2096
   m_vecOutputMin: int = 2440
   m_vecOutputMax: int = 4064
   m_flNoiseScale: int = 5688
   m_flNoiseScaleLoc: int = 6032
   m_TransformInput: int = 6376
   m_bIgnoreDt: int = 6480



class C_INIT_InitialVelocityFromHitbox:

   m_flVelocityMin: int = 448
   m_flVelocityMax: int = 452
   m_nControlPointNumber: int = 456
   m_HitboxSetName: int = 460
   m_bUseBones: int = 588



class C_INIT_VelocityRadialRandom:

   m_nControlPointNumber: int = 448
   m_fSpeedMin: int = 452
   m_fSpeedMax: int = 456
   m_vecLocalCoordinateSystemSpeedScale: int = 460
   m_bIgnoreDelta: int = 473



class C_INIT_RandomLifeTime:

   m_fLifetimeMin: int = 448
   m_fLifetimeMax: int = 452
   m_fLifetimeRandExponent: int = 456



class C_INIT_RandomScalar:

   m_flMin: int = 448
   m_flMax: int = 452
   m_flExponent: int = 456
   m_nFieldOutput: int = 460



class C_INIT_RandomVector:

   m_vecMin: int = 448
   m_vecMax: int = 460
   m_nFieldOutput: int = 472
   m_randomnessParameters: int = 476



class C_INIT_RandomVectorComponent:

   m_flMin: int = 448
   m_flMax: int = 452
   m_nFieldOutput: int = 456
   m_nComponent: int = 460



class C_INIT_AddVectorToVector:

   m_vecScale: int = 448
   m_nFieldOutput: int = 460
   m_nFieldInput: int = 464
   m_vOffsetMin: int = 468
   m_vOffsetMax: int = 480
   m_randomnessParameters: int = 492



class C_INIT_RandomAlphaWindowThreshold:

   m_flMin: int = 448
   m_flMax: int = 452
   m_flExponent: int = 456



class C_INIT_RandomRadius:

   m_flRadiusMin: int = 448
   m_flRadiusMax: int = 452
   m_flRadiusRandExponent: int = 456



class C_INIT_RandomAlpha:

   m_nFieldOutput: int = 448
   m_nAlphaMin: int = 452
   m_nAlphaMax: int = 456
   m_flAlphaRandExponent: int = 468



class CGeneralRandomRotation:

   m_nFieldOutput: int = 448
   m_flDegrees: int = 452
   m_flDegreesMin: int = 456
   m_flDegreesMax: int = 460
   m_flRotationRandExponent: int = 464
   m_bRandomlyFlipDirection: int = 468



class C_INIT_Orient2DRelToCP:

   m_nCP: int = 448
   m_nFieldOutput: int = 452
   m_flRotOffset: int = 456



class C_INIT_RandomColor:

   m_ColorMin: int = 476
   m_ColorMax: int = 480
   m_TintMin: int = 484
   m_TintMax: int = 488
   m_flTintPerc: int = 492
   m_flUpdateThreshold: int = 496
   m_nTintCP: int = 500
   m_nFieldOutput: int = 504
   m_nTintBlendMode: int = 508
   m_flLightAmplification: int = 512



class C_INIT_ColorLitPerParticle:

   m_ColorMin: int = 472
   m_ColorMax: int = 476
   m_TintMin: int = 480
   m_TintMax: int = 484
   m_flTintPerc: int = 488
   m_nTintBlendMode: int = 492
   m_flLightAmplification: int = 496



class C_INIT_RandomTrailLength:

   m_flMinLength: int = 448
   m_flMaxLength: int = 452
   m_flLengthRandExponent: int = 456



class C_INIT_RandomSequence:

   m_nSequenceMin: int = 448
   m_nSequenceMax: int = 452
   m_bShuffle: int = 456
   m_bLinear: int = 457
   m_WeightedList: int = 464



class C_INIT_SequenceFromCP:

   m_bKillUnused: int = 448
   m_bRadiusScale: int = 449
   m_nCP: int = 452
   m_vecOffset: int = 456



class C_INIT_RandomModelSequence:

   m_ActivityName: int = 448
   m_SequenceName: int = 704
   m_hModel: int = 960



class C_INIT_ScaleVelocity:

   m_vecScale: int = 448



class C_INIT_PositionWarp:

   m_vecWarpMin: int = 448
   m_vecWarpMax: int = 2072
   m_nScaleControlPointNumber: int = 3696
   m_nControlPointNumber: int = 3700
   m_nRadiusComponent: int = 3704
   m_flWarpTime: int = 3708
   m_flWarpStartTime: int = 3712
   m_flPrevPosScale: int = 3716
   m_bInvertWarp: int = 3720
   m_bUseCount: int = 3721



class C_INIT_PositionWarpScalar:

   m_vecWarpMin: int = 448
   m_vecWarpMax: int = 460
   m_InputValue: int = 472
   m_flPrevPosScale: int = 816
   m_nScaleControlPointNumber: int = 820
   m_nControlPointNumber: int = 824



class C_INIT_CreationNoise:

   m_nFieldOutput: int = 448
   m_bAbsVal: int = 452
   m_bAbsValInv: int = 453
   m_flOffset: int = 456
   m_flOutputMin: int = 460
   m_flOutputMax: int = 464
   m_flNoiseScale: int = 468
   m_flNoiseScaleLoc: int = 472
   m_vecOffsetLoc: int = 476
   m_flWorldTimeScale: int = 488



class C_INIT_CreateAlongPath:

   m_fMaxDistance: int = 448
   m_PathParams: int = 464
   m_bUseRandomCPs: int = 528
   m_vEndOffset: int = 532
   m_bSaveOffset: int = 544



class C_INIT_MoveBetweenPoints:

   m_flSpeedMin: int = 448
   m_flSpeedMax: int = 792
   m_flEndSpread: int = 1136
   m_flStartOffset: int = 1480
   m_flEndOffset: int = 1824
   m_nEndControlPointNumber: int = 2168
   m_bTrailBias: int = 2172



class C_INIT_RemapScalar:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468
   m_flStartTime: int = 472
   m_flEndTime: int = 476
   m_nSetMethod: int = 480
   m_bActiveRange: int = 484
   m_flRemapBias: int = 488



class C_INIT_RemapParticleCountToScalar:

   m_nFieldOutput: int = 448
   m_nInputMin: int = 452
   m_nInputMax: int = 456
   m_nScaleControlPoint: int = 460
   m_nScaleControlPointField: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_nSetMethod: int = 476
   m_bActiveRange: int = 480
   m_bInvert: int = 481
   m_bWrap: int = 482
   m_flRemapBias: int = 484



class C_INIT_RemapParticleCountToNamedModelElementScalar:

   m_hModel: int = 496
   m_outputMinName: int = 504
   m_outputMaxName: int = 512
   m_bModelFromRenderer: int = 520



class C_INIT_InheritVelocity:

   m_nControlPointNumber: int = 448
   m_flVelocityScale: int = 452



class C_INIT_VelocityFromCP:

   m_velocityInput: int = 448
   m_transformInput: int = 2072
   m_flVelocityScale: int = 2176
   m_bDirectionOnly: int = 2180



class C_INIT_AgeNoise:

   m_bAbsVal: int = 448
   m_bAbsValInv: int = 449
   m_flOffset: int = 452
   m_flAgeMin: int = 456
   m_flAgeMax: int = 460
   m_flNoiseScale: int = 464
   m_flNoiseScaleLoc: int = 468
   m_vecOffsetLoc: int = 472



class C_INIT_SequenceLifeTime:

   m_flFramerate: int = 448



class C_INIT_RemapScalarToVector:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_vecOutputMin: int = 464
   m_vecOutputMax: int = 476
   m_flStartTime: int = 488
   m_flEndTime: int = 492
   m_nSetMethod: int = 496
   m_nControlPointNumber: int = 500
   m_bLocalCoords: int = 504
   m_flRemapBias: int = 508



class C_INIT_OffsetVectorToVector:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_vecOutputMin: int = 456
   m_vecOutputMax: int = 468
   m_randomnessParameters: int = 480



class C_INIT_CreateSequentialPathV2:

   m_fMaxDistance: int = 448
   m_flNumToAssign: int = 792
   m_bLoop: int = 1136
   m_bCPPairs: int = 1137
   m_bSaveOffset: int = 1138
   m_PathParams: int = 1152



class C_INIT_CreateSequentialPath:

   m_fMaxDistance: int = 448
   m_flNumToAssign: int = 452
   m_bLoop: int = 456
   m_bCPPairs: int = 457
   m_bSaveOffset: int = 458
   m_PathParams: int = 464



class C_INIT_InitialRepulsionVelocity:

   m_CollisionGroupName: int = 448
   m_nTraceSet: int = 576
   m_vecOutputMin: int = 580
   m_vecOutputMax: int = 592
   m_nControlPointNumber: int = 604
   m_bPerParticle: int = 608
   m_bTranslate: int = 609
   m_bProportional: int = 610
   m_flTraceLength: int = 612
   m_bPerParticleTR: int = 616
   m_bInherit: int = 617
   m_nChildCP: int = 620
   m_nChildGroupID: int = 624



class C_INIT_RandomYawFlip:

   m_flPercent: int = 448



class C_INIT_RandomSecondSequence:

   m_nSequenceMin: int = 448
   m_nSequenceMax: int = 452



class C_INIT_RemapCPtoScalar:

   m_nCPInput: int = 448
   m_nFieldOutput: int = 452
   m_nField: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_flStartTime: int = 476
   m_flEndTime: int = 480
   m_nSetMethod: int = 484
   m_flRemapBias: int = 488



class C_INIT_RemapTransformToVector:

   m_nFieldOutput: int = 448
   m_vInputMin: int = 452
   m_vInputMax: int = 464
   m_vOutputMin: int = 476
   m_vOutputMax: int = 488
   m_TransformInput: int = 504
   m_LocalSpaceTransform: int = 608
   m_flStartTime: int = 712
   m_flEndTime: int = 716
   m_nSetMethod: int = 720
   m_bOffset: int = 724
   m_bAccelerate: int = 725
   m_flRemapBias: int = 728



class C_INIT_ChaoticAttractor:

   m_flAParm: int = 448
   m_flBParm: int = 452
   m_flCParm: int = 456
   m_flDParm: int = 460
   m_flScale: int = 464
   m_flSpeedMin: int = 468
   m_flSpeedMax: int = 472
   m_nBaseCP: int = 476
   m_bUniformSpeed: int = 480



class C_INIT_CreateFromParentParticles:

   m_flVelocityScale: int = 448
   m_flIncrement: int = 452
   m_bRandomDistribution: int = 456
   m_nRandomSeed: int = 460
   m_bSubFrame: int = 464



class C_INIT_InheritFromParentParticles:

   m_flScale: int = 448
   m_nFieldOutput: int = 452
   m_nIncrement: int = 456
   m_bRandomDistribution: int = 460
   m_nRandomSeed: int = 464



class C_INIT_CreateFromCPs:

   m_nIncrement: int = 448
   m_nMinCP: int = 452
   m_nMaxCP: int = 456
   m_nDynamicCPCount: int = 464



class C_INIT_DistanceToCPInit:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 456
   m_flInputMax: int = 800
   m_flOutputMin: int = 1144
   m_flOutputMax: int = 1488
   m_nStartCP: int = 1832
   m_bLOS: int = 1836
   m_CollisionGroupName: int = 1837
   m_nTraceSet: int = 1968
   m_flMaxTraceLength: int = 1976
   m_flLOSScale: int = 2320
   m_nSetMethod: int = 2324
   m_bActiveRange: int = 2328
   m_vecDistanceScale: int = 2332
   m_flRemapBias: int = 2344



class C_INIT_LifespanFromVelocity:

   m_vecComponentScale: int = 448
   m_flTraceOffset: int = 460
   m_flMaxTraceLength: int = 464
   m_flTraceTolerance: int = 468
   m_nMaxPlanes: int = 472
   m_CollisionGroupName: int = 480
   m_nTraceSet: int = 608
   m_bIncludeWater: int = 624



class C_INIT_CreateFromPlaneCache:

   m_vecOffsetMin: int = 448
   m_vecOffsetMax: int = 460
   m_bUseNormal: int = 473



class C_INIT_ModelCull:

   m_nControlPointNumber: int = 448
   m_bBoundBox: int = 452
   m_bCullOutside: int = 453
   m_bUseBones: int = 454
   m_HitboxSetName: int = 455



class C_INIT_DistanceCull:

   m_nControlPoint: int = 448
   m_flDistance: int = 456
   m_bCullInside: int = 800



class C_INIT_PlaneCull:

   m_nControlPoint: int = 448
   m_flDistance: int = 456
   m_bCullInside: int = 800



class C_INIT_DistanceToNeighborCull:

   m_flDistance: int = 448



class C_INIT_RtEnvCull:

   m_vecTestDir: int = 448
   m_vecTestNormal: int = 460
   m_bUseVelocity: int = 472
   m_bCullOnMiss: int = 473
   m_bLifeAdjust: int = 474
   m_RtEnvName: int = 475
   m_nRTEnvCP: int = 604
   m_nComponent: int = 608



class C_INIT_NormalAlignToCP:

   m_transformInput: int = 448
   m_nControlPointAxis: int = 552



class C_INIT_NormalOffset:

   m_OffsetMin: int = 448
   m_OffsetMax: int = 460
   m_nControlPointNumber: int = 472
   m_bLocalCoords: int = 476
   m_bNormalize: int = 477



class C_INIT_RemapSpeedToScalar:

   m_nFieldOutput: int = 448
   m_nControlPointNumber: int = 452
   m_flStartTime: int = 456
   m_flEndTime: int = 460
   m_flInputMin: int = 464
   m_flInputMax: int = 468
   m_flOutputMin: int = 472
   m_flOutputMax: int = 476
   m_nSetMethod: int = 480
   m_bPerParticle: int = 484



class C_INIT_InitFromCPSnapshot:

   m_nControlPointNumber: int = 448
   m_nAttributeToRead: int = 452
   m_nAttributeToWrite: int = 456
   m_nLocalSpaceCP: int = 460
   m_bRandom: int = 464
   m_bReverse: int = 465
   m_nSnapShotIncrement: int = 472
   m_nManualSnapshotIndex: int = 816
   m_nRandomSeed: int = 1160
   m_bLocalSpaceAngles: int = 1164



class C_INIT_InitSkinnedPositionFromCPSnapshot:

   m_nSnapshotControlPointNumber: int = 448
   m_nControlPointNumber: int = 452
   m_bRandom: int = 456
   m_nRandomSeed: int = 460
   m_bRigid: int = 464
   m_bSetNormal: int = 465
   m_bIgnoreDt: int = 466
   m_flMinNormalVelocity: int = 468
   m_flMaxNormalVelocity: int = 472
   m_flIncrement: int = 476
   m_nFullLoopIncrement: int = 480
   m_nSnapShotStartPoint: int = 484
   m_flBoneVelocity: int = 488
   m_flBoneVelocityMax: int = 492
   m_bCopyColor: int = 496
   m_bCopyAlpha: int = 497
   m_bSetRadius: int = 498



class C_INIT_InitFromParentKilled:

   m_nAttributeToCopy: int = 448



class C_INIT_InitFromVectorFieldSnapshot:

   m_nControlPointNumber: int = 448
   m_nLocalSpaceCP: int = 452
   m_nWeightUpdateCP: int = 456
   m_bUseVerticalVelocity: int = 460
   m_vecScale: int = 464



class C_INIT_RemapInitialDirectionToTransformToVector:

   m_TransformInput: int = 448
   m_nFieldOutput: int = 552
   m_flScale: int = 556
   m_flOffsetRot: int = 560
   m_vecOffsetAxis: int = 564
   m_bNormalize: int = 576



class C_INIT_RemapInitialTransformDirectionToRotation:

   m_TransformInput: int = 448
   m_nFieldOutput: int = 552
   m_flOffsetRot: int = 556
   m_nComponent: int = 560



class C_INIT_RemapQAnglesToRotation:

   m_TransformInput: int = 448



class C_INIT_RemapTransformOrientationToRotations:

   m_TransformInput: int = 448
   m_vecRotation: int = 552
   m_bUseQuat: int = 564
   m_bWriteNormal: int = 565



class C_INIT_SetRigidAttachment:

   m_nControlPointNumber: int = 448
   m_nFieldInput: int = 452
   m_nFieldOutput: int = 456
   m_bLocalSpace: int = 460



class C_INIT_RemapInitialVisibilityScalar:

   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468



class C_INIT_RadiusFromCPObject:

   m_nControlPoint: int = 448



class C_INIT_InitialSequenceFromModel:

   m_nControlPointNumber: int = 448
   m_nFieldOutput: int = 452
   m_nFieldOutputAnim: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_nSetMethod: int = 476



class C_INIT_GlobalScale:

   m_flScale: int = 448
   m_nScaleControlPointNumber: int = 452
   m_nControlPointNumber: int = 456
   m_bScaleRadius: int = 460
   m_bScalePosition: int = 461
   m_bScaleVelocity: int = 462



class C_INIT_PointList:

   m_nFieldOutput: int = 448
   m_pointList: int = 456
   m_bPlaceAlongPath: int = 480
   m_bClosedLoop: int = 481
   m_nNumPointsAlongPath: int = 484



class C_INIT_RandomNamedModelElement:

   m_hModel: int = 448
   m_names: int = 456
   m_bShuffle: int = 480
   m_bLinear: int = 481
   m_bModelFromRenderer: int = 482
   m_nFieldOutput: int = 484



class C_INIT_RemapNamedModelElementToScalar:

   m_hModel: int = 448
   m_names: int = 456
   m_values: int = 480
   m_nFieldInput: int = 504
   m_nFieldOutput: int = 508
   m_nSetMethod: int = 512
   m_bModelFromRenderer: int = 516



class C_INIT_StatusEffect:

   m_nDetail2Combo: int = 448
   m_flDetail2Rotation: int = 452
   m_flDetail2Scale: int = 456
   m_flDetail2BlendFactor: int = 460
   m_flColorWarpIntensity: int = 464
   m_flDiffuseWarpBlendToFull: int = 468
   m_flEnvMapIntensity: int = 472
   m_flAmbientScale: int = 476
   m_specularColor: int = 480
   m_flSpecularScale: int = 484
   m_flSpecularExponent: int = 488
   m_flSpecularExponentBlendToFull: int = 492
   m_flSpecularBlendToFull: int = 496
   m_rimLightColor: int = 500
   m_flRimLightScale: int = 504
   m_flReflectionsTintByBaseBlendToNone: int = 508
   m_flMetalnessBlendToFull: int = 512
   m_flSelfIllumBlendToFull: int = 516



class C_INIT_StatusEffectCitadel:

   m_flSFXColorWarpAmount: int = 448
   m_flSFXNormalAmount: int = 452
   m_flSFXMetalnessAmount: int = 456
   m_flSFXRoughnessAmount: int = 460
   m_flSFXSelfIllumAmount: int = 464
   m_flSFXSScale: int = 468
   m_flSFXSScrollX: int = 472
   m_flSFXSScrollY: int = 476
   m_flSFXSScrollZ: int = 480
   m_flSFXSOffsetX: int = 484
   m_flSFXSOffsetY: int = 488
   m_flSFXSOffsetZ: int = 492
   m_nDetailCombo: int = 496
   m_flSFXSDetailAmount: int = 500
   m_flSFXSDetailScale: int = 504
   m_flSFXSDetailScrollX: int = 508
   m_flSFXSDetailScrollY: int = 512
   m_flSFXSDetailScrollZ: int = 516
   m_flSFXSUseModelUVs: int = 520



class C_INIT_CreateParticleImpulse:

   m_InputRadius: int = 448
   m_InputMagnitude: int = 792
   m_nFalloffFunction: int = 1136
   m_InputFalloffExp: int = 1144
   m_nImpulseType: int = 1488



class C_INIT_QuantizeFloat:

   m_InputValue: int = 448
   m_nOutputField: int = 792



class C_INIT_SetVectorAttributeToVectorExpression:

   m_nExpression: int = 448
   m_vInput1: int = 456
   m_vInput2: int = 2080
   m_nOutputField: int = 3704
   m_nSetMethod: int = 3708
   m_bNormalizedOutput: int = 3712



class C_INIT_InitFloatCollection:

   m_InputValue: int = 448
   m_nOutputField: int = 792



class C_INIT_InitFloat:

   m_InputValue: int = 448
   m_nOutputField: int = 792
   m_nSetMethod: int = 796
   m_InputStrength: int = 800



class C_INIT_InitVecCollection:

   m_InputValue: int = 448
   m_nOutputField: int = 2072



class C_INIT_InitVec:

   m_InputValue: int = 448
   m_nOutputField: int = 2072
   m_nSetMethod: int = 2076
   m_bNormalizedOutput: int = 2080
   m_bWritePreviousPosition: int = 2081



class C_OP_InstantaneousEmitter:

   m_nParticlesToEmit: int = 448
   m_flStartTime: int = 792
   m_flInitFromKilledParentParticles: int = 1136
   m_flParentParticleScale: int = 1144
   m_nMaxEmittedPerFrame: int = 1488
   m_nSnapshotControlPoint: int = 1492



class C_OP_ContinuousEmitter:

   m_flEmissionDuration: int = 448
   m_flStartTime: int = 792
   m_flEmitRate: int = 1136
   m_flEmissionScale: int = 1480
   m_flScalePerParentParticle: int = 1484
   m_bInitFromKilledParentParticles: int = 1488
   m_nSnapshotControlPoint: int = 1492
   m_nLimitPerUpdate: int = 1496
   m_bForceEmitOnFirstUpdate: int = 1500
   m_bForceEmitOnLastUpdate: int = 1501



class C_OP_NoiseEmitter:

   m_flEmissionDuration: int = 448
   m_flStartTime: int = 452
   m_flEmissionScale: int = 456
   m_nScaleControlPoint: int = 460
   m_nScaleControlPointField: int = 464
   m_nWorldNoisePoint: int = 468
   m_bAbsVal: int = 472
   m_bAbsValInv: int = 473
   m_flOffset: int = 476
   m_flOutputMin: int = 480
   m_flOutputMax: int = 484
   m_flNoiseScale: int = 488
   m_flWorldNoiseScale: int = 492
   m_vecOffsetLoc: int = 496
   m_flWorldTimeScale: int = 508



class C_OP_MaintainEmitter:

   m_nParticlesToMaintain: int = 448
   m_flStartTime: int = 792
   m_flEmissionDuration: int = 800
   m_flEmissionRate: int = 1144
   m_nSnapshotControlPoint: int = 1148
   m_bEmitInstantaneously: int = 1152
   m_bFinalEmitOnStop: int = 1153
   m_flScale: int = 1160



class C_OP_RandomForce:

   m_MinForce: int = 464
   m_MaxForce: int = 476



class C_OP_CPVelocityForce:

   m_nControlPointNumber: int = 464
   m_flScale: int = 472



class C_OP_ParentVortices:

   m_flForceScale: int = 464
   m_vecTwistAxis: int = 468
   m_bFlipBasedOnYaw: int = 480



class C_OP_TwistAroundAxis:

   m_fForceAmount: int = 464
   m_TwistAxis: int = 468
   m_bLocalSpace: int = 480
   m_nControlPointNumber: int = 484



class C_OP_AttractToControlPoint:

   m_vecComponentScale: int = 464
   m_fForceAmount: int = 480
   m_fFalloffPower: int = 824
   m_TransformInput: int = 832
   m_fForceAmountMin: int = 936
   m_bApplyMinForce: int = 1280



class C_OP_ForceBasedOnDistanceToPlane:

   m_flMinDist: int = 464
   m_vecForceAtMinDist: int = 468
   m_flMaxDist: int = 480
   m_vecForceAtMaxDist: int = 484
   m_vecPlaneNormal: int = 496
   m_nControlPointNumber: int = 508
   m_flExponent: int = 512



class C_OP_TimeVaryingForce:

   m_flStartLerpTime: int = 464
   m_StartingForce: int = 468
   m_flEndLerpTime: int = 480
   m_EndingForce: int = 484



class C_OP_TurbulenceForce:

   m_flNoiseCoordScale0: int = 464
   m_flNoiseCoordScale1: int = 468
   m_flNoiseCoordScale2: int = 472
   m_flNoiseCoordScale3: int = 476
   m_vecNoiseAmount0: int = 480
   m_vecNoiseAmount1: int = 492
   m_vecNoiseAmount2: int = 504
   m_vecNoiseAmount3: int = 516



class C_OP_CurlNoiseForce:

   m_nNoiseType: int = 464
   m_vecNoiseFreq: int = 472
   m_vecNoiseScale: int = 2096
   m_vecOffset: int = 3720
   m_vecOffsetRate: int = 5344
   m_flWorleySeed: int = 6968
   m_flWorleyJitter: int = 7312



class C_OP_PerParticleForce:

   m_flForceScale: int = 464
   m_vForce: int = 808
   m_nCP: int = 2432



class C_OP_WindForce:

   m_vForce: int = 464



class C_OP_ExternalWindForce:

   m_vecSamplePosition: int = 464
   m_vecScale: int = 2088
   m_bSampleWind: int = 3712
   m_bSampleWater: int = 3713
   m_bDampenNearWaterPlane: int = 3714
   m_bSampleGravity: int = 3715
   m_vecGravityForce: int = 3720
   m_bUseBasicMovementGravity: int = 5344
   m_flLocalGravityScale: int = 5352
   m_flLocalBuoyancyScale: int = 5696
   m_vecBuoyancyForce: int = 6040



class C_OP_ExternalGameImpulseForce:

   m_flForceScale: int = 464
   m_bRopes: int = 808
   m_bRopesZOnly: int = 809
   m_bExplosions: int = 810
   m_bParticles: int = 811



class C_OP_LocalAccelerationForce:

   m_nCP: int = 464
   m_nScaleCP: int = 468
   m_vecAccel: int = 472



class C_OP_DensityForce:

   m_flRadiusScale: int = 464
   m_flForceScale: int = 468
   m_flTargetDensity: int = 472



class C_OP_BasicMovement:

   m_Gravity: int = 448
   m_fDrag: int = 2072
   m_nMaxConstraintPasses: int = 2416



class C_OP_FadeAndKill:

   m_flStartFadeInTime: int = 448
   m_flEndFadeInTime: int = 452
   m_flStartFadeOutTime: int = 456
   m_flEndFadeOutTime: int = 460
   m_flStartAlpha: int = 464
   m_flEndAlpha: int = 468
   m_bForcePreserveParticleOrder: int = 472



class C_OP_FadeAndKillForTracers:

   m_flStartFadeInTime: int = 448
   m_flEndFadeInTime: int = 452
   m_flStartFadeOutTime: int = 456
   m_flEndFadeOutTime: int = 460
   m_flStartAlpha: int = 464
   m_flEndAlpha: int = 468



class C_OP_FadeIn:

   m_flFadeInTimeMin: int = 448
   m_flFadeInTimeMax: int = 452
   m_flFadeInTimeExp: int = 456
   m_bProportional: int = 460



class C_OP_FadeOut:

   m_flFadeOutTimeMin: int = 448
   m_flFadeOutTimeMax: int = 452
   m_flFadeOutTimeExp: int = 456
   m_flFadeBias: int = 460
   m_bProportional: int = 512
   m_bEaseInAndOut: int = 513



class C_OP_FadeInSimple:

   m_flFadeInTime: int = 448
   m_nFieldOutput: int = 452



class C_OP_FadeOutSimple:

   m_flFadeOutTime: int = 448
   m_nFieldOutput: int = 452



class C_OP_ClampScalar:

   m_nFieldOutput: int = 448
   m_flOutputMin: int = 456
   m_flOutputMax: int = 800



class C_OP_ClampVector:

   m_nFieldOutput: int = 448
   m_vecOutputMin: int = 456
   m_vecOutputMax: int = 2080



class C_OP_OscillateScalar:

   m_RateMin: int = 448
   m_RateMax: int = 452
   m_FrequencyMin: int = 456
   m_FrequencyMax: int = 460
   m_nField: int = 464
   m_bProportional: int = 468
   m_bProportionalOp: int = 469
   m_flStartTime_min: int = 472
   m_flStartTime_max: int = 476
   m_flEndTime_min: int = 480
   m_flEndTime_max: int = 484
   m_flOscMult: int = 488
   m_flOscAdd: int = 492



class C_OP_OscillateScalarSimple:

   m_Rate: int = 448
   m_Frequency: int = 452
   m_nField: int = 456
   m_flOscMult: int = 460
   m_flOscAdd: int = 464



class C_OP_OscillateVector:

   m_RateMin: int = 448
   m_RateMax: int = 460
   m_FrequencyMin: int = 472
   m_FrequencyMax: int = 484
   m_nField: int = 496
   m_bProportional: int = 500
   m_bProportionalOp: int = 501
   m_bOffset: int = 502
   m_flStartTime_min: int = 504
   m_flStartTime_max: int = 508
   m_flEndTime_min: int = 512
   m_flEndTime_max: int = 516
   m_flOscMult: int = 520
   m_flOscAdd: int = 864
   m_flRateScale: int = 1208



class C_OP_OscillateVectorSimple:

   m_Rate: int = 448
   m_Frequency: int = 460
   m_nField: int = 472
   m_flOscMult: int = 476
   m_flOscAdd: int = 480
   m_bOffset: int = 484



class C_OP_DifferencePreviousParticle:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468
   m_nSetMethod: int = 472
   m_bActiveRange: int = 476
   m_bSetPreviousParticle: int = 477



class C_OP_PointVectorAtNextParticle:

   m_nFieldOutput: int = 448
   m_flInterpolation: int = 456



class C_OP_RemapScalar:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468
   m_bOldCode: int = 472



class C_OP_RemapDensityToVector:

   m_flRadiusScale: int = 448
   m_nFieldOutput: int = 452
   m_flDensityMin: int = 456
   m_flDensityMax: int = 460
   m_vecOutputMin: int = 464
   m_vecOutputMax: int = 476
   m_bUseParentDensity: int = 488
   m_nVoxelGridResolution: int = 492



class C_OP_Diffusion:

   m_flRadiusScale: int = 448
   m_nFieldOutput: int = 452
   m_nVoxelGridResolution: int = 456



class C_OP_RemapScalarEndCap:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468



class C_OP_ReinitializeScalarEndCap:

   m_nFieldOutput: int = 448
   m_flOutputMin: int = 452
   m_flOutputMax: int = 456



class C_OP_RemapScalarOnceTimed:

   m_bProportional: int = 448
   m_nFieldInput: int = 452
   m_nFieldOutput: int = 456
   m_flInputMin: int = 460
   m_flInputMax: int = 464
   m_flOutputMin: int = 468
   m_flOutputMax: int = 472
   m_flRemapTime: int = 476



class C_OP_RemapParticleCountOnScalarEndCap:

   m_nFieldOutput: int = 448
   m_nInputMin: int = 452
   m_nInputMax: int = 456
   m_flOutputMin: int = 460
   m_flOutputMax: int = 464
   m_bBackwards: int = 468
   m_nSetMethod: int = 472



class C_OP_RemapParticleCountToScalar:

   m_nFieldOutput: int = 448
   m_nInputMin: int = 456
   m_nInputMax: int = 800
   m_flOutputMin: int = 1144
   m_flOutputMax: int = 1488
   m_bActiveRange: int = 1832
   m_nSetMethod: int = 1836



class C_OP_RemapVisibilityScalar:

   m_nFieldInput: int = 448
   m_nFieldOutput: int = 452
   m_flInputMin: int = 456
   m_flInputMax: int = 460
   m_flOutputMin: int = 464
   m_flOutputMax: int = 468
   m_flRadiusScale: int = 472



class C_OP_RemapTransformVisibilityToScalar:

   m_nSetMethod: int = 448
   m_TransformInput: int = 456
   m_nFieldOutput: int = 560
   m_flInputMin: int = 564
   m_flInputMax: int = 568
   m_flOutputMin: int = 572
   m_flOutputMax: int = 576
   m_flRadius: int = 580



class C_OP_RemapTransformVisibilityToVector:

   m_nSetMethod: int = 448
   m_TransformInput: int = 456
   m_nFieldOutput: int = 560
   m_flInputMin: int = 564
   m_flInputMax: int = 568
   m_vecOutputMin: int = 572
   m_vecOutputMax: int = 584
   m_flRadius: int = 596



class C_OP_LerpScalar:

   m_nFieldOutput: int = 448
   m_flOutput: int = 456
   m_flStartTime: int = 800
   m_flEndTime: int = 804



class C_OP_LerpEndCapScalar:

   m_nFieldOutput: int = 448
   m_flOutput: int = 452
   m_flLerpTime: int = 456



class C_OP_LerpEndCapVector:

   m_nFieldOutput: int = 448
   m_vecOutput: int = 452
   m_flLerpTime: int = 464



class C_OP_LerpVector:

   m_nFieldOutput: int = 448
   m_vecOutput: int = 452
   m_flStartTime: int = 464
   m_flEndTime: int = 468
   m_nSetMethod: int = 472



class C_OP_LerpToOtherAttribute:

   m_flInterpolation: int = 448
   m_nFieldInputFrom: int = 792
   m_nFieldInput: int = 796
   m_nFieldOutput: int = 800



class C_OP_RemapSpeed:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 452
   m_flInputMax: int = 456
   m_flOutputMin: int = 460
   m_flOutputMax: int = 464
   m_nSetMethod: int = 468
   m_bIgnoreDelta: int = 472



class C_OP_RemapVectortoCP:

   m_nOutControlPointNumber: int = 448
   m_nFieldInput: int = 452
   m_nParticleNumber: int = 456



class C_OP_RampScalarLinear:

   m_RateMin: int = 448
   m_RateMax: int = 452
   m_flStartTime_min: int = 456
   m_flStartTime_max: int = 460
   m_flEndTime_min: int = 464
   m_flEndTime_max: int = 468
   m_nField: int = 512
   m_bProportionalOp: int = 516



class C_OP_RampScalarSpline:

   m_RateMin: int = 448
   m_RateMax: int = 452
   m_flStartTime_min: int = 456
   m_flStartTime_max: int = 460
   m_flEndTime_min: int = 464
   m_flEndTime_max: int = 468
   m_flBias: int = 472
   m_nField: int = 512
   m_bProportionalOp: int = 516
   m_bEaseOut: int = 517



class C_OP_RampScalarLinearSimple:

   m_Rate: int = 448
   m_flStartTime: int = 452
   m_flEndTime: int = 456
   m_nField: int = 496



class C_OP_RampScalarSplineSimple:

   m_Rate: int = 448
   m_flStartTime: int = 452
   m_flEndTime: int = 456
   m_nField: int = 496
   m_bEaseOut: int = 500



class C_OP_ChladniWave:

   m_nFieldOutput: int = 448
   m_flInputMin: int = 456
   m_flInputMax: int = 800
   m_flOutputMin: int = 1144
   m_flOutputMax: int = 1488
   m_vecWaveLength: int = 1832
   m_vecHarmonics: int = 3456
   m_nSetMethod: int = 5080
   m_nLocalSpaceControlPoint: int = 5084
   m_b3D: int = 5088



class C_OP_Noise:

   m_nFieldOutput: int = 448
   m_flOutputMin: int = 452
   m_flOutputMax: int = 456
   m_fl4NoiseScale: int = 460
   m_bAdditive: int = 464
   m_flNoiseAnimationTimeScale: int = 468



class C_OP_VectorNoise:

   m_nFieldOutput: int = 448
   m_vecOutputMin: int = 452
   m_vecOutputMax: int = 464
   m_fl4NoiseScale: int = 476
   m_bAdditive: int = 480
   m_bOffset: int = 481
   m_flNoiseAnimationTimeScale: int = 484



class C_OP_Decay:

   m_bRopeDecay: int = 448
   m_bForcePreserveParticleOrder: int = 449



class C_OP_DecayOffscreen:

   m_flOffscreenTime: int = 448



class C_OP_EndCapTimedFreeze:

   m_flFreezeTime: int = 448



class C_OP_EndCapTimedDecay:

   m_flDecayTime: int = 448



class C_OP_VelocityDecay:

   m_flMinVelocity: int = 448



class C_OP_AlphaDecay:

   m_flMinAlpha: int = 448



class C_OP_RadiusDecay:

   m_flMinRadius: int = 448



class C_OP_DecayMaintainCount:

   m_nParticlesToMaintain: int = 448
   m_flDecayDelay: int = 452
   m_nSnapshotControlPoint: int = 456
   m_bLifespanDecay: int = 460
   m_flScale: int = 464
   m_bKillNewest: int = 808



class C_OP_DecayClampCount:

   m_nCount: int = 448



class C_OP_Cull:

   m_flCullPerc: int = 448
   m_flCullStart: int = 452
   m_flCullEnd: int = 456
   m_flCullExp: int = 460



class CGeneralSpin:

   m_nSpinRateDegrees: int = 448
   m_nSpinRateMinDegrees: int = 452
   m_fSpinRateStopTime: int = 460



class C_OP_InterpolateRadius:

   m_flStartTime: int = 448
   m_flEndTime: int = 452
   m_flStartScale: int = 456
   m_flEndScale: int = 460
   m_bEaseInAndOut: int = 464
   m_flBias: int = 468



class C_OP_ColorInterpolate:

   m_ColorFade: int = 448
   m_flFadeStartTime: int = 464
   m_flFadeEndTime: int = 468
   m_nFieldOutput: int = 472
   m_bEaseInOut: int = 476
   m_bUseNewCode: int = 477