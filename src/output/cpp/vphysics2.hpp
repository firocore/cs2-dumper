#pragma once

#include <cstddef>

using namespace std;

namespace constraint_breakableparams_t {

   constexpr ptrdiff_t strength = 0x0;
   constexpr ptrdiff_t forceLimit = 0x4;
   constexpr ptrdiff_t torqueLimit = 0x8;
   constexpr ptrdiff_t bodyMassScale = 0xc;
   constexpr ptrdiff_t isActive = 0x14;

}

namespace constraint_axislimit_t {

   constexpr ptrdiff_t flMinRotation = 0x0;
   constexpr ptrdiff_t flMaxRotation = 0x4;
   constexpr ptrdiff_t flMotorTargetAngSpeed = 0x8;
   constexpr ptrdiff_t flMotorMaxTorque = 0xc;

}

namespace constraint_hingeparams_t {

   constexpr ptrdiff_t worldPosition = 0x0;
   constexpr ptrdiff_t worldAxisDirection = 0xc;
   constexpr ptrdiff_t hingeAxis = 0x18;
   constexpr ptrdiff_t constraint = 0x28;

}

namespace CFeJiggleBone {

   constexpr ptrdiff_t m_nFlags = 0x0;
   constexpr ptrdiff_t m_flLength = 0x4;
   constexpr ptrdiff_t m_flTipMass = 0x8;
   constexpr ptrdiff_t m_flYawStiffness = 0xc;
   constexpr ptrdiff_t m_flYawDamping = 0x10;
   constexpr ptrdiff_t m_flPitchStiffness = 0x14;
   constexpr ptrdiff_t m_flPitchDamping = 0x18;
   constexpr ptrdiff_t m_flAlongStiffness = 0x1c;
   constexpr ptrdiff_t m_flAlongDamping = 0x20;
   constexpr ptrdiff_t m_flAngleLimit = 0x24;
   constexpr ptrdiff_t m_flMinYaw = 0x28;
   constexpr ptrdiff_t m_flMaxYaw = 0x2c;
   constexpr ptrdiff_t m_flYawFriction = 0x30;
   constexpr ptrdiff_t m_flYawBounce = 0x34;
   constexpr ptrdiff_t m_flMinPitch = 0x38;
   constexpr ptrdiff_t m_flMaxPitch = 0x3c;
   constexpr ptrdiff_t m_flPitchFriction = 0x40;
   constexpr ptrdiff_t m_flPitchBounce = 0x44;
   constexpr ptrdiff_t m_flBaseMass = 0x48;
   constexpr ptrdiff_t m_flBaseStiffness = 0x4c;
   constexpr ptrdiff_t m_flBaseDamping = 0x50;
   constexpr ptrdiff_t m_flBaseMinLeft = 0x54;
   constexpr ptrdiff_t m_flBaseMaxLeft = 0x58;
   constexpr ptrdiff_t m_flBaseLeftFriction = 0x5c;
   constexpr ptrdiff_t m_flBaseMinUp = 0x60;
   constexpr ptrdiff_t m_flBaseMaxUp = 0x64;
   constexpr ptrdiff_t m_flBaseUpFriction = 0x68;
   constexpr ptrdiff_t m_flBaseMinForward = 0x6c;
   constexpr ptrdiff_t m_flBaseMaxForward = 0x70;
   constexpr ptrdiff_t m_flBaseForwardFriction = 0x74;
   constexpr ptrdiff_t m_flRadius0 = 0x78;
   constexpr ptrdiff_t m_flRadius1 = 0x7c;
   constexpr ptrdiff_t m_vPoint0 = 0x80;
   constexpr ptrdiff_t m_vPoint1 = 0x8c;
   constexpr ptrdiff_t m_nCollisionMask = 0x98;

}

namespace CFeNamedJiggleBone {

   constexpr ptrdiff_t m_strParentBone = 0x0;
   constexpr ptrdiff_t m_transform = 0x10;
   constexpr ptrdiff_t m_nJiggleParent = 0x30;
   constexpr ptrdiff_t m_jiggleBone = 0x34;

}

namespace CFeIndexedJiggleBone {

   constexpr ptrdiff_t m_nNode = 0x0;
   constexpr ptrdiff_t m_nJiggleParent = 0x4;
   constexpr ptrdiff_t m_jiggleBone = 0x8;

}

namespace PhysFeModelDesc_t {

   constexpr ptrdiff_t m_CtrlHash = 0x0;
   constexpr ptrdiff_t m_CtrlName = 0x18;
   constexpr ptrdiff_t m_nStaticNodeFlags = 0x30;
   constexpr ptrdiff_t m_nDynamicNodeFlags = 0x34;
   constexpr ptrdiff_t m_flLocalForce = 0x38;
   constexpr ptrdiff_t m_flLocalRotation = 0x3c;
   constexpr ptrdiff_t m_nNodeCount = 0x40;
   constexpr ptrdiff_t m_nStaticNodes = 0x42;
   constexpr ptrdiff_t m_nRotLockStaticNodes = 0x44;
   constexpr ptrdiff_t m_nFirstPositionDrivenNode = 0x46;
   constexpr ptrdiff_t m_nSimdTriCount1 = 0x48;
   constexpr ptrdiff_t m_nSimdTriCount2 = 0x4a;
   constexpr ptrdiff_t m_nSimdQuadCount1 = 0x4c;
   constexpr ptrdiff_t m_nSimdQuadCount2 = 0x4e;
   constexpr ptrdiff_t m_nQuadCount1 = 0x50;
   constexpr ptrdiff_t m_nQuadCount2 = 0x52;
   constexpr ptrdiff_t m_nTreeDepth = 0x54;
   constexpr ptrdiff_t m_nNodeBaseJiggleboneDependsCount = 0x56;
   constexpr ptrdiff_t m_nRopeCount = 0x58;
   constexpr ptrdiff_t m_Ropes = 0x60;
   constexpr ptrdiff_t m_NodeBases = 0x78;
   constexpr ptrdiff_t m_SimdNodeBases = 0x90;
   constexpr ptrdiff_t m_Quads = 0xa8;
   constexpr ptrdiff_t m_SimdQuads = 0xc0;
   constexpr ptrdiff_t m_SimdTris = 0xd8;
   constexpr ptrdiff_t m_SimdRods = 0xf0;
   constexpr ptrdiff_t m_InitPose = 0x108;
   constexpr ptrdiff_t m_Rods = 0x120;
   constexpr ptrdiff_t m_Twists = 0x138;
   constexpr ptrdiff_t m_AxialEdges = 0x150;
   constexpr ptrdiff_t m_NodeInvMasses = 0x168;
   constexpr ptrdiff_t m_CtrlOffsets = 0x180;
   constexpr ptrdiff_t m_CtrlOsOffsets = 0x198;
   constexpr ptrdiff_t m_FollowNodes = 0x1b0;
   constexpr ptrdiff_t m_CollisionPlanes = 0x1c8;
   constexpr ptrdiff_t m_NodeIntegrator = 0x1e0;
   constexpr ptrdiff_t m_SpringIntegrator = 0x1f8;
   constexpr ptrdiff_t m_SimdSpringIntegrator = 0x210;
   constexpr ptrdiff_t m_WorldCollisionParams = 0x228;
   constexpr ptrdiff_t m_LegacyStretchForce = 0x240;
   constexpr ptrdiff_t m_NodeCollisionRadii = 0x258;
   constexpr ptrdiff_t m_DynNodeFriction = 0x270;
   constexpr ptrdiff_t m_LocalRotation = 0x288;
   constexpr ptrdiff_t m_LocalForce = 0x2a0;
   constexpr ptrdiff_t m_TaperedCapsuleStretches = 0x2b8;
   constexpr ptrdiff_t m_TaperedCapsuleRigids = 0x2d0;
   constexpr ptrdiff_t m_SphereRigids = 0x2e8;
   constexpr ptrdiff_t m_WorldCollisionNodes = 0x300;
   constexpr ptrdiff_t m_TreeParents = 0x318;
   constexpr ptrdiff_t m_TreeCollisionMasks = 0x330;
   constexpr ptrdiff_t m_TreeChildren = 0x348;
   constexpr ptrdiff_t m_FreeNodes = 0x360;
   constexpr ptrdiff_t m_FitMatrices = 0x378;
   constexpr ptrdiff_t m_FitWeights = 0x390;
   constexpr ptrdiff_t m_ReverseOffsets = 0x3a8;
   constexpr ptrdiff_t m_AnimStrayRadii = 0x3c0;
   constexpr ptrdiff_t m_SimdAnimStrayRadii = 0x3d8;
   constexpr ptrdiff_t m_KelagerBends = 0x3f0;
   constexpr ptrdiff_t m_CtrlSoftOffsets = 0x408;
   constexpr ptrdiff_t m_JiggleBones = 0x420;
   constexpr ptrdiff_t m_SourceElems = 0x438;
   constexpr ptrdiff_t m_GoalDampedSpringIntegrators = 0x450;
   constexpr ptrdiff_t m_Tris = 0x468;
   constexpr ptrdiff_t m_nTriCount1 = 0x480;
   constexpr ptrdiff_t m_nTriCount2 = 0x482;
   constexpr ptrdiff_t m_nReservedUint8 = 0x484;
   constexpr ptrdiff_t m_nExtraPressureIterations = 0x485;
   constexpr ptrdiff_t m_nExtraGoalIterations = 0x486;
   constexpr ptrdiff_t m_nExtraIterations = 0x487;
   constexpr ptrdiff_t m_BoxRigids = 0x488;
   constexpr ptrdiff_t m_DynNodeVertexSet = 0x4a0;
   constexpr ptrdiff_t m_VertexSetNames = 0x4b8;
   constexpr ptrdiff_t m_RigidColliderPriorities = 0x4d0;
   constexpr ptrdiff_t m_MorphLayers = 0x4e8;
   constexpr ptrdiff_t m_MorphSetData = 0x500;
   constexpr ptrdiff_t m_VertexMaps = 0x518;
   constexpr ptrdiff_t m_VertexMapValues = 0x530;
   constexpr ptrdiff_t m_Effects = 0x548;
   constexpr ptrdiff_t m_LockToParent = 0x560;
   constexpr ptrdiff_t m_LockToGoal = 0x578;
   constexpr ptrdiff_t m_DynNodeWindBases = 0x590;
   constexpr ptrdiff_t m_flInternalPressure = 0x5a8;
   constexpr ptrdiff_t m_flDefaultTimeDilation = 0x5ac;
   constexpr ptrdiff_t m_flWindage = 0x5b0;
   constexpr ptrdiff_t m_flWindDrag = 0x5b4;
   constexpr ptrdiff_t m_flDefaultSurfaceStretch = 0x5b8;
   constexpr ptrdiff_t m_flDefaultThreadStretch = 0x5bc;
   constexpr ptrdiff_t m_flDefaultGravityScale = 0x5c0;
   constexpr ptrdiff_t m_flDefaultVelAirDrag = 0x5c4;
   constexpr ptrdiff_t m_flDefaultExpAirDrag = 0x5c8;
   constexpr ptrdiff_t m_flDefaultVelQuadAirDrag = 0x5cc;
   constexpr ptrdiff_t m_flDefaultExpQuadAirDrag = 0x5d0;
   constexpr ptrdiff_t m_flRodVelocitySmoothRate = 0x5d4;
   constexpr ptrdiff_t m_flQuadVelocitySmoothRate = 0x5d8;
   constexpr ptrdiff_t m_flAddWorldCollisionRadius = 0x5dc;
   constexpr ptrdiff_t m_flDefaultVolumetricSolveAmount = 0x5e0;
   constexpr ptrdiff_t m_nRodVelocitySmoothIterations = 0x5e4;
   constexpr ptrdiff_t m_nQuadVelocitySmoothIterations = 0x5e6;

}

namespace FourVectors2D {

   constexpr ptrdiff_t x = 0x0;
   constexpr ptrdiff_t y = 0x10;

}

namespace FeEdgeDesc_t {

   constexpr ptrdiff_t nEdge = 0x0;
   constexpr ptrdiff_t nSide = 0x4;
   constexpr ptrdiff_t nVirtElem = 0xc;

}

namespace OldFeEdge_t {

   constexpr ptrdiff_t m_flK = 0x0;
   constexpr ptrdiff_t invA = 0xc;
   constexpr ptrdiff_t t = 0x10;
   constexpr ptrdiff_t flThetaRelaxed = 0x14;
   constexpr ptrdiff_t flThetaFactor = 0x18;
   constexpr ptrdiff_t c01 = 0x1c;
   constexpr ptrdiff_t c02 = 0x20;
   constexpr ptrdiff_t c03 = 0x24;
   constexpr ptrdiff_t c04 = 0x28;
   constexpr ptrdiff_t flAxialModelDist = 0x2c;
   constexpr ptrdiff_t flAxialModelWeights = 0x30;
   constexpr ptrdiff_t m_nNode = 0x40;

}

namespace FeWeightedNode_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t nWeight = 0x2;

}

namespace FeKelagerBend2_t {

   constexpr ptrdiff_t flWeight = 0x0;
   constexpr ptrdiff_t flHeight0 = 0xc;
   constexpr ptrdiff_t nNode = 0x10;
   constexpr ptrdiff_t nReserved = 0x16;

}

namespace FeStiffHingeBuild_t {

   constexpr ptrdiff_t flMaxAngle = 0x0;
   constexpr ptrdiff_t flStrength = 0x4;
   constexpr ptrdiff_t flMotionBias = 0x8;
   constexpr ptrdiff_t nNode = 0x14;

}

namespace FeTri_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t w1 = 0x8;
   constexpr ptrdiff_t w2 = 0xc;
   constexpr ptrdiff_t v1x = 0x10;
   constexpr ptrdiff_t v2 = 0x14;

}

namespace FeSimdTri_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t w1 = 0x30;
   constexpr ptrdiff_t w2 = 0x40;
   constexpr ptrdiff_t v1x = 0x50;
   constexpr ptrdiff_t v2 = 0x60;

}

namespace FeQuad_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flSlack = 0x8;
   constexpr ptrdiff_t vShape = 0xc;

}

namespace FeNodeBase_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t nDummy = 0x2;
   constexpr ptrdiff_t nNodeX0 = 0x8;
   constexpr ptrdiff_t nNodeX1 = 0xa;
   constexpr ptrdiff_t nNodeY0 = 0xc;
   constexpr ptrdiff_t nNodeY1 = 0xe;
   constexpr ptrdiff_t qAdjust = 0x10;

}

namespace FeNodeWindBase_t {

   constexpr ptrdiff_t nNodeX0 = 0x0;
   constexpr ptrdiff_t nNodeX1 = 0x2;
   constexpr ptrdiff_t nNodeY0 = 0x4;
   constexpr ptrdiff_t nNodeY1 = 0x6;

}

namespace FeNodeReverseOffset_t {

   constexpr ptrdiff_t vOffset = 0x0;
   constexpr ptrdiff_t nBoneCtrl = 0xc;
   constexpr ptrdiff_t nTargetNode = 0xe;

}

namespace FeSimdQuad_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t f4Slack = 0x20;
   constexpr ptrdiff_t vShape = 0x30;
   constexpr ptrdiff_t f4Weights = 0xf0;

}

namespace FeAxialEdgeBend_t {

   constexpr ptrdiff_t te = 0x0;
   constexpr ptrdiff_t tv = 0x4;
   constexpr ptrdiff_t flDist = 0x8;
   constexpr ptrdiff_t flWeight = 0xc;
   constexpr ptrdiff_t nNode = 0x1c;

}

namespace FeBandBendLimit_t {

   constexpr ptrdiff_t flDistMin = 0x0;
   constexpr ptrdiff_t flDistMax = 0x4;
   constexpr ptrdiff_t nNode = 0x8;

}

namespace FeRodConstraint_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flMaxDist = 0x4;
   constexpr ptrdiff_t flMinDist = 0x8;
   constexpr ptrdiff_t flWeight0 = 0xc;
   constexpr ptrdiff_t flRelaxationFactor = 0x10;

}

namespace FeTwistConstraint_t {

   constexpr ptrdiff_t nNodeOrient = 0x0;
   constexpr ptrdiff_t nNodeEnd = 0x2;
   constexpr ptrdiff_t flTwistRelax = 0x4;
   constexpr ptrdiff_t flSwingRelax = 0x8;

}

namespace FeSimdRodConstraint_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t f4MaxDist = 0x10;
   constexpr ptrdiff_t f4MinDist = 0x20;
   constexpr ptrdiff_t f4Weight0 = 0x30;
   constexpr ptrdiff_t f4RelaxationFactor = 0x40;

}

namespace FeAnimStrayRadius_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flMaxDist = 0x4;
   constexpr ptrdiff_t flRelaxationFactor = 0x8;

}

namespace FeSimdAnimStrayRadius_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flMaxDist = 0x10;
   constexpr ptrdiff_t flRelaxationFactor = 0x20;

}

namespace FeSimdNodeBase_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t nNodeX0 = 0x8;
   constexpr ptrdiff_t nNodeX1 = 0x10;
   constexpr ptrdiff_t nNodeY0 = 0x18;
   constexpr ptrdiff_t nNodeY1 = 0x20;
   constexpr ptrdiff_t nDummy = 0x28;
   constexpr ptrdiff_t qAdjust = 0x30;

}

namespace FeNodeIntegrator_t {

   constexpr ptrdiff_t flPointDamping = 0x0;
   constexpr ptrdiff_t flAnimationForceAttraction = 0x4;
   constexpr ptrdiff_t flAnimationVertexAttraction = 0x8;
   constexpr ptrdiff_t flGravity = 0xc;

}

namespace FeSpringIntegrator_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flSpringRestLength = 0x4;
   constexpr ptrdiff_t flSpringConstant = 0x8;
   constexpr ptrdiff_t flSpringDamping = 0xc;
   constexpr ptrdiff_t flNodeWeight0 = 0x10;

}

namespace FeSimdSpringIntegrator_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t flSpringRestLength = 0x10;
   constexpr ptrdiff_t flSpringConstant = 0x20;
   constexpr ptrdiff_t flSpringDamping = 0x30;
   constexpr ptrdiff_t flNodeWeight0 = 0x40;

}

namespace FeCtrlOffset_t {

   constexpr ptrdiff_t vOffset = 0x0;
   constexpr ptrdiff_t nCtrlParent = 0xc;
   constexpr ptrdiff_t nCtrlChild = 0xe;

}

namespace FeSoftParent_t {

   constexpr ptrdiff_t nParent = 0x0;
   constexpr ptrdiff_t flAlpha = 0x4;

}

namespace FeCtrlSoftOffset_t {

   constexpr ptrdiff_t nCtrlParent = 0x0;
   constexpr ptrdiff_t nCtrlChild = 0x2;
   constexpr ptrdiff_t vOffset = 0x4;
   constexpr ptrdiff_t flAlpha = 0x10;

}

namespace FeCtrlOsOffset_t {

   constexpr ptrdiff_t nCtrlParent = 0x0;
   constexpr ptrdiff_t nCtrlChild = 0x2;

}

namespace FeFollowNode_t {

   constexpr ptrdiff_t nParentNode = 0x0;
   constexpr ptrdiff_t nChildNode = 0x2;
   constexpr ptrdiff_t flWeight = 0x4;

}

namespace FeCollisionPlane_t {

   constexpr ptrdiff_t nCtrlParent = 0x0;
   constexpr ptrdiff_t nChildNode = 0x2;
   constexpr ptrdiff_t m_Plane = 0x4;
   constexpr ptrdiff_t flStrength = 0x14;

}

namespace FeWorldCollisionParams_t {

   constexpr ptrdiff_t flWorldFriction = 0x0;
   constexpr ptrdiff_t flGroundFriction = 0x4;
   constexpr ptrdiff_t nListBegin = 0x8;
   constexpr ptrdiff_t nListEnd = 0xa;

}

namespace FeTreeChildren_t {

   constexpr ptrdiff_t nChild = 0x0;

}

namespace FeTaperedCapsuleRigid_t {

   constexpr ptrdiff_t vSphere = 0x0;
   constexpr ptrdiff_t nNode = 0x20;
   constexpr ptrdiff_t nCollisionMask = 0x22;
   constexpr ptrdiff_t nVertexMapIndex = 0x24;
   constexpr ptrdiff_t nFlags = 0x26;

}

namespace FeSphereRigid_t {

   constexpr ptrdiff_t vSphere = 0x0;
   constexpr ptrdiff_t nNode = 0x10;
   constexpr ptrdiff_t nCollisionMask = 0x12;
   constexpr ptrdiff_t nVertexMapIndex = 0x14;
   constexpr ptrdiff_t nFlags = 0x16;

}

namespace FeTaperedCapsuleStretch_t {

   constexpr ptrdiff_t nNode = 0x0;
   constexpr ptrdiff_t nCollisionMask = 0x4;
   constexpr ptrdiff_t nDummy = 0x6;
   constexpr ptrdiff_t flRadius = 0x8;

}

namespace FeBoxRigid_t {

   constexpr ptrdiff_t tmFrame2 = 0x0;
   constexpr ptrdiff_t nNode = 0x20;
   constexpr ptrdiff_t nCollisionMask = 0x22;
   constexpr ptrdiff_t vSize = 0x24;
   constexpr ptrdiff_t nVertexMapIndex = 0x30;
   constexpr ptrdiff_t nFlags = 0x32;

}

namespace CovMatrix3 {

   constexpr ptrdiff_t m_vDiag = 0x0;
   constexpr ptrdiff_t m_flXY = 0xc;
   constexpr ptrdiff_t m_flXZ = 0x10;
   constexpr ptrdiff_t m_flYZ = 0x14;

}

namespace FourCovMatrices3 {

   constexpr ptrdiff_t m_vDiag = 0x0;
   constexpr ptrdiff_t m_flXY = 0x30;
   constexpr ptrdiff_t m_flXZ = 0x40;
   constexpr ptrdiff_t m_flYZ = 0x50;

}

namespace FeFitWeight_t {

   constexpr ptrdiff_t flWeight = 0x0;
   constexpr ptrdiff_t nNode = 0x4;
   constexpr ptrdiff_t nDummy = 0x6;

}

namespace FeFitInfluence_t {

   constexpr ptrdiff_t nVertexNode = 0x0;
   constexpr ptrdiff_t flWeight = 0x4;
   constexpr ptrdiff_t nMatrixNode = 0x8;

}

namespace FeFitMatrix_t {

   constexpr ptrdiff_t bone = 0x0;
   constexpr ptrdiff_t vCenter = 0x20;
   constexpr ptrdiff_t nEnd = 0x2c;
   constexpr ptrdiff_t nNode = 0x2e;
   constexpr ptrdiff_t nBeginDynamic = 0x30;

}

namespace FeRigidColliderIndices_t {

   constexpr ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0;
   constexpr ptrdiff_t m_nSphereRigidIndex = 0x2;
   constexpr ptrdiff_t m_nBoxRigidIndex = 0x4;
   constexpr ptrdiff_t m_nCollisionPlaneIndex = 0x6;

}

namespace FeBuildTaperedCapsuleRigid_t {

   constexpr ptrdiff_t m_nPriority = 0x30;
   constexpr ptrdiff_t m_nVertexMapHash = 0x34;

}

namespace FeBuildBoxRigid_t {

   constexpr ptrdiff_t m_nPriority = 0x40;
   constexpr ptrdiff_t m_nVertexMapHash = 0x44;

}

namespace FeBuildSphereRigid_t {

   constexpr ptrdiff_t m_nPriority = 0x20;
   constexpr ptrdiff_t m_nVertexMapHash = 0x24;

}

namespace FeSourceEdge_t {

   constexpr ptrdiff_t nNode = 0x0;

}

namespace FeEffectDesc_t {

   constexpr ptrdiff_t sName = 0x0;
   constexpr ptrdiff_t nNameHash = 0x8;
   constexpr ptrdiff_t nType = 0xc;
   constexpr ptrdiff_t m_Params = 0x10;

}

namespace FeVertexMapBuild_t {

   constexpr ptrdiff_t m_VertexMapName = 0x0;
   constexpr ptrdiff_t m_nNameHash = 0x8;
   constexpr ptrdiff_t m_Color = 0xc;
   constexpr ptrdiff_t m_flVolumetricSolveStrength = 0x10;
   constexpr ptrdiff_t m_nScaleSourceNode = 0x14;
   constexpr ptrdiff_t m_Weights = 0x18;

}

namespace CFeVertexMapBuildArray {

   constexpr ptrdiff_t m_Array = 0x0;

}

namespace FeProxyVertexMap_t {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_flWeight = 0x8;

}

namespace FeVertexMapDesc_t {

   constexpr ptrdiff_t sName = 0x0;
   constexpr ptrdiff_t nNameHash = 0x8;
   constexpr ptrdiff_t nColor = 0xc;
   constexpr ptrdiff_t nFlags = 0x10;
   constexpr ptrdiff_t nVertexBase = 0x14;
   constexpr ptrdiff_t nVertexCount = 0x16;
   constexpr ptrdiff_t nMapOffset = 0x18;
   constexpr ptrdiff_t nNodeListOffset = 0x1c;
   constexpr ptrdiff_t vCenterOfMass = 0x20;
   constexpr ptrdiff_t flVolumetricSolveStrength = 0x2c;
   constexpr ptrdiff_t nScaleSourceNode = 0x30;
   constexpr ptrdiff_t nNodeListCount = 0x32;

}

namespace FeMorphLayerDepr_t {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_nNameHash = 0x8;
   constexpr ptrdiff_t m_Nodes = 0x10;
   constexpr ptrdiff_t m_InitPos = 0x28;
   constexpr ptrdiff_t m_Gravity = 0x40;
   constexpr ptrdiff_t m_GoalStrength = 0x58;
   constexpr ptrdiff_t m_GoalDamping = 0x70;
   constexpr ptrdiff_t m_nFlags = 0x88;

}

namespace CFeMorphLayer {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_nNameHash = 0x8;
   constexpr ptrdiff_t m_Nodes = 0x10;
   constexpr ptrdiff_t m_InitPos = 0x28;
   constexpr ptrdiff_t m_Gravity = 0x40;
   constexpr ptrdiff_t m_GoalStrength = 0x58;
   constexpr ptrdiff_t m_GoalDamping = 0x70;

}

namespace Dop26_t {

   constexpr ptrdiff_t m_flSupport = 0x0;

}

namespace RnSphere_t {

   constexpr ptrdiff_t m_vCenter = 0x0;
   constexpr ptrdiff_t m_flRadius = 0xc;

}

namespace RnCapsule_t {

   constexpr ptrdiff_t m_vCenter = 0x0;
   constexpr ptrdiff_t m_flRadius = 0x18;

}

namespace RnPlane_t {

   constexpr ptrdiff_t m_vNormal = 0x0;
   constexpr ptrdiff_t m_flOffset = 0xc;

}

namespace RnVertex_t {

   constexpr ptrdiff_t m_nEdge = 0x0;

}

namespace RnHalfEdge_t {

   constexpr ptrdiff_t m_nNext = 0x0;
   constexpr ptrdiff_t m_nTwin = 0x1;
   constexpr ptrdiff_t m_nOrigin = 0x2;
   constexpr ptrdiff_t m_nFace = 0x3;

}

namespace RnFace_t {

   constexpr ptrdiff_t m_nEdge = 0x0;

}

namespace CRegionSVM {

   constexpr ptrdiff_t m_Planes = 0x0;
   constexpr ptrdiff_t m_Nodes = 0x18;

}

namespace RnHull_t {

   constexpr ptrdiff_t m_vCentroid = 0x0;
   constexpr ptrdiff_t m_flMaxAngularRadius = 0xc;
   constexpr ptrdiff_t m_Bounds = 0x10;
   constexpr ptrdiff_t m_vOrthographicAreas = 0x28;
   constexpr ptrdiff_t m_MassProperties = 0x34;
   constexpr ptrdiff_t m_flVolume = 0x64;
   constexpr ptrdiff_t m_Vertices = 0x68;
   constexpr ptrdiff_t m_VertexPositions = 0x80;
   constexpr ptrdiff_t m_Edges = 0x98;
   constexpr ptrdiff_t m_Faces = 0xb0;
   constexpr ptrdiff_t m_FacePlanes = 0xc8;
   constexpr ptrdiff_t m_nFlags = 0xe0;
   constexpr ptrdiff_t m_pRegionSVM = 0xe8;

}

namespace RnTriangle_t {

   constexpr ptrdiff_t m_nIndex = 0x0;

}

namespace RnWing_t {

   constexpr ptrdiff_t m_nIndex = 0x0;

}

namespace RnNode_t {

   constexpr ptrdiff_t m_vMin = 0x0;
   constexpr ptrdiff_t m_nChildren = 0xc;
   constexpr ptrdiff_t m_vMax = 0x10;
   constexpr ptrdiff_t m_nTriangleOffset = 0x1c;

}

namespace RnMesh_t {

   constexpr ptrdiff_t m_vMin = 0x0;
   constexpr ptrdiff_t m_vMax = 0xc;
   constexpr ptrdiff_t m_Nodes = 0x18;
   constexpr ptrdiff_t m_Vertices = 0x30;
   constexpr ptrdiff_t m_Triangles = 0x48;
   constexpr ptrdiff_t m_Wings = 0x60;
   constexpr ptrdiff_t m_Materials = 0x78;
   constexpr ptrdiff_t m_vOrthographicAreas = 0x90;
   constexpr ptrdiff_t m_nFlags = 0x9c;
   constexpr ptrdiff_t m_nDebugFlags = 0xa0;

}

namespace RnShapeDesc_t {

   constexpr ptrdiff_t m_nCollisionAttributeIndex = 0x0;
   constexpr ptrdiff_t m_nSurfacePropertyIndex = 0x4;
   constexpr ptrdiff_t m_UserFriendlyName = 0x8;

}

namespace RnSphereDesc_t {

   constexpr ptrdiff_t m_Sphere = 0x10;

}

namespace RnCapsuleDesc_t {

   constexpr ptrdiff_t m_Capsule = 0x10;

}

namespace RnHullDesc_t {

   constexpr ptrdiff_t m_Hull = 0x10;

}

namespace RnMeshDesc_t {

   constexpr ptrdiff_t m_Mesh = 0x10;

}

namespace RnSoftbodyParticle_t {

   constexpr ptrdiff_t m_flMassInv = 0x0;

}

namespace RnSoftbodySpring_t {

   constexpr ptrdiff_t m_nParticle = 0x0;
   constexpr ptrdiff_t m_flLength = 0x4;

}

namespace RnSoftbodyCapsule_t {

   constexpr ptrdiff_t m_vCenter = 0x0;
   constexpr ptrdiff_t m_flRadius = 0x18;
   constexpr ptrdiff_t m_nParticle = 0x1c;

}

namespace RnBlendVertex_t {

   constexpr ptrdiff_t m_nWeight0 = 0x0;
   constexpr ptrdiff_t m_nIndex0 = 0x2;
   constexpr ptrdiff_t m_nWeight1 = 0x4;
   constexpr ptrdiff_t m_nIndex1 = 0x6;
   constexpr ptrdiff_t m_nWeight2 = 0x8;
   constexpr ptrdiff_t m_nIndex2 = 0xa;
   constexpr ptrdiff_t m_nFlags = 0xc;
   constexpr ptrdiff_t m_nTargetIndex = 0xe;

}

namespace CastSphereSATParams_t {

   constexpr ptrdiff_t m_vRayStart = 0x0;
   constexpr ptrdiff_t m_vRayDelta = 0xc;
   constexpr ptrdiff_t m_flRadius = 0x18;
   constexpr ptrdiff_t m_flMaxFraction = 0x1c;
   constexpr ptrdiff_t m_flScale = 0x20;
   constexpr ptrdiff_t m_pHull = 0x28;

}

namespace RnBodyDesc_t {

   constexpr ptrdiff_t m_sDebugName = 0x0;
   constexpr ptrdiff_t m_vPosition = 0x8;
   constexpr ptrdiff_t m_qOrientation = 0x14;
   constexpr ptrdiff_t m_vLinearVelocity = 0x24;
   constexpr ptrdiff_t m_vAngularVelocity = 0x30;
   constexpr ptrdiff_t m_vLocalMassCenter = 0x3c;
   constexpr ptrdiff_t m_LocalInertiaInv = 0x48;
   constexpr ptrdiff_t m_flMassInv = 0x6c;
   constexpr ptrdiff_t m_flGameMass = 0x70;
   constexpr ptrdiff_t m_flInertiaScaleInv = 0x74;
   constexpr ptrdiff_t m_flLinearDamping = 0x78;
   constexpr ptrdiff_t m_flAngularDamping = 0x7c;
   constexpr ptrdiff_t m_flLinearDrag = 0x80;
   constexpr ptrdiff_t m_flAngularDrag = 0x84;
   constexpr ptrdiff_t m_flLinearBuoyancyDrag = 0x88;
   constexpr ptrdiff_t m_flAngularBuoyancyDrag = 0x8c;
   constexpr ptrdiff_t m_vLastAwakeForceAccum = 0x90;
   constexpr ptrdiff_t m_vLastAwakeTorqueAccum = 0x9c;
   constexpr ptrdiff_t m_flBuoyancyFactor = 0xa8;
   constexpr ptrdiff_t m_flGravityScale = 0xac;
   constexpr ptrdiff_t m_flTimeScale = 0xb0;
   constexpr ptrdiff_t m_nBodyType = 0xb4;
   constexpr ptrdiff_t m_nGameIndex = 0xb8;
   constexpr ptrdiff_t m_nGameFlags = 0xbc;
   constexpr ptrdiff_t m_nMinVelocityIterations = 0xc0;
   constexpr ptrdiff_t m_nMinPositionIterations = 0xc1;
   constexpr ptrdiff_t m_nMassPriority = 0xc2;
   constexpr ptrdiff_t m_bEnabled = 0xc3;
   constexpr ptrdiff_t m_bSleeping = 0xc4;
   constexpr ptrdiff_t m_bIsContinuousEnabled = 0xc5;
   constexpr ptrdiff_t m_bDragEnabled = 0xc6;
   constexpr ptrdiff_t m_bBuoyancyDragEnabled = 0xc7;
   constexpr ptrdiff_t m_bGravityDisabled = 0xc8;
   constexpr ptrdiff_t m_bSpeculativeEnabled = 0xc9;
   constexpr ptrdiff_t m_bHasShadowController = 0xca;

}

namespace VertexPositionNormal_t {

   constexpr ptrdiff_t m_vPosition = 0x0;
   constexpr ptrdiff_t m_vNormal = 0xc;

}

namespace VertexPositionColor_t {

   constexpr ptrdiff_t m_vPosition = 0x0;

}

namespace vphysics_save_cphysicsbody_t {

   constexpr ptrdiff_t m_nOldPointer = 0xd0;

}

