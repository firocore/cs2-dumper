



class EntityIOConnectionData_t:

   m_outputName: int = 0
   m_targetType: int = 8
   m_targetName: int = 16
   m_inputName: int = 24
   m_overrideParam: int = 32
   m_flDelay: int = 40
   m_nTimesToFire: int = 44



class EntityKeyValueData_t:

   m_connections: int = 8
   m_keyValuesData: int = 32



class PermEntityLumpData_t:

   m_name: int = 8
   m_hammerUniqueId: int = 16
   m_childLumps: int = 24
   m_entityKeyValues: int = 48



class SceneObject_t:

   m_nObjectID: int = 0
   m_vTransform: int = 4
   m_flFadeStartDistance: int = 52
   m_flFadeEndDistance: int = 56
   m_vTintColor: int = 60
   m_skin: int = 80
   m_nObjectTypeFlags: int = 88
   m_vLightingOrigin: int = 92
   m_nLightGroup: int = 104
   m_nOverlayRenderOrder: int = 108
   m_nLODOverride: int = 110
   m_nCubeMapPrecomputedHandshake: int = 112
   m_nLightProbeVolumePrecomputedHandshake: int = 116
   m_renderableModel: int = 128
   m_renderable: int = 136



class BaseSceneObjectOverride_t:

   m_nSceneObjectIndex: int = 0



class ExtraVertexStreamOverride_t:

   m_nSubSceneObject: int = 4
   m_nDrawCallIndex: int = 8
   m_nAdditionalMeshDrawPrimitiveFlags: int = 12
   m_extraBufferBinding: int = 16



class MaterialOverride_t:

   m_nSubSceneObject: int = 4
   m_nDrawCallIndex: int = 8
   m_pMaterial: int = 16



class InfoOverlayData_t:

   m_transform: int = 0
   m_flWidth: int = 48
   m_flHeight: int = 52
   m_flDepth: int = 56
   m_vUVStart: int = 60
   m_vUVEnd: int = 68
   m_pMaterial: int = 80
   m_nRenderOrder: int = 88
   m_vTintColor: int = 92
   m_nSequenceOverride: int = 108



class BakedLightingInfo_t:

   m_nLightmapVersionNumber: int = 0
   m_nLightmapGameVersionNumber: int = 4
   m_vLightmapUvScale: int = 8
   m_bHasLightmaps: int = 16
   m_lightMaps: int = 24



class WorldNodeOnDiskBufferData_t:

   m_nElementCount: int = 0
   m_nElementSizeInBytes: int = 4
   m_inputLayoutFields: int = 8
   m_pData: int = 32



class AggregateMeshInfo_t:

   m_nVisClusterMemberOffset: int = 0
   m_nVisClusterMemberCount: int = 4
   m_bHasTransform: int = 5
   m_nDrawCallIndex: int = 6
   m_nLODSetupIndex: int = 8
   m_nLODGroupMask: int = 10
   m_vTintColor: int = 11
   m_objectFlags: int = 16
   m_nLightProbeVolumePrecomputedHandshake: int = 20



class AggregateLODSetup_t:

   m_vLODOrigin: int = 0
   m_fMaxObjectScale: int = 12
   m_fSwitchDistances: int = 16



class AggregateSceneObject_t:

   m_allFlags: int = 0
   m_anyFlags: int = 4
   m_nLayer: int = 8
   m_aggregateMeshes: int = 16
   m_lodSetups: int = 40
   m_visClusterMembership: int = 64
   m_fragmentTransforms: int = 88
   m_renderableModel: int = 112



class ClutterTile_t:

   m_nFirstInstance: int = 0
   m_nLastInstance: int = 4
   m_BoundsWs: int = 8



class ClutterSceneObject_t:

   m_Bounds: int = 0
   m_flags: int = 24
   m_nLayer: int = 28
   m_instancePositions: int = 32
   m_instanceScales: int = 80
   m_instanceTintSrgb: int = 104
   m_tiles: int = 128
   m_renderableModel: int = 152



class WorldNode_t:

   m_sceneObjects: int = 0
   m_infoOverlays: int = 24
   m_visClusterMembership: int = 48
   m_aggregateSceneObjects: int = 72
   m_clutterSceneObjects: int = 96
   m_extraVertexStreamOverrides: int = 120
   m_materialOverrides: int = 144
   m_extraVertexStreams: int = 168
   m_layerNames: int = 192
   m_sceneObjectLayerIndices: int = 216
   m_overlayLayerIndices: int = 240
   m_grassFileName: int = 264
   m_nodeLightingInfo: int = 272



class WorldBuilderParams_t:

   m_flMinDrawVolumeSize: int = 0
   m_bBuildBakedLighting: int = 4
   m_vLightmapUvScale: int = 8
   m_nCompileTimestamp: int = 16
   m_nCompileFingerprint: int = 24



class NodeData_t:

   m_nParent: int = 0
   m_vOrigin: int = 4
   m_vMinBounds: int = 16
   m_vMaxBounds: int = 28
   m_flMinimumDistance: int = 40
   m_ChildNodeIndices: int = 48
   m_worldNodePrefix: int = 72



class World_t:

   m_builderParams: int = 0
   m_worldNodes: int = 32
   m_worldLightingInfo: int = 56
   m_entityLumps: int = 104



class VoxelVisBlockOffset_t:

   m_nOffset: int = 0
   m_nElementCount: int = 4



class CVoxelVisibility:

   m_nBaseClusterCount: int = 64
   m_nPVSBytesPerCluster: int = 68
   m_vMinBounds: int = 72
   m_vMaxBounds: int = 84
   m_flGridSize: int = 96
   m_nSkyVisibilityCluster: int = 100
   m_nSunVisibilityCluster: int = 104
   m_NodeBlock: int = 108
   m_RegionBlock: int = 116
   m_EnclosedClusterListBlock: int = 124
   m_EnclosedClustersBlock: int = 132
   m_MasksBlock: int = 140
   m_nVisBlocks: int = 148



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