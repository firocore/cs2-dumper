#pragma once

#include <cstddef>

using namespace std;

namespace ScriptInfo_t {

   constexpr ptrdiff_t m_code = 0x0;
   constexpr ptrdiff_t m_paramsModified = 0x8;
   constexpr ptrdiff_t m_proxyReadParams = 0x20;
   constexpr ptrdiff_t m_proxyWriteParams = 0x38;
   constexpr ptrdiff_t m_eScriptType = 0x50;

}

namespace CAnimScriptManager {

   constexpr ptrdiff_t m_scriptInfo = 0x10;

}

namespace CStateActionUpdater {

   constexpr ptrdiff_t m_pAction = 0x0;
   constexpr ptrdiff_t m_eBehavior = 0x8;

}

namespace CTransitionUpdateData {

   constexpr ptrdiff_t m_srcStateIndex = 0x0;
   constexpr ptrdiff_t m_destStateIndex = 0x1;
   constexpr ptrdiff_t m_bDisabled = 0x0;

}

namespace CStateUpdateData {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_hScript = 0x8;
   constexpr ptrdiff_t m_transitionIndices = 0x10;
   constexpr ptrdiff_t m_actions = 0x28;
   constexpr ptrdiff_t m_stateID = 0x40;
   constexpr ptrdiff_t m_bIsStartState = 0x0;
   constexpr ptrdiff_t m_bIsEndState = 0x0;
   constexpr ptrdiff_t m_bIsPassthrough = 0x0;

}

namespace CAnimStateMachineUpdater {

   constexpr ptrdiff_t m_states = 0x8;
   constexpr ptrdiff_t m_transitions = 0x20;
   constexpr ptrdiff_t m_startStateIndex = 0x50;

}

namespace CAnimUpdateNodeRef {

   constexpr ptrdiff_t m_nodeIndex = 0x8;

}

namespace CAnimUpdateNodeBase {

   constexpr ptrdiff_t m_nodePath = 0x18;
   constexpr ptrdiff_t m_networkMode = 0x48;
   constexpr ptrdiff_t m_name = 0x50;

}

namespace CBinaryUpdateNode {

   constexpr ptrdiff_t m_pChild1 = 0x58;
   constexpr ptrdiff_t m_pChild2 = 0x68;
   constexpr ptrdiff_t m_timingBehavior = 0x78;
   constexpr ptrdiff_t m_flTimingBlend = 0x7c;
   constexpr ptrdiff_t m_bResetChild1 = 0x80;
   constexpr ptrdiff_t m_bResetChild2 = 0x81;

}

namespace CBlendUpdateNode {

   constexpr ptrdiff_t m_children = 0x60;
   constexpr ptrdiff_t m_sortedOrder = 0x78;
   constexpr ptrdiff_t m_targetValues = 0x90;
   constexpr ptrdiff_t m_blendValueSource = 0xac;
   constexpr ptrdiff_t m_paramIndex = 0xb0;
   constexpr ptrdiff_t m_damping = 0xb8;
   constexpr ptrdiff_t m_blendKeyType = 0xc8;
   constexpr ptrdiff_t m_bLockBlendOnReset = 0xcc;
   constexpr ptrdiff_t m_bSyncCycles = 0xcd;
   constexpr ptrdiff_t m_bLoop = 0xce;
   constexpr ptrdiff_t m_bLockWhenWaning = 0xcf;

}

namespace BlendItem_t {

   constexpr ptrdiff_t m_tags = 0x0;
   constexpr ptrdiff_t m_pChild = 0x18;
   constexpr ptrdiff_t m_hSequence = 0x28;
   constexpr ptrdiff_t m_vPos = 0x2c;
   constexpr ptrdiff_t m_flDuration = 0x34;
   constexpr ptrdiff_t m_bUseCustomDuration = 0x38;

}

namespace CBlend2DUpdateNode {

   constexpr ptrdiff_t m_items = 0x60;
   constexpr ptrdiff_t m_tags = 0x78;
   constexpr ptrdiff_t m_paramSpans = 0x90;
   constexpr ptrdiff_t m_nodeItemIndices = 0xa8;
   constexpr ptrdiff_t m_damping = 0xc0;
   constexpr ptrdiff_t m_blendSourceX = 0xd0;
   constexpr ptrdiff_t m_paramX = 0xd4;
   constexpr ptrdiff_t m_blendSourceY = 0xd8;
   constexpr ptrdiff_t m_paramY = 0xdc;
   constexpr ptrdiff_t m_eBlendMode = 0xe0;
   constexpr ptrdiff_t m_playbackSpeed = 0xe4;
   constexpr ptrdiff_t m_bLoop = 0xe8;
   constexpr ptrdiff_t m_bLockBlendOnReset = 0xe9;
   constexpr ptrdiff_t m_bLockWhenWaning = 0xea;
   constexpr ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xeb;

}

namespace CBoneMaskUpdateNode {

   constexpr ptrdiff_t m_nWeightListIndex = 0x8c;
   constexpr ptrdiff_t m_flRootMotionBlend = 0x90;
   constexpr ptrdiff_t m_blendSpace = 0x94;
   constexpr ptrdiff_t m_footMotionTiming = 0x98;
   constexpr ptrdiff_t m_bUseBlendScale = 0x9c;
   constexpr ptrdiff_t m_blendValueSource = 0xa0;
   constexpr ptrdiff_t m_hBlendParameter = 0xa4;

}

namespace CChoiceUpdateNode {

   constexpr ptrdiff_t m_children = 0x58;
   constexpr ptrdiff_t m_weights = 0x70;
   constexpr ptrdiff_t m_blendTimes = 0x88;
   constexpr ptrdiff_t m_choiceMethod = 0xa0;
   constexpr ptrdiff_t m_choiceChangeMethod = 0xa4;
   constexpr ptrdiff_t m_blendMethod = 0xa8;
   constexpr ptrdiff_t m_blendTime = 0xac;
   constexpr ptrdiff_t m_bCrossFade = 0xb0;
   constexpr ptrdiff_t m_bResetChosen = 0xb1;
   constexpr ptrdiff_t m_bDontResetSameSelection = 0xb2;

}

namespace CDirectPlaybackTagData {

   constexpr ptrdiff_t m_sequenceName = 0x0;
   constexpr ptrdiff_t m_tags = 0x8;

}

namespace FootFixedData_t {

   constexpr ptrdiff_t m_vToeOffset = 0x0;
   constexpr ptrdiff_t m_vHeelOffset = 0x10;
   constexpr ptrdiff_t m_nTargetBoneIndex = 0x20;
   constexpr ptrdiff_t m_nAnkleBoneIndex = 0x24;
   constexpr ptrdiff_t m_nIKAnchorBoneIndex = 0x28;
   constexpr ptrdiff_t m_ikChainIndex = 0x2c;
   constexpr ptrdiff_t m_flMaxIKLength = 0x30;
   constexpr ptrdiff_t m_nFootIndex = 0x34;
   constexpr ptrdiff_t m_nTagIndex = 0x38;
   constexpr ptrdiff_t m_flMaxRotationLeft = 0x3c;
   constexpr ptrdiff_t m_flMaxRotationRight = 0x40;

}

namespace TraceSettings_t {

   constexpr ptrdiff_t m_flTraceHeight = 0x0;
   constexpr ptrdiff_t m_flTraceRadius = 0x4;

}

namespace FootFixedSettings {

   constexpr ptrdiff_t m_traceSettings = 0x0;
   constexpr ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10;
   constexpr ptrdiff_t m_flFootBaseLength = 0x20;
   constexpr ptrdiff_t m_flMaxRotationLeft = 0x24;
   constexpr ptrdiff_t m_flMaxRotationRight = 0x28;
   constexpr ptrdiff_t m_footstepLandedTagIndex = 0x2c;
   constexpr ptrdiff_t m_bEnableTracing = 0x30;
   constexpr ptrdiff_t m_flTraceAngleBlend = 0x34;
   constexpr ptrdiff_t m_nDisableTagIndex = 0x38;
   constexpr ptrdiff_t m_nFootIndex = 0x3c;

}

namespace FootStepTrigger {

   constexpr ptrdiff_t m_tags = 0x0;
   constexpr ptrdiff_t m_nFootIndex = 0x18;
   constexpr ptrdiff_t m_triggerPhase = 0x1c;

}

namespace CLeanMatrixUpdateNode {

   constexpr ptrdiff_t m_frameCorners = 0x5c;
   constexpr ptrdiff_t m_poses = 0x80;
   constexpr ptrdiff_t m_damping = 0xa8;
   constexpr ptrdiff_t m_blendSource = 0xb8;
   constexpr ptrdiff_t m_paramIndex = 0xbc;
   constexpr ptrdiff_t m_verticalAxis = 0xc0;
   constexpr ptrdiff_t m_horizontalAxis = 0xcc;
   constexpr ptrdiff_t m_hSequence = 0xd8;
   constexpr ptrdiff_t m_flMaxValue = 0xdc;
   constexpr ptrdiff_t m_nSequenceMaxFrame = 0xe0;

}

namespace CMotionGraphUpdateNode {

   constexpr ptrdiff_t m_pMotionGraph = 0x58;

}

namespace CMotionMatchingUpdateNode {

   constexpr ptrdiff_t m_dataSet = 0x58;
   constexpr ptrdiff_t m_metrics = 0x78;
   constexpr ptrdiff_t m_weights = 0x90;
   constexpr ptrdiff_t m_bSearchEveryTick = 0xe0;
   constexpr ptrdiff_t m_flSearchInterval = 0xe4;
   constexpr ptrdiff_t m_bSearchWhenClipEnds = 0xe8;
   constexpr ptrdiff_t m_bSearchWhenGoalChanges = 0xe9;
   constexpr ptrdiff_t m_blendCurve = 0xec;
   constexpr ptrdiff_t m_flSampleRate = 0xf4;
   constexpr ptrdiff_t m_flBlendTime = 0xf8;
   constexpr ptrdiff_t m_bLockClipWhenWaning = 0xfc;
   constexpr ptrdiff_t m_flSelectionThreshold = 0x100;
   constexpr ptrdiff_t m_flReselectionTimeWindow = 0x104;
   constexpr ptrdiff_t m_bEnableRotationCorrection = 0x108;
   constexpr ptrdiff_t m_bGoalAssist = 0x109;
   constexpr ptrdiff_t m_flGoalAssistDistance = 0x10c;
   constexpr ptrdiff_t m_flGoalAssistTolerance = 0x110;
   constexpr ptrdiff_t m_distanceScale_Damping = 0x118;
   constexpr ptrdiff_t m_flDistanceScale_OuterRadius = 0x128;
   constexpr ptrdiff_t m_flDistanceScale_InnerRadius = 0x12c;
   constexpr ptrdiff_t m_flDistanceScale_MaxScale = 0x130;
   constexpr ptrdiff_t m_flDistanceScale_MinScale = 0x134;
   constexpr ptrdiff_t m_bEnableDistanceScaling = 0x138;

}

namespace CSelectorUpdateNode {

   constexpr ptrdiff_t m_children = 0x58;
   constexpr ptrdiff_t m_tags = 0x70;
   constexpr ptrdiff_t m_blendCurve = 0x8c;
   constexpr ptrdiff_t m_flBlendTime = 0x94;
   constexpr ptrdiff_t m_hParameter = 0x9c;
   constexpr ptrdiff_t m_eTagBehavior = 0xa0;
   constexpr ptrdiff_t m_bResetOnChange = 0xa4;
   constexpr ptrdiff_t m_bSyncCyclesOnChange = 0xa5;

}

namespace CSequenceUpdateNode {

   constexpr ptrdiff_t m_paramSpans = 0x60;
   constexpr ptrdiff_t m_tags = 0x78;
   constexpr ptrdiff_t m_hSequence = 0x94;
   constexpr ptrdiff_t m_playbackSpeed = 0x98;
   constexpr ptrdiff_t m_duration = 0x9c;
   constexpr ptrdiff_t m_bLoop = 0xa0;

}

namespace CSingleFrameUpdateNode {

   constexpr ptrdiff_t m_actions = 0x58;
   constexpr ptrdiff_t m_hPoseCacheHandle = 0x70;
   constexpr ptrdiff_t m_hSequence = 0x74;
   constexpr ptrdiff_t m_flCycle = 0x78;

}

namespace CSkeletalInputUpdateNode {

   constexpr ptrdiff_t m_fixedOpData = 0x58;

}

namespace CSolveIKTargetHandle_t {

   constexpr ptrdiff_t m_positionHandle = 0x0;
   constexpr ptrdiff_t m_orientationHandle = 0x2;

}

namespace StanceInfo_t {

   constexpr ptrdiff_t m_vPosition = 0x0;
   constexpr ptrdiff_t m_flDirection = 0xc;

}

namespace CStateNodeTransitionData {

   constexpr ptrdiff_t m_curve = 0x0;
   constexpr ptrdiff_t m_blendDuration = 0x8;
   constexpr ptrdiff_t m_resetCycleValue = 0x10;
   constexpr ptrdiff_t m_bReset = 0x0;
   constexpr ptrdiff_t m_resetCycleOption = 0x0;

}

namespace CStateNodeStateData {

   constexpr ptrdiff_t m_pChild = 0x0;
   constexpr ptrdiff_t m_bExclusiveRootMotion = 0x0;

}

namespace CStateMachineUpdateNode {

   constexpr ptrdiff_t m_stateMachine = 0x68;
   constexpr ptrdiff_t m_stateData = 0xc0;
   constexpr ptrdiff_t m_transitionData = 0xd8;
   constexpr ptrdiff_t m_bBlockWaningTags = 0xf4;
   constexpr ptrdiff_t m_bLockStateWhenWaning = 0xf5;

}

namespace CSubtractUpdateNode {

   constexpr ptrdiff_t m_footMotionTiming = 0x8c;
   constexpr ptrdiff_t m_bApplyToFootMotion = 0x90;
   constexpr ptrdiff_t m_bApplyChannelsSeparately = 0x91;
   constexpr ptrdiff_t m_bUseModelSpace = 0x92;

}

namespace TwoBoneIKSettings_t {

   constexpr ptrdiff_t m_endEffectorType = 0x0;
   constexpr ptrdiff_t m_endEffectorAttachment = 0x10;
   constexpr ptrdiff_t m_targetType = 0x90;
   constexpr ptrdiff_t m_targetAttachment = 0xa0;
   constexpr ptrdiff_t m_targetBoneIndex = 0x120;
   constexpr ptrdiff_t m_hPositionParam = 0x124;
   constexpr ptrdiff_t m_hRotationParam = 0x126;
   constexpr ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128;
   constexpr ptrdiff_t m_vLsFallbackHingeAxis = 0x130;
   constexpr ptrdiff_t m_nFixedBoneIndex = 0x140;
   constexpr ptrdiff_t m_nMiddleBoneIndex = 0x144;
   constexpr ptrdiff_t m_nEndBoneIndex = 0x148;
   constexpr ptrdiff_t m_bMatchTargetOrientation = 0x14c;
   constexpr ptrdiff_t m_bConstrainTwist = 0x14d;
   constexpr ptrdiff_t m_flMaxTwist = 0x150;

}

namespace CUnaryUpdateNode {

   constexpr ptrdiff_t m_pChildNode = 0x58;

}

namespace CWayPointHelperUpdateNode {

   constexpr ptrdiff_t m_flStartCycle = 0x6c;
   constexpr ptrdiff_t m_flEndCycle = 0x70;
   constexpr ptrdiff_t m_bOnlyGoals = 0x74;
   constexpr ptrdiff_t m_bPreventOvershoot = 0x75;
   constexpr ptrdiff_t m_bPreventUndershoot = 0x76;

}

namespace TagSpan_t {

   constexpr ptrdiff_t m_tagIndex = 0x0;
   constexpr ptrdiff_t m_startCycle = 0x4;
   constexpr ptrdiff_t m_endCycle = 0x8;

}

namespace CAnimNodePath {

   constexpr ptrdiff_t m_path = 0x0;
   constexpr ptrdiff_t m_nCount = 0x2c;

}

namespace ConfigIndex {

   constexpr ptrdiff_t m_nGroup = 0x0;
   constexpr ptrdiff_t m_nConfig = 0x2;

}

namespace MotionIndex {

   constexpr ptrdiff_t m_nGroup = 0x0;
   constexpr ptrdiff_t m_nMotion = 0x2;

}

namespace CMotionGraphConfig {

   constexpr ptrdiff_t m_paramValues = 0x0;
   constexpr ptrdiff_t m_flDuration = 0x10;
   constexpr ptrdiff_t m_nMotionIndex = 0x14;
   constexpr ptrdiff_t m_nSampleStart = 0x18;
   constexpr ptrdiff_t m_nSampleCount = 0x1c;

}

namespace CPoseHandle {

   constexpr ptrdiff_t m_nIndex = 0x0;
   constexpr ptrdiff_t m_eType = 0x2;

}

namespace CAnimationGraphVisualizerPrimitiveBase {

   constexpr ptrdiff_t m_Type = 0x8;
   constexpr ptrdiff_t m_OwningAnimNodePaths = 0xc;
   constexpr ptrdiff_t m_nOwningAnimNodePathCount = 0x38;

}

namespace CAnimationGraphVisualizerText {

   constexpr ptrdiff_t m_vWsPosition = 0x40;
   constexpr ptrdiff_t m_Color = 0x50;
   constexpr ptrdiff_t m_Text = 0x58;

}

namespace CAnimationGraphVisualizerSphere {

   constexpr ptrdiff_t m_vWsPosition = 0x40;
   constexpr ptrdiff_t m_flRadius = 0x50;
   constexpr ptrdiff_t m_Color = 0x54;

}

namespace CAnimationGraphVisualizerLine {

   constexpr ptrdiff_t m_vWsPositionStart = 0x40;
   constexpr ptrdiff_t m_vWsPositionEnd = 0x50;
   constexpr ptrdiff_t m_Color = 0x60;

}

namespace CAnimationGraphVisualizerPie {

   constexpr ptrdiff_t m_vWsCenter = 0x40;
   constexpr ptrdiff_t m_vWsStart = 0x50;
   constexpr ptrdiff_t m_vWsEnd = 0x60;
   constexpr ptrdiff_t m_Color = 0x70;

}

namespace CAnimationGraphVisualizerAxis {

   constexpr ptrdiff_t m_xWsTransform = 0x40;
   constexpr ptrdiff_t m_flAxisSize = 0x60;

}

namespace IKBoneNameAndIndex_t {

   constexpr ptrdiff_t m_Name = 0x0;

}

namespace IKSolverSettings_t {

   constexpr ptrdiff_t m_SolverType = 0x0;
   constexpr ptrdiff_t m_nNumIterations = 0x4;

}

namespace IKTargetSettings_t {

   constexpr ptrdiff_t m_TargetSource = 0x0;
   constexpr ptrdiff_t m_Bone = 0x8;
   constexpr ptrdiff_t m_AnimgraphParameterNamePosition = 0x18;
   constexpr ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1c;
   constexpr ptrdiff_t m_TargetCoordSystem = 0x20;

}

namespace CAnimGraphNetworkSettings {

   constexpr ptrdiff_t m_bNetworkingEnabled = 0x20;

}

namespace CActionComponentUpdater {

   constexpr ptrdiff_t m_actions = 0x30;

}

namespace CAddUpdateNode {

   constexpr ptrdiff_t m_footMotionTiming = 0x8c;
   constexpr ptrdiff_t m_bApplyToFootMotion = 0x90;
   constexpr ptrdiff_t m_bApplyChannelsSeparately = 0x91;
   constexpr ptrdiff_t m_bUseModelSpace = 0x92;

}

namespace CAimMatrixUpdateNode {

   constexpr ptrdiff_t m_opFixedSettings = 0x70;
   constexpr ptrdiff_t m_target = 0x148;
   constexpr ptrdiff_t m_paramIndex = 0x14c;
   constexpr ptrdiff_t m_hSequence = 0x150;
   constexpr ptrdiff_t m_bResetChild = 0x154;
   constexpr ptrdiff_t m_bLockWhenWaning = 0x155;

}

namespace CCycleControlUpdateNode {

   constexpr ptrdiff_t m_valueSource = 0x68;
   constexpr ptrdiff_t m_paramIndex = 0x6c;

}

namespace CCycleControlClipUpdateNode {

   constexpr ptrdiff_t m_tags = 0x60;
   constexpr ptrdiff_t m_hSequence = 0x7c;
   constexpr ptrdiff_t m_duration = 0x80;
   constexpr ptrdiff_t m_valueSource = 0x84;
   constexpr ptrdiff_t m_paramIndex = 0x88;

}

namespace CDirectionalBlendUpdateNode {

   constexpr ptrdiff_t m_hSequences = 0x5c;
   constexpr ptrdiff_t m_damping = 0x80;
   constexpr ptrdiff_t m_blendValueSource = 0x90;
   constexpr ptrdiff_t m_paramIndex = 0x94;
   constexpr ptrdiff_t m_playbackSpeed = 0x98;
   constexpr ptrdiff_t m_duration = 0x9c;
   constexpr ptrdiff_t m_bLoop = 0xa0;
   constexpr ptrdiff_t m_bLockBlendOnReset = 0xa1;

}

namespace CDirectPlaybackUpdateNode {

   constexpr ptrdiff_t m_bFinishEarly = 0x6c;
   constexpr ptrdiff_t m_bResetOnFinish = 0x6d;
   constexpr ptrdiff_t m_allTags = 0x70;

}

namespace CFollowPathUpdateNode {

   constexpr ptrdiff_t m_flBlendOutTime = 0x6c;
   constexpr ptrdiff_t m_bBlockNonPathMovement = 0x70;
   constexpr ptrdiff_t m_bStopFeetAtGoal = 0x71;
   constexpr ptrdiff_t m_bScaleSpeed = 0x72;
   constexpr ptrdiff_t m_flScale = 0x74;
   constexpr ptrdiff_t m_flMinAngle = 0x78;
   constexpr ptrdiff_t m_flMaxAngle = 0x7c;
   constexpr ptrdiff_t m_flSpeedScaleBlending = 0x80;
   constexpr ptrdiff_t m_turnDamping = 0x88;
   constexpr ptrdiff_t m_facingTarget = 0x98;
   constexpr ptrdiff_t m_hParam = 0x9c;
   constexpr ptrdiff_t m_flTurnToFaceOffset = 0xa0;
   constexpr ptrdiff_t m_bTurnToFace = 0xa4;

}

namespace CFollowAttachmentUpdateNode {

   constexpr ptrdiff_t m_opFixedData = 0x70;

}

namespace CFootAdjustmentUpdateNode {

   constexpr ptrdiff_t m_clips = 0x70;
   constexpr ptrdiff_t m_hBasePoseCacheHandle = 0x88;
   constexpr ptrdiff_t m_facingTarget = 0x8c;
   constexpr ptrdiff_t m_flTurnTimeMin = 0x90;
   constexpr ptrdiff_t m_flTurnTimeMax = 0x94;
   constexpr ptrdiff_t m_flStepHeightMax = 0x98;
   constexpr ptrdiff_t m_flStepHeightMaxAngle = 0x9c;
   constexpr ptrdiff_t m_bResetChild = 0xa0;
   constexpr ptrdiff_t m_bAnimationDriven = 0xa1;

}

namespace CFootLockUpdateNode {

   constexpr ptrdiff_t m_opFixedSettings = 0x68;
   constexpr ptrdiff_t m_footSettings = 0xd0;
   constexpr ptrdiff_t m_hipShiftDamping = 0xe8;
   constexpr ptrdiff_t m_rootHeightDamping = 0xf8;
   constexpr ptrdiff_t m_flStrideCurveScale = 0x108;
   constexpr ptrdiff_t m_flStrideCurveLimitScale = 0x10c;
   constexpr ptrdiff_t m_flStepHeightIncreaseScale = 0x110;
   constexpr ptrdiff_t m_flStepHeightDecreaseScale = 0x114;
   constexpr ptrdiff_t m_flHipShiftScale = 0x118;
   constexpr ptrdiff_t m_flBlendTime = 0x11c;
   constexpr ptrdiff_t m_flMaxRootHeightOffset = 0x120;
   constexpr ptrdiff_t m_flMinRootHeightOffset = 0x124;
   constexpr ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x128;
   constexpr ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x12c;
   constexpr ptrdiff_t m_bApplyFootRotationLimits = 0x130;
   constexpr ptrdiff_t m_bApplyHipShift = 0x131;
   constexpr ptrdiff_t m_bModulateStepHeight = 0x132;
   constexpr ptrdiff_t m_bResetChild = 0x133;
   constexpr ptrdiff_t m_bEnableVerticalCurvedPaths = 0x134;
   constexpr ptrdiff_t m_bEnableRootHeightDamping = 0x135;

}

namespace CFootPinningUpdateNode {

   constexpr ptrdiff_t m_poseOpFixedData = 0x70;
   constexpr ptrdiff_t m_eTimingSource = 0xa0;
   constexpr ptrdiff_t m_params = 0xa8;
   constexpr ptrdiff_t m_bResetChild = 0xc0;

}

namespace CFootStepTriggerUpdateNode {

   constexpr ptrdiff_t m_triggers = 0x68;
   constexpr ptrdiff_t m_flTolerance = 0x84;

}

namespace CHitReactUpdateNode {

   constexpr ptrdiff_t m_opFixedSettings = 0x68;
   constexpr ptrdiff_t m_triggerParam = 0xb4;
   constexpr ptrdiff_t m_hitBoneParam = 0xb6;
   constexpr ptrdiff_t m_hitOffsetParam = 0xb8;
   constexpr ptrdiff_t m_hitDirectionParam = 0xba;
   constexpr ptrdiff_t m_hitStrengthParam = 0xbc;
   constexpr ptrdiff_t m_flMinDelayBetweenHits = 0xc0;
   constexpr ptrdiff_t m_bResetChild = 0xc4;

}

namespace CJiggleBoneUpdateNode {

   constexpr ptrdiff_t m_opFixedData = 0x68;

}

namespace CJumpHelperUpdateNode {

   constexpr ptrdiff_t m_hTargetParam = 0xa8;
   constexpr ptrdiff_t m_flOriginalJumpMovement = 0xac;
   constexpr ptrdiff_t m_flOriginalJumpDuration = 0xb8;
   constexpr ptrdiff_t m_flJumpStartCycle = 0xbc;
   constexpr ptrdiff_t m_flJumpEndCycle = 0xc0;
   constexpr ptrdiff_t m_eCorrectionMethod = 0xc4;
   constexpr ptrdiff_t m_bTranslationAxis = 0xc8;
   constexpr ptrdiff_t m_bScaleSpeed = 0xcb;

}

namespace CLookAtUpdateNode {

   constexpr ptrdiff_t m_opFixedSettings = 0x70;
   constexpr ptrdiff_t m_target = 0x138;
   constexpr ptrdiff_t m_paramIndex = 0x13c;
   constexpr ptrdiff_t m_weightParamIndex = 0x13e;
   constexpr ptrdiff_t m_bResetChild = 0x140;
   constexpr ptrdiff_t m_bLockWhenWaning = 0x141;

}

namespace CMoverUpdateNode {

   constexpr ptrdiff_t m_damping = 0x70;
   constexpr ptrdiff_t m_facingTarget = 0x80;
   constexpr ptrdiff_t m_hMoveVecParam = 0x84;
   constexpr ptrdiff_t m_hMoveHeadingParam = 0x86;
   constexpr ptrdiff_t m_hTurnToFaceParam = 0x88;
   constexpr ptrdiff_t m_flTurnToFaceOffset = 0x8c;
   constexpr ptrdiff_t m_flTurnToFaceLimit = 0x90;
   constexpr ptrdiff_t m_bAdditive = 0x94;
   constexpr ptrdiff_t m_bApplyMovement = 0x95;
   constexpr ptrdiff_t m_bOrientMovement = 0x96;
   constexpr ptrdiff_t m_bApplyRotation = 0x97;
   constexpr ptrdiff_t m_bLimitOnly = 0x98;

}

namespace CPathHelperUpdateNode {

   constexpr ptrdiff_t m_flStoppingRadius = 0x68;
   constexpr ptrdiff_t m_flStoppingSpeedScale = 0x6c;

}

namespace CRagdollUpdateNode {

   constexpr ptrdiff_t m_nWeightListIndex = 0x68;
   constexpr ptrdiff_t m_poseControlMethod = 0x6c;

}

namespace CSetFacingUpdateNode {

   constexpr ptrdiff_t m_facingMode = 0x68;
   constexpr ptrdiff_t m_bResetChild = 0x6c;

}

namespace CSlowDownOnSlopesUpdateNode {

   constexpr ptrdiff_t m_flSlowDownStrength = 0x68;

}

namespace CSolveIKChainUpdateNode {

   constexpr ptrdiff_t m_targetHandles = 0x68;
   constexpr ptrdiff_t m_opFixedData = 0x80;

}

namespace CSpeedScaleUpdateNode {

   constexpr ptrdiff_t m_paramIndex = 0x68;

}

namespace CStanceOverrideUpdateNode {

   constexpr ptrdiff_t m_footStanceInfo = 0x68;
   constexpr ptrdiff_t m_pStanceSourceNode = 0x80;
   constexpr ptrdiff_t m_hParameter = 0x90;
   constexpr ptrdiff_t m_eMode = 0x94;

}

namespace CStanceScaleUpdateNode {

   constexpr ptrdiff_t m_hParam = 0x68;

}

namespace CStopAtGoalUpdateNode {

   constexpr ptrdiff_t m_flOuterRadius = 0x6c;
   constexpr ptrdiff_t m_flInnerRadius = 0x70;
   constexpr ptrdiff_t m_flMaxScale = 0x74;
   constexpr ptrdiff_t m_flMinScale = 0x78;
   constexpr ptrdiff_t m_damping = 0x80;

}

namespace CTurnHelperUpdateNode {

   constexpr ptrdiff_t m_facingTarget = 0x6c;
   constexpr ptrdiff_t m_turnStartTimeOffset = 0x70;
   constexpr ptrdiff_t m_turnDuration = 0x74;
   constexpr ptrdiff_t m_bMatchChildDuration = 0x78;
   constexpr ptrdiff_t m_manualTurnOffset = 0x7c;
   constexpr ptrdiff_t m_bUseManualTurnOffset = 0x80;

}

namespace CTwoBoneIKUpdateNode {

   constexpr ptrdiff_t m_opFixedData = 0x70;

}

namespace MoodAnimation_t {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_flWeight = 0x8;

}

namespace MoodAnimationLayer_t {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_bActiveListening = 0x8;
   constexpr ptrdiff_t m_bActiveTalking = 0x9;
   constexpr ptrdiff_t m_layerAnimations = 0x10;
   constexpr ptrdiff_t m_flIntensity = 0x28;
   constexpr ptrdiff_t m_flDurationScale = 0x30;
   constexpr ptrdiff_t m_bScaleWithInts = 0x38;
   constexpr ptrdiff_t m_flNextStart = 0x3c;
   constexpr ptrdiff_t m_flStartOffset = 0x44;
   constexpr ptrdiff_t m_flEndOffset = 0x4c;
   constexpr ptrdiff_t m_flFadeIn = 0x54;
   constexpr ptrdiff_t m_flFadeOut = 0x58;

}

namespace CMoodVData {

   constexpr ptrdiff_t m_sModelName = 0x0;
   constexpr ptrdiff_t m_nMoodType = 0xe0;
   constexpr ptrdiff_t m_animationLayers = 0xe8;

}

namespace AnimationDecodeDebugDumpElement_t {

   constexpr ptrdiff_t m_nEntityIndex = 0x0;
   constexpr ptrdiff_t m_modelName = 0x8;
   constexpr ptrdiff_t m_poseParams = 0x10;
   constexpr ptrdiff_t m_decodeOps = 0x28;
   constexpr ptrdiff_t m_internalOps = 0x40;
   constexpr ptrdiff_t m_decodedAnims = 0x58;

}

namespace AnimationDecodeDebugDump_t {

   constexpr ptrdiff_t m_processingType = 0x0;
   constexpr ptrdiff_t m_elems = 0x8;

}

namespace AnimationSnapshotBase_t {

   constexpr ptrdiff_t m_flRealTime = 0x0;
   constexpr ptrdiff_t m_rootToWorld = 0x10;
   constexpr ptrdiff_t m_bBonesInWorldSpace = 0x40;
   constexpr ptrdiff_t m_boneSetupMask = 0x48;
   constexpr ptrdiff_t m_boneTransforms = 0x60;
   constexpr ptrdiff_t m_flexControllers = 0x78;
   constexpr ptrdiff_t m_SnapshotType = 0x90;
   constexpr ptrdiff_t m_bHasDecodeDump = 0x94;
   constexpr ptrdiff_t m_DecodeDump = 0x98;

}

namespace AnimationSnapshot_t {

   constexpr ptrdiff_t m_nEntIndex = 0x110;
   constexpr ptrdiff_t m_modelName = 0x118;

}

namespace CAnimBoneDifference {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_parent = 0x10;
   constexpr ptrdiff_t m_posError = 0x20;
   constexpr ptrdiff_t m_bHasRotation = 0x2c;
   constexpr ptrdiff_t m_bHasMovement = 0x2d;

}

namespace CAnimMorphDifference {

   constexpr ptrdiff_t m_name = 0x0;

}

namespace CAnimUserDifference {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_nType = 0x10;

}

namespace CAnimEncodeDifference {

   constexpr ptrdiff_t m_boneArray = 0x0;
   constexpr ptrdiff_t m_morphArray = 0x18;
   constexpr ptrdiff_t m_userArray = 0x30;
   constexpr ptrdiff_t m_bHasRotationBitArray = 0x48;
   constexpr ptrdiff_t m_bHasMovementBitArray = 0x60;
   constexpr ptrdiff_t m_bHasMorphBitArray = 0x78;
   constexpr ptrdiff_t m_bHasUserBitArray = 0x90;

}

namespace CAnimEventDefinition {

   constexpr ptrdiff_t m_nFrame = 0x8;
   constexpr ptrdiff_t m_flCycle = 0xc;
   constexpr ptrdiff_t m_EventData = 0x10;
   constexpr ptrdiff_t m_sLegacyOptions = 0x20;
   constexpr ptrdiff_t m_sEventName = 0x30;

}

namespace CAnimMovement {

   constexpr ptrdiff_t endframe = 0x0;
   constexpr ptrdiff_t motionflags = 0x4;
   constexpr ptrdiff_t v0 = 0x8;
   constexpr ptrdiff_t v1 = 0xc;
   constexpr ptrdiff_t angle = 0x10;
   constexpr ptrdiff_t vector = 0x14;
   constexpr ptrdiff_t position = 0x20;

}

namespace CAnimLocalHierarchy {

   constexpr ptrdiff_t m_sBone = 0x0;
   constexpr ptrdiff_t m_sNewParent = 0x10;
   constexpr ptrdiff_t m_nStartFrame = 0x20;
   constexpr ptrdiff_t m_nPeakFrame = 0x24;
   constexpr ptrdiff_t m_nTailFrame = 0x28;
   constexpr ptrdiff_t m_nEndFrame = 0x2c;

}

namespace CAnimDecoder {

   constexpr ptrdiff_t m_szName = 0x0;
   constexpr ptrdiff_t m_nVersion = 0x10;
   constexpr ptrdiff_t m_nType = 0x14;

}

namespace CAnimFrameSegment {

   constexpr ptrdiff_t m_nUniqueFrameIndex = 0x0;
   constexpr ptrdiff_t m_nLocalElementMasks = 0x4;
   constexpr ptrdiff_t m_nLocalChannel = 0x8;
   constexpr ptrdiff_t m_container = 0x10;

}

namespace CAnimFrameBlockAnim {

   constexpr ptrdiff_t m_nStartFrame = 0x0;
   constexpr ptrdiff_t m_nEndFrame = 0x4;
   constexpr ptrdiff_t m_segmentIndexArray = 0x8;

}

namespace CAnimEncodedFrames {

   constexpr ptrdiff_t m_fileName = 0x0;
   constexpr ptrdiff_t m_nFrames = 0x10;
   constexpr ptrdiff_t m_nFramesPerBlock = 0x14;
   constexpr ptrdiff_t m_frameblockArray = 0x18;
   constexpr ptrdiff_t m_usageDifferences = 0x30;

}

namespace CAnimDesc_Flag {

   constexpr ptrdiff_t m_bLooping = 0x0;
   constexpr ptrdiff_t m_bAllZeros = 0x1;
   constexpr ptrdiff_t m_bHidden = 0x2;
   constexpr ptrdiff_t m_bDelta = 0x3;
   constexpr ptrdiff_t m_bLegacyWorldspace = 0x4;
   constexpr ptrdiff_t m_bModelDoc = 0x5;
   constexpr ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6;
   constexpr ptrdiff_t m_bAnimGraphAdditive = 0x7;

}

namespace CAnimSequenceParams {

   constexpr ptrdiff_t m_flFadeInTime = 0x0;
   constexpr ptrdiff_t m_flFadeOutTime = 0x4;

}

namespace CAnimDesc {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_flags = 0x10;
   constexpr ptrdiff_t fps = 0x18;
   constexpr ptrdiff_t m_Data = 0x20;
   constexpr ptrdiff_t m_movementArray = 0xf8;
   constexpr ptrdiff_t m_eventArray = 0x110;
   constexpr ptrdiff_t m_activityArray = 0x128;
   constexpr ptrdiff_t m_hierarchyArray = 0x140;
   constexpr ptrdiff_t framestalltime = 0x158;
   constexpr ptrdiff_t m_vecRootMin = 0x15c;
   constexpr ptrdiff_t m_vecRootMax = 0x168;
   constexpr ptrdiff_t m_vecBoneWorldMin = 0x178;
   constexpr ptrdiff_t m_vecBoneWorldMax = 0x190;
   constexpr ptrdiff_t m_sequenceParams = 0x1a8;

}

namespace CAnimActivity {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_nActivity = 0x10;
   constexpr ptrdiff_t m_nFlags = 0x14;
   constexpr ptrdiff_t m_nWeight = 0x18;

}

namespace CAnimData {

   constexpr ptrdiff_t m_name = 0x10;
   constexpr ptrdiff_t m_animArray = 0x20;
   constexpr ptrdiff_t m_decoderArray = 0x38;
   constexpr ptrdiff_t m_nMaxUniqueFrameIndex = 0x50;
   constexpr ptrdiff_t m_segmentArray = 0x58;

}

namespace CAnimBone {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_parent = 0x10;
   constexpr ptrdiff_t m_pos = 0x14;
   constexpr ptrdiff_t m_quat = 0x20;
   constexpr ptrdiff_t m_scale = 0x30;
   constexpr ptrdiff_t m_qAlignment = 0x34;
   constexpr ptrdiff_t m_flags = 0x44;

}

namespace CAnimUser {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_nType = 0x10;

}

namespace CAnimDataChannelDesc {

   constexpr ptrdiff_t m_szChannelClass = 0x0;
   constexpr ptrdiff_t m_szVariableName = 0x10;
   constexpr ptrdiff_t m_nFlags = 0x20;
   constexpr ptrdiff_t m_nType = 0x24;
   constexpr ptrdiff_t m_szGrouping = 0x28;
   constexpr ptrdiff_t m_szDescription = 0x38;
   constexpr ptrdiff_t m_szElementNameArray = 0x48;
   constexpr ptrdiff_t m_nElementIndexArray = 0x60;
   constexpr ptrdiff_t m_nElementMaskArray = 0x78;

}

namespace CAnimKeyData {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_boneArray = 0x10;
   constexpr ptrdiff_t m_userArray = 0x28;
   constexpr ptrdiff_t m_morphArray = 0x40;
   constexpr ptrdiff_t m_nChannelElements = 0x58;
   constexpr ptrdiff_t m_dataChannelArray = 0x60;

}

namespace CAnimationGroup {

   constexpr ptrdiff_t m_nFlags = 0x10;
   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_localHAnimArray_Handle = 0x60;
   constexpr ptrdiff_t m_includedGroupArray_Handle = 0x78;
   constexpr ptrdiff_t m_directHSeqGroup_Handle = 0x90;
   constexpr ptrdiff_t m_decodeKey = 0x98;
   constexpr ptrdiff_t m_szScripts = 0x110;

}

namespace CSeqAutoLayerFlag {

   constexpr ptrdiff_t m_bPost = 0x0;
   constexpr ptrdiff_t m_bSpline = 0x1;
   constexpr ptrdiff_t m_bXFade = 0x2;
   constexpr ptrdiff_t m_bNoBlend = 0x3;
   constexpr ptrdiff_t m_bLocal = 0x4;
   constexpr ptrdiff_t m_bPose = 0x5;
   constexpr ptrdiff_t m_bFetchFrame = 0x6;
   constexpr ptrdiff_t m_bSubtract = 0x7;

}

namespace CSeqAutoLayer {

   constexpr ptrdiff_t m_nLocalReference = 0x0;
   constexpr ptrdiff_t m_nLocalPose = 0x2;
   constexpr ptrdiff_t m_flags = 0x4;
   constexpr ptrdiff_t m_start = 0xc;
   constexpr ptrdiff_t m_peak = 0x10;
   constexpr ptrdiff_t m_tail = 0x14;
   constexpr ptrdiff_t m_end = 0x18;

}

namespace CSeqIKLock {

   constexpr ptrdiff_t m_flPosWeight = 0x0;
   constexpr ptrdiff_t m_flAngleWeight = 0x4;
   constexpr ptrdiff_t m_nLocalBone = 0x8;
   constexpr ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xa;

}

namespace CSeqBoneMaskList {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_nLocalBoneArray = 0x10;
   constexpr ptrdiff_t m_flBoneWeightArray = 0x28;
   constexpr ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40;
   constexpr ptrdiff_t m_morphCtrlWeightArray = 0x48;

}

namespace CSeqScaleSet {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_bRootOffset = 0x10;
   constexpr ptrdiff_t m_vRootOffset = 0x14;
   constexpr ptrdiff_t m_nLocalBoneArray = 0x20;
   constexpr ptrdiff_t m_flBoneScaleArray = 0x38;

}

namespace CSeqMultiFetchFlag {

   constexpr ptrdiff_t m_bRealtime = 0x0;
   constexpr ptrdiff_t m_bCylepose = 0x1;
   constexpr ptrdiff_t m_b0D = 0x2;
   constexpr ptrdiff_t m_b1D = 0x3;
   constexpr ptrdiff_t m_b2D = 0x4;
   constexpr ptrdiff_t m_b2D_TRI = 0x5;

}

namespace CSeqMultiFetch {

   constexpr ptrdiff_t m_flags = 0x0;
   constexpr ptrdiff_t m_localReferenceArray = 0x8;
   constexpr ptrdiff_t m_nGroupSize = 0x20;
   constexpr ptrdiff_t m_nLocalPose = 0x28;
   constexpr ptrdiff_t m_poseKeyArray0 = 0x30;
   constexpr ptrdiff_t m_poseKeyArray1 = 0x48;
   constexpr ptrdiff_t m_nLocalCyclePoseParameter = 0x60;
   constexpr ptrdiff_t m_bCalculatePoseParameters = 0x64;

}

namespace CSeqSeqDescFlag {

   constexpr ptrdiff_t m_bLooping = 0x0;
   constexpr ptrdiff_t m_bSnap = 0x1;
   constexpr ptrdiff_t m_bAutoplay = 0x2;
   constexpr ptrdiff_t m_bPost = 0x3;
   constexpr ptrdiff_t m_bHidden = 0x4;
   constexpr ptrdiff_t m_bMulti = 0x5;
   constexpr ptrdiff_t m_bLegacyDelta = 0x6;
   constexpr ptrdiff_t m_bLegacyWorldspace = 0x7;
   constexpr ptrdiff_t m_bLegacyCyclepose = 0x8;
   constexpr ptrdiff_t m_bLegacyRealtime = 0x9;
   constexpr ptrdiff_t m_bModelDoc = 0xa;

}

namespace CSeqTransition {

   constexpr ptrdiff_t m_flFadeInTime = 0x0;
   constexpr ptrdiff_t m_flFadeOutTime = 0x4;

}

namespace CSeqS1SeqDesc {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_flags = 0x10;
   constexpr ptrdiff_t m_fetch = 0x20;
   constexpr ptrdiff_t m_nLocalWeightlist = 0x88;
   constexpr ptrdiff_t m_autoLayerArray = 0x90;
   constexpr ptrdiff_t m_IKLockArray = 0xa8;
   constexpr ptrdiff_t m_transition = 0xc0;
   constexpr ptrdiff_t m_SequenceKeys = 0xc8;
   constexpr ptrdiff_t m_LegacyKeyValueText = 0xd8;
   constexpr ptrdiff_t m_activityArray = 0xe8;
   constexpr ptrdiff_t m_footMotion = 0x100;

}

namespace CSeqSynthAnimDesc {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_flags = 0x10;
   constexpr ptrdiff_t m_transition = 0x1c;
   constexpr ptrdiff_t m_nLocalBaseReference = 0x24;
   constexpr ptrdiff_t m_nLocalBoneMask = 0x26;
   constexpr ptrdiff_t m_activityArray = 0x28;

}

namespace CSeqCmdLayer {

   constexpr ptrdiff_t m_cmd = 0x0;
   constexpr ptrdiff_t m_nLocalReference = 0x2;
   constexpr ptrdiff_t m_nLocalBonemask = 0x4;
   constexpr ptrdiff_t m_nDstResult = 0x6;
   constexpr ptrdiff_t m_nSrcResult = 0x8;
   constexpr ptrdiff_t m_bSpline = 0xa;
   constexpr ptrdiff_t m_flVar1 = 0xc;
   constexpr ptrdiff_t m_flVar2 = 0x10;
   constexpr ptrdiff_t m_nLineNumber = 0x14;

}

namespace CSeqPoseSetting {

   constexpr ptrdiff_t m_sPoseParameter = 0x0;
   constexpr ptrdiff_t m_sAttachment = 0x10;
   constexpr ptrdiff_t m_sReferenceSequence = 0x20;
   constexpr ptrdiff_t m_flValue = 0x30;
   constexpr ptrdiff_t m_bX = 0x34;
   constexpr ptrdiff_t m_bY = 0x35;
   constexpr ptrdiff_t m_bZ = 0x36;
   constexpr ptrdiff_t m_eType = 0x38;

}

namespace CSeqCmdSeqDesc {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_flags = 0x10;
   constexpr ptrdiff_t m_transition = 0x1c;
   constexpr ptrdiff_t m_nFrameRangeSequence = 0x24;
   constexpr ptrdiff_t m_nFrameCount = 0x26;
   constexpr ptrdiff_t m_flFPS = 0x28;
   constexpr ptrdiff_t m_nSubCycles = 0x2c;
   constexpr ptrdiff_t m_numLocalResults = 0x2e;
   constexpr ptrdiff_t m_cmdLayerArray = 0x30;
   constexpr ptrdiff_t m_eventArray = 0x48;
   constexpr ptrdiff_t m_activityArray = 0x60;
   constexpr ptrdiff_t m_poseSettingArray = 0x78;

}

namespace CSeqPoseParamDesc {

   constexpr ptrdiff_t m_sName = 0x0;
   constexpr ptrdiff_t m_flStart = 0x10;
   constexpr ptrdiff_t m_flEnd = 0x14;
   constexpr ptrdiff_t m_flLoop = 0x18;
   constexpr ptrdiff_t m_bLooping = 0x1c;

}

namespace CSequenceGroupData {

   constexpr ptrdiff_t m_sName = 0x10;
   constexpr ptrdiff_t m_nFlags = 0x20;
   constexpr ptrdiff_t m_localSequenceNameArray = 0x28;
   constexpr ptrdiff_t m_localS1SeqDescArray = 0x40;
   constexpr ptrdiff_t m_localMultiSeqDescArray = 0x58;
   constexpr ptrdiff_t m_localSynthAnimDescArray = 0x70;
   constexpr ptrdiff_t m_localCmdSeqDescArray = 0x88;
   constexpr ptrdiff_t m_localBoneMaskArray = 0xa0;
   constexpr ptrdiff_t m_localScaleSetArray = 0xb8;
   constexpr ptrdiff_t m_localBoneNameArray = 0xd0;
   constexpr ptrdiff_t m_localNodeName = 0xe8;
   constexpr ptrdiff_t m_localPoseParamArray = 0xf8;
   constexpr ptrdiff_t m_keyValues = 0x110;
   constexpr ptrdiff_t m_localIKAutoplayLockArray = 0x120;

}

namespace CCompressorGroup {

   constexpr ptrdiff_t m_nTotalElementCount = 0x0;
   constexpr ptrdiff_t m_szChannelClass = 0x8;
   constexpr ptrdiff_t m_szVariableName = 0x20;
   constexpr ptrdiff_t m_nType = 0x38;
   constexpr ptrdiff_t m_nFlags = 0x50;
   constexpr ptrdiff_t m_szGrouping = 0x68;
   constexpr ptrdiff_t m_nCompressorIndex = 0x80;
   constexpr ptrdiff_t m_szElementNames = 0x98;
   constexpr ptrdiff_t m_nElementUniqueID = 0xb0;
   constexpr ptrdiff_t m_nElementMask = 0xc8;
   constexpr ptrdiff_t m_vectorCompressor = 0xf8;
   constexpr ptrdiff_t m_quaternionCompressor = 0x110;
   constexpr ptrdiff_t m_intCompressor = 0x128;
   constexpr ptrdiff_t m_boolCompressor = 0x140;
   constexpr ptrdiff_t m_colorCompressor = 0x158;
   constexpr ptrdiff_t m_vector2DCompressor = 0x170;
   constexpr ptrdiff_t m_vector4DCompressor = 0x188;

}

namespace HSequence {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace CAnimEnum {

   constexpr ptrdiff_t m_value = 0x0;

}

namespace AnimNodeID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimNodeOutputID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimStateID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimParamID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimTagID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimComponentID {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace AnimScriptHandle {

   constexpr ptrdiff_t m_id = 0x0;

}

namespace CAnimAttachment {

   constexpr ptrdiff_t m_influenceRotations = 0x0;
   constexpr ptrdiff_t m_influenceOffsets = 0x30;
   constexpr ptrdiff_t m_influenceIndices = 0x60;
   constexpr ptrdiff_t m_influenceWeights = 0x6c;
   constexpr ptrdiff_t m_numInfluences = 0x78;

}

namespace VPhysics2ShapeDef_t {

   constexpr ptrdiff_t m_spheres = 0x0;
   constexpr ptrdiff_t m_capsules = 0x18;
   constexpr ptrdiff_t m_hulls = 0x30;
   constexpr ptrdiff_t m_meshes = 0x48;
   constexpr ptrdiff_t m_CollisionAttributeIndices = 0x60;

}

namespace VPhysXBodyPart_t {

   constexpr ptrdiff_t m_nFlags = 0x0;
   constexpr ptrdiff_t m_flMass = 0x4;
   constexpr ptrdiff_t m_rnShape = 0x8;
   constexpr ptrdiff_t m_nCollisionAttributeIndex = 0x80;
   constexpr ptrdiff_t m_nReserved = 0x82;
   constexpr ptrdiff_t m_flInertiaScale = 0x84;
   constexpr ptrdiff_t m_flLinearDamping = 0x88;
   constexpr ptrdiff_t m_flAngularDamping = 0x8c;
   constexpr ptrdiff_t m_bOverrideMassCenter = 0x90;
   constexpr ptrdiff_t m_vMassCenterOverride = 0x94;

}

namespace VPhysXCollisionAttributes_t {

   constexpr ptrdiff_t m_CollisionGroup = 0x0;
   constexpr ptrdiff_t m_InteractAs = 0x8;
   constexpr ptrdiff_t m_InteractWith = 0x20;
   constexpr ptrdiff_t m_InteractExclude = 0x38;
   constexpr ptrdiff_t m_CollisionGroupString = 0x50;
   constexpr ptrdiff_t m_InteractAsStrings = 0x58;
   constexpr ptrdiff_t m_InteractWithStrings = 0x70;
   constexpr ptrdiff_t m_InteractExcludeStrings = 0x88;

}

namespace VPhysXRange_t {

   constexpr ptrdiff_t m_flMin = 0x0;
   constexpr ptrdiff_t m_flMax = 0x4;

}

namespace VPhysXConstraintParams_t {

   constexpr ptrdiff_t m_nType = 0x0;
   constexpr ptrdiff_t m_nTranslateMotion = 0x1;
   constexpr ptrdiff_t m_nRotateMotion = 0x2;
   constexpr ptrdiff_t m_nFlags = 0x3;
   constexpr ptrdiff_t m_anchor = 0x4;
   constexpr ptrdiff_t m_axes = 0x1c;
   constexpr ptrdiff_t m_maxForce = 0x3c;
   constexpr ptrdiff_t m_maxTorque = 0x40;
   constexpr ptrdiff_t m_linearLimitValue = 0x44;
   constexpr ptrdiff_t m_linearLimitRestitution = 0x48;
   constexpr ptrdiff_t m_linearLimitSpring = 0x4c;
   constexpr ptrdiff_t m_linearLimitDamping = 0x50;
   constexpr ptrdiff_t m_twistLowLimitValue = 0x54;
   constexpr ptrdiff_t m_twistLowLimitRestitution = 0x58;
   constexpr ptrdiff_t m_twistLowLimitSpring = 0x5c;
   constexpr ptrdiff_t m_twistLowLimitDamping = 0x60;
   constexpr ptrdiff_t m_twistHighLimitValue = 0x64;
   constexpr ptrdiff_t m_twistHighLimitRestitution = 0x68;
   constexpr ptrdiff_t m_twistHighLimitSpring = 0x6c;
   constexpr ptrdiff_t m_twistHighLimitDamping = 0x70;
   constexpr ptrdiff_t m_swing1LimitValue = 0x74;
   constexpr ptrdiff_t m_swing1LimitRestitution = 0x78;
   constexpr ptrdiff_t m_swing1LimitSpring = 0x7c;
   constexpr ptrdiff_t m_swing1LimitDamping = 0x80;
   constexpr ptrdiff_t m_swing2LimitValue = 0x84;
   constexpr ptrdiff_t m_swing2LimitRestitution = 0x88;
   constexpr ptrdiff_t m_swing2LimitSpring = 0x8c;
   constexpr ptrdiff_t m_swing2LimitDamping = 0x90;
   constexpr ptrdiff_t m_goalPosition = 0x94;
   constexpr ptrdiff_t m_goalOrientation = 0xa0;
   constexpr ptrdiff_t m_goalAngularVelocity = 0xb0;
   constexpr ptrdiff_t m_driveSpringX = 0xbc;
   constexpr ptrdiff_t m_driveSpringY = 0xc0;
   constexpr ptrdiff_t m_driveSpringZ = 0xc4;
   constexpr ptrdiff_t m_driveDampingX = 0xc8;
   constexpr ptrdiff_t m_driveDampingY = 0xcc;
   constexpr ptrdiff_t m_driveDampingZ = 0xd0;
   constexpr ptrdiff_t m_driveSpringTwist = 0xd4;
   constexpr ptrdiff_t m_driveSpringSwing = 0xd8;
   constexpr ptrdiff_t m_driveSpringSlerp = 0xdc;
   constexpr ptrdiff_t m_driveDampingTwist = 0xe0;
   constexpr ptrdiff_t m_driveDampingSwing = 0xe4;
   constexpr ptrdiff_t m_driveDampingSlerp = 0xe8;
   constexpr ptrdiff_t m_solverIterationCount = 0xec;
   constexpr ptrdiff_t m_projectionLinearTolerance = 0xf0;
   constexpr ptrdiff_t m_projectionAngularTolerance = 0xf4;

}

namespace VPhysXConstraint2_t {

   constexpr ptrdiff_t m_nFlags = 0x0;
   constexpr ptrdiff_t m_nParent = 0x4;
   constexpr ptrdiff_t m_nChild = 0x6;
   constexpr ptrdiff_t m_params = 0x8;

}

namespace VPhysXJoint_t {

   constexpr ptrdiff_t m_nType = 0x0;
   constexpr ptrdiff_t m_nBody1 = 0x2;
   constexpr ptrdiff_t m_nBody2 = 0x4;
   constexpr ptrdiff_t m_nFlags = 0x6;
   constexpr ptrdiff_t m_Frame1 = 0x10;
   constexpr ptrdiff_t m_Frame2 = 0x30;
   constexpr ptrdiff_t m_bEnableCollision = 0x50;
   constexpr ptrdiff_t m_bEnableLinearLimit = 0x51;
   constexpr ptrdiff_t m_LinearLimit = 0x54;
   constexpr ptrdiff_t m_bEnableLinearMotor = 0x5c;
   constexpr ptrdiff_t m_vLinearTargetVelocity = 0x60;
   constexpr ptrdiff_t m_flMaxForce = 0x6c;
   constexpr ptrdiff_t m_bEnableSwingLimit = 0x70;
   constexpr ptrdiff_t m_SwingLimit = 0x74;
   constexpr ptrdiff_t m_bEnableTwistLimit = 0x7c;
   constexpr ptrdiff_t m_TwistLimit = 0x80;
   constexpr ptrdiff_t m_bEnableAngularMotor = 0x88;
   constexpr ptrdiff_t m_vAngularTargetVelocity = 0x8c;
   constexpr ptrdiff_t m_flMaxTorque = 0x98;
   constexpr ptrdiff_t m_flLinearFrequency = 0x9c;
   constexpr ptrdiff_t m_flLinearDampingRatio = 0xa0;
   constexpr ptrdiff_t m_flAngularFrequency = 0xa4;
   constexpr ptrdiff_t m_flAngularDampingRatio = 0xa8;
   constexpr ptrdiff_t m_flFriction = 0xac;

}

namespace PhysSoftbodyDesc_t {

   constexpr ptrdiff_t m_ParticleBoneHash = 0x0;
   constexpr ptrdiff_t m_Particles = 0x18;
   constexpr ptrdiff_t m_Springs = 0x30;
   constexpr ptrdiff_t m_Capsules = 0x48;
   constexpr ptrdiff_t m_InitPose = 0x60;
   constexpr ptrdiff_t m_ParticleBoneName = 0x78;

}

namespace VPhysXAggregateData_t {

   constexpr ptrdiff_t m_nFlags = 0x0;
   constexpr ptrdiff_t m_nRefCounter = 0x2;
   constexpr ptrdiff_t m_bonesHash = 0x8;
   constexpr ptrdiff_t m_boneNames = 0x20;
   constexpr ptrdiff_t m_indexNames = 0x38;
   constexpr ptrdiff_t m_indexHash = 0x50;
   constexpr ptrdiff_t m_bindPose = 0x68;
   constexpr ptrdiff_t m_parts = 0x80;
   constexpr ptrdiff_t m_constraints2 = 0x98;
   constexpr ptrdiff_t m_joints = 0xb0;
   constexpr ptrdiff_t m_pFeModel = 0xc8;
   constexpr ptrdiff_t m_boneParents = 0xd0;
   constexpr ptrdiff_t m_surfacePropertyHashes = 0xe8;
   constexpr ptrdiff_t m_collisionAttributes = 0x100;
   constexpr ptrdiff_t m_debugPartNames = 0x118;
   constexpr ptrdiff_t m_embeddedKeyvalues = 0x130;

}

namespace CPhysSurfacePropertiesPhysics {

   constexpr ptrdiff_t m_friction = 0x0;
   constexpr ptrdiff_t m_elasticity = 0x4;
   constexpr ptrdiff_t m_density = 0x8;
   constexpr ptrdiff_t m_thickness = 0xc;
   constexpr ptrdiff_t m_softContactFrequency = 0x10;
   constexpr ptrdiff_t m_softContactDampingRatio = 0x14;
   constexpr ptrdiff_t m_wheelDrag = 0x18;

}

namespace CPhysSurfacePropertiesAudio {

   constexpr ptrdiff_t m_reflectivity = 0x0;
   constexpr ptrdiff_t m_hardnessFactor = 0x4;
   constexpr ptrdiff_t m_roughnessFactor = 0x8;
   constexpr ptrdiff_t m_roughThreshold = 0xc;
   constexpr ptrdiff_t m_hardThreshold = 0x10;
   constexpr ptrdiff_t m_hardVelocityThreshold = 0x14;
   constexpr ptrdiff_t m_flStaticImpactVolume = 0x18;
   constexpr ptrdiff_t m_flOcclusionFactor = 0x1c;

}

namespace CPhysSurfacePropertiesSoundNames {

   constexpr ptrdiff_t m_impactSoft = 0x0;
   constexpr ptrdiff_t m_impactHard = 0x8;
   constexpr ptrdiff_t m_scrapeSmooth = 0x10;
   constexpr ptrdiff_t m_scrapeRough = 0x18;
   constexpr ptrdiff_t m_bulletImpact = 0x20;
   constexpr ptrdiff_t m_rolling = 0x28;
   constexpr ptrdiff_t m_break = 0x30;
   constexpr ptrdiff_t m_strain = 0x38;

}

namespace CPhysSurfaceProperties {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_nameHash = 0x8;
   constexpr ptrdiff_t m_baseNameHash = 0xc;
   constexpr ptrdiff_t m_bHidden = 0x18;
   constexpr ptrdiff_t m_description = 0x20;
   constexpr ptrdiff_t m_physics = 0x28;
   constexpr ptrdiff_t m_audioSounds = 0x48;
   constexpr ptrdiff_t m_audioParams = 0x88;

}

namespace CVPhysXSurfacePropertiesList {

   constexpr ptrdiff_t m_surfacePropertiesList = 0x0;

}

namespace MaterialGroup_t {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_materials = 0x8;

}

namespace ModelSkeletonData_t {

   constexpr ptrdiff_t m_boneName = 0x0;
   constexpr ptrdiff_t m_nParent = 0x18;
   constexpr ptrdiff_t m_boneSphere = 0x30;
   constexpr ptrdiff_t m_nFlag = 0x48;
   constexpr ptrdiff_t m_bonePosParent = 0x60;
   constexpr ptrdiff_t m_boneRotParent = 0x78;
   constexpr ptrdiff_t m_boneScaleParent = 0x90;

}

namespace PermModelInfo_t {

   constexpr ptrdiff_t m_nFlags = 0x0;
   constexpr ptrdiff_t m_vHullMin = 0x4;
   constexpr ptrdiff_t m_vHullMax = 0x10;
   constexpr ptrdiff_t m_vViewMin = 0x1c;
   constexpr ptrdiff_t m_vViewMax = 0x28;
   constexpr ptrdiff_t m_flMass = 0x34;
   constexpr ptrdiff_t m_vEyePosition = 0x38;
   constexpr ptrdiff_t m_flMaxEyeDeflection = 0x44;
   constexpr ptrdiff_t m_sSurfaceProperty = 0x48;
   constexpr ptrdiff_t m_keyValueText = 0x50;

}

namespace PermModelExtPart_t {

   constexpr ptrdiff_t m_Transform = 0x0;
   constexpr ptrdiff_t m_Name = 0x20;
   constexpr ptrdiff_t m_nParent = 0x28;
   constexpr ptrdiff_t m_refModel = 0x30;

}

namespace ModelBoneFlexDriverControl_t {

   constexpr ptrdiff_t m_nBoneComponent = 0x0;
   constexpr ptrdiff_t m_flexController = 0x8;
   constexpr ptrdiff_t m_flexControllerToken = 0x10;
   constexpr ptrdiff_t m_flMin = 0x14;
   constexpr ptrdiff_t m_flMax = 0x18;

}

namespace ModelBoneFlexDriver_t {

   constexpr ptrdiff_t m_boneName = 0x0;
   constexpr ptrdiff_t m_boneNameToken = 0x8;
   constexpr ptrdiff_t m_controls = 0x10;

}

namespace PermModelDataAnimatedMaterialAttribute_t {

   constexpr ptrdiff_t m_AttributeName = 0x0;
   constexpr ptrdiff_t m_nNumChannels = 0x8;

}

namespace PermModelData_t {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_modelInfo = 0x8;
   constexpr ptrdiff_t m_ExtParts = 0x60;
   constexpr ptrdiff_t m_refMeshes = 0x78;
   constexpr ptrdiff_t m_refMeshGroupMasks = 0x90;
   constexpr ptrdiff_t m_refPhysGroupMasks = 0xa8;
   constexpr ptrdiff_t m_refLODGroupMasks = 0xc0;
   constexpr ptrdiff_t m_lodGroupSwitchDistances = 0xd8;
   constexpr ptrdiff_t m_refPhysicsData = 0xf0;
   constexpr ptrdiff_t m_refPhysicsHitboxData = 0x108;
   constexpr ptrdiff_t m_refAnimGroups = 0x120;
   constexpr ptrdiff_t m_refSequenceGroups = 0x138;
   constexpr ptrdiff_t m_meshGroups = 0x150;
   constexpr ptrdiff_t m_materialGroups = 0x168;
   constexpr ptrdiff_t m_nDefaultMeshGroupMask = 0x180;
   constexpr ptrdiff_t m_modelSkeleton = 0x188;
   constexpr ptrdiff_t m_remappingTable = 0x230;
   constexpr ptrdiff_t m_remappingTableStarts = 0x248;
   constexpr ptrdiff_t m_boneFlexDrivers = 0x260;
   constexpr ptrdiff_t m_pModelConfigList = 0x278;
   constexpr ptrdiff_t m_BodyGroupsHiddenInTools = 0x280;
   constexpr ptrdiff_t m_refAnimIncludeModels = 0x298;
   constexpr ptrdiff_t m_AnimatedMaterialAttributes = 0x2b0;

}

namespace AttachmentHandle_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace CModelConfigElement {

   constexpr ptrdiff_t m_ElementName = 0x8;
   constexpr ptrdiff_t m_NestedElements = 0x10;

}

namespace CModelConfigElement_AttachedModel {

   constexpr ptrdiff_t m_InstanceName = 0x48;
   constexpr ptrdiff_t m_EntityClass = 0x50;
   constexpr ptrdiff_t m_hModel = 0x58;
   constexpr ptrdiff_t m_vOffset = 0x60;
   constexpr ptrdiff_t m_aAngOffset = 0x6c;
   constexpr ptrdiff_t m_AttachmentName = 0x78;
   constexpr ptrdiff_t m_LocalAttachmentOffsetName = 0x80;
   constexpr ptrdiff_t m_AttachmentType = 0x88;
   constexpr ptrdiff_t m_bBoneMergeFlex = 0x8c;
   constexpr ptrdiff_t m_bUserSpecifiedColor = 0x8d;
   constexpr ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8e;
   constexpr ptrdiff_t m_bAcceptParentMaterialDrivenDecals = 0x8f;
   constexpr ptrdiff_t m_BodygroupOnOtherModels = 0x90;
   constexpr ptrdiff_t m_MaterialGroupOnOtherModels = 0x98;

}

namespace CModelConfigElement_UserPick {

   constexpr ptrdiff_t m_Choices = 0x48;

}

namespace CModelConfigElement_RandomPick {

   constexpr ptrdiff_t m_Choices = 0x48;
   constexpr ptrdiff_t m_ChoiceWeights = 0x60;

}

namespace CModelConfigElement_SetMaterialGroup {

   constexpr ptrdiff_t m_MaterialGroupName = 0x48;

}

namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {

   constexpr ptrdiff_t m_MaterialGroupName = 0x48;

}

namespace CModelConfigElement_SetRenderColor {

   constexpr ptrdiff_t m_Color = 0x48;

}

namespace CModelConfigElement_RandomColor {

   constexpr ptrdiff_t m_Gradient = 0x48;

}

namespace CModelConfigElement_SetBodygroup {

   constexpr ptrdiff_t m_GroupName = 0x48;
   constexpr ptrdiff_t m_nChoice = 0x50;

}

namespace CModelConfigElement_SetBodygroupOnAttachedModels {

   constexpr ptrdiff_t m_GroupName = 0x48;
   constexpr ptrdiff_t m_nChoice = 0x50;

}

namespace CModelConfigElement_Command {

   constexpr ptrdiff_t m_Command = 0x48;
   constexpr ptrdiff_t m_Args = 0x50;

}

namespace CModelConfig {

   constexpr ptrdiff_t m_ConfigName = 0x0;
   constexpr ptrdiff_t m_Elements = 0x8;
   constexpr ptrdiff_t m_bTopLevel = 0x20;

}

namespace CModelConfigList {

   constexpr ptrdiff_t m_bHideMaterialGroupInTools = 0x0;
   constexpr ptrdiff_t m_bHideRenderColorInTools = 0x1;
   constexpr ptrdiff_t m_Configs = 0x8;

}

namespace CRenderBufferBinding {

   constexpr ptrdiff_t m_hBuffer = 0x0;
   constexpr ptrdiff_t m_nBindOffsetBytes = 0x10;

}

namespace SkeletonBoneBounds_t {

   constexpr ptrdiff_t m_vecCenter = 0x0;
   constexpr ptrdiff_t m_vecSize = 0xc;

}

namespace RenderSkeletonBone_t {

   constexpr ptrdiff_t m_boneName = 0x0;
   constexpr ptrdiff_t m_parentName = 0x8;
   constexpr ptrdiff_t m_invBindPose = 0x10;
   constexpr ptrdiff_t m_bbox = 0x40;
   constexpr ptrdiff_t m_flSphereRadius = 0x58;

}

namespace CRenderSkeleton {

   constexpr ptrdiff_t m_bones = 0x0;
   constexpr ptrdiff_t m_boneParents = 0x30;
   constexpr ptrdiff_t m_nBoneWeightCount = 0x48;

}

namespace CDrawCullingData {

   constexpr ptrdiff_t m_vConeApex = 0x0;
   constexpr ptrdiff_t m_ConeAxis = 0xc;
   constexpr ptrdiff_t m_ConeCutoff = 0xf;

}

namespace CMaterialDrawDescriptor {

   constexpr ptrdiff_t m_nPrimitiveType = 0x0;
   constexpr ptrdiff_t m_nBaseVertex = 0x4;
   constexpr ptrdiff_t m_nVertexCount = 0x8;
   constexpr ptrdiff_t m_nStartIndex = 0xc;
   constexpr ptrdiff_t m_nIndexCount = 0x10;
   constexpr ptrdiff_t m_flUvDensity = 0x14;
   constexpr ptrdiff_t m_vTintColor = 0x18;
   constexpr ptrdiff_t m_flAlpha = 0x24;
   constexpr ptrdiff_t m_nFirstMeshlet = 0x2c;
   constexpr ptrdiff_t m_nNumMeshlets = 0x30;
   constexpr ptrdiff_t m_indexBuffer = 0xb8;
   constexpr ptrdiff_t m_material = 0xe0;

}

namespace CMeshletDescriptor {

   constexpr ptrdiff_t m_PackedAABB = 0x0;
   constexpr ptrdiff_t m_CullingData = 0x8;

}

namespace CSceneObjectData {

   constexpr ptrdiff_t m_vMinBounds = 0x0;
   constexpr ptrdiff_t m_vMaxBounds = 0xc;
   constexpr ptrdiff_t m_drawCalls = 0x18;
   constexpr ptrdiff_t m_drawBounds = 0x30;
   constexpr ptrdiff_t m_meshlets = 0x48;
   constexpr ptrdiff_t m_vTintColor = 0x60;

}

namespace CAttachment {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_influenceNames = 0x8;
   constexpr ptrdiff_t m_vInfluenceRotations = 0x20;
   constexpr ptrdiff_t m_vInfluenceOffsets = 0x50;
   constexpr ptrdiff_t m_influenceWeights = 0x74;
   constexpr ptrdiff_t m_bInfluenceRootTransform = 0x80;
   constexpr ptrdiff_t m_nInfluences = 0x83;
   constexpr ptrdiff_t m_bIgnoreRotation = 0x84;

}

namespace CHitBox {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_sSurfaceProperty = 0x8;
   constexpr ptrdiff_t m_sBoneName = 0x10;
   constexpr ptrdiff_t m_vMinBounds = 0x18;
   constexpr ptrdiff_t m_vMaxBounds = 0x24;
   constexpr ptrdiff_t m_flShapeRadius = 0x30;
   constexpr ptrdiff_t m_nBoneNameHash = 0x34;
   constexpr ptrdiff_t m_nGroupId = 0x38;
   constexpr ptrdiff_t m_nShapeType = 0x3c;
   constexpr ptrdiff_t m_bTranslationOnly = 0x3d;
   constexpr ptrdiff_t m_CRC = 0x40;
   constexpr ptrdiff_t m_cRenderColor = 0x44;
   constexpr ptrdiff_t m_nHitBoxIndex = 0x48;

}

namespace CHitBoxSet {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_nNameHash = 0x8;
   constexpr ptrdiff_t m_HitBoxes = 0x10;
   constexpr ptrdiff_t m_SourceFilename = 0x28;

}

namespace CHitBoxSetList {

   constexpr ptrdiff_t m_HitBoxSets = 0x0;

}

namespace CRenderMesh {

   constexpr ptrdiff_t m_sceneObjects = 0x10;
   constexpr ptrdiff_t m_constraints = 0xa0;
   constexpr ptrdiff_t m_skeleton = 0xb8;

}

namespace CConstraintTarget {

   constexpr ptrdiff_t m_qOffset = 0x20;
   constexpr ptrdiff_t m_vOffset = 0x30;
   constexpr ptrdiff_t m_nBoneHash = 0x3c;
   constexpr ptrdiff_t m_sName = 0x40;
   constexpr ptrdiff_t m_flWeight = 0x48;
   constexpr ptrdiff_t m_bIsAttachment = 0x59;

}

namespace CConstraintSlave {

   constexpr ptrdiff_t m_qBaseOrientation = 0x0;
   constexpr ptrdiff_t m_vBasePosition = 0x10;
   constexpr ptrdiff_t m_nBoneHash = 0x1c;
   constexpr ptrdiff_t m_flWeight = 0x20;
   constexpr ptrdiff_t m_sName = 0x28;

}

namespace CBaseConstraint {

   constexpr ptrdiff_t m_name = 0x28;
   constexpr ptrdiff_t m_vUpVector = 0x30;
   constexpr ptrdiff_t m_slaves = 0x40;
   constexpr ptrdiff_t m_targets = 0x58;

}

namespace CAimConstraint {

   constexpr ptrdiff_t m_qAimOffset = 0x70;
   constexpr ptrdiff_t m_nUpType = 0x80;

}

namespace CTwistConstraint {

   constexpr ptrdiff_t m_bInverse = 0x70;
   constexpr ptrdiff_t m_qParentBindRotation = 0x80;
   constexpr ptrdiff_t m_qChildBindRotation = 0x90;

}

namespace CTiltTwistConstraint {

   constexpr ptrdiff_t m_nTargetAxis = 0x70;
   constexpr ptrdiff_t m_nSlaveAxis = 0x74;

}

namespace CMorphConstraint {

   constexpr ptrdiff_t m_sTargetMorph = 0x70;
   constexpr ptrdiff_t m_nSlaveChannel = 0x78;
   constexpr ptrdiff_t m_flMin = 0x7c;
   constexpr ptrdiff_t m_flMax = 0x80;

}

namespace CBoneConstraintPoseSpaceMorph {

   constexpr ptrdiff_t m_sBoneName = 0x28;
   constexpr ptrdiff_t m_sAttachmentName = 0x30;
   constexpr ptrdiff_t m_outputMorph = 0x38;
   constexpr ptrdiff_t m_inputList = 0x50;
   constexpr ptrdiff_t m_bClamp = 0x68;

}

namespace CBoneConstraintPoseSpaceMorph::Input_t {

   constexpr ptrdiff_t m_inputValue = 0x0;
   constexpr ptrdiff_t m_outputWeightList = 0x10;

}

namespace CBoneConstraintPoseSpaceBone {

   constexpr ptrdiff_t m_inputList = 0x70;

}

namespace CBoneConstraintPoseSpaceBone::Input_t {

   constexpr ptrdiff_t m_inputValue = 0x0;
   constexpr ptrdiff_t m_outputTransformList = 0x10;

}

namespace CBoneConstraintDotToMorph {

   constexpr ptrdiff_t m_sBoneName = 0x28;
   constexpr ptrdiff_t m_sTargetBoneName = 0x30;
   constexpr ptrdiff_t m_sMorphChannelName = 0x38;
   constexpr ptrdiff_t m_flRemap = 0x40;

}

namespace CFlexOp {

   constexpr ptrdiff_t m_OpCode = 0x0;
   constexpr ptrdiff_t m_Data = 0x4;

}

namespace CFlexRule {

   constexpr ptrdiff_t m_nFlex = 0x0;
   constexpr ptrdiff_t m_FlexOps = 0x8;

}

namespace CFlexDesc {

   constexpr ptrdiff_t m_szFacs = 0x0;

}

namespace CFlexController {

   constexpr ptrdiff_t m_szName = 0x0;
   constexpr ptrdiff_t m_szType = 0x8;
   constexpr ptrdiff_t min = 0x10;
   constexpr ptrdiff_t max = 0x14;

}

namespace CMorphBundleData {

   constexpr ptrdiff_t m_flULeftSrc = 0x0;
   constexpr ptrdiff_t m_flVTopSrc = 0x4;
   constexpr ptrdiff_t m_offsets = 0x8;
   constexpr ptrdiff_t m_ranges = 0x20;

}

namespace CMorphRectData {

   constexpr ptrdiff_t m_nXLeftDst = 0x0;
   constexpr ptrdiff_t m_nYTopDst = 0x2;
   constexpr ptrdiff_t m_flUWidthSrc = 0x4;
   constexpr ptrdiff_t m_flVHeightSrc = 0x8;
   constexpr ptrdiff_t m_bundleDatas = 0x10;

}

namespace CMorphData {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_morphRectDatas = 0x8;

}

namespace CMorphSetData {

   constexpr ptrdiff_t m_nWidth = 0x10;
   constexpr ptrdiff_t m_nHeight = 0x14;
   constexpr ptrdiff_t m_bundleTypes = 0x18;
   constexpr ptrdiff_t m_morphDatas = 0x30;
   constexpr ptrdiff_t m_pTextureAtlas = 0x48;
   constexpr ptrdiff_t m_FlexDesc = 0x50;
   constexpr ptrdiff_t m_FlexControllers = 0x68;
   constexpr ptrdiff_t m_FlexRules = 0x80;

}

namespace CAnimFoot {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_vBallOffset = 0x8;
   constexpr ptrdiff_t m_vHeelOffset = 0x14;
   constexpr ptrdiff_t m_ankleBoneIndex = 0x20;
   constexpr ptrdiff_t m_toeBoneIndex = 0x24;

}

namespace CAnimSkeleton {

   constexpr ptrdiff_t m_localSpaceTransforms = 0x10;
   constexpr ptrdiff_t m_modelSpaceTransforms = 0x28;
   constexpr ptrdiff_t m_boneNames = 0x40;
   constexpr ptrdiff_t m_children = 0x58;
   constexpr ptrdiff_t m_parents = 0x70;
   constexpr ptrdiff_t m_feet = 0x88;
   constexpr ptrdiff_t m_morphNames = 0xa0;
   constexpr ptrdiff_t m_lodBoneCounts = 0xb8;

}

namespace CFootDefinition {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_ankleBoneName = 0x8;
   constexpr ptrdiff_t m_toeBoneName = 0x10;
   constexpr ptrdiff_t m_vBallOffset = 0x18;
   constexpr ptrdiff_t m_vHeelOffset = 0x24;
   constexpr ptrdiff_t m_flFootLength = 0x30;
   constexpr ptrdiff_t m_flBindPoseDirectionMS = 0x34;
   constexpr ptrdiff_t m_flTraceHeight = 0x38;
   constexpr ptrdiff_t m_flTraceRadius = 0x3c;

}

namespace CCycleBase {

   constexpr ptrdiff_t m_flCycle = 0x0;

}

namespace CFootCycleDefinition {

   constexpr ptrdiff_t m_vStancePositionMS = 0x0;
   constexpr ptrdiff_t m_vMidpointPositionMS = 0xc;
   constexpr ptrdiff_t m_flStanceDirectionMS = 0x18;
   constexpr ptrdiff_t m_vToStrideStartPos = 0x1c;
   constexpr ptrdiff_t m_stanceCycle = 0x28;
   constexpr ptrdiff_t m_footLiftCycle = 0x2c;
   constexpr ptrdiff_t m_footOffCycle = 0x30;
   constexpr ptrdiff_t m_footStrikeCycle = 0x34;
   constexpr ptrdiff_t m_footLandCycle = 0x38;

}

namespace CFootTrajectory {

   constexpr ptrdiff_t m_vOffset = 0x0;
   constexpr ptrdiff_t m_flRotationOffset = 0xc;
   constexpr ptrdiff_t m_flProgression = 0x10;

}

namespace CFootTrajectories {

   constexpr ptrdiff_t m_trajectories = 0x0;

}

namespace CFootStride {

   constexpr ptrdiff_t m_definition = 0x0;
   constexpr ptrdiff_t m_trajectories = 0x40;

}

namespace CFootMotion {

   constexpr ptrdiff_t m_strides = 0x0;
   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_bAdditive = 0x20;

}

namespace CFingerSource {

   constexpr ptrdiff_t m_nFingerIndex = 0x0;
   constexpr ptrdiff_t m_flFingerWeight = 0x4;

}

namespace CFingerBone {

   constexpr ptrdiff_t m_boneName = 0x0;
   constexpr ptrdiff_t m_hingeAxis = 0x8;
   constexpr ptrdiff_t m_vCapsulePos1 = 0x14;
   constexpr ptrdiff_t m_vCapsulePos2 = 0x20;
   constexpr ptrdiff_t m_flMinAngle = 0x2c;
   constexpr ptrdiff_t m_flMaxAngle = 0x30;
   constexpr ptrdiff_t m_flRadius = 0x34;

}

namespace CFingerChain {

   constexpr ptrdiff_t m_targets = 0x0;
   constexpr ptrdiff_t m_bones = 0x18;
   constexpr ptrdiff_t m_name = 0x30;
   constexpr ptrdiff_t m_tipParentBoneName = 0x38;
   constexpr ptrdiff_t m_vTipOffset = 0x40;
   constexpr ptrdiff_t m_metacarpalBoneName = 0x50;
   constexpr ptrdiff_t m_vSplayHingeAxis = 0x58;
   constexpr ptrdiff_t m_flSplayMinAngle = 0x64;
   constexpr ptrdiff_t m_flSplayMaxAngle = 0x68;
   constexpr ptrdiff_t m_flFingerScaleRatio = 0x6c;

}

namespace CWristBone {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_vForwardLS = 0x8;
   constexpr ptrdiff_t m_vUpLS = 0x14;
   constexpr ptrdiff_t m_vOffset = 0x20;

}

namespace CVrSkeletalInputSettings {

   constexpr ptrdiff_t m_wristBones = 0x0;
   constexpr ptrdiff_t m_fingers = 0x18;
   constexpr ptrdiff_t m_name = 0x30;
   constexpr ptrdiff_t m_outerKnuckle1 = 0x38;
   constexpr ptrdiff_t m_outerKnuckle2 = 0x40;
   constexpr ptrdiff_t m_eHand = 0x48;

}

namespace BoneDemoCaptureSettings_t {

   constexpr ptrdiff_t m_boneName = 0x0;
   constexpr ptrdiff_t m_flChainLength = 0x8;

}

namespace IKDemoCaptureSettings_t {

   constexpr ptrdiff_t m_parentBoneName = 0x0;
   constexpr ptrdiff_t m_eMode = 0x8;
   constexpr ptrdiff_t m_ikChainName = 0x10;
   constexpr ptrdiff_t m_oneBoneStart = 0x18;
   constexpr ptrdiff_t m_oneBoneEnd = 0x20;

}

namespace CAnimDemoCaptureSettings {

   constexpr ptrdiff_t m_rangeBoneChainLength = 0x0;
   constexpr ptrdiff_t m_rangeMaxSplineErrorRotation = 0x8;
   constexpr ptrdiff_t m_flMaxSplineErrorTranslation = 0x10;
   constexpr ptrdiff_t m_flMaxSplineErrorScale = 0x14;
   constexpr ptrdiff_t m_flIkRotation_MaxSplineError = 0x18;
   constexpr ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1c;
   constexpr ptrdiff_t m_flMaxQuantizationErrorRotation = 0x20;
   constexpr ptrdiff_t m_flMaxQuantizationErrorTranslation = 0x24;
   constexpr ptrdiff_t m_flMaxQuantizationErrorScale = 0x28;
   constexpr ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x2c;
   constexpr ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x30;
   constexpr ptrdiff_t m_baseSequence = 0x38;
   constexpr ptrdiff_t m_nBaseSequenceFrame = 0x40;
   constexpr ptrdiff_t m_boneSelectionMode = 0x44;
   constexpr ptrdiff_t m_bones = 0x48;
   constexpr ptrdiff_t m_ikChains = 0x60;

}

namespace CAnimReplayFrame {

   constexpr ptrdiff_t m_inputDataBlocks = 0x10;
   constexpr ptrdiff_t m_instanceData = 0x28;
   constexpr ptrdiff_t m_startingLocalToWorldTransform = 0x40;
   constexpr ptrdiff_t m_localToWorldTransform = 0x60;
   constexpr ptrdiff_t m_timeStamp = 0x80;

}

namespace CAnimGraphDebugReplay {

   constexpr ptrdiff_t m_animGraphFileName = 0x40;
   constexpr ptrdiff_t m_frameList = 0x48;
   constexpr ptrdiff_t m_startIndex = 0x60;
   constexpr ptrdiff_t m_writeIndex = 0x64;
   constexpr ptrdiff_t m_frameCount = 0x68;

}

namespace CAnimGraphModelBinding {

   constexpr ptrdiff_t m_modelName = 0x8;
   constexpr ptrdiff_t m_pSharedData = 0x10;

}

namespace CAnimInputDamping {

   constexpr ptrdiff_t m_speedFunction = 0x8;
   constexpr ptrdiff_t m_fSpeedScale = 0xc;

}

namespace CAnimParamHandle {

   constexpr ptrdiff_t m_type = 0x0;
   constexpr ptrdiff_t m_index = 0x1;

}

namespace CAnimParamHandleMap {

   constexpr ptrdiff_t m_list = 0x0;

}

namespace CAnimParameterManagerUpdater {

   constexpr ptrdiff_t m_parameters = 0x18;
   constexpr ptrdiff_t m_idToIndexMap = 0x30;
   constexpr ptrdiff_t m_nameToIndexMap = 0x50;
   constexpr ptrdiff_t m_indexToHandle = 0x70;
   constexpr ptrdiff_t m_autoResetParams = 0x88;
   constexpr ptrdiff_t m_autoResetMap = 0xa0;

}

namespace CAnimUpdateSharedData {

   constexpr ptrdiff_t m_nodes = 0x10;
   constexpr ptrdiff_t m_nodeIndexMap = 0x28;
   constexpr ptrdiff_t m_components = 0x48;
   constexpr ptrdiff_t m_pParamListUpdater = 0x60;
   constexpr ptrdiff_t m_pTagManagerUpdater = 0x68;
   constexpr ptrdiff_t m_scriptManager = 0x70;
   constexpr ptrdiff_t m_settings = 0x78;
   constexpr ptrdiff_t m_pStaticPoseCache = 0xa8;
   constexpr ptrdiff_t m_pSkeleton = 0xb0;
   constexpr ptrdiff_t m_rootNodePath = 0xb8;

}

namespace CBlendCurve {

   constexpr ptrdiff_t m_flControlPoint1 = 0x0;
   constexpr ptrdiff_t m_flControlPoint2 = 0x4;

}

namespace ParamSpanSample_t {

   constexpr ptrdiff_t m_value = 0x0;
   constexpr ptrdiff_t m_flCycle = 0x14;

}

namespace ParamSpan_t {

   constexpr ptrdiff_t m_samples = 0x0;
   constexpr ptrdiff_t m_hParam = 0x18;
   constexpr ptrdiff_t m_eParamType = 0x1a;
   constexpr ptrdiff_t m_flStartCycle = 0x1c;
   constexpr ptrdiff_t m_flEndCycle = 0x20;

}

namespace CParamSpanUpdater {

   constexpr ptrdiff_t m_spans = 0x0;

}

namespace CAnimGraphSettingsManager {

   constexpr ptrdiff_t m_settingsGroups = 0x18;

}

namespace CCachedPose {

   constexpr ptrdiff_t m_transforms = 0x8;
   constexpr ptrdiff_t m_morphWeights = 0x20;
   constexpr ptrdiff_t m_hSequence = 0x38;
   constexpr ptrdiff_t m_flCycle = 0x3c;

}

namespace CStaticPoseCache {

   constexpr ptrdiff_t m_poses = 0x10;
   constexpr ptrdiff_t m_nBoneCount = 0x28;
   constexpr ptrdiff_t m_nMorphCount = 0x2c;

}

namespace CEmitTagActionUpdater {

   constexpr ptrdiff_t m_nTagIndex = 0x18;
   constexpr ptrdiff_t m_bIsZeroDuration = 0x1c;

}

namespace CSetParameterActionUpdater {

   constexpr ptrdiff_t m_hParam = 0x18;
   constexpr ptrdiff_t m_value = 0x1a;

}

namespace CToggleComponentActionUpdater {

   constexpr ptrdiff_t m_componentID = 0x18;
   constexpr ptrdiff_t m_bSetEnabled = 0x1c;

}

namespace CExpressionActionUpdater {

   constexpr ptrdiff_t m_hParam = 0x18;
   constexpr ptrdiff_t m_eParamType = 0x1a;
   constexpr ptrdiff_t m_hScript = 0x1c;

}

namespace CAnimTagBase {

   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_group = 0x20;
   constexpr ptrdiff_t m_tagID = 0x28;
   constexpr ptrdiff_t m_bIsReferenced = 0x2c;

}

namespace CAnimTagManagerUpdater {

   constexpr ptrdiff_t m_tags = 0x18;

}

namespace CAudioAnimTag {

   constexpr ptrdiff_t m_clipName = 0x38;
   constexpr ptrdiff_t m_attachmentName = 0x40;
   constexpr ptrdiff_t m_flVolume = 0x48;
   constexpr ptrdiff_t m_bStopWhenTagEnds = 0x4c;
   constexpr ptrdiff_t m_bStopWhenGraphEnds = 0x4d;
   constexpr ptrdiff_t m_bPlayOnServer = 0x4e;
   constexpr ptrdiff_t m_bPlayOnClient = 0x4f;

}

namespace CBodyGroupSetting {

   constexpr ptrdiff_t m_BodyGroupName = 0x0;
   constexpr ptrdiff_t m_nBodyGroupOption = 0x8;

}

namespace CBodyGroupAnimTag {

   constexpr ptrdiff_t m_nPriority = 0x38;
   constexpr ptrdiff_t m_bodyGroupSettings = 0x40;

}

namespace CClothSettingsAnimTag {

   constexpr ptrdiff_t m_flStiffness = 0x38;
   constexpr ptrdiff_t m_flEaseIn = 0x3c;
   constexpr ptrdiff_t m_flEaseOut = 0x40;
   constexpr ptrdiff_t m_nVertexSet = 0x48;

}

namespace CFootFallAnimTag {

   constexpr ptrdiff_t m_foot = 0x38;

}

namespace CFootstepLandedAnimTag {

   constexpr ptrdiff_t m_FootstepType = 0x38;
   constexpr ptrdiff_t m_OverrideSoundName = 0x40;
   constexpr ptrdiff_t m_DebugAnimSourceString = 0x48;
   constexpr ptrdiff_t m_BoneName = 0x50;

}

namespace CMaterialAttributeAnimTag {

   constexpr ptrdiff_t m_AttributeName = 0x38;
   constexpr ptrdiff_t m_AttributeType = 0x40;
   constexpr ptrdiff_t m_flValue = 0x44;
   constexpr ptrdiff_t m_Color = 0x48;

}

namespace CParticleAnimTag {

   constexpr ptrdiff_t m_hParticleSystem = 0x38;
   constexpr ptrdiff_t m_particleSystemName = 0x40;
   constexpr ptrdiff_t m_configName = 0x48;
   constexpr ptrdiff_t m_bDetachFromOwner = 0x50;
   constexpr ptrdiff_t m_bStopWhenTagEnds = 0x51;
   constexpr ptrdiff_t m_bTagEndStopIsInstant = 0x52;
   constexpr ptrdiff_t m_attachmentName = 0x58;
   constexpr ptrdiff_t m_attachmentType = 0x60;
   constexpr ptrdiff_t m_attachmentCP1Name = 0x68;
   constexpr ptrdiff_t m_attachmentCP1Type = 0x70;

}

namespace CRagdollAnimTag {

   constexpr ptrdiff_t m_nPoseControl = 0x38;
   constexpr ptrdiff_t m_flFrequency = 0x3c;
   constexpr ptrdiff_t m_flDampingRatio = 0x40;
   constexpr ptrdiff_t m_flDecayDuration = 0x44;
   constexpr ptrdiff_t m_flDecayBias = 0x48;
   constexpr ptrdiff_t m_bDestroy = 0x4c;

}

namespace CSequenceFinishedAnimTag {

   constexpr ptrdiff_t m_sequenceName = 0x38;

}

namespace CAnimComponentUpdater {

   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_id = 0x20;
   constexpr ptrdiff_t m_networkMode = 0x24;
   constexpr ptrdiff_t m_bStartEnabled = 0x28;

}

namespace CAnimScriptComponentUpdater {

   constexpr ptrdiff_t m_hScript = 0x30;

}

namespace CCPPScriptComponentUpdater {

   constexpr ptrdiff_t m_scriptsToRun = 0x30;

}

namespace CDampedValueUpdateItem {

   constexpr ptrdiff_t m_damping = 0x0;
   constexpr ptrdiff_t m_hParamIn = 0x18;
   constexpr ptrdiff_t m_hParamOut = 0x1a;

}

namespace CDampedValueComponentUpdater {

   constexpr ptrdiff_t m_items = 0x30;

}

namespace CDemoSettingsComponentUpdater {

   constexpr ptrdiff_t m_settings = 0x30;

}

namespace CLODComponentUpdater {

   constexpr ptrdiff_t m_nServerLOD = 0x30;

}

namespace CLookComponentUpdater {

   constexpr ptrdiff_t m_hLookHeading = 0x34;
   constexpr ptrdiff_t m_hLookHeadingVelocity = 0x36;
   constexpr ptrdiff_t m_hLookPitch = 0x38;
   constexpr ptrdiff_t m_hLookDistance = 0x3a;
   constexpr ptrdiff_t m_hLookDirection = 0x3c;
   constexpr ptrdiff_t m_hLookTarget = 0x3e;
   constexpr ptrdiff_t m_hLookTargetWorldSpace = 0x40;
   constexpr ptrdiff_t m_bNetworkLookTarget = 0x42;

}

namespace CMovementMode {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_flSpeed = 0x8;

}

namespace CMovementComponentUpdater {

   constexpr ptrdiff_t m_movementModes = 0x30;
   constexpr ptrdiff_t m_motors = 0x48;
   constexpr ptrdiff_t m_facingDamping = 0x60;
   constexpr ptrdiff_t m_eDefaultFacingMode = 0x70;
   constexpr ptrdiff_t m_nDefaultMotorIndex = 0x7c;
   constexpr ptrdiff_t m_bMoveVarsDisabled = 0x80;
   constexpr ptrdiff_t m_bNetworkPath = 0x81;
   constexpr ptrdiff_t m_bNetworkFacing = 0x82;
   constexpr ptrdiff_t m_paramHandles = 0x83;

}

namespace WeightList {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_weights = 0x8;

}

namespace CRagdollComponentUpdater {

   constexpr ptrdiff_t m_ragdollNodePaths = 0x30;
   constexpr ptrdiff_t m_boneIndices = 0x48;
   constexpr ptrdiff_t m_boneNames = 0x60;
   constexpr ptrdiff_t m_weightLists = 0x78;
   constexpr ptrdiff_t m_flSpringFrequencyMin = 0x90;
   constexpr ptrdiff_t m_flSpringFrequencyMax = 0x94;
   constexpr ptrdiff_t m_flMaxStretch = 0x98;

}

namespace CSlopeComponentUpdater {

   constexpr ptrdiff_t m_flTraceDistance = 0x34;
   constexpr ptrdiff_t m_hSlopeAngle = 0x38;
   constexpr ptrdiff_t m_hSlopeAngleFront = 0x3a;
   constexpr ptrdiff_t m_hSlopeAngleSide = 0x3c;
   constexpr ptrdiff_t m_hSlopeHeading = 0x3e;
   constexpr ptrdiff_t m_hSlopeNormal = 0x40;
   constexpr ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42;

}

namespace CVRInputComponentUpdater {

   constexpr ptrdiff_t m_FingerCurl_Thumb = 0x34;
   constexpr ptrdiff_t m_FingerCurl_Index = 0x36;
   constexpr ptrdiff_t m_FingerCurl_Middle = 0x38;
   constexpr ptrdiff_t m_FingerCurl_Ring = 0x3a;
   constexpr ptrdiff_t m_FingerCurl_Pinky = 0x3c;
   constexpr ptrdiff_t m_FingerSplay_Thumb_Index = 0x3e;
   constexpr ptrdiff_t m_FingerSplay_Index_Middle = 0x40;
   constexpr ptrdiff_t m_FingerSplay_Middle_Ring = 0x42;
   constexpr ptrdiff_t m_FingerSplay_Ring_Pinky = 0x44;

}

namespace CStateMachineComponentUpdater {

   constexpr ptrdiff_t m_stateMachine = 0x30;

}

namespace CMotionDataSet {

   constexpr ptrdiff_t m_groups = 0x0;
   constexpr ptrdiff_t m_nDimensionCount = 0x18;

}

namespace CMotionGraphGroup {

   constexpr ptrdiff_t m_searchDB = 0x0;
   constexpr ptrdiff_t m_motionGraphs = 0xb8;
   constexpr ptrdiff_t m_motionGraphConfigs = 0xd0;
   constexpr ptrdiff_t m_sampleToConfig = 0xe8;
   constexpr ptrdiff_t m_hIsActiveScript = 0x100;

}

namespace SampleCode {

   constexpr ptrdiff_t m_subCode = 0x0;

}

namespace MotionDBIndex {

   constexpr ptrdiff_t m_nIndex = 0x0;

}

namespace CVectorQuantizer {

   constexpr ptrdiff_t m_centroidVectors = 0x0;
   constexpr ptrdiff_t m_nCentroids = 0x18;
   constexpr ptrdiff_t m_nDimensions = 0x1c;

}

namespace CProductQuantizer {

   constexpr ptrdiff_t m_subQuantizers = 0x0;
   constexpr ptrdiff_t m_nDimensions = 0x18;

}

namespace CMotionSearchNode {

   constexpr ptrdiff_t m_children = 0x0;
   constexpr ptrdiff_t m_quantizer = 0x18;
   constexpr ptrdiff_t m_sampleCodes = 0x38;
   constexpr ptrdiff_t m_sampleIndices = 0x50;
   constexpr ptrdiff_t m_selectableSamples = 0x68;

}

namespace CMotionSearchDB {

   constexpr ptrdiff_t m_rootNode = 0x0;
   constexpr ptrdiff_t m_residualQuantizer = 0x80;
   constexpr ptrdiff_t m_codeIndices = 0xa0;

}

namespace CMotionGraph {

   constexpr ptrdiff_t m_paramSpans = 0x10;
   constexpr ptrdiff_t m_tags = 0x28;
   constexpr ptrdiff_t m_pRootNode = 0x40;
   constexpr ptrdiff_t m_nParameterCount = 0x48;
   constexpr ptrdiff_t m_nConfigStartIndex = 0x4c;
   constexpr ptrdiff_t m_nConfigCount = 0x50;
   constexpr ptrdiff_t m_bLoop = 0x54;

}

namespace CMotionNode {

   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_id = 0x20;

}

namespace CMotionNodeSequence {

   constexpr ptrdiff_t m_tags = 0x28;
   constexpr ptrdiff_t m_hSequence = 0x40;
   constexpr ptrdiff_t m_flPlaybackSpeed = 0x44;

}

namespace MotionBlendItem {

   constexpr ptrdiff_t m_pChild = 0x0;
   constexpr ptrdiff_t m_flKeyValue = 0x8;

}

namespace CMotionNodeBlend1D {

   constexpr ptrdiff_t m_blendItems = 0x28;
   constexpr ptrdiff_t m_nParamIndex = 0x40;

}

namespace CMotionMetricEvaluator {

   constexpr ptrdiff_t m_means = 0x18;
   constexpr ptrdiff_t m_standardDeviations = 0x30;
   constexpr ptrdiff_t m_flWeight = 0x48;
   constexpr ptrdiff_t m_nDimensionStartIndex = 0x4c;

}

namespace CBonePositionMetricEvaluator {

   constexpr ptrdiff_t m_nBoneIndex = 0x50;

}

namespace CBoneVelocityMetricEvaluator {

   constexpr ptrdiff_t m_nBoneIndex = 0x50;

}

namespace CDistanceRemainingMetricEvaluator {

   constexpr ptrdiff_t m_flMaxDistance = 0x50;
   constexpr ptrdiff_t m_flMinDistance = 0x54;
   constexpr ptrdiff_t m_flStartGoalFilterDistance = 0x58;
   constexpr ptrdiff_t m_flMaxGoalOvershootScale = 0x5c;
   constexpr ptrdiff_t m_bFilterFixedMinDistance = 0x60;
   constexpr ptrdiff_t m_bFilterGoalDistance = 0x61;
   constexpr ptrdiff_t m_bFilterGoalOvershoot = 0x62;

}

namespace CFootCycleMetricEvaluator {

   constexpr ptrdiff_t m_footIndices = 0x50;

}

namespace CFootPositionMetricEvaluator {

   constexpr ptrdiff_t m_footIndices = 0x50;
   constexpr ptrdiff_t m_bIgnoreSlope = 0x68;

}

namespace CFutureFacingMetricEvaluator {

   constexpr ptrdiff_t m_flDistance = 0x50;
   constexpr ptrdiff_t m_flTime = 0x54;

}

namespace CFutureVelocityMetricEvaluator {

   constexpr ptrdiff_t m_flDistance = 0x50;
   constexpr ptrdiff_t m_flStoppingDistance = 0x54;
   constexpr ptrdiff_t m_flTargetSpeed = 0x58;
   constexpr ptrdiff_t m_eMode = 0x5c;

}

namespace CPathMetricEvaluator {

   constexpr ptrdiff_t m_pathTimeSamples = 0x50;
   constexpr ptrdiff_t m_flDistance = 0x68;
   constexpr ptrdiff_t m_bExtrapolateMovement = 0x6c;
   constexpr ptrdiff_t m_flMinExtrapolationSpeed = 0x70;

}

namespace CStepsRemainingMetricEvaluator {

   constexpr ptrdiff_t m_footIndices = 0x50;
   constexpr ptrdiff_t m_flMinStepsRemaining = 0x68;

}

namespace CTimeRemainingMetricEvaluator {

   constexpr ptrdiff_t m_bMatchByTimeRemaining = 0x50;
   constexpr ptrdiff_t m_flMaxTimeRemaining = 0x54;
   constexpr ptrdiff_t m_bFilterByTimeRemaining = 0x58;
   constexpr ptrdiff_t m_flMinTimeRemaining = 0x5c;

}

namespace CAnimMotorUpdaterBase {

   constexpr ptrdiff_t m_name = 0x10;
   constexpr ptrdiff_t m_bDefault = 0x18;

}

namespace CPathAnimMotorUpdaterBase {

   constexpr ptrdiff_t m_bLockToPath = 0x20;

}

namespace CDampedPathAnimMotorUpdater {

   constexpr ptrdiff_t m_flAnticipationTime = 0x2c;
   constexpr ptrdiff_t m_flMinSpeedScale = 0x30;
   constexpr ptrdiff_t m_hAnticipationPosParam = 0x34;
   constexpr ptrdiff_t m_hAnticipationHeadingParam = 0x36;
   constexpr ptrdiff_t m_flSpringConstant = 0x38;
   constexpr ptrdiff_t m_flMinSpringTension = 0x3c;
   constexpr ptrdiff_t m_flMaxSpringTension = 0x40;

}

namespace CPlayerInputAnimMotorUpdater {

   constexpr ptrdiff_t m_sampleTimes = 0x20;
   constexpr ptrdiff_t m_flSpringConstant = 0x3c;
   constexpr ptrdiff_t m_flAnticipationDistance = 0x40;
   constexpr ptrdiff_t m_hAnticipationPosParam = 0x44;
   constexpr ptrdiff_t m_hAnticipationHeadingParam = 0x46;
   constexpr ptrdiff_t m_bUseAcceleration = 0x48;

}

namespace AimMatrixOpFixedSettings_t {

   constexpr ptrdiff_t m_attachment = 0x0;
   constexpr ptrdiff_t m_damping = 0x80;
   constexpr ptrdiff_t m_poseCacheHandles = 0x90;
   constexpr ptrdiff_t m_eBlendMode = 0xb8;
   constexpr ptrdiff_t m_fAngleIncrement = 0xbc;
   constexpr ptrdiff_t m_nSequenceMaxFrame = 0xc0;
   constexpr ptrdiff_t m_nBoneMaskIndex = 0xc4;
   constexpr ptrdiff_t m_bTargetIsPosition = 0xc8;

}

namespace FollowAttachmentSettings_t {

   constexpr ptrdiff_t m_attachment = 0x0;
   constexpr ptrdiff_t m_boneIndex = 0x80;
   constexpr ptrdiff_t m_bMatchTranslation = 0x84;
   constexpr ptrdiff_t m_bMatchRotation = 0x85;

}

namespace FootLockPoseOpFixedSettings {

   constexpr ptrdiff_t m_footInfo = 0x0;
   constexpr ptrdiff_t m_hipDampingSettings = 0x18;
   constexpr ptrdiff_t m_nHipBoneIndex = 0x28;
   constexpr ptrdiff_t m_ikSolverType = 0x2c;
   constexpr ptrdiff_t m_bApplyTilt = 0x30;
   constexpr ptrdiff_t m_bApplyHipDrop = 0x31;
   constexpr ptrdiff_t m_bAlwaysUseFallbackHinge = 0x32;
   constexpr ptrdiff_t m_bApplyFootRotationLimits = 0x33;
   constexpr ptrdiff_t m_bApplyLegTwistLimits = 0x34;
   constexpr ptrdiff_t m_flMaxFootHeight = 0x38;
   constexpr ptrdiff_t m_flExtensionScale = 0x3c;
   constexpr ptrdiff_t m_flMaxLegTwist = 0x40;
   constexpr ptrdiff_t m_bEnableLockBreaking = 0x44;
   constexpr ptrdiff_t m_flLockBreakTolerance = 0x48;
   constexpr ptrdiff_t m_flLockBlendTime = 0x4c;
   constexpr ptrdiff_t m_bEnableStretching = 0x50;
   constexpr ptrdiff_t m_flMaxStretchAmount = 0x54;
   constexpr ptrdiff_t m_flStretchExtensionScale = 0x58;

}

namespace FootPinningPoseOpFixedData_t {

   constexpr ptrdiff_t m_footInfo = 0x0;
   constexpr ptrdiff_t m_flBlendTime = 0x18;
   constexpr ptrdiff_t m_flLockBreakDistance = 0x1c;
   constexpr ptrdiff_t m_flMaxLegTwist = 0x20;
   constexpr ptrdiff_t m_nHipBoneIndex = 0x24;
   constexpr ptrdiff_t m_bApplyLegTwistLimits = 0x28;
   constexpr ptrdiff_t m_bApplyFootRotationLimits = 0x29;

}

namespace HitReactFixedSettings_t {

   constexpr ptrdiff_t m_nWeightListIndex = 0x0;
   constexpr ptrdiff_t m_nEffectedBoneCount = 0x4;
   constexpr ptrdiff_t m_flMaxImpactForce = 0x8;
   constexpr ptrdiff_t m_flMinImpactForce = 0xc;
   constexpr ptrdiff_t m_flWhipImpactScale = 0x10;
   constexpr ptrdiff_t m_flCounterRotationScale = 0x14;
   constexpr ptrdiff_t m_flDistanceFadeScale = 0x18;
   constexpr ptrdiff_t m_flPropagationScale = 0x1c;
   constexpr ptrdiff_t m_flWhipDelay = 0x20;
   constexpr ptrdiff_t m_flSpringStrength = 0x24;
   constexpr ptrdiff_t m_flWhipSpringStrength = 0x28;
   constexpr ptrdiff_t m_flMaxAngleRadians = 0x2c;
   constexpr ptrdiff_t m_nHipBoneIndex = 0x30;
   constexpr ptrdiff_t m_flHipBoneTranslationScale = 0x34;
   constexpr ptrdiff_t m_flHipDipSpringStrength = 0x38;
   constexpr ptrdiff_t m_flHipDipImpactScale = 0x3c;
   constexpr ptrdiff_t m_flHipDipDelay = 0x40;

}

namespace JiggleBoneSettings_t {

   constexpr ptrdiff_t m_nBoneIndex = 0x0;
   constexpr ptrdiff_t m_flSpringStrength = 0x4;
   constexpr ptrdiff_t m_flMaxTimeStep = 0x8;
   constexpr ptrdiff_t m_flDamping = 0xc;
   constexpr ptrdiff_t m_vBoundsMaxLS = 0x10;
   constexpr ptrdiff_t m_vBoundsMinLS = 0x1c;
   constexpr ptrdiff_t m_eSimSpace = 0x28;

}

namespace JiggleBoneSettingsList_t {

   constexpr ptrdiff_t m_boneSettings = 0x0;

}

namespace LookAtBone_t {

   constexpr ptrdiff_t m_index = 0x0;
   constexpr ptrdiff_t m_weight = 0x4;

}

namespace LookAtOpFixedSettings_t {

   constexpr ptrdiff_t m_attachment = 0x0;
   constexpr ptrdiff_t m_damping = 0x80;
   constexpr ptrdiff_t m_bones = 0x90;
   constexpr ptrdiff_t m_flYawLimit = 0xa8;
   constexpr ptrdiff_t m_flPitchLimit = 0xac;
   constexpr ptrdiff_t m_flHysteresisInnerAngle = 0xb0;
   constexpr ptrdiff_t m_flHysteresisOuterAngle = 0xb4;
   constexpr ptrdiff_t m_bRotateYawForward = 0xb8;
   constexpr ptrdiff_t m_bMaintainUpDirection = 0xb9;
   constexpr ptrdiff_t m_bTargetIsPosition = 0xba;
   constexpr ptrdiff_t m_bUseHysteresis = 0xbb;

}

namespace FingerSource_t {

   constexpr ptrdiff_t m_nFingerIndex = 0x0;
   constexpr ptrdiff_t m_flFingerWeight = 0x4;

}

namespace FingerBone_t {

   constexpr ptrdiff_t m_boneIndex = 0x0;
   constexpr ptrdiff_t m_hingeAxis = 0x4;
   constexpr ptrdiff_t m_vCapsulePos1 = 0x10;
   constexpr ptrdiff_t m_vCapsulePos2 = 0x1c;
   constexpr ptrdiff_t m_flMinAngle = 0x28;
   constexpr ptrdiff_t m_flMaxAngle = 0x2c;
   constexpr ptrdiff_t m_flRadius = 0x30;

}

namespace FingerChain_t {

   constexpr ptrdiff_t m_targets = 0x0;
   constexpr ptrdiff_t m_bones = 0x18;
   constexpr ptrdiff_t m_vTipOffset = 0x30;
   constexpr ptrdiff_t m_vSplayHingeAxis = 0x3c;
   constexpr ptrdiff_t m_tipParentBoneIndex = 0x48;
   constexpr ptrdiff_t m_metacarpalBoneIndex = 0x4c;
   constexpr ptrdiff_t m_flSplayMinAngle = 0x50;
   constexpr ptrdiff_t m_flSplayMaxAngle = 0x54;
   constexpr ptrdiff_t m_flFingerScaleRatio = 0x58;

}

namespace WristBone_t {

   constexpr ptrdiff_t m_xOffsetTransformMS = 0x0;
   constexpr ptrdiff_t m_boneIndex = 0x20;

}

namespace SkeletalInputOpFixedSettings_t {

   constexpr ptrdiff_t m_wristBones = 0x0;
   constexpr ptrdiff_t m_fingers = 0x18;
   constexpr ptrdiff_t m_outerKnuckle1 = 0x30;
   constexpr ptrdiff_t m_outerKnuckle2 = 0x34;
   constexpr ptrdiff_t m_eHand = 0x38;
   constexpr ptrdiff_t m_eMotionRange = 0x3c;
   constexpr ptrdiff_t m_eTransformSource = 0x40;
   constexpr ptrdiff_t m_bEnableIK = 0x44;
   constexpr ptrdiff_t m_bEnableCollision = 0x45;

}

namespace ChainToSolveData_t {

   constexpr ptrdiff_t m_nChainIndex = 0x0;
   constexpr ptrdiff_t m_SolverSettings = 0x4;
   constexpr ptrdiff_t m_TargetSettings = 0x10;
   constexpr ptrdiff_t m_DebugSetting = 0x38;
   constexpr ptrdiff_t m_flDebugNormalizedValue = 0x3c;
   constexpr ptrdiff_t m_vDebugOffset = 0x40;

}

namespace SolveIKChainPoseOpFixedSettings_t {

   constexpr ptrdiff_t m_ChainsToSolveData = 0x0;
   constexpr ptrdiff_t m_bMatchTargetOrientation = 0x18;

}

namespace CAnimParameterBase {

   constexpr ptrdiff_t m_name = 0x18;
   constexpr ptrdiff_t m_group = 0x20;
   constexpr ptrdiff_t m_id = 0x28;
   constexpr ptrdiff_t m_componentName = 0x40;
   constexpr ptrdiff_t m_bNetworkingRequested = 0x4c;
   constexpr ptrdiff_t m_bIsReferenced = 0x4d;

}

namespace CConcreteAnimParameter {

   constexpr ptrdiff_t m_previewButton = 0x50;
   constexpr ptrdiff_t m_eNetworkSetting = 0x54;
   constexpr ptrdiff_t m_bUseMostRecentValue = 0x58;
   constexpr ptrdiff_t m_bAutoReset = 0x59;
   constexpr ptrdiff_t m_bGameWritable = 0x5a;
   constexpr ptrdiff_t m_bGraphWritable = 0x5b;

}

namespace CVirtualAnimParameter {

   constexpr ptrdiff_t m_expressionString = 0x50;
   constexpr ptrdiff_t m_eParamType = 0x58;

}

namespace CBoolAnimParameter {

   constexpr ptrdiff_t m_bDefaultValue = 0x60;

}

namespace CEnumAnimParameter {

   constexpr ptrdiff_t m_defaultValue = 0x68;
   constexpr ptrdiff_t m_enumOptions = 0x70;

}

namespace CIntAnimParameter {

   constexpr ptrdiff_t m_defaultValue = 0x60;
   constexpr ptrdiff_t m_minValue = 0x64;
   constexpr ptrdiff_t m_maxValue = 0x68;

}

namespace CFloatAnimParameter {

   constexpr ptrdiff_t m_fDefaultValue = 0x60;
   constexpr ptrdiff_t m_fMinValue = 0x64;
   constexpr ptrdiff_t m_fMaxValue = 0x68;
   constexpr ptrdiff_t m_bInterpolate = 0x6c;

}

namespace CVectorAnimParameter {

   constexpr ptrdiff_t m_defaultValue = 0x60;
   constexpr ptrdiff_t m_bInterpolate = 0x6c;

}

namespace CQuaternionAnimParameter {

   constexpr ptrdiff_t m_defaultValue = 0x60;
   constexpr ptrdiff_t m_bInterpolate = 0x70;

}

