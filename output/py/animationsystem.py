



class ScriptInfo_t:

   m_code: int = 0
   m_paramsModified: int = 8
   m_proxyReadParams: int = 32
   m_proxyWriteParams: int = 56
   m_eScriptType: int = 80



class CAnimScriptManager:

   m_scriptInfo: int = 16



class CStateActionUpdater:

   m_pAction: int = 0
   m_eBehavior: int = 8



class CTransitionUpdateData:

   m_srcStateIndex: int = 0
   m_destStateIndex: int = 1
   m_bDisabled: int = 0



class CStateUpdateData:

   m_name: int = 0
   m_hScript: int = 8
   m_transitionIndices: int = 16
   m_actions: int = 40
   m_stateID: int = 64
   m_bIsStartState: int = 0
   m_bIsEndState: int = 0
   m_bIsPassthrough: int = 0



class CAnimStateMachineUpdater:

   m_states: int = 8
   m_transitions: int = 32
   m_startStateIndex: int = 80



class CAnimUpdateNodeRef:

   m_nodeIndex: int = 8



class CAnimUpdateNodeBase:

   m_nodePath: int = 24
   m_networkMode: int = 72
   m_name: int = 80



class CBinaryUpdateNode:

   m_pChild1: int = 88
   m_pChild2: int = 104
   m_timingBehavior: int = 120
   m_flTimingBlend: int = 124
   m_bResetChild1: int = 128
   m_bResetChild2: int = 129



class CBlendUpdateNode:

   m_children: int = 96
   m_sortedOrder: int = 120
   m_targetValues: int = 144
   m_blendValueSource: int = 172
   m_paramIndex: int = 176
   m_damping: int = 184
   m_blendKeyType: int = 200
   m_bLockBlendOnReset: int = 204
   m_bSyncCycles: int = 205
   m_bLoop: int = 206
   m_bLockWhenWaning: int = 207



class BlendItem_t:

   m_tags: int = 0
   m_pChild: int = 24
   m_hSequence: int = 40
   m_vPos: int = 44
   m_flDuration: int = 52
   m_bUseCustomDuration: int = 56



class CBlend2DUpdateNode:

   m_items: int = 96
   m_tags: int = 120
   m_paramSpans: int = 144
   m_nodeItemIndices: int = 168
   m_damping: int = 192
   m_blendSourceX: int = 208
   m_paramX: int = 212
   m_blendSourceY: int = 216
   m_paramY: int = 220
   m_eBlendMode: int = 224
   m_playbackSpeed: int = 228
   m_bLoop: int = 232
   m_bLockBlendOnReset: int = 233
   m_bLockWhenWaning: int = 234
   m_bAnimEventsAndTagsOnMostWeightedOnly: int = 235



class CBoneMaskUpdateNode:

   m_nWeightListIndex: int = 140
   m_flRootMotionBlend: int = 144
   m_blendSpace: int = 148
   m_footMotionTiming: int = 152
   m_bUseBlendScale: int = 156
   m_blendValueSource: int = 160
   m_hBlendParameter: int = 164



class CChoiceUpdateNode:

   m_children: int = 88
   m_weights: int = 112
   m_blendTimes: int = 136
   m_choiceMethod: int = 160
   m_choiceChangeMethod: int = 164
   m_blendMethod: int = 168
   m_blendTime: int = 172
   m_bCrossFade: int = 176
   m_bResetChosen: int = 177
   m_bDontResetSameSelection: int = 178



class CDirectPlaybackTagData:

   m_sequenceName: int = 0
   m_tags: int = 8



class FootFixedData_t:

   m_vToeOffset: int = 0
   m_vHeelOffset: int = 16
   m_nTargetBoneIndex: int = 32
   m_nAnkleBoneIndex: int = 36
   m_nIKAnchorBoneIndex: int = 40
   m_ikChainIndex: int = 44
   m_flMaxIKLength: int = 48
   m_nFootIndex: int = 52
   m_nTagIndex: int = 56
   m_flMaxRotationLeft: int = 60
   m_flMaxRotationRight: int = 64



class TraceSettings_t:

   m_flTraceHeight: int = 0
   m_flTraceRadius: int = 4



class FootFixedSettings:

   m_traceSettings: int = 0
   m_vFootBaseBindPosePositionMS: int = 16
   m_flFootBaseLength: int = 32
   m_flMaxRotationLeft: int = 36
   m_flMaxRotationRight: int = 40
   m_footstepLandedTagIndex: int = 44
   m_bEnableTracing: int = 48
   m_flTraceAngleBlend: int = 52
   m_nDisableTagIndex: int = 56
   m_nFootIndex: int = 60



class FootStepTrigger:

   m_tags: int = 0
   m_nFootIndex: int = 24
   m_triggerPhase: int = 28



class CLeanMatrixUpdateNode:

   m_frameCorners: int = 92
   m_poses: int = 128
   m_damping: int = 168
   m_blendSource: int = 184
   m_paramIndex: int = 188
   m_verticalAxis: int = 192
   m_horizontalAxis: int = 204
   m_hSequence: int = 216
   m_flMaxValue: int = 220
   m_nSequenceMaxFrame: int = 224



class CMotionGraphUpdateNode:

   m_pMotionGraph: int = 88



class CMotionMatchingUpdateNode:

   m_dataSet: int = 88
   m_metrics: int = 120
   m_weights: int = 144
   m_bSearchEveryTick: int = 224
   m_flSearchInterval: int = 228
   m_bSearchWhenClipEnds: int = 232
   m_bSearchWhenGoalChanges: int = 233
   m_blendCurve: int = 236
   m_flSampleRate: int = 244
   m_flBlendTime: int = 248
   m_bLockClipWhenWaning: int = 252
   m_flSelectionThreshold: int = 256
   m_flReselectionTimeWindow: int = 260
   m_bEnableRotationCorrection: int = 264
   m_bGoalAssist: int = 265
   m_flGoalAssistDistance: int = 268
   m_flGoalAssistTolerance: int = 272
   m_distanceScale_Damping: int = 280
   m_flDistanceScale_OuterRadius: int = 296
   m_flDistanceScale_InnerRadius: int = 300
   m_flDistanceScale_MaxScale: int = 304
   m_flDistanceScale_MinScale: int = 308
   m_bEnableDistanceScaling: int = 312



class CSelectorUpdateNode:

   m_children: int = 88
   m_tags: int = 112
   m_blendCurve: int = 140
   m_flBlendTime: int = 148
   m_hParameter: int = 156
   m_eTagBehavior: int = 160
   m_bResetOnChange: int = 164
   m_bSyncCyclesOnChange: int = 165



class CSequenceUpdateNode:

   m_paramSpans: int = 96
   m_tags: int = 120
   m_hSequence: int = 148
   m_playbackSpeed: int = 152
   m_duration: int = 156
   m_bLoop: int = 160



class CSingleFrameUpdateNode:

   m_actions: int = 88
   m_hPoseCacheHandle: int = 112
   m_hSequence: int = 116
   m_flCycle: int = 120



class CSkeletalInputUpdateNode:

   m_fixedOpData: int = 88



class CSolveIKTargetHandle_t:

   m_positionHandle: int = 0
   m_orientationHandle: int = 2



class StanceInfo_t:

   m_vPosition: int = 0
   m_flDirection: int = 12



class CStateNodeTransitionData:

   m_curve: int = 0
   m_blendDuration: int = 8
   m_resetCycleValue: int = 16
   m_bReset: int = 0
   m_resetCycleOption: int = 0



class CStateNodeStateData:

   m_pChild: int = 0
   m_bExclusiveRootMotion: int = 0



class CStateMachineUpdateNode:

   m_stateMachine: int = 104
   m_stateData: int = 192
   m_transitionData: int = 216
   m_bBlockWaningTags: int = 244
   m_bLockStateWhenWaning: int = 245



class CSubtractUpdateNode:

   m_footMotionTiming: int = 140
   m_bApplyToFootMotion: int = 144
   m_bApplyChannelsSeparately: int = 145
   m_bUseModelSpace: int = 146



class TwoBoneIKSettings_t:

   m_endEffectorType: int = 0
   m_endEffectorAttachment: int = 16
   m_targetType: int = 144
   m_targetAttachment: int = 160
   m_targetBoneIndex: int = 288
   m_hPositionParam: int = 292
   m_hRotationParam: int = 294
   m_bAlwaysUseFallbackHinge: int = 296
   m_vLsFallbackHingeAxis: int = 304
   m_nFixedBoneIndex: int = 320
   m_nMiddleBoneIndex: int = 324
   m_nEndBoneIndex: int = 328
   m_bMatchTargetOrientation: int = 332
   m_bConstrainTwist: int = 333
   m_flMaxTwist: int = 336



class CUnaryUpdateNode:

   m_pChildNode: int = 88



class CWayPointHelperUpdateNode:

   m_flStartCycle: int = 108
   m_flEndCycle: int = 112
   m_bOnlyGoals: int = 116
   m_bPreventOvershoot: int = 117
   m_bPreventUndershoot: int = 118



class TagSpan_t:

   m_tagIndex: int = 0
   m_startCycle: int = 4
   m_endCycle: int = 8



class CAnimNodePath:

   m_path: int = 0
   m_nCount: int = 44



class ConfigIndex:

   m_nGroup: int = 0
   m_nConfig: int = 2



class MotionIndex:

   m_nGroup: int = 0
   m_nMotion: int = 2



class CMotionGraphConfig:

   m_paramValues: int = 0
   m_flDuration: int = 16
   m_nMotionIndex: int = 20
   m_nSampleStart: int = 24
   m_nSampleCount: int = 28



class CPoseHandle:

   m_nIndex: int = 0
   m_eType: int = 2



class CAnimationGraphVisualizerPrimitiveBase:

   m_Type: int = 8
   m_OwningAnimNodePaths: int = 12
   m_nOwningAnimNodePathCount: int = 56



class CAnimationGraphVisualizerText:

   m_vWsPosition: int = 64
   m_Color: int = 80
   m_Text: int = 88



class CAnimationGraphVisualizerSphere:

   m_vWsPosition: int = 64
   m_flRadius: int = 80
   m_Color: int = 84



class CAnimationGraphVisualizerLine:

   m_vWsPositionStart: int = 64
   m_vWsPositionEnd: int = 80
   m_Color: int = 96



class CAnimationGraphVisualizerPie:

   m_vWsCenter: int = 64
   m_vWsStart: int = 80
   m_vWsEnd: int = 96
   m_Color: int = 112



class CAnimationGraphVisualizerAxis:

   m_xWsTransform: int = 64
   m_flAxisSize: int = 96



class IKBoneNameAndIndex_t:

   m_Name: int = 0



class IKSolverSettings_t:

   m_SolverType: int = 0
   m_nNumIterations: int = 4



class IKTargetSettings_t:

   m_TargetSource: int = 0
   m_Bone: int = 8
   m_AnimgraphParameterNamePosition: int = 24
   m_AnimgraphParameterNameOrientation: int = 28
   m_TargetCoordSystem: int = 32



class CAnimGraphNetworkSettings:

   m_bNetworkingEnabled: int = 32



class CActionComponentUpdater:

   m_actions: int = 48



class CAddUpdateNode:

   m_footMotionTiming: int = 140
   m_bApplyToFootMotion: int = 144
   m_bApplyChannelsSeparately: int = 145
   m_bUseModelSpace: int = 146



class CAimMatrixUpdateNode:

   m_opFixedSettings: int = 112
   m_target: int = 328
   m_paramIndex: int = 332
   m_hSequence: int = 336
   m_bResetChild: int = 340
   m_bLockWhenWaning: int = 341



class CCycleControlUpdateNode:

   m_valueSource: int = 104
   m_paramIndex: int = 108



class CCycleControlClipUpdateNode:

   m_tags: int = 96
   m_hSequence: int = 124
   m_duration: int = 128
   m_valueSource: int = 132
   m_paramIndex: int = 136



class CDirectionalBlendUpdateNode:

   m_hSequences: int = 92
   m_damping: int = 128
   m_blendValueSource: int = 144
   m_paramIndex: int = 148
   m_playbackSpeed: int = 152
   m_duration: int = 156
   m_bLoop: int = 160
   m_bLockBlendOnReset: int = 161



class CDirectPlaybackUpdateNode:

   m_bFinishEarly: int = 108
   m_bResetOnFinish: int = 109
   m_allTags: int = 112



class CFollowPathUpdateNode:

   m_flBlendOutTime: int = 108
   m_bBlockNonPathMovement: int = 112
   m_bStopFeetAtGoal: int = 113
   m_bScaleSpeed: int = 114
   m_flScale: int = 116
   m_flMinAngle: int = 120
   m_flMaxAngle: int = 124
   m_flSpeedScaleBlending: int = 128
   m_turnDamping: int = 136
   m_facingTarget: int = 152
   m_hParam: int = 156
   m_flTurnToFaceOffset: int = 160
   m_bTurnToFace: int = 164



class CFollowAttachmentUpdateNode:

   m_opFixedData: int = 112



class CFootAdjustmentUpdateNode:

   m_clips: int = 112
   m_hBasePoseCacheHandle: int = 136
   m_facingTarget: int = 140
   m_flTurnTimeMin: int = 144
   m_flTurnTimeMax: int = 148
   m_flStepHeightMax: int = 152
   m_flStepHeightMaxAngle: int = 156
   m_bResetChild: int = 160
   m_bAnimationDriven: int = 161



class CFootLockUpdateNode:

   m_opFixedSettings: int = 104
   m_footSettings: int = 208
   m_hipShiftDamping: int = 232
   m_rootHeightDamping: int = 248
   m_flStrideCurveScale: int = 264
   m_flStrideCurveLimitScale: int = 268
   m_flStepHeightIncreaseScale: int = 272
   m_flStepHeightDecreaseScale: int = 276
   m_flHipShiftScale: int = 280
   m_flBlendTime: int = 284
   m_flMaxRootHeightOffset: int = 288
   m_flMinRootHeightOffset: int = 292
   m_flTiltPlanePitchSpringStrength: int = 296
   m_flTiltPlaneRollSpringStrength: int = 300
   m_bApplyFootRotationLimits: int = 304
   m_bApplyHipShift: int = 305
   m_bModulateStepHeight: int = 306
   m_bResetChild: int = 307
   m_bEnableVerticalCurvedPaths: int = 308
   m_bEnableRootHeightDamping: int = 309



class CFootPinningUpdateNode:

   m_poseOpFixedData: int = 112
   m_eTimingSource: int = 160
   m_params: int = 168
   m_bResetChild: int = 192



class CFootStepTriggerUpdateNode:

   m_triggers: int = 104
   m_flTolerance: int = 132



class CHitReactUpdateNode:

   m_opFixedSettings: int = 104
   m_triggerParam: int = 180
   m_hitBoneParam: int = 182
   m_hitOffsetParam: int = 184
   m_hitDirectionParam: int = 186
   m_hitStrengthParam: int = 188
   m_flMinDelayBetweenHits: int = 192
   m_bResetChild: int = 196



class CJiggleBoneUpdateNode:

   m_opFixedData: int = 104



class CJumpHelperUpdateNode:

   m_hTargetParam: int = 168
   m_flOriginalJumpMovement: int = 172
   m_flOriginalJumpDuration: int = 184
   m_flJumpStartCycle: int = 188
   m_flJumpEndCycle: int = 192
   m_eCorrectionMethod: int = 196
   m_bTranslationAxis: int = 200
   m_bScaleSpeed: int = 203



class CLookAtUpdateNode:

   m_opFixedSettings: int = 112
   m_target: int = 312
   m_paramIndex: int = 316
   m_weightParamIndex: int = 318
   m_bResetChild: int = 320
   m_bLockWhenWaning: int = 321



class CMoverUpdateNode:

   m_damping: int = 112
   m_facingTarget: int = 128
   m_hMoveVecParam: int = 132
   m_hMoveHeadingParam: int = 134
   m_hTurnToFaceParam: int = 136
   m_flTurnToFaceOffset: int = 140
   m_flTurnToFaceLimit: int = 144
   m_bAdditive: int = 148
   m_bApplyMovement: int = 149
   m_bOrientMovement: int = 150
   m_bApplyRotation: int = 151
   m_bLimitOnly: int = 152



class CPathHelperUpdateNode:

   m_flStoppingRadius: int = 104
   m_flStoppingSpeedScale: int = 108



class CRagdollUpdateNode:

   m_nWeightListIndex: int = 104
   m_poseControlMethod: int = 108



class CSetFacingUpdateNode:

   m_facingMode: int = 104
   m_bResetChild: int = 108



class CSlowDownOnSlopesUpdateNode:

   m_flSlowDownStrength: int = 104



class CSolveIKChainUpdateNode:

   m_targetHandles: int = 104
   m_opFixedData: int = 128



class CSpeedScaleUpdateNode:

   m_paramIndex: int = 104



class CStanceOverrideUpdateNode:

   m_footStanceInfo: int = 104
   m_pStanceSourceNode: int = 128
   m_hParameter: int = 144
   m_eMode: int = 148



class CStanceScaleUpdateNode:

   m_hParam: int = 104



class CStopAtGoalUpdateNode:

   m_flOuterRadius: int = 108
   m_flInnerRadius: int = 112
   m_flMaxScale: int = 116
   m_flMinScale: int = 120
   m_damping: int = 128



class CTurnHelperUpdateNode:

   m_facingTarget: int = 108
   m_turnStartTimeOffset: int = 112
   m_turnDuration: int = 116
   m_bMatchChildDuration: int = 120
   m_manualTurnOffset: int = 124
   m_bUseManualTurnOffset: int = 128



class CTwoBoneIKUpdateNode:

   m_opFixedData: int = 112



class MoodAnimation_t:

   m_sName: int = 0
   m_flWeight: int = 8



class MoodAnimationLayer_t:

   m_sName: int = 0
   m_bActiveListening: int = 8
   m_bActiveTalking: int = 9
   m_layerAnimations: int = 16
   m_flIntensity: int = 40
   m_flDurationScale: int = 48
   m_bScaleWithInts: int = 56
   m_flNextStart: int = 60
   m_flStartOffset: int = 68
   m_flEndOffset: int = 76
   m_flFadeIn: int = 84
   m_flFadeOut: int = 88



class CMoodVData:

   m_sModelName: int = 0
   m_nMoodType: int = 224
   m_animationLayers: int = 232



class AnimationDecodeDebugDumpElement_t:

   m_nEntityIndex: int = 0
   m_modelName: int = 8
   m_poseParams: int = 16
   m_decodeOps: int = 40
   m_internalOps: int = 64
   m_decodedAnims: int = 88



class AnimationDecodeDebugDump_t:

   m_processingType: int = 0
   m_elems: int = 8



class AnimationSnapshotBase_t:

   m_flRealTime: int = 0
   m_rootToWorld: int = 16
   m_bBonesInWorldSpace: int = 64
   m_boneSetupMask: int = 72
   m_boneTransforms: int = 96
   m_flexControllers: int = 120
   m_SnapshotType: int = 144
   m_bHasDecodeDump: int = 148
   m_DecodeDump: int = 152



class AnimationSnapshot_t:

   m_nEntIndex: int = 272
   m_modelName: int = 280



class CAnimBoneDifference:

   m_name: int = 0
   m_parent: int = 16
   m_posError: int = 32
   m_bHasRotation: int = 44
   m_bHasMovement: int = 45



class CAnimMorphDifference:

   m_name: int = 0



class CAnimUserDifference:

   m_name: int = 0
   m_nType: int = 16



class CAnimEncodeDifference:

   m_boneArray: int = 0
   m_morphArray: int = 24
   m_userArray: int = 48
   m_bHasRotationBitArray: int = 72
   m_bHasMovementBitArray: int = 96
   m_bHasMorphBitArray: int = 120
   m_bHasUserBitArray: int = 144



class CAnimEventDefinition:

   m_nFrame: int = 8
   m_flCycle: int = 12
   m_EventData: int = 16
   m_sLegacyOptions: int = 32
   m_sEventName: int = 48



class CAnimMovement:

   endframe: int = 0
   motionflags: int = 4
   v0: int = 8
   v1: int = 12
   angle: int = 16
   vector: int = 20
   position: int = 32



class CAnimLocalHierarchy:

   m_sBone: int = 0
   m_sNewParent: int = 16
   m_nStartFrame: int = 32
   m_nPeakFrame: int = 36
   m_nTailFrame: int = 40
   m_nEndFrame: int = 44



class CAnimDecoder:

   m_szName: int = 0
   m_nVersion: int = 16
   m_nType: int = 20



class CAnimFrameSegment:

   m_nUniqueFrameIndex: int = 0
   m_nLocalElementMasks: int = 4
   m_nLocalChannel: int = 8
   m_container: int = 16



class CAnimFrameBlockAnim:

   m_nStartFrame: int = 0
   m_nEndFrame: int = 4
   m_segmentIndexArray: int = 8



class CAnimEncodedFrames:

   m_fileName: int = 0
   m_nFrames: int = 16
   m_nFramesPerBlock: int = 20
   m_frameblockArray: int = 24
   m_usageDifferences: int = 48



class CAnimDesc_Flag:

   m_bLooping: int = 0
   m_bAllZeros: int = 1
   m_bHidden: int = 2
   m_bDelta: int = 3
   m_bLegacyWorldspace: int = 4
   m_bModelDoc: int = 5
   m_bImplicitSeqIgnoreDelta: int = 6
   m_bAnimGraphAdditive: int = 7



class CAnimSequenceParams:

   m_flFadeInTime: int = 0
   m_flFadeOutTime: int = 4



class CAnimDesc:

   m_name: int = 0
   m_flags: int = 16
   fps: int = 24
   m_Data: int = 32
   m_movementArray: int = 248
   m_eventArray: int = 272
   m_activityArray: int = 296
   m_hierarchyArray: int = 320
   framestalltime: int = 344
   m_vecRootMin: int = 348
   m_vecRootMax: int = 360
   m_vecBoneWorldMin: int = 376
   m_vecBoneWorldMax: int = 400
   m_sequenceParams: int = 424



class CAnimActivity:

   m_name: int = 0
   m_nActivity: int = 16
   m_nFlags: int = 20
   m_nWeight: int = 24



class CAnimData:

   m_name: int = 16
   m_animArray: int = 32
   m_decoderArray: int = 56
   m_nMaxUniqueFrameIndex: int = 80
   m_segmentArray: int = 88



class CAnimBone:

   m_name: int = 0
   m_parent: int = 16
   m_pos: int = 20
   m_quat: int = 32
   m_scale: int = 48
   m_qAlignment: int = 52
   m_flags: int = 68



class CAnimUser:

   m_name: int = 0
   m_nType: int = 16



class CAnimDataChannelDesc:

   m_szChannelClass: int = 0
   m_szVariableName: int = 16
   m_nFlags: int = 32
   m_nType: int = 36
   m_szGrouping: int = 40
   m_szDescription: int = 56
   m_szElementNameArray: int = 72
   m_nElementIndexArray: int = 96
   m_nElementMaskArray: int = 120



class CAnimKeyData:

   m_name: int = 0
   m_boneArray: int = 16
   m_userArray: int = 40
   m_morphArray: int = 64
   m_nChannelElements: int = 88
   m_dataChannelArray: int = 96



class CAnimationGroup:

   m_nFlags: int = 16
   m_name: int = 24
   m_localHAnimArray_Handle: int = 96
   m_includedGroupArray_Handle: int = 120
   m_directHSeqGroup_Handle: int = 144
   m_decodeKey: int = 152
   m_szScripts: int = 272



class CSeqAutoLayerFlag:

   m_bPost: int = 0
   m_bSpline: int = 1
   m_bXFade: int = 2
   m_bNoBlend: int = 3
   m_bLocal: int = 4
   m_bPose: int = 5
   m_bFetchFrame: int = 6
   m_bSubtract: int = 7



class CSeqAutoLayer:

   m_nLocalReference: int = 0
   m_nLocalPose: int = 2
   m_flags: int = 4
   m_start: int = 12
   m_peak: int = 16
   m_tail: int = 20
   m_end: int = 24



class CSeqIKLock:

   m_flPosWeight: int = 0
   m_flAngleWeight: int = 4
   m_nLocalBone: int = 8
   m_bBonesOrientedAlongPositiveX: int = 10



class CSeqBoneMaskList:

   m_sName: int = 0
   m_nLocalBoneArray: int = 16
   m_flBoneWeightArray: int = 40
   m_flDefaultMorphCtrlWeight: int = 64
   m_morphCtrlWeightArray: int = 72



class CSeqScaleSet:

   m_sName: int = 0
   m_bRootOffset: int = 16
   m_vRootOffset: int = 20
   m_nLocalBoneArray: int = 32
   m_flBoneScaleArray: int = 56



class CSeqMultiFetchFlag:

   m_bRealtime: int = 0
   m_bCylepose: int = 1
   m_b0D: int = 2
   m_b1D: int = 3
   m_b2D: int = 4
   m_b2D_TRI: int = 5



class CSeqMultiFetch:

   m_flags: int = 0
   m_localReferenceArray: int = 8
   m_nGroupSize: int = 32
   m_nLocalPose: int = 40
   m_poseKeyArray0: int = 48
   m_poseKeyArray1: int = 72
   m_nLocalCyclePoseParameter: int = 96
   m_bCalculatePoseParameters: int = 100



class CSeqSeqDescFlag:

   m_bLooping: int = 0
   m_bSnap: int = 1
   m_bAutoplay: int = 2
   m_bPost: int = 3
   m_bHidden: int = 4
   m_bMulti: int = 5
   m_bLegacyDelta: int = 6
   m_bLegacyWorldspace: int = 7
   m_bLegacyCyclepose: int = 8
   m_bLegacyRealtime: int = 9
   m_bModelDoc: int = 10



class CSeqTransition:

   m_flFadeInTime: int = 0
   m_flFadeOutTime: int = 4



class CSeqS1SeqDesc:

   m_sName: int = 0
   m_flags: int = 16
   m_fetch: int = 32
   m_nLocalWeightlist: int = 136
   m_autoLayerArray: int = 144
   m_IKLockArray: int = 168
   m_transition: int = 192
   m_SequenceKeys: int = 200
   m_LegacyKeyValueText: int = 216
   m_activityArray: int = 232
   m_footMotion: int = 256



class CSeqSynthAnimDesc:

   m_sName: int = 0
   m_flags: int = 16
   m_transition: int = 28
   m_nLocalBaseReference: int = 36
   m_nLocalBoneMask: int = 38
   m_activityArray: int = 40



class CSeqCmdLayer:

   m_cmd: int = 0
   m_nLocalReference: int = 2
   m_nLocalBonemask: int = 4
   m_nDstResult: int = 6
   m_nSrcResult: int = 8
   m_bSpline: int = 10
   m_flVar1: int = 12
   m_flVar2: int = 16
   m_nLineNumber: int = 20



class CSeqPoseSetting:

   m_sPoseParameter: int = 0
   m_sAttachment: int = 16
   m_sReferenceSequence: int = 32
   m_flValue: int = 48
   m_bX: int = 52
   m_bY: int = 53
   m_bZ: int = 54
   m_eType: int = 56



class CSeqCmdSeqDesc:

   m_sName: int = 0
   m_flags: int = 16
   m_transition: int = 28
   m_nFrameRangeSequence: int = 36
   m_nFrameCount: int = 38
   m_flFPS: int = 40
   m_nSubCycles: int = 44
   m_numLocalResults: int = 46
   m_cmdLayerArray: int = 48
   m_eventArray: int = 72
   m_activityArray: int = 96
   m_poseSettingArray: int = 120



class CSeqPoseParamDesc:

   m_sName: int = 0
   m_flStart: int = 16
   m_flEnd: int = 20
   m_flLoop: int = 24
   m_bLooping: int = 28



class CSequenceGroupData:

   m_sName: int = 16
   m_nFlags: int = 32
   m_localSequenceNameArray: int = 40
   m_localS1SeqDescArray: int = 64
   m_localMultiSeqDescArray: int = 88
   m_localSynthAnimDescArray: int = 112
   m_localCmdSeqDescArray: int = 136
   m_localBoneMaskArray: int = 160
   m_localScaleSetArray: int = 184
   m_localBoneNameArray: int = 208
   m_localNodeName: int = 232
   m_localPoseParamArray: int = 248
   m_keyValues: int = 272
   m_localIKAutoplayLockArray: int = 288



class CCompressorGroup:

   m_nTotalElementCount: int = 0
   m_szChannelClass: int = 8
   m_szVariableName: int = 32
   m_nType: int = 56
   m_nFlags: int = 80
   m_szGrouping: int = 104
   m_nCompressorIndex: int = 128
   m_szElementNames: int = 152
   m_nElementUniqueID: int = 176
   m_nElementMask: int = 200
   m_vectorCompressor: int = 248
   m_quaternionCompressor: int = 272
   m_intCompressor: int = 296
   m_boolCompressor: int = 320
   m_colorCompressor: int = 344
   m_vector2DCompressor: int = 368
   m_vector4DCompressor: int = 392



class HSequence:

   m_Value: int = 0



class CAnimEnum:

   m_value: int = 0



class AnimNodeID:

   m_id: int = 0



class AnimNodeOutputID:

   m_id: int = 0



class AnimStateID:

   m_id: int = 0



class AnimParamID:

   m_id: int = 0



class AnimTagID:

   m_id: int = 0



class AnimComponentID:

   m_id: int = 0



class AnimScriptHandle:

   m_id: int = 0



class CAnimAttachment:

   m_influenceRotations: int = 0
   m_influenceOffsets: int = 48
   m_influenceIndices: int = 96
   m_influenceWeights: int = 108
   m_numInfluences: int = 120



class VPhysics2ShapeDef_t:

   m_spheres: int = 0
   m_capsules: int = 24
   m_hulls: int = 48
   m_meshes: int = 72
   m_CollisionAttributeIndices: int = 96



class VPhysXBodyPart_t:

   m_nFlags: int = 0
   m_flMass: int = 4
   m_rnShape: int = 8
   m_nCollisionAttributeIndex: int = 128
   m_nReserved: int = 130
   m_flInertiaScale: int = 132
   m_flLinearDamping: int = 136
   m_flAngularDamping: int = 140
   m_bOverrideMassCenter: int = 144
   m_vMassCenterOverride: int = 148



class VPhysXCollisionAttributes_t:

   m_CollisionGroup: int = 0
   m_InteractAs: int = 8
   m_InteractWith: int = 32
   m_InteractExclude: int = 56
   m_CollisionGroupString: int = 80
   m_InteractAsStrings: int = 88
   m_InteractWithStrings: int = 112
   m_InteractExcludeStrings: int = 136



class VPhysXRange_t:

   m_flMin: int = 0
   m_flMax: int = 4



class VPhysXConstraintParams_t:

   m_nType: int = 0
   m_nTranslateMotion: int = 1
   m_nRotateMotion: int = 2
   m_nFlags: int = 3
   m_anchor: int = 4
   m_axes: int = 28
   m_maxForce: int = 60
   m_maxTorque: int = 64
   m_linearLimitValue: int = 68
   m_linearLimitRestitution: int = 72
   m_linearLimitSpring: int = 76
   m_linearLimitDamping: int = 80
   m_twistLowLimitValue: int = 84
   m_twistLowLimitRestitution: int = 88
   m_twistLowLimitSpring: int = 92
   m_twistLowLimitDamping: int = 96
   m_twistHighLimitValue: int = 100
   m_twistHighLimitRestitution: int = 104
   m_twistHighLimitSpring: int = 108
   m_twistHighLimitDamping: int = 112
   m_swing1LimitValue: int = 116
   m_swing1LimitRestitution: int = 120
   m_swing1LimitSpring: int = 124
   m_swing1LimitDamping: int = 128
   m_swing2LimitValue: int = 132
   m_swing2LimitRestitution: int = 136
   m_swing2LimitSpring: int = 140
   m_swing2LimitDamping: int = 144
   m_goalPosition: int = 148
   m_goalOrientation: int = 160
   m_goalAngularVelocity: int = 176
   m_driveSpringX: int = 188
   m_driveSpringY: int = 192
   m_driveSpringZ: int = 196
   m_driveDampingX: int = 200
   m_driveDampingY: int = 204
   m_driveDampingZ: int = 208
   m_driveSpringTwist: int = 212
   m_driveSpringSwing: int = 216
   m_driveSpringSlerp: int = 220
   m_driveDampingTwist: int = 224
   m_driveDampingSwing: int = 228
   m_driveDampingSlerp: int = 232
   m_solverIterationCount: int = 236
   m_projectionLinearTolerance: int = 240
   m_projectionAngularTolerance: int = 244



class VPhysXConstraint2_t:

   m_nFlags: int = 0
   m_nParent: int = 4
   m_nChild: int = 6
   m_params: int = 8



class VPhysXJoint_t:

   m_nType: int = 0
   m_nBody1: int = 2
   m_nBody2: int = 4
   m_nFlags: int = 6
   m_Frame1: int = 16
   m_Frame2: int = 48
   m_bEnableCollision: int = 80
   m_bEnableLinearLimit: int = 81
   m_LinearLimit: int = 84
   m_bEnableLinearMotor: int = 92
   m_vLinearTargetVelocity: int = 96
   m_flMaxForce: int = 108
   m_bEnableSwingLimit: int = 112
   m_SwingLimit: int = 116
   m_bEnableTwistLimit: int = 124
   m_TwistLimit: int = 128
   m_bEnableAngularMotor: int = 136
   m_vAngularTargetVelocity: int = 140
   m_flMaxTorque: int = 152
   m_flLinearFrequency: int = 156
   m_flLinearDampingRatio: int = 160
   m_flAngularFrequency: int = 164
   m_flAngularDampingRatio: int = 168
   m_flFriction: int = 172



class PhysSoftbodyDesc_t:

   m_ParticleBoneHash: int = 0
   m_Particles: int = 24
   m_Springs: int = 48
   m_Capsules: int = 72
   m_InitPose: int = 96
   m_ParticleBoneName: int = 120



class VPhysXAggregateData_t:

   m_nFlags: int = 0
   m_nRefCounter: int = 2
   m_bonesHash: int = 8
   m_boneNames: int = 32
   m_indexNames: int = 56
   m_indexHash: int = 80
   m_bindPose: int = 104
   m_parts: int = 128
   m_constraints2: int = 152
   m_joints: int = 176
   m_pFeModel: int = 200
   m_boneParents: int = 208
   m_surfacePropertyHashes: int = 232
   m_collisionAttributes: int = 256
   m_debugPartNames: int = 280
   m_embeddedKeyvalues: int = 304



class CPhysSurfacePropertiesPhysics:

   m_friction: int = 0
   m_elasticity: int = 4
   m_density: int = 8
   m_thickness: int = 12
   m_softContactFrequency: int = 16
   m_softContactDampingRatio: int = 20
   m_wheelDrag: int = 24



class CPhysSurfacePropertiesAudio:

   m_reflectivity: int = 0
   m_hardnessFactor: int = 4
   m_roughnessFactor: int = 8
   m_roughThreshold: int = 12
   m_hardThreshold: int = 16
   m_hardVelocityThreshold: int = 20
   m_flStaticImpactVolume: int = 24
   m_flOcclusionFactor: int = 28



class CPhysSurfacePropertiesSoundNames:

   m_impactSoft: int = 0
   m_impactHard: int = 8
   m_scrapeSmooth: int = 16
   m_scrapeRough: int = 24
   m_bulletImpact: int = 32
   m_rolling: int = 40
   m_break: int = 48
   m_strain: int = 56



class CPhysSurfaceProperties:

   m_name: int = 0
   m_nameHash: int = 8
   m_baseNameHash: int = 12
   m_bHidden: int = 24
   m_description: int = 32
   m_physics: int = 40
   m_audioSounds: int = 72
   m_audioParams: int = 136



class CVPhysXSurfacePropertiesList:

   m_surfacePropertiesList: int = 0



class MaterialGroup_t:

   m_name: int = 0
   m_materials: int = 8



class ModelSkeletonData_t:

   m_boneName: int = 0
   m_nParent: int = 24
   m_boneSphere: int = 48
   m_nFlag: int = 72
   m_bonePosParent: int = 96
   m_boneRotParent: int = 120
   m_boneScaleParent: int = 144



class PermModelInfo_t:

   m_nFlags: int = 0
   m_vHullMin: int = 4
   m_vHullMax: int = 16
   m_vViewMin: int = 28
   m_vViewMax: int = 40
   m_flMass: int = 52
   m_vEyePosition: int = 56
   m_flMaxEyeDeflection: int = 68
   m_sSurfaceProperty: int = 72
   m_keyValueText: int = 80



class PermModelExtPart_t:

   m_Transform: int = 0
   m_Name: int = 32
   m_nParent: int = 40
   m_refModel: int = 48



class ModelBoneFlexDriverControl_t:

   m_nBoneComponent: int = 0
   m_flexController: int = 8
   m_flexControllerToken: int = 16
   m_flMin: int = 20
   m_flMax: int = 24



class ModelBoneFlexDriver_t:

   m_boneName: int = 0
   m_boneNameToken: int = 8
   m_controls: int = 16



class PermModelDataAnimatedMaterialAttribute_t:

   m_AttributeName: int = 0
   m_nNumChannels: int = 8



class PermModelData_t:

   m_name: int = 0
   m_modelInfo: int = 8
   m_ExtParts: int = 96
   m_refMeshes: int = 120
   m_refMeshGroupMasks: int = 144
   m_refPhysGroupMasks: int = 168
   m_refLODGroupMasks: int = 192
   m_lodGroupSwitchDistances: int = 216
   m_refPhysicsData: int = 240
   m_refPhysicsHitboxData: int = 264
   m_refAnimGroups: int = 288
   m_refSequenceGroups: int = 312
   m_meshGroups: int = 336
   m_materialGroups: int = 360
   m_nDefaultMeshGroupMask: int = 384
   m_modelSkeleton: int = 392
   m_remappingTable: int = 560
   m_remappingTableStarts: int = 584
   m_boneFlexDrivers: int = 608
   m_pModelConfigList: int = 632
   m_BodyGroupsHiddenInTools: int = 640
   m_refAnimIncludeModels: int = 664
   m_AnimatedMaterialAttributes: int = 688



class AttachmentHandle_t:

   m_Value: int = 0



class CModelConfigElement:

   m_ElementName: int = 8
   m_NestedElements: int = 16



class CModelConfigElement_AttachedModel:

   m_InstanceName: int = 72
   m_EntityClass: int = 80
   m_hModel: int = 88
   m_vOffset: int = 96
   m_aAngOffset: int = 108
   m_AttachmentName: int = 120
   m_LocalAttachmentOffsetName: int = 128
   m_AttachmentType: int = 136
   m_bBoneMergeFlex: int = 140
   m_bUserSpecifiedColor: int = 141
   m_bUserSpecifiedMaterialGroup: int = 142
   m_bAcceptParentMaterialDrivenDecals: int = 143
   m_BodygroupOnOtherModels: int = 144
   m_MaterialGroupOnOtherModels: int = 152



class CModelConfigElement_UserPick:

   m_Choices: int = 72



class CModelConfigElement_RandomPick:

   m_Choices: int = 72
   m_ChoiceWeights: int = 96



class CModelConfigElement_SetMaterialGroup:

   m_MaterialGroupName: int = 72



class CModelConfigElement_SetMaterialGroupOnAttachedModels:

   m_MaterialGroupName: int = 72



class CModelConfigElement_SetRenderColor:

   m_Color: int = 72



class CModelConfigElement_RandomColor:

   m_Gradient: int = 72



class CModelConfigElement_SetBodygroup:

   m_GroupName: int = 72
   m_nChoice: int = 80



class CModelConfigElement_SetBodygroupOnAttachedModels:

   m_GroupName: int = 72
   m_nChoice: int = 80



class CModelConfigElement_Command:

   m_Command: int = 72
   m_Args: int = 80



class CModelConfig:

   m_ConfigName: int = 0
   m_Elements: int = 8
   m_bTopLevel: int = 32



class CModelConfigList:

   m_bHideMaterialGroupInTools: int = 0
   m_bHideRenderColorInTools: int = 1
   m_Configs: int = 8



class CRenderBufferBinding:

   m_hBuffer: int = 0
   m_nBindOffsetBytes: int = 16



class SkeletonBoneBounds_t:

   m_vecCenter: int = 0
   m_vecSize: int = 12



class RenderSkeletonBone_t:

   m_boneName: int = 0
   m_parentName: int = 8
   m_invBindPose: int = 16
   m_bbox: int = 64
   m_flSphereRadius: int = 88



class CRenderSkeleton:

   m_bones: int = 0
   m_boneParents: int = 48
   m_nBoneWeightCount: int = 72



class CDrawCullingData:

   m_vConeApex: int = 0
   m_ConeAxis: int = 12
   m_ConeCutoff: int = 15



class CMaterialDrawDescriptor:

   m_nPrimitiveType: int = 0
   m_nBaseVertex: int = 4
   m_nVertexCount: int = 8
   m_nStartIndex: int = 12
   m_nIndexCount: int = 16
   m_flUvDensity: int = 20
   m_vTintColor: int = 24
   m_flAlpha: int = 36
   m_nFirstMeshlet: int = 44
   m_nNumMeshlets: int = 48
   m_indexBuffer: int = 184
   m_material: int = 224



class CMeshletDescriptor:

   m_PackedAABB: int = 0
   m_CullingData: int = 8



class CSceneObjectData:

   m_vMinBounds: int = 0
   m_vMaxBounds: int = 12
   m_drawCalls: int = 24
   m_drawBounds: int = 48
   m_meshlets: int = 72
   m_vTintColor: int = 96



class CAttachment:

   m_name: int = 0
   m_influenceNames: int = 8
   m_vInfluenceRotations: int = 32
   m_vInfluenceOffsets: int = 80
   m_influenceWeights: int = 116
   m_bInfluenceRootTransform: int = 128
   m_nInfluences: int = 131
   m_bIgnoreRotation: int = 132



class CHitBox:

   m_name: int = 0
   m_sSurfaceProperty: int = 8
   m_sBoneName: int = 16
   m_vMinBounds: int = 24
   m_vMaxBounds: int = 36
   m_flShapeRadius: int = 48
   m_nBoneNameHash: int = 52
   m_nGroupId: int = 56
   m_nShapeType: int = 60
   m_bTranslationOnly: int = 61
   m_CRC: int = 64
   m_cRenderColor: int = 68
   m_nHitBoxIndex: int = 72



class CHitBoxSet:

   m_name: int = 0
   m_nNameHash: int = 8
   m_HitBoxes: int = 16
   m_SourceFilename: int = 40



class CHitBoxSetList:

   m_HitBoxSets: int = 0



class CRenderMesh:

   m_sceneObjects: int = 16
   m_constraints: int = 160
   m_skeleton: int = 184



class CConstraintTarget:

   m_qOffset: int = 32
   m_vOffset: int = 48
   m_nBoneHash: int = 60
   m_sName: int = 64
   m_flWeight: int = 72
   m_bIsAttachment: int = 89



class CConstraintSlave:

   m_qBaseOrientation: int = 0
   m_vBasePosition: int = 16
   m_nBoneHash: int = 28
   m_flWeight: int = 32
   m_sName: int = 40



class CBaseConstraint:

   m_name: int = 40
   m_vUpVector: int = 48
   m_slaves: int = 64
   m_targets: int = 88



class CAimConstraint:

   m_qAimOffset: int = 112
   m_nUpType: int = 128



class CTwistConstraint:

   m_bInverse: int = 112
   m_qParentBindRotation: int = 128
   m_qChildBindRotation: int = 144



class CTiltTwistConstraint:

   m_nTargetAxis: int = 112
   m_nSlaveAxis: int = 116



class CMorphConstraint:

   m_sTargetMorph: int = 112
   m_nSlaveChannel: int = 120
   m_flMin: int = 124
   m_flMax: int = 128



class CBoneConstraintPoseSpaceMorph:

   m_sBoneName: int = 40
   m_sAttachmentName: int = 48
   m_outputMorph: int = 56
   m_inputList: int = 80
   m_bClamp: int = 104



class CBoneConstraintPoseSpaceMorph_Input_t:

   m_inputValue: int = 0
   m_outputWeightList: int = 16



class CBoneConstraintPoseSpaceBone:

   m_inputList: int = 112



class CBoneConstraintPoseSpaceBone_Input_t:

   m_inputValue: int = 0
   m_outputTransformList: int = 16



class CBoneConstraintDotToMorph:

   m_sBoneName: int = 40
   m_sTargetBoneName: int = 48
   m_sMorphChannelName: int = 56
   m_flRemap: int = 64



class CFlexOp:

   m_OpCode: int = 0
   m_Data: int = 4



class CFlexRule:

   m_nFlex: int = 0
   m_FlexOps: int = 8



class CFlexDesc:

   m_szFacs: int = 0



class CFlexController:

   m_szName: int = 0
   m_szType: int = 8
   min: int = 16
   max: int = 20



class CMorphBundleData:

   m_flULeftSrc: int = 0
   m_flVTopSrc: int = 4
   m_offsets: int = 8
   m_ranges: int = 32



class CMorphRectData:

   m_nXLeftDst: int = 0
   m_nYTopDst: int = 2
   m_flUWidthSrc: int = 4
   m_flVHeightSrc: int = 8
   m_bundleDatas: int = 16



class CMorphData:

   m_name: int = 0
   m_morphRectDatas: int = 8



class CMorphSetData:

   m_nWidth: int = 16
   m_nHeight: int = 20
   m_bundleTypes: int = 24
   m_morphDatas: int = 48
   m_pTextureAtlas: int = 72
   m_FlexDesc: int = 80
   m_FlexControllers: int = 104
   m_FlexRules: int = 128



class CAnimFoot:

   m_name: int = 0
   m_vBallOffset: int = 8
   m_vHeelOffset: int = 20
   m_ankleBoneIndex: int = 32
   m_toeBoneIndex: int = 36



class CAnimSkeleton:

   m_localSpaceTransforms: int = 16
   m_modelSpaceTransforms: int = 40
   m_boneNames: int = 64
   m_children: int = 88
   m_parents: int = 112
   m_feet: int = 136
   m_morphNames: int = 160
   m_lodBoneCounts: int = 184



class CFootDefinition:

   m_name: int = 0
   m_ankleBoneName: int = 8
   m_toeBoneName: int = 16
   m_vBallOffset: int = 24
   m_vHeelOffset: int = 36
   m_flFootLength: int = 48
   m_flBindPoseDirectionMS: int = 52
   m_flTraceHeight: int = 56
   m_flTraceRadius: int = 60



class CCycleBase:

   m_flCycle: int = 0



class CFootCycleDefinition:

   m_vStancePositionMS: int = 0
   m_vMidpointPositionMS: int = 12
   m_flStanceDirectionMS: int = 24
   m_vToStrideStartPos: int = 28
   m_stanceCycle: int = 40
   m_footLiftCycle: int = 44
   m_footOffCycle: int = 48
   m_footStrikeCycle: int = 52
   m_footLandCycle: int = 56



class CFootTrajectory:

   m_vOffset: int = 0
   m_flRotationOffset: int = 12
   m_flProgression: int = 16



class CFootTrajectories:

   m_trajectories: int = 0



class CFootStride:

   m_definition: int = 0
   m_trajectories: int = 64



class CFootMotion:

   m_strides: int = 0
   m_name: int = 24
   m_bAdditive: int = 32



class CFingerSource:

   m_nFingerIndex: int = 0
   m_flFingerWeight: int = 4



class CFingerBone:

   m_boneName: int = 0
   m_hingeAxis: int = 8
   m_vCapsulePos1: int = 20
   m_vCapsulePos2: int = 32
   m_flMinAngle: int = 44
   m_flMaxAngle: int = 48
   m_flRadius: int = 52



class CFingerChain:

   m_targets: int = 0
   m_bones: int = 24
   m_name: int = 48
   m_tipParentBoneName: int = 56
   m_vTipOffset: int = 64
   m_metacarpalBoneName: int = 80
   m_vSplayHingeAxis: int = 88
   m_flSplayMinAngle: int = 100
   m_flSplayMaxAngle: int = 104
   m_flFingerScaleRatio: int = 108



class CWristBone:

   m_name: int = 0
   m_vForwardLS: int = 8
   m_vUpLS: int = 20
   m_vOffset: int = 32



class CVrSkeletalInputSettings:

   m_wristBones: int = 0
   m_fingers: int = 24
   m_name: int = 48
   m_outerKnuckle1: int = 56
   m_outerKnuckle2: int = 64
   m_eHand: int = 72



class BoneDemoCaptureSettings_t:

   m_boneName: int = 0
   m_flChainLength: int = 8



class IKDemoCaptureSettings_t:

   m_parentBoneName: int = 0
   m_eMode: int = 8
   m_ikChainName: int = 16
   m_oneBoneStart: int = 24
   m_oneBoneEnd: int = 32



class CAnimDemoCaptureSettings:

   m_rangeBoneChainLength: int = 0
   m_rangeMaxSplineErrorRotation: int = 8
   m_flMaxSplineErrorTranslation: int = 16
   m_flMaxSplineErrorScale: int = 20
   m_flIkRotation_MaxSplineError: int = 24
   m_flIkTranslation_MaxSplineError: int = 28
   m_flMaxQuantizationErrorRotation: int = 32
   m_flMaxQuantizationErrorTranslation: int = 36
   m_flMaxQuantizationErrorScale: int = 40
   m_flIkRotation_MaxQuantizationError: int = 44
   m_flIkTranslation_MaxQuantizationError: int = 48
   m_baseSequence: int = 56
   m_nBaseSequenceFrame: int = 64
   m_boneSelectionMode: int = 68
   m_bones: int = 72
   m_ikChains: int = 96



class CAnimReplayFrame:

   m_inputDataBlocks: int = 16
   m_instanceData: int = 40
   m_startingLocalToWorldTransform: int = 64
   m_localToWorldTransform: int = 96
   m_timeStamp: int = 128



class CAnimGraphDebugReplay:

   m_animGraphFileName: int = 64
   m_frameList: int = 72
   m_startIndex: int = 96
   m_writeIndex: int = 100
   m_frameCount: int = 104



class CAnimGraphModelBinding:

   m_modelName: int = 8
   m_pSharedData: int = 16



class CAnimInputDamping:

   m_speedFunction: int = 8
   m_fSpeedScale: int = 12



class CAnimParamHandle:

   m_type: int = 0
   m_index: int = 1



class CAnimParamHandleMap:

   m_list: int = 0



class CAnimParameterManagerUpdater:

   m_parameters: int = 24
   m_idToIndexMap: int = 48
   m_nameToIndexMap: int = 80
   m_indexToHandle: int = 112
   m_autoResetParams: int = 136
   m_autoResetMap: int = 160



class CAnimUpdateSharedData:

   m_nodes: int = 16
   m_nodeIndexMap: int = 40
   m_components: int = 72
   m_pParamListUpdater: int = 96
   m_pTagManagerUpdater: int = 104
   m_scriptManager: int = 112
   m_settings: int = 120
   m_pStaticPoseCache: int = 168
   m_pSkeleton: int = 176
   m_rootNodePath: int = 184



class CBlendCurve:

   m_flControlPoint1: int = 0
   m_flControlPoint2: int = 4



class ParamSpanSample_t:

   m_value: int = 0
   m_flCycle: int = 20



class ParamSpan_t:

   m_samples: int = 0
   m_hParam: int = 24
   m_eParamType: int = 26
   m_flStartCycle: int = 28
   m_flEndCycle: int = 32



class CParamSpanUpdater:

   m_spans: int = 0



class CAnimGraphSettingsManager:

   m_settingsGroups: int = 24



class CCachedPose:

   m_transforms: int = 8
   m_morphWeights: int = 32
   m_hSequence: int = 56
   m_flCycle: int = 60



class CStaticPoseCache:

   m_poses: int = 16
   m_nBoneCount: int = 40
   m_nMorphCount: int = 44



class CEmitTagActionUpdater:

   m_nTagIndex: int = 24
   m_bIsZeroDuration: int = 28



class CSetParameterActionUpdater:

   m_hParam: int = 24
   m_value: int = 26



class CToggleComponentActionUpdater:

   m_componentID: int = 24
   m_bSetEnabled: int = 28



class CExpressionActionUpdater:

   m_hParam: int = 24
   m_eParamType: int = 26
   m_hScript: int = 28



class CAnimTagBase:

   m_name: int = 24
   m_group: int = 32
   m_tagID: int = 40
   m_bIsReferenced: int = 44



class CAnimTagManagerUpdater:

   m_tags: int = 24



class CAudioAnimTag:

   m_clipName: int = 56
   m_attachmentName: int = 64
   m_flVolume: int = 72
   m_bStopWhenTagEnds: int = 76
   m_bStopWhenGraphEnds: int = 77
   m_bPlayOnServer: int = 78
   m_bPlayOnClient: int = 79



class CBodyGroupSetting:

   m_BodyGroupName: int = 0
   m_nBodyGroupOption: int = 8



class CBodyGroupAnimTag:

   m_nPriority: int = 56
   m_bodyGroupSettings: int = 64



class CClothSettingsAnimTag:

   m_flStiffness: int = 56
   m_flEaseIn: int = 60
   m_flEaseOut: int = 64
   m_nVertexSet: int = 72



class CFootFallAnimTag:

   m_foot: int = 56



class CFootstepLandedAnimTag:

   m_FootstepType: int = 56
   m_OverrideSoundName: int = 64
   m_DebugAnimSourceString: int = 72
   m_BoneName: int = 80



class CMaterialAttributeAnimTag:

   m_AttributeName: int = 56
   m_AttributeType: int = 64
   m_flValue: int = 68
   m_Color: int = 72



class CParticleAnimTag:

   m_hParticleSystem: int = 56
   m_particleSystemName: int = 64
   m_configName: int = 72
   m_bDetachFromOwner: int = 80
   m_bStopWhenTagEnds: int = 81
   m_bTagEndStopIsInstant: int = 82
   m_attachmentName: int = 88
   m_attachmentType: int = 96
   m_attachmentCP1Name: int = 104
   m_attachmentCP1Type: int = 112



class CRagdollAnimTag:

   m_nPoseControl: int = 56
   m_flFrequency: int = 60
   m_flDampingRatio: int = 64
   m_flDecayDuration: int = 68
   m_flDecayBias: int = 72
   m_bDestroy: int = 76



class CSequenceFinishedAnimTag:

   m_sequenceName: int = 56



class CAnimComponentUpdater:

   m_name: int = 24
   m_id: int = 32
   m_networkMode: int = 36
   m_bStartEnabled: int = 40



class CAnimScriptComponentUpdater:

   m_hScript: int = 48



class CCPPScriptComponentUpdater:

   m_scriptsToRun: int = 48



class CDampedValueUpdateItem:

   m_damping: int = 0
   m_hParamIn: int = 24
   m_hParamOut: int = 26



class CDampedValueComponentUpdater:

   m_items: int = 48



class CDemoSettingsComponentUpdater:

   m_settings: int = 48



class CLODComponentUpdater:

   m_nServerLOD: int = 48



class CLookComponentUpdater:

   m_hLookHeading: int = 52
   m_hLookHeadingVelocity: int = 54
   m_hLookPitch: int = 56
   m_hLookDistance: int = 58
   m_hLookDirection: int = 60
   m_hLookTarget: int = 62
   m_hLookTargetWorldSpace: int = 64
   m_bNetworkLookTarget: int = 66



class CMovementMode:

   m_name: int = 0
   m_flSpeed: int = 8



class CMovementComponentUpdater:

   m_movementModes: int = 48
   m_motors: int = 72
   m_facingDamping: int = 96
   m_eDefaultFacingMode: int = 112
   m_nDefaultMotorIndex: int = 124
   m_bMoveVarsDisabled: int = 128
   m_bNetworkPath: int = 129
   m_bNetworkFacing: int = 130
   m_paramHandles: int = 131



class WeightList:

   m_name: int = 0
   m_weights: int = 8



class CRagdollComponentUpdater:

   m_ragdollNodePaths: int = 48
   m_boneIndices: int = 72
   m_boneNames: int = 96
   m_weightLists: int = 120
   m_flSpringFrequencyMin: int = 144
   m_flSpringFrequencyMax: int = 148
   m_flMaxStretch: int = 152



class CSlopeComponentUpdater:

   m_flTraceDistance: int = 52
   m_hSlopeAngle: int = 56
   m_hSlopeAngleFront: int = 58
   m_hSlopeAngleSide: int = 60
   m_hSlopeHeading: int = 62
   m_hSlopeNormal: int = 64
   m_hSlopeNormal_WorldSpace: int = 66



class CVRInputComponentUpdater:

   m_FingerCurl_Thumb: int = 52
   m_FingerCurl_Index: int = 54
   m_FingerCurl_Middle: int = 56
   m_FingerCurl_Ring: int = 58
   m_FingerCurl_Pinky: int = 60
   m_FingerSplay_Thumb_Index: int = 62
   m_FingerSplay_Index_Middle: int = 64
   m_FingerSplay_Middle_Ring: int = 66
   m_FingerSplay_Ring_Pinky: int = 68



class CStateMachineComponentUpdater:

   m_stateMachine: int = 48



class CMotionDataSet:

   m_groups: int = 0
   m_nDimensionCount: int = 24



class CMotionGraphGroup:

   m_searchDB: int = 0
   m_motionGraphs: int = 184
   m_motionGraphConfigs: int = 208
   m_sampleToConfig: int = 232
   m_hIsActiveScript: int = 256



class SampleCode:

   m_subCode: int = 0



class MotionDBIndex:

   m_nIndex: int = 0



class CVectorQuantizer:

   m_centroidVectors: int = 0
   m_nCentroids: int = 24
   m_nDimensions: int = 28



class CProductQuantizer:

   m_subQuantizers: int = 0
   m_nDimensions: int = 24



class CMotionSearchNode:

   m_children: int = 0
   m_quantizer: int = 24
   m_sampleCodes: int = 56
   m_sampleIndices: int = 80
   m_selectableSamples: int = 104



class CMotionSearchDB:

   m_rootNode: int = 0
   m_residualQuantizer: int = 128
   m_codeIndices: int = 160



class CMotionGraph:

   m_paramSpans: int = 16
   m_tags: int = 40
   m_pRootNode: int = 64
   m_nParameterCount: int = 72
   m_nConfigStartIndex: int = 76
   m_nConfigCount: int = 80
   m_bLoop: int = 84



class CMotionNode:

   m_name: int = 24
   m_id: int = 32



class CMotionNodeSequence:

   m_tags: int = 40
   m_hSequence: int = 64
   m_flPlaybackSpeed: int = 68



class MotionBlendItem:

   m_pChild: int = 0
   m_flKeyValue: int = 8



class CMotionNodeBlend1D:

   m_blendItems: int = 40
   m_nParamIndex: int = 64



class CMotionMetricEvaluator:

   m_means: int = 24
   m_standardDeviations: int = 48
   m_flWeight: int = 72
   m_nDimensionStartIndex: int = 76



class CBonePositionMetricEvaluator:

   m_nBoneIndex: int = 80



class CBoneVelocityMetricEvaluator:

   m_nBoneIndex: int = 80



class CDistanceRemainingMetricEvaluator:

   m_flMaxDistance: int = 80
   m_flMinDistance: int = 84
   m_flStartGoalFilterDistance: int = 88
   m_flMaxGoalOvershootScale: int = 92
   m_bFilterFixedMinDistance: int = 96
   m_bFilterGoalDistance: int = 97
   m_bFilterGoalOvershoot: int = 98



class CFootCycleMetricEvaluator:

   m_footIndices: int = 80



class CFootPositionMetricEvaluator:

   m_footIndices: int = 80
   m_bIgnoreSlope: int = 104



class CFutureFacingMetricEvaluator:

   m_flDistance: int = 80
   m_flTime: int = 84



class CFutureVelocityMetricEvaluator:

   m_flDistance: int = 80
   m_flStoppingDistance: int = 84
   m_flTargetSpeed: int = 88
   m_eMode: int = 92



class CPathMetricEvaluator:

   m_pathTimeSamples: int = 80
   m_flDistance: int = 104
   m_bExtrapolateMovement: int = 108
   m_flMinExtrapolationSpeed: int = 112



class CStepsRemainingMetricEvaluator:

   m_footIndices: int = 80
   m_flMinStepsRemaining: int = 104



class CTimeRemainingMetricEvaluator:

   m_bMatchByTimeRemaining: int = 80
   m_flMaxTimeRemaining: int = 84
   m_bFilterByTimeRemaining: int = 88
   m_flMinTimeRemaining: int = 92



class CAnimMotorUpdaterBase:

   m_name: int = 16
   m_bDefault: int = 24



class CPathAnimMotorUpdaterBase:

   m_bLockToPath: int = 32



class CDampedPathAnimMotorUpdater:

   m_flAnticipationTime: int = 44
   m_flMinSpeedScale: int = 48
   m_hAnticipationPosParam: int = 52
   m_hAnticipationHeadingParam: int = 54
   m_flSpringConstant: int = 56
   m_flMinSpringTension: int = 60
   m_flMaxSpringTension: int = 64



class CPlayerInputAnimMotorUpdater:

   m_sampleTimes: int = 32
   m_flSpringConstant: int = 60
   m_flAnticipationDistance: int = 64
   m_hAnticipationPosParam: int = 68
   m_hAnticipationHeadingParam: int = 70
   m_bUseAcceleration: int = 72



class AimMatrixOpFixedSettings_t:

   m_attachment: int = 0
   m_damping: int = 128
   m_poseCacheHandles: int = 144
   m_eBlendMode: int = 184
   m_fAngleIncrement: int = 188
   m_nSequenceMaxFrame: int = 192
   m_nBoneMaskIndex: int = 196
   m_bTargetIsPosition: int = 200



class FollowAttachmentSettings_t:

   m_attachment: int = 0
   m_boneIndex: int = 128
   m_bMatchTranslation: int = 132
   m_bMatchRotation: int = 133



class FootLockPoseOpFixedSettings:

   m_footInfo: int = 0
   m_hipDampingSettings: int = 24
   m_nHipBoneIndex: int = 40
   m_ikSolverType: int = 44
   m_bApplyTilt: int = 48
   m_bApplyHipDrop: int = 49
   m_bAlwaysUseFallbackHinge: int = 50
   m_bApplyFootRotationLimits: int = 51
   m_bApplyLegTwistLimits: int = 52
   m_flMaxFootHeight: int = 56
   m_flExtensionScale: int = 60
   m_flMaxLegTwist: int = 64
   m_bEnableLockBreaking: int = 68
   m_flLockBreakTolerance: int = 72
   m_flLockBlendTime: int = 76
   m_bEnableStretching: int = 80
   m_flMaxStretchAmount: int = 84
   m_flStretchExtensionScale: int = 88



class FootPinningPoseOpFixedData_t:

   m_footInfo: int = 0
   m_flBlendTime: int = 24
   m_flLockBreakDistance: int = 28
   m_flMaxLegTwist: int = 32
   m_nHipBoneIndex: int = 36
   m_bApplyLegTwistLimits: int = 40
   m_bApplyFootRotationLimits: int = 41



class HitReactFixedSettings_t:

   m_nWeightListIndex: int = 0
   m_nEffectedBoneCount: int = 4
   m_flMaxImpactForce: int = 8
   m_flMinImpactForce: int = 12
   m_flWhipImpactScale: int = 16
   m_flCounterRotationScale: int = 20
   m_flDistanceFadeScale: int = 24
   m_flPropagationScale: int = 28
   m_flWhipDelay: int = 32
   m_flSpringStrength: int = 36
   m_flWhipSpringStrength: int = 40
   m_flMaxAngleRadians: int = 44
   m_nHipBoneIndex: int = 48
   m_flHipBoneTranslationScale: int = 52
   m_flHipDipSpringStrength: int = 56
   m_flHipDipImpactScale: int = 60
   m_flHipDipDelay: int = 64



class JiggleBoneSettings_t:

   m_nBoneIndex: int = 0
   m_flSpringStrength: int = 4
   m_flMaxTimeStep: int = 8
   m_flDamping: int = 12
   m_vBoundsMaxLS: int = 16
   m_vBoundsMinLS: int = 28
   m_eSimSpace: int = 40



class JiggleBoneSettingsList_t:

   m_boneSettings: int = 0



class LookAtBone_t:

   m_index: int = 0
   m_weight: int = 4



class LookAtOpFixedSettings_t:

   m_attachment: int = 0
   m_damping: int = 128
   m_bones: int = 144
   m_flYawLimit: int = 168
   m_flPitchLimit: int = 172
   m_flHysteresisInnerAngle: int = 176
   m_flHysteresisOuterAngle: int = 180
   m_bRotateYawForward: int = 184
   m_bMaintainUpDirection: int = 185
   m_bTargetIsPosition: int = 186
   m_bUseHysteresis: int = 187



class FingerSource_t:

   m_nFingerIndex: int = 0
   m_flFingerWeight: int = 4



class FingerBone_t:

   m_boneIndex: int = 0
   m_hingeAxis: int = 4
   m_vCapsulePos1: int = 16
   m_vCapsulePos2: int = 28
   m_flMinAngle: int = 40
   m_flMaxAngle: int = 44
   m_flRadius: int = 48



class FingerChain_t:

   m_targets: int = 0
   m_bones: int = 24
   m_vTipOffset: int = 48
   m_vSplayHingeAxis: int = 60
   m_tipParentBoneIndex: int = 72
   m_metacarpalBoneIndex: int = 76
   m_flSplayMinAngle: int = 80
   m_flSplayMaxAngle: int = 84
   m_flFingerScaleRatio: int = 88



class WristBone_t:

   m_xOffsetTransformMS: int = 0
   m_boneIndex: int = 32



class SkeletalInputOpFixedSettings_t:

   m_wristBones: int = 0
   m_fingers: int = 24
   m_outerKnuckle1: int = 48
   m_outerKnuckle2: int = 52
   m_eHand: int = 56
   m_eMotionRange: int = 60
   m_eTransformSource: int = 64
   m_bEnableIK: int = 68
   m_bEnableCollision: int = 69



class ChainToSolveData_t:

   m_nChainIndex: int = 0
   m_SolverSettings: int = 4
   m_TargetSettings: int = 16
   m_DebugSetting: int = 56
   m_flDebugNormalizedValue: int = 60
   m_vDebugOffset: int = 64



class SolveIKChainPoseOpFixedSettings_t:

   m_ChainsToSolveData: int = 0
   m_bMatchTargetOrientation: int = 24



class CAnimParameterBase:

   m_name: int = 24
   m_group: int = 32
   m_id: int = 40
   m_componentName: int = 64
   m_bNetworkingRequested: int = 76
   m_bIsReferenced: int = 77



class CConcreteAnimParameter:

   m_previewButton: int = 80
   m_eNetworkSetting: int = 84
   m_bUseMostRecentValue: int = 88
   m_bAutoReset: int = 89
   m_bGameWritable: int = 90
   m_bGraphWritable: int = 91



class CVirtualAnimParameter:

   m_expressionString: int = 80
   m_eParamType: int = 88



class CBoolAnimParameter:

   m_bDefaultValue: int = 96



class CEnumAnimParameter:

   m_defaultValue: int = 104
   m_enumOptions: int = 112



class CIntAnimParameter:

   m_defaultValue: int = 96
   m_minValue: int = 100
   m_maxValue: int = 104



class CFloatAnimParameter:

   m_fDefaultValue: int = 96
   m_fMinValue: int = 100
   m_fMaxValue: int = 104
   m_bInterpolate: int = 108



class CVectorAnimParameter:

   m_defaultValue: int = 96
   m_bInterpolate: int = 108



class CQuaternionAnimParameter:

   m_defaultValue: int = 96
   m_bInterpolate: int = 112