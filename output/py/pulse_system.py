



class CPulse_RegisterInfo:

   m_nReg: int = 0
   m_Type: int = 8
   m_OriginName: int = 24
   m_nWrittenByInstruction: int = 80
   m_nLastReadByInstruction: int = 84



class CPulse_Chunk:

   m_Instructions: int = 0
   m_Registers: int = 16
   m_InstructionEditorIDs: int = 32



class CPulse_Variable:

   m_Name: int = 0
   m_Description: int = 8
   m_Type: int = 16
   m_DefaultValue: int = 32
   m_bIsPublic: int = 50



class CPulse_PublicOutput:

   m_Name: int = 0
   m_Description: int = 8
   m_ParamType: int = 16



class CPulse_OutputConnection:

   m_SourceOutput: int = 0
   m_TargetEntity: int = 8
   m_TargetInput: int = 16
   m_Param: int = 24



class CPulse_InvokeBinding:

   m_RegisterMap: int = 0
   m_FuncName: int = 32
   m_nCellIndex: int = 40
   m_InstanceType: int = 48
   m_nSrcChunk: int = 64
   m_nSrcInstruction: int = 68



class CPulse_CallInfo:

   m_PortName: int = 0
   m_nEditorNodeID: int = 8
   m_RegisterMap: int = 16
   m_CallMethodID: int = 48
   m_nSrcChunk: int = 52
   m_nSrcInstruction: int = 56



class CPulseGraphDef:

   m_DomainIdentifier: int = 8
   m_ParentMapName: int = 16
   m_Chunks: int = 24
   m_Cells: int = 48
   m_Vars: int = 72
   m_PublicOutputs: int = 96
   m_InvokeBindings: int = 120
   m_CallInfos: int = 144
   m_OutputConnections: int = 168



class PulseRuntimeChunkIndex_t:

   m_Value: int = 0



class PulseRuntimeCallInfoIndex_t:

   m_Value: int = 0



class PulseRuntimeVarIndex_t:

   m_Value: int = 0



class PulseRuntimeOutputIndex_t:

   m_Value: int = 0



class PulseRuntimeStateOffset_t:

   m_Value: int = 0



class PulseRuntimeRegisterIndex_t:

   m_Value: int = 0



class PulseRuntimeCellIndex_t:

   m_Value: int = 0



class PulseRuntimeInvokeIndex_t:

   m_Value: int = 0



class PulseDocNodeID_t:

   m_Value: int = 0



class PulseRuntimeEntrypointIndex_t:

   m_Value: int = 0



class PulseRegisterMap_t:

   m_Inparams: int = 0
   m_Outparams: int = 16



class PGDInstruction_t:

   m_nCode: int = 0
   m_nVar: int = 4
   m_nReg0: int = 8
   m_nReg1: int = 10
   m_nReg2: int = 12
   m_nInvokeBindingIndex: int = 16
   m_nChunk: int = 20
   m_nDestInstruction: int = 24
   m_nCallInfoIndex: int = 28
   m_Arg0Name: int = 32
   m_Arg1Name: int = 40
   m_bLiteralBool: int = 48
   m_nLiteralInt: int = 52
   m_flLiteralFloat: int = 56
   m_LiteralString: int = 64
   m_vLiteralVec3: int = 80



class CPulse_OutflowConnection:

   m_SourceOutflowName: int = 0
   m_nDestChunk: int = 8
   m_nInstruction: int = 12



class CPulseCell_Base:

   m_nEditorNodeID: int = 8



class CPulseCell_Inflow_BaseEntrypoint:

   m_EntryChunk: int = 72
   m_RegisterMap: int = 80



class CPulseRuntimeMethodArg:

   m_Name: int = 0
   m_Description: int = 56
   m_Type: int = 64



class CPulseCell_Inflow_Method:

   m_MethodName: int = 112
   m_Description: int = 120
   m_bIsPublic: int = 128
   m_ReturnType: int = 136
   m_Args: int = 152



class CPulseCell_Inflow_EventHandler:

   m_EventName: int = 112



class CPulseCell_Inflow_GraphHook:

   m_HookName: int = 112



class CPulseCell_Inflow_EntOutputHandler:

   m_SourceEntity: int = 112
   m_SourceOutput: int = 120
   m_TargetInput: int = 128
   m_ExpectedParamType: int = 136



class CPulseCell_Step_PublicOutput:

   m_OutputIndex: int = 72



class CPulseCell_Inflow_Yield:

   m_UnyieldResume: int = 72



class CPulseCell_Inflow_Wait:

   m_WakeResume: int = 72



class CPulseCell_Outflow_StringSwitch:

   m_DefaultCaseOutflow: int = 72
   m_CaseOutflows: int = 88



class CPulseCell_Outflow_IntSwitch:

   m_DefaultCaseOutflow: int = 72
   m_CaseOutflows: int = 88



class CPulseCell_Outflow_CycleOrdered:

   m_Outputs: int = 72



class CPulseCell_Outflow_CycleOrdered_InstanceState_t:

   m_nNextIndex: int = 0



class CPulseCell_Outflow_CycleRandom:

   m_Outputs: int = 72



class CPulseCell_Outflow_CycleShuffled:

   m_Outputs: int = 72



class CPulseCell_Outflow_CycleShuffled_InstanceState_t:

   m_Shuffle: int = 0
   m_nNextShuffle: int = 32



class CPulseCell_Outflow_SimultaneousParallel:

   m_Outputs: int = 72



class CPulseCell_Outflow_TestRandomYesNo:

   m_Yes: int = 72
   m_No: int = 88



class CPulseCell_Outflow_TestExplicitYesNo:

   m_Yes: int = 72
   m_No: int = 88



class CPulseCell_Step_CallExternalMethod:

   m_MethodName: int = 72
   m_ExpectedArgs: int = 80



class PulseTestEHandle_t:

   m_Value: int = 0



class FakeEntity_t:

   m_nHandle: int = 0
   m_Name: int = 8
   m_Class: int = 16
   m_bDestroyed: int = 24
   m_pAssociatedGraphInstance: int = 32
   m_bFuncWasCalled: int = 40
   m_fValue: int = 44



class CPulseGraphInstance_TestDomain:

   m_bIsRunningUnitTests: int = 208
   m_bExplicitTimeStepping: int = 209
   m_bExpectingToDestroyWithYieldedCursors: int = 210
   m_nNextValidateIndex: int = 212
   m_Tracepoints: int = 216
   m_bTestYesOrNoPath: int = 240



class CPulseCell_Step_TestDomainEntFire:

   m_Input: int = 72



class CTestDomainDerived_Cursor:

   m_nCursorValueA: int = 392
   m_nCursorValueB: int = 396



class CPulseGraphInstance_TestDomain_Derived:

   m_nInstanceValueX: int = 248



class CPulseTurtleGraphicsCursor:

   m_Color: int = 392
   m_vPos: int = 396
   m_flHeadingDeg: int = 404
   m_bPenUp: int = 408