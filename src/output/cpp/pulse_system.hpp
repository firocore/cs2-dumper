#pragma once

#include <cstddef>

using namespace std;

namespace CPulse_RegisterInfo {

   constexpr ptrdiff_t m_nReg = 0x0;
   constexpr ptrdiff_t m_Type = 0x8;
   constexpr ptrdiff_t m_OriginName = 0x18;
   constexpr ptrdiff_t m_nWrittenByInstruction = 0x50;
   constexpr ptrdiff_t m_nLastReadByInstruction = 0x54;

}

namespace CPulse_Chunk {

   constexpr ptrdiff_t m_Instructions = 0x0;
   constexpr ptrdiff_t m_Registers = 0x10;
   constexpr ptrdiff_t m_InstructionEditorIDs = 0x20;

}

namespace CPulse_Variable {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_Description = 0x8;
   constexpr ptrdiff_t m_Type = 0x10;
   constexpr ptrdiff_t m_DefaultValue = 0x20;
   constexpr ptrdiff_t m_bIsPublic = 0x32;

}

namespace CPulse_PublicOutput {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_Description = 0x8;
   constexpr ptrdiff_t m_ParamType = 0x10;

}

namespace CPulse_OutputConnection {

   constexpr ptrdiff_t m_SourceOutput = 0x0;
   constexpr ptrdiff_t m_TargetEntity = 0x8;
   constexpr ptrdiff_t m_TargetInput = 0x10;
   constexpr ptrdiff_t m_Param = 0x18;

}

namespace CPulse_InvokeBinding {

   constexpr ptrdiff_t m_RegisterMap = 0x0;
   constexpr ptrdiff_t m_FuncName = 0x20;
   constexpr ptrdiff_t m_nCellIndex = 0x28;
   constexpr ptrdiff_t m_InstanceType = 0x30;
   constexpr ptrdiff_t m_nSrcChunk = 0x40;
   constexpr ptrdiff_t m_nSrcInstruction = 0x44;

}

namespace CPulse_CallInfo {

   constexpr ptrdiff_t m_PortName = 0x0;
   constexpr ptrdiff_t m_nEditorNodeID = 0x8;
   constexpr ptrdiff_t m_RegisterMap = 0x10;
   constexpr ptrdiff_t m_CallMethodID = 0x30;
   constexpr ptrdiff_t m_nSrcChunk = 0x34;
   constexpr ptrdiff_t m_nSrcInstruction = 0x38;

}

namespace CPulseGraphDef {

   constexpr ptrdiff_t m_DomainIdentifier = 0x8;
   constexpr ptrdiff_t m_ParentMapName = 0x10;
   constexpr ptrdiff_t m_Chunks = 0x18;
   constexpr ptrdiff_t m_Cells = 0x30;
   constexpr ptrdiff_t m_Vars = 0x48;
   constexpr ptrdiff_t m_PublicOutputs = 0x60;
   constexpr ptrdiff_t m_InvokeBindings = 0x78;
   constexpr ptrdiff_t m_CallInfos = 0x90;
   constexpr ptrdiff_t m_OutputConnections = 0xa8;

}

namespace PulseRuntimeChunkIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeCallInfoIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeVarIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeOutputIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeStateOffset_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeRegisterIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeCellIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeInvokeIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseDocNodeID_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRuntimeEntrypointIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace PulseRegisterMap_t {

   constexpr ptrdiff_t m_Inparams = 0x0;
   constexpr ptrdiff_t m_Outparams = 0x10;

}

namespace PGDInstruction_t {

   constexpr ptrdiff_t m_nCode = 0x0;
   constexpr ptrdiff_t m_nVar = 0x4;
   constexpr ptrdiff_t m_nReg0 = 0x8;
   constexpr ptrdiff_t m_nReg1 = 0xa;
   constexpr ptrdiff_t m_nReg2 = 0xc;
   constexpr ptrdiff_t m_nInvokeBindingIndex = 0x10;
   constexpr ptrdiff_t m_nChunk = 0x14;
   constexpr ptrdiff_t m_nDestInstruction = 0x18;
   constexpr ptrdiff_t m_nCallInfoIndex = 0x1c;
   constexpr ptrdiff_t m_Arg0Name = 0x20;
   constexpr ptrdiff_t m_Arg1Name = 0x28;
   constexpr ptrdiff_t m_bLiteralBool = 0x30;
   constexpr ptrdiff_t m_nLiteralInt = 0x34;
   constexpr ptrdiff_t m_flLiteralFloat = 0x38;
   constexpr ptrdiff_t m_LiteralString = 0x40;
   constexpr ptrdiff_t m_vLiteralVec3 = 0x50;

}

namespace CPulse_OutflowConnection {

   constexpr ptrdiff_t m_SourceOutflowName = 0x0;
   constexpr ptrdiff_t m_nDestChunk = 0x8;
   constexpr ptrdiff_t m_nInstruction = 0xc;

}

namespace CPulseCell_Base {

   constexpr ptrdiff_t m_nEditorNodeID = 0x8;

}

namespace CPulseCell_Inflow_BaseEntrypoint {

   constexpr ptrdiff_t m_EntryChunk = 0x48;
   constexpr ptrdiff_t m_RegisterMap = 0x50;

}

namespace CPulseRuntimeMethodArg {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_Description = 0x38;
   constexpr ptrdiff_t m_Type = 0x40;

}

namespace CPulseCell_Inflow_Method {

   constexpr ptrdiff_t m_MethodName = 0x70;
   constexpr ptrdiff_t m_Description = 0x78;
   constexpr ptrdiff_t m_bIsPublic = 0x80;
   constexpr ptrdiff_t m_ReturnType = 0x88;
   constexpr ptrdiff_t m_Args = 0x98;

}

namespace CPulseCell_Inflow_EventHandler {

   constexpr ptrdiff_t m_EventName = 0x70;

}

namespace CPulseCell_Inflow_GraphHook {

   constexpr ptrdiff_t m_HookName = 0x70;

}

namespace CPulseCell_Inflow_EntOutputHandler {

   constexpr ptrdiff_t m_SourceEntity = 0x70;
   constexpr ptrdiff_t m_SourceOutput = 0x78;
   constexpr ptrdiff_t m_TargetInput = 0x80;
   constexpr ptrdiff_t m_ExpectedParamType = 0x88;

}

namespace CPulseCell_Step_PublicOutput {

   constexpr ptrdiff_t m_OutputIndex = 0x48;

}

namespace CPulseCell_Inflow_Yield {

   constexpr ptrdiff_t m_UnyieldResume = 0x48;

}

namespace CPulseCell_Inflow_Wait {

   constexpr ptrdiff_t m_WakeResume = 0x48;

}

namespace CPulseCell_Outflow_StringSwitch {

   constexpr ptrdiff_t m_DefaultCaseOutflow = 0x48;
   constexpr ptrdiff_t m_CaseOutflows = 0x58;

}

namespace CPulseCell_Outflow_IntSwitch {

   constexpr ptrdiff_t m_DefaultCaseOutflow = 0x48;
   constexpr ptrdiff_t m_CaseOutflows = 0x58;

}

namespace CPulseCell_Outflow_CycleOrdered {

   constexpr ptrdiff_t m_Outputs = 0x48;

}

namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t {

   constexpr ptrdiff_t m_nNextIndex = 0x0;

}

namespace CPulseCell_Outflow_CycleRandom {

   constexpr ptrdiff_t m_Outputs = 0x48;

}

namespace CPulseCell_Outflow_CycleShuffled {

   constexpr ptrdiff_t m_Outputs = 0x48;

}

namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t {

   constexpr ptrdiff_t m_Shuffle = 0x0;
   constexpr ptrdiff_t m_nNextShuffle = 0x20;

}

namespace CPulseCell_Outflow_SimultaneousParallel {

   constexpr ptrdiff_t m_Outputs = 0x48;

}

namespace CPulseCell_Outflow_TestRandomYesNo {

   constexpr ptrdiff_t m_Yes = 0x48;
   constexpr ptrdiff_t m_No = 0x58;

}

namespace CPulseCell_Outflow_TestExplicitYesNo {

   constexpr ptrdiff_t m_Yes = 0x48;
   constexpr ptrdiff_t m_No = 0x58;

}

namespace CPulseCell_Step_CallExternalMethod {

   constexpr ptrdiff_t m_MethodName = 0x48;
   constexpr ptrdiff_t m_ExpectedArgs = 0x50;

}

namespace PulseTestEHandle_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace FakeEntity_t {

   constexpr ptrdiff_t m_nHandle = 0x0;
   constexpr ptrdiff_t m_Name = 0x8;
   constexpr ptrdiff_t m_Class = 0x10;
   constexpr ptrdiff_t m_bDestroyed = 0x18;
   constexpr ptrdiff_t m_pAssociatedGraphInstance = 0x20;
   constexpr ptrdiff_t m_bFuncWasCalled = 0x28;
   constexpr ptrdiff_t m_fValue = 0x2c;

}

namespace CPulseGraphInstance_TestDomain {

   constexpr ptrdiff_t m_bIsRunningUnitTests = 0xd0;
   constexpr ptrdiff_t m_bExplicitTimeStepping = 0xd1;
   constexpr ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xd2;
   constexpr ptrdiff_t m_nNextValidateIndex = 0xd4;
   constexpr ptrdiff_t m_Tracepoints = 0xd8;
   constexpr ptrdiff_t m_bTestYesOrNoPath = 0xf0;

}

namespace CPulseCell_Step_TestDomainEntFire {

   constexpr ptrdiff_t m_Input = 0x48;

}

namespace CTestDomainDerived_Cursor {

   constexpr ptrdiff_t m_nCursorValueA = 0x188;
   constexpr ptrdiff_t m_nCursorValueB = 0x18c;

}

namespace CPulseGraphInstance_TestDomain_Derived {

   constexpr ptrdiff_t m_nInstanceValueX = 0xf8;

}

namespace CPulseTurtleGraphicsCursor {

   constexpr ptrdiff_t m_Color = 0x188;
   constexpr ptrdiff_t m_vPos = 0x18c;
   constexpr ptrdiff_t m_flHeadingDeg = 0x194;
   constexpr ptrdiff_t m_bPenUp = 0x198;

}

