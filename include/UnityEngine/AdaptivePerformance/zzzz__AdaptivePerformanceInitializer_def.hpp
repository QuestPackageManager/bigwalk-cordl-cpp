#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceInitializer)
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSpawner;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceInitializer;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceInitializer");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceInitializer
class CORDL_TYPE AdaptivePerformanceInitializer : public ::System::Object {
public:
// Declarations
/// @brief Field s_Spawner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Spawner, put=setStaticF_s_Spawner)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>  s_Spawner;

/// @brief Method AutoInitializeAdaptivePerformanceManaged, addr 0x182218780, size 0xc0, virtual false, abstract: false, final false
static inline void AutoInitializeAdaptivePerformanceManaged() ;

/// @brief Method InitializeSpawner, addr 0x182218840, size 0xd0, virtual false, abstract: false, final false
static inline void InitializeSpawner(bool  isAuto) ;

static inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner> getStaticF_s_Spawner() ;

static inline void setStaticF_s_Spawner(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceInitializer(AdaptivePerformanceInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceInitializer(AdaptivePerformanceInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceInitializer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
