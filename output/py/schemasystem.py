



class CSchemaSystemInternalRegistration:

   m_Vector2D: int = 0
   m_Vector: int = 8
   m_VectorAligned: int = 32
   m_Quaternion: int = 48
   m_QAngle: int = 64
   m_RotationVector: int = 76
   m_RadianEuler: int = 88
   m_DegreeEuler: int = 100
   m_QuaternionStorage: int = 112
   m_matrix3x4_t: int = 128
   m_matrix3x4a_t: int = 176
   m_Color: int = 224
   m_Vector4D: int = 228
   m_CTransform: int = 256
   m_pKeyValues: int = 288
   m_CUtlBinaryBlock: int = 296
   m_CUtlString: int = 320
   m_CUtlSymbol: int = 328
   m_stringToken: int = 332
   m_stringTokenWithStorage: int = 336
   m_ResourceTypes: int = 360
   m_KV3: int = 368



class ResourceId_t:

   m_Value: int = 0



class CExampleSchemaVData_Monomorphic:

   m_nExample1: int = 0
   m_nExample2: int = 4



class CExampleSchemaVData_PolymorphicBase:

   m_nBase: int = 8



class CExampleSchemaVData_PolymorphicDerivedA:

   m_nDerivedA: int = 16



class CExampleSchemaVData_PolymorphicDerivedB:

   m_nDerivedB: int = 16