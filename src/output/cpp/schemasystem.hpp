#pragma once

#include <cstddef>

using namespace std;

namespace CSchemaSystemInternalRegistration {

   constexpr ptrdiff_t m_Vector2D = 0x0;
   constexpr ptrdiff_t m_Vector = 0x8;
   constexpr ptrdiff_t m_VectorAligned = 0x20;
   constexpr ptrdiff_t m_Quaternion = 0x30;
   constexpr ptrdiff_t m_QAngle = 0x40;
   constexpr ptrdiff_t m_RotationVector = 0x4c;
   constexpr ptrdiff_t m_RadianEuler = 0x58;
   constexpr ptrdiff_t m_DegreeEuler = 0x64;
   constexpr ptrdiff_t m_QuaternionStorage = 0x70;
   constexpr ptrdiff_t m_matrix3x4_t = 0x80;
   constexpr ptrdiff_t m_matrix3x4a_t = 0xb0;
   constexpr ptrdiff_t m_Color = 0xe0;
   constexpr ptrdiff_t m_Vector4D = 0xe4;
   constexpr ptrdiff_t m_CTransform = 0x100;
   constexpr ptrdiff_t m_pKeyValues = 0x120;
   constexpr ptrdiff_t m_CUtlBinaryBlock = 0x128;
   constexpr ptrdiff_t m_CUtlString = 0x140;
   constexpr ptrdiff_t m_CUtlSymbol = 0x148;
   constexpr ptrdiff_t m_stringToken = 0x14c;
   constexpr ptrdiff_t m_stringTokenWithStorage = 0x150;
   constexpr ptrdiff_t m_ResourceTypes = 0x168;
   constexpr ptrdiff_t m_KV3 = 0x170;

}

namespace ResourceId_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace CExampleSchemaVData_Monomorphic {

   constexpr ptrdiff_t m_nExample1 = 0x0;
   constexpr ptrdiff_t m_nExample2 = 0x4;

}

namespace CExampleSchemaVData_PolymorphicBase {

   constexpr ptrdiff_t m_nBase = 0x8;

}

namespace CExampleSchemaVData_PolymorphicDerivedA {

   constexpr ptrdiff_t m_nDerivedA = 0x10;

}

namespace CExampleSchemaVData_PolymorphicDerivedB {

   constexpr ptrdiff_t m_nDerivedB = 0x10;

}

