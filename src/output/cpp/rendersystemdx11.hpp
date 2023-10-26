#pragma once

#include <cstddef>

using namespace std;

namespace RenderInputLayoutField_t {

   constexpr ptrdiff_t m_pSemanticName = 0x0;
   constexpr ptrdiff_t m_nSemanticIndex = 0x20;
   constexpr ptrdiff_t m_Format = 0x24;
   constexpr ptrdiff_t m_nOffset = 0x28;
   constexpr ptrdiff_t m_nSlot = 0x2c;
   constexpr ptrdiff_t m_nSlotType = 0x30;
   constexpr ptrdiff_t m_nInstanceStepRate = 0x34;

}

namespace VsInputSignatureElement_t {

   constexpr ptrdiff_t m_pName = 0x0;
   constexpr ptrdiff_t m_pSemantic = 0x40;
   constexpr ptrdiff_t m_pD3DSemanticName = 0x80;
   constexpr ptrdiff_t m_nD3DSemanticIndex = 0xc0;

}

namespace VsInputSignature_t {

   constexpr ptrdiff_t m_elems = 0x0;

}

