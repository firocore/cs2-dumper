#pragma once

#include <cstddef>

using namespace std;

namespace CSSDSEndFrameViewInfo {

   constexpr ptrdiff_t m_nViewId = 0x0;
   constexpr ptrdiff_t m_ViewName = 0x8;

}

namespace CSSDSMsg_EndFrame {

   constexpr ptrdiff_t m_Views = 0x0;

}

namespace SceneViewId_t {

   constexpr ptrdiff_t m_nViewId = 0x0;
   constexpr ptrdiff_t m_nFrameCount = 0x8;

}

namespace CSSDSMsg_ViewRender {

   constexpr ptrdiff_t m_viewId = 0x0;
   constexpr ptrdiff_t m_ViewName = 0x10;

}

namespace CSSDSMsg_LayerBase {

   constexpr ptrdiff_t m_viewId = 0x0;
   constexpr ptrdiff_t m_ViewName = 0x10;
   constexpr ptrdiff_t m_nLayerIndex = 0x18;
   constexpr ptrdiff_t m_nLayerId = 0x20;
   constexpr ptrdiff_t m_LayerName = 0x28;
   constexpr ptrdiff_t m_displayText = 0x30;

}

namespace CSSDSMsg_ViewTarget {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_TextureId = 0x8;
   constexpr ptrdiff_t m_nWidth = 0x10;
   constexpr ptrdiff_t m_nHeight = 0x14;
   constexpr ptrdiff_t m_nRequestedWidth = 0x18;
   constexpr ptrdiff_t m_nRequestedHeight = 0x1c;
   constexpr ptrdiff_t m_nNumMipLevels = 0x20;
   constexpr ptrdiff_t m_nDepth = 0x24;
   constexpr ptrdiff_t m_nMultisampleNumSamples = 0x28;
   constexpr ptrdiff_t m_nFormat = 0x2c;

}

namespace CSSDSMsg_ViewTargetList {

   constexpr ptrdiff_t m_viewId = 0x0;
   constexpr ptrdiff_t m_ViewName = 0x10;
   constexpr ptrdiff_t m_Targets = 0x18;

}

