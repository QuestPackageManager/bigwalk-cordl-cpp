#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceLoader)
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceLoader;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceLoader");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
class CORDL_TYPE AdaptivePerformanceLoader : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Running)) bool  Running;

/// @brief Method Deinitialize, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool Deinitialize() ;

/// @brief Method GetDefaultSubsystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::ISubsystem* GetDefaultSubsystem() ;

/// @brief Method GetLoadedSubsystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T GetLoadedSubsystem() ;

/// @brief Method GetSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> GetSettings() ;

/// @brief Method Initialize, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool Initialize() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader* New_ctor() ;

/// @brief Method Start, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool Start() ;

/// @brief Method Stop, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool Stop() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Running, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Running() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceLoader(AdaptivePerformanceLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceLoader(AdaptivePerformanceLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
