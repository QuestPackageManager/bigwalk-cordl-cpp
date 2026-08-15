#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/CpuTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CpuTimeProvider)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class CpuTimeProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::CpuTimeProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::CpuTimeProvider*, "UnityEngine.AdaptivePerformance", "CpuTimeProvider");
// Dependencies System.Object, UnityEngine.FrameTiming
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.CpuTimeProvider
class CORDL_TYPE CpuTimeProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CpuFrameTime)) float_t  CpuFrameTime;

/// @brief Field m_FrameTimings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FrameTimings, put=__cordl_internal_set_m_FrameTimings)) ::ArrayW<::UnityEngine::FrameTiming>  m_FrameTimings;

/// @brief Method GetLatestTimings, addr 0x182220ee0, size 0x20, virtual true, abstract: false, final false
inline uint32_t GetLatestTimings() ;

/// @brief Method Measure, addr 0x182220f00, size 0x10, virtual false, abstract: false, final false
inline void Measure() ;

static inline ::UnityEngine::AdaptivePerformance::CpuTimeProvider* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::FrameTiming> const& __cordl_internal_get_m_FrameTimings() const;

constexpr ::ArrayW<::UnityEngine::FrameTiming>& __cordl_internal_get_m_FrameTimings() ;

constexpr void __cordl_internal_set_m_FrameTimings(::ArrayW<::UnityEngine::FrameTiming>  value) ;

/// @brief Method .ctor, addr 0x182220f10, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CpuFrameTime, addr 0x182220f40, size 0x110, virtual false, abstract: false, final false
inline float_t get_CpuFrameTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CpuTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CpuTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CpuTimeProvider(CpuTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CpuTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CpuTimeProvider(CpuTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19388};

/// @brief Field m_FrameTimings, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::FrameTiming>  ___m_FrameTimings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::CpuTimeProvider, ___m_FrameTimings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::CpuTimeProvider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
