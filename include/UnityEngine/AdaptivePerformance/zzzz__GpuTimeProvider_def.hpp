#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/GpuTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GpuTimeProvider)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class GpuTimeProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::GpuTimeProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::GpuTimeProvider*, "UnityEngine.AdaptivePerformance", "GpuTimeProvider");
// Dependencies System.Object, UnityEngine.FrameTiming
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.GpuTimeProvider
class CORDL_TYPE GpuTimeProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_GpuFrameTime)) float_t  GpuFrameTime;

/// @brief Field m_FrameTiming, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FrameTiming, put=__cordl_internal_set_m_FrameTiming)) ::ArrayW<::UnityEngine::FrameTiming>  m_FrameTiming;

/// @brief Method GetLatestTimings, addr 0x182220ee0, size 0x20, virtual true, abstract: false, final false
inline uint32_t GetLatestTimings() ;

/// @brief Method Measure, addr 0x182220f00, size 0x10, virtual false, abstract: false, final false
inline void Measure() ;

static inline ::UnityEngine::AdaptivePerformance::GpuTimeProvider* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::FrameTiming> const& __cordl_internal_get_m_FrameTiming() const;

constexpr ::ArrayW<::UnityEngine::FrameTiming>& __cordl_internal_get_m_FrameTiming() ;

constexpr void __cordl_internal_set_m_FrameTiming(::ArrayW<::UnityEngine::FrameTiming>  value) ;

/// @brief Method .ctor, addr 0x182220f10, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GpuFrameTime, addr 0x1822213c0, size 0x60, virtual false, abstract: false, final false
inline float_t get_GpuFrameTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GpuTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GpuTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GpuTimeProvider(GpuTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GpuTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GpuTimeProvider(GpuTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19390};

/// @brief Field m_FrameTiming, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::FrameTiming>  ___m_FrameTiming;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::GpuTimeProvider, ___m_FrameTiming) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::GpuTimeProvider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
