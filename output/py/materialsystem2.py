



class MaterialParam_t:

   m_name: int = 0



class MaterialParamInt_t:

   m_nValue: int = 8



class MaterialParamFloat_t:

   m_flValue: int = 8



class MaterialParamVector_t:

   m_value: int = 8



class MaterialParamTexture_t:

   m_pValue: int = 8



class MaterialParamString_t:

   m_value: int = 8



class MaterialParamBuffer_t:

   m_value: int = 8



class MaterialResourceData_t:

   m_materialName: int = 0
   m_shaderName: int = 8
   m_intParams: int = 16
   m_floatParams: int = 40
   m_vectorParams: int = 64
   m_textureParams: int = 88
   m_dynamicParams: int = 112
   m_dynamicTextureParams: int = 136
   m_intAttributes: int = 160
   m_floatAttributes: int = 184
   m_vectorAttributes: int = 208
   m_textureAttributes: int = 232
   m_stringAttributes: int = 256
   m_renderAttributesUsed: int = 280



class PostProcessingTonemapParameters_t:

   m_flExposureBias: int = 0
   m_flShoulderStrength: int = 4
   m_flLinearStrength: int = 8
   m_flLinearAngle: int = 12
   m_flToeStrength: int = 16
   m_flToeNum: int = 20
   m_flToeDenom: int = 24
   m_flWhitePoint: int = 28
   m_flLuminanceSource: int = 32
   m_flExposureBiasShadows: int = 36
   m_flExposureBiasHighlights: int = 40
   m_flMinShadowLum: int = 44
   m_flMaxShadowLum: int = 48
   m_flMinHighlightLum: int = 52
   m_flMaxHighlightLum: int = 56



class PostProcessingBloomParameters_t:

   m_blendMode: int = 0
   m_flBloomStrength: int = 4
   m_flScreenBloomStrength: int = 8
   m_flBlurBloomStrength: int = 12
   m_flBloomThreshold: int = 16
   m_flBloomThresholdWidth: int = 20
   m_flSkyboxBloomStrength: int = 24
   m_flBloomStartValue: int = 28
   m_flBlurWeight: int = 32
   m_vBlurTint: int = 52



class PostProcessingVignetteParameters_t:

   m_flVignetteStrength: int = 0
   m_vCenter: int = 4
   m_flRadius: int = 12
   m_flRoundness: int = 16
   m_flFeather: int = 20
   m_vColorTint: int = 24



class PostProcessingLocalContrastParameters_t:

   m_flLocalContrastStrength: int = 0
   m_flLocalContrastEdgeStrength: int = 4
   m_flLocalContrastVignetteStart: int = 8
   m_flLocalContrastVignetteEnd: int = 12
   m_flLocalContrastVignetteBlur: int = 16



class PostProcessingResource_t:

   m_bHasTonemapParams: int = 0
   m_toneMapParams: int = 4
   m_bHasBloomParams: int = 64
   m_bloomParams: int = 68
   m_bHasVignetteParams: int = 180
   m_vignetteParams: int = 184
   m_bHasLocalContrastParams: int = 220
   m_localConstrastParams: int = 224
   m_nColorCorrectionVolumeDim: int = 244
   m_colorCorrectionVolumeData: int = 248
   m_bHasColorCorrection: int = 272