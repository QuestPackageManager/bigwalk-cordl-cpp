#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/WaveformMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveformMonitor)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class WaveformMonitor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::WaveformMonitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::WaveformMonitor*, "UnityEngine.Rendering.PostProcessing", "WaveformMonitor");
// Dependencies UnityEngine.Rendering.PostProcessing.Monitor
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.WaveformMonitor
class CORDL_TYPE WaveformMonitor : public ::UnityEngine::Rendering::PostProcessing::Monitor {
public:
// Declarations
/// @brief Field exposure, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exposure, put=__cordl_internal_set_exposure)) float_t  exposure;

/// @brief Field height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field m_Data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::UnityEngine::ComputeBuffer*  m_Data;

/// @brief Method NeedsHalfRes, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool NeedsHalfRes() ;

static inline ::UnityEngine::Rendering::PostProcessing::WaveformMonitor* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fd0a60, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Render, addr 0x181fd0f00, size 0x6a0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ShaderResourcesAvailable, addr 0x181fd15a0, size 0x20, virtual true, abstract: false, final false
inline bool ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr float_t const& __cordl_internal_get_exposure() const;

constexpr float_t& __cordl_internal_get_exposure() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_Data() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_Data() ;

constexpr void __cordl_internal_set_exposure(float_t  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_m_Data(::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method .ctor, addr 0x181fd15c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveformMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveformMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveformMonitor(WaveformMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveformMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveformMonitor(WaveformMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18605};

/// @brief Field k_ThreadGroupSize offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSize{static_cast<int32_t>(0x100)};

/// @brief Field k_ThreadGroupSizeX offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeX{static_cast<int32_t>(0x10)};

/// @brief Field k_ThreadGroupSizeY offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeY{static_cast<int32_t>(0x10)};

/// @brief Field exposure, offset: 0x1c, size: 0x4, def value: None
 float_t  ___exposure;

/// @brief Field height, offset: 0x20, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::WaveformMonitor, ___exposure) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::WaveformMonitor, ___height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::WaveformMonitor, ___m_Data) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::WaveformMonitor) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
