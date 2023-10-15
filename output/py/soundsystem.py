



class CSosGroupActionSchema:

   m_name: int = 8
   m_actionType: int = 16
   m_actionInstanceType: int = 20



class CSosGroupActionLimitSchema:

   m_nMaxCount: int = 24
   m_nStopType: int = 28
   m_nSortType: int = 32



class CSosGroupActionTimeLimitSchema:

   m_flMaxDuration: int = 24



class CSosGroupActionSetSoundeventParameterSchema:

   m_nMaxCount: int = 24
   m_flMinValue: int = 28
   m_flMaxValue: int = 32
   m_opvarName: int = 40
   m_nSortType: int = 48



class CSosGroupBranchPattern:

   m_bMatchEventName: int = 8
   m_bMatchEventSubString: int = 9
   m_bMatchEntIndex: int = 10
   m_bMatchOpvar: int = 11



class CSosGroupMatchPattern:

   m_matchSoundEventName: int = 16
   m_matchSoundEventSubString: int = 24
   m_flEntIndex: int = 32
   m_flOpvar: int = 36



class CSosSoundEventGroupSchema:

   m_name: int = 0
   m_nType: int = 8
   m_bIsBlocking: int = 12
   m_nBlockMaxCount: int = 16
   m_bInvertMatch: int = 20
   m_matchPattern: int = 24
   m_branchPattern: int = 64
   m_vActions: int = 176



class CSosSoundEventGroupListSchema:

   m_groupList: int = 0



class SosEditItemInfo_t:

   itemType: int = 0
   itemName: int = 8
   itemTypeName: int = 16
   itemKVString: int = 32
   itemPos: int = 40



class SelectedEditItemInfo_t:

   m_EditItems: int = 0



class CSoundEventMetaData:

   m_soundEventVMix: int = 0



class CDSPMixgroupModifier:

   m_mixgroup: int = 0
   m_flModifier: int = 8
   m_flModifierMin: int = 12
   m_flSourceModifier: int = 16
   m_flSourceModifierMin: int = 20
   m_flListenerReverbModifierWhenSourceReverbIsActive: int = 24



class CDspPresetModifierList:

   m_dspName: int = 0
   m_modifiers: int = 8



class CDSPPresetMixgroupModifierTable:

   m_table: int = 0



class VMixFilterDesc_t:

   m_nFilterType: int = 0
   m_nFilterSlope: int = 2
   m_bEnabled: int = 3
   m_fldbGain: int = 4
   m_flCutoffFreq: int = 8
   m_flQ: int = 12



class VMixEQ8Desc_t:

   m_stages: int = 0



class VMixDelayDesc_t:

   m_feedbackFilter: int = 0
   m_bEnableFilter: int = 16
   m_flDelay: int = 20
   m_flDirectGain: int = 24
   m_flDelayGain: int = 28
   m_flFeedbackGain: int = 32
   m_flWidth: int = 36



class VMixPannerDesc_t:

   m_type: int = 0
   m_flStrength: int = 4



class VMixModDelayDesc_t:

   m_feedbackFilter: int = 0
   m_bPhaseInvert: int = 16
   m_flGlideTime: int = 20
   m_flDelay: int = 24
   m_flOutputGain: int = 28
   m_flFeedbackGain: int = 32
   m_flModRate: int = 36
   m_flModDepth: int = 40
   m_bApplyAntialiasing: int = 44



class VMixDiffusorDesc_t:

   m_flSize: int = 0
   m_flComplexity: int = 4
   m_flFeedback: int = 8
   m_flOutputGain: int = 12



class VMixBoxverbDesc_t:

   m_flSizeMax: int = 0
   m_flSizeMin: int = 4
   m_flComplexity: int = 8
   m_flDiffusion: int = 12
   m_flModDepth: int = 16
   m_flModRate: int = 20
   m_bParallel: int = 24
   m_filterType: int = 28
   m_flWidth: int = 44
   m_flHeight: int = 48
   m_flDepth: int = 52
   m_flFeedbackScale: int = 56
   m_flFeedbackWidth: int = 60
   m_flFeedbackHeight: int = 64
   m_flFeedbackDepth: int = 68
   m_flOutputGain: int = 72
   m_flTaps: int = 76



class VMixFreeverbDesc_t:

   m_flRoomSize: int = 0
   m_flDamp: int = 4
   m_flWidth: int = 8
   m_flLateReflections: int = 12



class VMixPlateverbDesc_t:

   m_flPrefilter: int = 0
   m_flInputDiffusion1: int = 4
   m_flInputDiffusion2: int = 8
   m_flDecay: int = 12
   m_flDamp: int = 16
   m_flFeedbackDiffusion1: int = 20
   m_flFeedbackDiffusion2: int = 24



class VMixDynamicsDesc_t:

   m_fldbGain: int = 0
   m_fldbNoiseGateThreshold: int = 4
   m_fldbCompressionThreshold: int = 8
   m_fldbLimiterThreshold: int = 12
   m_fldbKneeWidth: int = 16
   m_flRatio: int = 20
   m_flLimiterRatio: int = 24
   m_flAttackTimeMS: int = 28
   m_flReleaseTimeMS: int = 32
   m_flRMSTimeMS: int = 36
   m_flWetMix: int = 40
   m_bPeakMode: int = 44



class VMixDynamicsCompressorDesc_t:

   m_fldbOutputGain: int = 0
   m_fldbCompressionThreshold: int = 4
   m_fldbKneeWidth: int = 8
   m_flCompressionRatio: int = 12
   m_flAttackTimeMS: int = 16
   m_flReleaseTimeMS: int = 20
   m_flRMSTimeMS: int = 24
   m_flWetMix: int = 28
   m_bPeakMode: int = 32



class VMixDynamicsBand_t:

   m_fldbGainInput: int = 0
   m_fldbGainOutput: int = 4
   m_fldbThresholdBelow: int = 8
   m_fldbThresholdAbove: int = 12
   m_flRatioBelow: int = 16
   m_flRatioAbove: int = 20
   m_flAttackTimeMS: int = 24
   m_flReleaseTimeMS: int = 28
   m_bEnable: int = 32
   m_bSolo: int = 33



class VMixDynamics3BandDesc_t:

   m_fldbGainOutput: int = 0
   m_flRMSTimeMS: int = 4
   m_fldbKneeWidth: int = 8
   m_flDepth: int = 12
   m_flWetMix: int = 16
   m_flTimeScale: int = 20
   m_flLowCutoffFreq: int = 24
   m_flHighCutoffFreq: int = 28
   m_bPeakMode: int = 32
   m_bandDesc: int = 36



class VMixEnvelopeDesc_t:

   m_flAttackTimeMS: int = 0
   m_flHoldTimeMS: int = 4
   m_flReleaseTimeMS: int = 8



class VMixPitchShiftDesc_t:

   m_nGrainSampleCount: int = 0
   m_flPitchShift: int = 4
   m_nQuality: int = 8
   m_nProcType: int = 12



class VMixConvolutionDesc_t:

   m_fldbGain: int = 0
   m_flPreDelayMS: int = 4
   m_flWetMix: int = 8
   m_fldbLow: int = 12
   m_fldbMid: int = 16
   m_fldbHigh: int = 20
   m_flLowCutoffFreq: int = 24
   m_flHighCutoffFreq: int = 28



class VMixVocoderDesc_t:

   m_nBandCount: int = 0
   m_flBandwidth: int = 4
   m_fldBModGain: int = 8
   m_flFreqRangeStart: int = 12
   m_flFreqRangeEnd: int = 16
   m_fldBUnvoicedGain: int = 20
   m_flAttackTimeMS: int = 24
   m_flReleaseTimeMS: int = 28
   m_nDebugBand: int = 32
   m_bPeakMode: int = 36



class VMixShaperDesc_t:

   m_nShape: int = 0
   m_fldbDrive: int = 4
   m_fldbOutputGain: int = 8
   m_flWetMix: int = 12
   m_nOversampleFactor: int = 16



class VMixUtilityDesc_t:

   m_nOp: int = 0
   m_flInputPan: int = 4
   m_flOutputBalance: int = 8
   m_fldbOutputGain: int = 12
   m_bBassMono: int = 16
   m_flBassFreq: int = 20



class VMixAutoFilterDesc_t:

   m_flEnvelopeAmount: int = 0
   m_flAttackTimeMS: int = 4
   m_flReleaseTimeMS: int = 8
   m_filter: int = 12
   m_flLFOAmount: int = 28
   m_flLFORate: int = 32
   m_flPhase: int = 36
   m_nLFOShape: int = 40



class VMixOscDesc_t:

   oscType: int = 0
   m_freq: int = 4
   m_flPhase: int = 8



class VMixEffectChainDesc_t:

   m_flCrossfadeTime: int = 0



class VMixSubgraphSwitchDesc_t:

   m_interpolationMode: int = 0
   m_bOnlyTailsOnFadeOut: int = 4
   m_flInterpolationTime: int = 8