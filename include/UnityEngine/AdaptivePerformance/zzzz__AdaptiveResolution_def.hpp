#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveResolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveResolution)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveResolution;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveResolution*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveResolution*, "UnityEngine.AdaptivePerformance", "AdaptiveResolution");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveResolution
class CORDL_TYPE AdaptiveResolution : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field instanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_instanceCount, put=setStaticF_instanceCount)) int32_t  instanceCount;

/// @brief Method Awake, addr 0x182223400, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method IsDynamicResolutionSupported, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool IsDynamicResolutionSupported() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveResolution* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182223450, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisabled, addr 0x182223450, size 0xd0, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182223520, size 0x2e0, virtual true, abstract: false, final false
inline void OnLevel() ;

/// @brief Method OnValidate, addr 0x182223800, size 0x110, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x182223910, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_instanceCount() ;

static inline void setStaticF_instanceCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveResolution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveResolution", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveResolution(AdaptiveResolution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveResolution", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveResolution(AdaptiveResolution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveResolution) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
