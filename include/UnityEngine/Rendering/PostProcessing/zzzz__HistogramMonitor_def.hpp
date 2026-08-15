#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/HistogramMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HistogramMonitor)
namespace UnityEngine::Rendering::PostProcessing {
struct HistogramMonitor_Channel;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct HistogramMonitor_Channel;
}
namespace UnityEngine::Rendering::PostProcessing {
class HistogramMonitor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::HistogramMonitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel, "UnityEngine.Rendering.PostProcessing", "HistogramMonitor/Channel");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::HistogramMonitor*, "UnityEngine.Rendering.PostProcessing", "HistogramMonitor");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.HistogramMonitor/Channel
struct CORDL_TYPE HistogramMonitor_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HistogramMonitor_Channel_Unwrapped
enum struct __HistogramMonitor_Channel_Unwrapped : int32_t {
__E_Red = static_cast<int32_t>(0x0),
__E_Green = static_cast<int32_t>(0x1),
__E_Blue = static_cast<int32_t>(0x2),
__E_Master = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HistogramMonitor_Channel_Unwrapped () const noexcept {
return static_cast<__HistogramMonitor_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HistogramMonitor_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HistogramMonitor_Channel(int32_t  value__) noexcept;

/// @brief Field Blue value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const Blue;

/// @brief Field Green value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const Green;

/// @brief Field Master value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const Master;

/// @brief Field Red value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const Red;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.Rendering.PostProcessing.HistogramMonitor::Channel, UnityEngine.Rendering.PostProcessing.Monitor
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.HistogramMonitor
class CORDL_TYPE HistogramMonitor : public ::UnityEngine::Rendering::PostProcessing::Monitor {
public:
// Declarations
using Channel = ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel;

/// @brief Field channel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  channel;

/// @brief Field height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field m_Data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::UnityEngine::ComputeBuffer*  m_Data;

/// @brief Field width, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method NeedsHalfRes, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool NeedsHalfRes() ;

static inline ::UnityEngine::Rendering::PostProcessing::HistogramMonitor* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc0060, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Render, addr 0x181fc00c0, size 0x3e0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ShaderResourcesAvailable, addr 0x181fc04a0, size 0x20, virtual true, abstract: false, final false
inline bool ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const& __cordl_internal_get_channel() const;

constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel& __cordl_internal_get_channel() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_Data() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_Data() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_channel(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_m_Data(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x181fc04c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HistogramMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HistogramMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HistogramMonitor(HistogramMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HistogramMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HistogramMonitor(HistogramMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18600};

/// @brief Field k_NumBins offset 0xffffffff size 0x4
static constexpr int32_t  k_NumBins{static_cast<int32_t>(0x100)};

/// @brief Field k_ThreadGroupSizeX offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeX{static_cast<int32_t>(0x10)};

/// @brief Field k_ThreadGroupSizeY offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeY{static_cast<int32_t>(0x10)};

/// @brief Field width, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x20, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field channel, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  ___channel;

/// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_Data;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor, ___width) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor, ___height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor, ___channel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor, ___m_Data) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::HistogramMonitor) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
