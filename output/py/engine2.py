



class EngineLoopState_t:

   m_nPlatWindowWidth: int = 24
   m_nPlatWindowHeight: int = 28
   m_nRenderWidth: int = 32
   m_nRenderHeight: int = 36



class EventFrameBoundary_t:

   m_flFrameTime: int = 0



class EventProfileStorageAvailable_t:

   m_nSplitScreenSlot: int = 0



class EventSetTime_t:

   m_LoopState: int = 0
   m_nClientOutputFrames: int = 40
   m_flRealTime: int = 48
   m_flRenderTime: int = 56
   m_flRenderFrameTime: int = 64
   m_flRenderFrameTimeUnbounded: int = 72
   m_flRenderFrameTimeUnscaled: int = 80
   m_flTickRemainder: int = 88



class EventClientPollInput_t:

   m_LoopState: int = 0
   m_flRealTime: int = 40



class EventClientProcessInput_t:

   m_LoopState: int = 0
   m_flRealTime: int = 40



class EventClientProcessGameInput_t:

   m_LoopState: int = 0
   m_flRealTime: int = 40
   m_flFrameTime: int = 44



class EventClientPreOutput_t:

   m_LoopState: int = 0
   m_flRenderTime: int = 40
   m_flRenderFrameTime: int = 48
   m_flRenderFrameTimeUnbounded: int = 56
   m_flRealTime: int = 64
   m_bRenderOnly: int = 68



class EventClientSceneSystemThreadStateChange_t:

   m_bThreadsActive: int = 0



class EventClientOutput_t:

   m_LoopState: int = 0
   m_flRenderTime: int = 40
   m_flRealTime: int = 44
   m_flRenderFrameTimeUnbounded: int = 48
   m_bRenderOnly: int = 52



class EventClientPostOutput_t:

   m_LoopState: int = 0
   m_flRenderTime: int = 40
   m_flRenderFrameTime: int = 48
   m_flRenderFrameTimeUnbounded: int = 52
   m_bRenderOnly: int = 56



class EventClientFrameSimulate_t:

   m_LoopState: int = 0
   m_flRealTime: int = 40
   m_flFrameTime: int = 44



class EventSimpleLoopFrameUpdate_t:

   m_LoopState: int = 0
   m_flRealTime: int = 40
   m_flFrameTime: int = 44



class EventSimulate_t:

   m_LoopState: int = 0
   m_bFirstTick: int = 40
   m_bLastTick: int = 41



class EventAdvanceTick_t:

   m_nCurrentTick: int = 48
   m_nCurrentTickThisFrame: int = 52
   m_nTotalTicksThisFrame: int = 56
   m_nTotalTicks: int = 60



class EventPostAdvanceTick_t:

   m_nCurrentTick: int = 48
   m_nCurrentTickThisFrame: int = 52
   m_nTotalTicksThisFrame: int = 56
   m_nTotalTicks: int = 60



class EventClientSendInput_t:

   m_bFinalClientCommandTick: int = 0
   m_nAdditionalClientCommandsToCreate: int = 4



class EventClientPollNetworking_t:

   m_nTickCount: int = 0



class EventPostDataUpdate_t:

   m_nCount: int = 0



class EventPreDataUpdate_t:

   m_nCount: int = 0



class EventAppShutdown_t:

   m_nDummy0: int = 0



class CNetworkVarChainer:

   m_PathIndex: int = 32



class EntComponentInfo_t:

   m_pName: int = 0
   m_pCPPClassname: int = 8
   m_pNetworkDataReferencedDescription: int = 16
   m_pNetworkDataReferencedPtrPropDescription: int = 24
   m_nRuntimeIndex: int = 32
   m_nFlags: int = 36
   m_pBaseClassComponentHelper: int = 96



class CEntityComponentHelper:

   m_flags: int = 8
   m_pInfo: int = 16
   m_nPriority: int = 24
   m_pNext: int = 32



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



class CEntityIOOutput:

   m_Value: int = 24



class CScriptComponent:

   m_scriptClassName: int = 48