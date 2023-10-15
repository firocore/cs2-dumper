



class TestResource_t:

   m_name: int = 0



class ManifestTestResource_t:

   m_name: int = 0
   m_child: int = 8



class FuseVariableIndex_t:

   m_Value: int = 0



class FuseFunctionIndex_t:

   m_Value: int = 0



class ConstantInfo_t:

   m_name: int = 0
   m_nameToken: int = 8
   m_flValue: int = 12



class VariableInfo_t:

   m_name: int = 0
   m_nameToken: int = 8
   m_nIndex: int = 12
   m_nNumComponents: int = 14
   m_eVarType: int = 15
   m_eAccess: int = 16



class FunctionInfo_t:

   m_name: int = 8
   m_nameToken: int = 16
   m_nParamCount: int = 20
   m_nIndex: int = 24
   m_bIsPure: int = 26



class CFuseProgram:

   m_programBuffer: int = 0
   m_variablesRead: int = 24
   m_variablesWritten: int = 48
   m_nMaxTempVarsUsed: int = 72



class CFuseSymbolTable:

   m_constants: int = 0
   m_variables: int = 24
   m_functions: int = 48
   m_constantMap: int = 72
   m_variableMap: int = 104
   m_functionMap: int = 136



class AABB_t:

   m_vMinBounds: int = 0
   m_vMaxBounds: int = 12



class PackedAABB_t:

   m_nPackedMin: int = 0
   m_nPackedMax: int = 4



class FourQuaternions:

   x: int = 0
   y: int = 16
   z: int = 32
   w: int = 48