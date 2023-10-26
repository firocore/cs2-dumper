



class constraint_breakableparams_t:

   strength: int = 0
   forceLimit: int = 4
   torqueLimit: int = 8
   bodyMassScale: int = 12
   isActive: int = 20



class constraint_axislimit_t:

   flMinRotation: int = 0
   flMaxRotation: int = 4
   flMotorTargetAngSpeed: int = 8
   flMotorMaxTorque: int = 12



class constraint_hingeparams_t:

   worldPosition: int = 0
   worldAxisDirection: int = 12
   hingeAxis: int = 24
   constraint: int = 40



class CFeJiggleBone:

   m_nFlags: int = 0
   m_flLength: int = 4
   m_flTipMass: int = 8
   m_flYawStiffness: int = 12
   m_flYawDamping: int = 16
   m_flPitchStiffness: int = 20
   m_flPitchDamping: int = 24
   m_flAlongStiffness: int = 28
   m_flAlongDamping: int = 32
   m_flAngleLimit: int = 36
   m_flMinYaw: int = 40
   m_flMaxYaw: int = 44
   m_flYawFriction: int = 48
   m_flYawBounce: int = 52
   m_flMinPitch: int = 56
   m_flMaxPitch: int = 60
   m_flPitchFriction: int = 64
   m_flPitchBounce: int = 68
   m_flBaseMass: int = 72
   m_flBaseStiffness: int = 76
   m_flBaseDamping: int = 80
   m_flBaseMinLeft: int = 84
   m_flBaseMaxLeft: int = 88
   m_flBaseLeftFriction: int = 92
   m_flBaseMinUp: int = 96
   m_flBaseMaxUp: int = 100
   m_flBaseUpFriction: int = 104
   m_flBaseMinForward: int = 108
   m_flBaseMaxForward: int = 112
   m_flBaseForwardFriction: int = 116
   m_flRadius0: int = 120
   m_flRadius1: int = 124
   m_vPoint0: int = 128
   m_vPoint1: int = 140
   m_nCollisionMask: int = 152



class CFeNamedJiggleBone:

   m_strParentBone: int = 0
   m_transform: int = 16
   m_nJiggleParent: int = 48
   m_jiggleBone: int = 52



class CFeIndexedJiggleBone:

   m_nNode: int = 0
   m_nJiggleParent: int = 4
   m_jiggleBone: int = 8



class PhysFeModelDesc_t:

   m_CtrlHash: int = 0
   m_CtrlName: int = 24
   m_nStaticNodeFlags: int = 48
   m_nDynamicNodeFlags: int = 52
   m_flLocalForce: int = 56
   m_flLocalRotation: int = 60
   m_nNodeCount: int = 64
   m_nStaticNodes: int = 66
   m_nRotLockStaticNodes: int = 68
   m_nFirstPositionDrivenNode: int = 70
   m_nSimdTriCount1: int = 72
   m_nSimdTriCount2: int = 74
   m_nSimdQuadCount1: int = 76
   m_nSimdQuadCount2: int = 78
   m_nQuadCount1: int = 80
   m_nQuadCount2: int = 82
   m_nTreeDepth: int = 84
   m_nNodeBaseJiggleboneDependsCount: int = 86
   m_nRopeCount: int = 88
   m_Ropes: int = 96
   m_NodeBases: int = 120
   m_SimdNodeBases: int = 144
   m_Quads: int = 168
   m_SimdQuads: int = 192
   m_SimdTris: int = 216
   m_SimdRods: int = 240
   m_InitPose: int = 264
   m_Rods: int = 288
   m_Twists: int = 312
   m_AxialEdges: int = 336
   m_NodeInvMasses: int = 360
   m_CtrlOffsets: int = 384
   m_CtrlOsOffsets: int = 408
   m_FollowNodes: int = 432
   m_CollisionPlanes: int = 456
   m_NodeIntegrator: int = 480
   m_SpringIntegrator: int = 504
   m_SimdSpringIntegrator: int = 528
   m_WorldCollisionParams: int = 552
   m_LegacyStretchForce: int = 576
   m_NodeCollisionRadii: int = 600
   m_DynNodeFriction: int = 624
   m_LocalRotation: int = 648
   m_LocalForce: int = 672
   m_TaperedCapsuleStretches: int = 696
   m_TaperedCapsuleRigids: int = 720
   m_SphereRigids: int = 744
   m_WorldCollisionNodes: int = 768
   m_TreeParents: int = 792
   m_TreeCollisionMasks: int = 816
   m_TreeChildren: int = 840
   m_FreeNodes: int = 864
   m_FitMatrices: int = 888
   m_FitWeights: int = 912
   m_ReverseOffsets: int = 936
   m_AnimStrayRadii: int = 960
   m_SimdAnimStrayRadii: int = 984
   m_KelagerBends: int = 1008
   m_CtrlSoftOffsets: int = 1032
   m_JiggleBones: int = 1056
   m_SourceElems: int = 1080
   m_GoalDampedSpringIntegrators: int = 1104
   m_Tris: int = 1128
   m_nTriCount1: int = 1152
   m_nTriCount2: int = 1154
   m_nReservedUint8: int = 1156
   m_nExtraPressureIterations: int = 1157
   m_nExtraGoalIterations: int = 1158
   m_nExtraIterations: int = 1159
   m_BoxRigids: int = 1160
   m_DynNodeVertexSet: int = 1184
   m_VertexSetNames: int = 1208
   m_RigidColliderPriorities: int = 1232
   m_MorphLayers: int = 1256
   m_MorphSetData: int = 1280
   m_VertexMaps: int = 1304
   m_VertexMapValues: int = 1328
   m_Effects: int = 1352
   m_LockToParent: int = 1376
   m_LockToGoal: int = 1400
   m_DynNodeWindBases: int = 1424
   m_flInternalPressure: int = 1448
   m_flDefaultTimeDilation: int = 1452
   m_flWindage: int = 1456
   m_flWindDrag: int = 1460
   m_flDefaultSurfaceStretch: int = 1464
   m_flDefaultThreadStretch: int = 1468
   m_flDefaultGravityScale: int = 1472
   m_flDefaultVelAirDrag: int = 1476
   m_flDefaultExpAirDrag: int = 1480
   m_flDefaultVelQuadAirDrag: int = 1484
   m_flDefaultExpQuadAirDrag: int = 1488
   m_flRodVelocitySmoothRate: int = 1492
   m_flQuadVelocitySmoothRate: int = 1496
   m_flAddWorldCollisionRadius: int = 1500
   m_flDefaultVolumetricSolveAmount: int = 1504
   m_nRodVelocitySmoothIterations: int = 1508
   m_nQuadVelocitySmoothIterations: int = 1510



class FourVectors2D:

   x: int = 0
   y: int = 16



class FeEdgeDesc_t:

   nEdge: int = 0
   nSide: int = 4
   nVirtElem: int = 12



class OldFeEdge_t:

   m_flK: int = 0
   invA: int = 12
   t: int = 16
   flThetaRelaxed: int = 20
   flThetaFactor: int = 24
   c01: int = 28
   c02: int = 32
   c03: int = 36
   c04: int = 40
   flAxialModelDist: int = 44
   flAxialModelWeights: int = 48
   m_nNode: int = 64



class FeWeightedNode_t:

   nNode: int = 0
   nWeight: int = 2



class FeKelagerBend2_t:

   flWeight: int = 0
   flHeight0: int = 12
   nNode: int = 16
   nReserved: int = 22



class FeStiffHingeBuild_t:

   flMaxAngle: int = 0
   flStrength: int = 4
   flMotionBias: int = 8
   nNode: int = 20



class FeTri_t:

   nNode: int = 0
   w1: int = 8
   w2: int = 12
   v1x: int = 16
   v2: int = 20



class FeSimdTri_t:

   nNode: int = 0
   w1: int = 48
   w2: int = 64
   v1x: int = 80
   v2: int = 96



class FeQuad_t:

   nNode: int = 0
   flSlack: int = 8
   vShape: int = 12



class FeNodeBase_t:

   nNode: int = 0
   nDummy: int = 2
   nNodeX0: int = 8
   nNodeX1: int = 10
   nNodeY0: int = 12
   nNodeY1: int = 14
   qAdjust: int = 16



class FeNodeWindBase_t:

   nNodeX0: int = 0
   nNodeX1: int = 2
   nNodeY0: int = 4
   nNodeY1: int = 6



class FeNodeReverseOffset_t:

   vOffset: int = 0
   nBoneCtrl: int = 12
   nTargetNode: int = 14



class FeSimdQuad_t:

   nNode: int = 0
   f4Slack: int = 32
   vShape: int = 48
   f4Weights: int = 240



class FeAxialEdgeBend_t:

   te: int = 0
   tv: int = 4
   flDist: int = 8
   flWeight: int = 12
   nNode: int = 28



class FeBandBendLimit_t:

   flDistMin: int = 0
   flDistMax: int = 4
   nNode: int = 8



class FeRodConstraint_t:

   nNode: int = 0
   flMaxDist: int = 4
   flMinDist: int = 8
   flWeight0: int = 12
   flRelaxationFactor: int = 16



class FeTwistConstraint_t:

   nNodeOrient: int = 0
   nNodeEnd: int = 2
   flTwistRelax: int = 4
   flSwingRelax: int = 8



class FeSimdRodConstraint_t:

   nNode: int = 0
   f4MaxDist: int = 16
   f4MinDist: int = 32
   f4Weight0: int = 48
   f4RelaxationFactor: int = 64



class FeAnimStrayRadius_t:

   nNode: int = 0
   flMaxDist: int = 4
   flRelaxationFactor: int = 8



class FeSimdAnimStrayRadius_t:

   nNode: int = 0
   flMaxDist: int = 16
   flRelaxationFactor: int = 32



class FeSimdNodeBase_t:

   nNode: int = 0
   nNodeX0: int = 8
   nNodeX1: int = 16
   nNodeY0: int = 24
   nNodeY1: int = 32
   nDummy: int = 40
   qAdjust: int = 48



class FeNodeIntegrator_t:

   flPointDamping: int = 0
   flAnimationForceAttraction: int = 4
   flAnimationVertexAttraction: int = 8
   flGravity: int = 12



class FeSpringIntegrator_t:

   nNode: int = 0
   flSpringRestLength: int = 4
   flSpringConstant: int = 8
   flSpringDamping: int = 12
   flNodeWeight0: int = 16



class FeSimdSpringIntegrator_t:

   nNode: int = 0
   flSpringRestLength: int = 16
   flSpringConstant: int = 32
   flSpringDamping: int = 48
   flNodeWeight0: int = 64



class FeCtrlOffset_t:

   vOffset: int = 0
   nCtrlParent: int = 12
   nCtrlChild: int = 14



class FeSoftParent_t:

   nParent: int = 0
   flAlpha: int = 4



class FeCtrlSoftOffset_t:

   nCtrlParent: int = 0
   nCtrlChild: int = 2
   vOffset: int = 4
   flAlpha: int = 16



class FeCtrlOsOffset_t:

   nCtrlParent: int = 0
   nCtrlChild: int = 2



class FeFollowNode_t:

   nParentNode: int = 0
   nChildNode: int = 2
   flWeight: int = 4



class FeCollisionPlane_t:

   nCtrlParent: int = 0
   nChildNode: int = 2
   m_Plane: int = 4
   flStrength: int = 20



class FeWorldCollisionParams_t:

   flWorldFriction: int = 0
   flGroundFriction: int = 4
   nListBegin: int = 8
   nListEnd: int = 10



class FeTreeChildren_t:

   nChild: int = 0



class FeTaperedCapsuleRigid_t:

   vSphere: int = 0
   nNode: int = 32
   nCollisionMask: int = 34
   nVertexMapIndex: int = 36
   nFlags: int = 38



class FeSphereRigid_t:

   vSphere: int = 0
   nNode: int = 16
   nCollisionMask: int = 18
   nVertexMapIndex: int = 20
   nFlags: int = 22



class FeTaperedCapsuleStretch_t:

   nNode: int = 0
   nCollisionMask: int = 4
   nDummy: int = 6
   flRadius: int = 8



class FeBoxRigid_t:

   tmFrame2: int = 0
   nNode: int = 32
   nCollisionMask: int = 34
   vSize: int = 36
   nVertexMapIndex: int = 48
   nFlags: int = 50



class CovMatrix3:

   m_vDiag: int = 0
   m_flXY: int = 12
   m_flXZ: int = 16
   m_flYZ: int = 20



class FourCovMatrices3:

   m_vDiag: int = 0
   m_flXY: int = 48
   m_flXZ: int = 64
   m_flYZ: int = 80



class FeFitWeight_t:

   flWeight: int = 0
   nNode: int = 4
   nDummy: int = 6



class FeFitInfluence_t:

   nVertexNode: int = 0
   flWeight: int = 4
   nMatrixNode: int = 8



class FeFitMatrix_t:

   bone: int = 0
   vCenter: int = 32
   nEnd: int = 44
   nNode: int = 46
   nBeginDynamic: int = 48



class FeRigidColliderIndices_t:

   m_nTaperedCapsuleRigidIndex: int = 0
   m_nSphereRigidIndex: int = 2
   m_nBoxRigidIndex: int = 4
   m_nCollisionPlaneIndex: int = 6



class FeBuildTaperedCapsuleRigid_t:

   m_nPriority: int = 48
   m_nVertexMapHash: int = 52



class FeBuildBoxRigid_t:

   m_nPriority: int = 64
   m_nVertexMapHash: int = 68



class FeBuildSphereRigid_t:

   m_nPriority: int = 32
   m_nVertexMapHash: int = 36



class FeSourceEdge_t:

   nNode: int = 0



class FeEffectDesc_t:

   sName: int = 0
   nNameHash: int = 8
   nType: int = 12
   m_Params: int = 16



class FeVertexMapBuild_t:

   m_VertexMapName: int = 0
   m_nNameHash: int = 8
   m_Color: int = 12
   m_flVolumetricSolveStrength: int = 16
   m_nScaleSourceNode: int = 20
   m_Weights: int = 24



class CFeVertexMapBuildArray:

   m_Array: int = 0



class FeProxyVertexMap_t:

   m_Name: int = 0
   m_flWeight: int = 8



class FeVertexMapDesc_t:

   sName: int = 0
   nNameHash: int = 8
   nColor: int = 12
   nFlags: int = 16
   nVertexBase: int = 20
   nVertexCount: int = 22
   nMapOffset: int = 24
   nNodeListOffset: int = 28
   vCenterOfMass: int = 32
   flVolumetricSolveStrength: int = 44
   nScaleSourceNode: int = 48
   nNodeListCount: int = 50



class FeMorphLayerDepr_t:

   m_Name: int = 0
   m_nNameHash: int = 8
   m_Nodes: int = 16
   m_InitPos: int = 40
   m_Gravity: int = 64
   m_GoalStrength: int = 88
   m_GoalDamping: int = 112
   m_nFlags: int = 136



class CFeMorphLayer:

   m_Name: int = 0
   m_nNameHash: int = 8
   m_Nodes: int = 16
   m_InitPos: int = 40
   m_Gravity: int = 64
   m_GoalStrength: int = 88
   m_GoalDamping: int = 112



class Dop26_t:

   m_flSupport: int = 0



class RnSphere_t:

   m_vCenter: int = 0
   m_flRadius: int = 12



class RnCapsule_t:

   m_vCenter: int = 0
   m_flRadius: int = 24



class RnPlane_t:

   m_vNormal: int = 0
   m_flOffset: int = 12



class RnVertex_t:

   m_nEdge: int = 0



class RnHalfEdge_t:

   m_nNext: int = 0
   m_nTwin: int = 1
   m_nOrigin: int = 2
   m_nFace: int = 3



class RnFace_t:

   m_nEdge: int = 0



class CRegionSVM:

   m_Planes: int = 0
   m_Nodes: int = 24



class RnHull_t:

   m_vCentroid: int = 0
   m_flMaxAngularRadius: int = 12
   m_Bounds: int = 16
   m_vOrthographicAreas: int = 40
   m_MassProperties: int = 52
   m_flVolume: int = 100
   m_Vertices: int = 104
   m_VertexPositions: int = 128
   m_Edges: int = 152
   m_Faces: int = 176
   m_FacePlanes: int = 200
   m_nFlags: int = 224
   m_pRegionSVM: int = 232



class RnTriangle_t:

   m_nIndex: int = 0



class RnWing_t:

   m_nIndex: int = 0



class RnNode_t:

   m_vMin: int = 0
   m_nChildren: int = 12
   m_vMax: int = 16
   m_nTriangleOffset: int = 28



class RnMesh_t:

   m_vMin: int = 0
   m_vMax: int = 12
   m_Nodes: int = 24
   m_Vertices: int = 48
   m_Triangles: int = 72
   m_Wings: int = 96
   m_Materials: int = 120
   m_vOrthographicAreas: int = 144
   m_nFlags: int = 156
   m_nDebugFlags: int = 160



class RnShapeDesc_t:

   m_nCollisionAttributeIndex: int = 0
   m_nSurfacePropertyIndex: int = 4
   m_UserFriendlyName: int = 8



class RnSphereDesc_t:

   m_Sphere: int = 16



class RnCapsuleDesc_t:

   m_Capsule: int = 16



class RnHullDesc_t:

   m_Hull: int = 16



class RnMeshDesc_t:

   m_Mesh: int = 16



class RnSoftbodyParticle_t:

   m_flMassInv: int = 0



class RnSoftbodySpring_t:

   m_nParticle: int = 0
   m_flLength: int = 4



class RnSoftbodyCapsule_t:

   m_vCenter: int = 0
   m_flRadius: int = 24
   m_nParticle: int = 28



class RnBlendVertex_t:

   m_nWeight0: int = 0
   m_nIndex0: int = 2
   m_nWeight1: int = 4
   m_nIndex1: int = 6
   m_nWeight2: int = 8
   m_nIndex2: int = 10
   m_nFlags: int = 12
   m_nTargetIndex: int = 14



class CastSphereSATParams_t:

   m_vRayStart: int = 0
   m_vRayDelta: int = 12
   m_flRadius: int = 24
   m_flMaxFraction: int = 28
   m_flScale: int = 32
   m_pHull: int = 40



class RnBodyDesc_t:

   m_sDebugName: int = 0
   m_vPosition: int = 8
   m_qOrientation: int = 20
   m_vLinearVelocity: int = 36
   m_vAngularVelocity: int = 48
   m_vLocalMassCenter: int = 60
   m_LocalInertiaInv: int = 72
   m_flMassInv: int = 108
   m_flGameMass: int = 112
   m_flInertiaScaleInv: int = 116
   m_flLinearDamping: int = 120
   m_flAngularDamping: int = 124
   m_flLinearDrag: int = 128
   m_flAngularDrag: int = 132
   m_flLinearBuoyancyDrag: int = 136
   m_flAngularBuoyancyDrag: int = 140
   m_vLastAwakeForceAccum: int = 144
   m_vLastAwakeTorqueAccum: int = 156
   m_flBuoyancyFactor: int = 168
   m_flGravityScale: int = 172
   m_flTimeScale: int = 176
   m_nBodyType: int = 180
   m_nGameIndex: int = 184
   m_nGameFlags: int = 188
   m_nMinVelocityIterations: int = 192
   m_nMinPositionIterations: int = 193
   m_nMassPriority: int = 194
   m_bEnabled: int = 195
   m_bSleeping: int = 196
   m_bIsContinuousEnabled: int = 197
   m_bDragEnabled: int = 198
   m_bBuoyancyDragEnabled: int = 199
   m_bGravityDisabled: int = 200
   m_bSpeculativeEnabled: int = 201
   m_bHasShadowController: int = 202



class VertexPositionNormal_t:

   m_vPosition: int = 0
   m_vNormal: int = 12



class VertexPositionColor_t:

   m_vPosition: int = 0



class vphysics_save_cphysicsbody_t:

   m_nOldPointer: int = 208