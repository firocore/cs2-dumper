



class CSSDSEndFrameViewInfo:

   m_nViewId: int = 0
   m_ViewName: int = 8



class CSSDSMsg_EndFrame:

   m_Views: int = 0



class SceneViewId_t:

   m_nViewId: int = 0
   m_nFrameCount: int = 8



class CSSDSMsg_ViewRender:

   m_viewId: int = 0
   m_ViewName: int = 16



class CSSDSMsg_LayerBase:

   m_viewId: int = 0
   m_ViewName: int = 16
   m_nLayerIndex: int = 24
   m_nLayerId: int = 32
   m_LayerName: int = 40
   m_displayText: int = 48



class CSSDSMsg_ViewTarget:

   m_Name: int = 0
   m_TextureId: int = 8
   m_nWidth: int = 16
   m_nHeight: int = 20
   m_nRequestedWidth: int = 24
   m_nRequestedHeight: int = 28
   m_nNumMipLevels: int = 32
   m_nDepth: int = 36
   m_nMultisampleNumSamples: int = 40
   m_nFormat: int = 44



class CSSDSMsg_ViewTargetList:

   m_viewId: int = 0
   m_ViewName: int = 16
   m_Targets: int = 24