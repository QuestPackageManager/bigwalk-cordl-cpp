#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbes)
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LightProbes;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightProbes*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbes*, "UnityEngine", "LightProbes");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightProbes
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field lightProbesUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightProbesUpdated, put=setStaticF_lightProbesUpdated)) ::System::Action*  lightProbesUpdated;

/// @brief Field needsRetetrahedralization, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_needsRetetrahedralization, put=setStaticF_needsRetetrahedralization)) ::System::Action*  needsRetetrahedralization;

/// @brief Field tetrahedralizationCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tetrahedralizationCompleted, put=setStaticF_tetrahedralizationCompleted)) ::System::Action*  tetrahedralizationCompleted;

/// @brief Method GetCount, addr 0x182251030, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetCount() ;

/// @brief Method GetInterpolatedProbe, addr 0x182251050, size 0x30, virtual false, abstract: false, final false
static inline void GetInterpolatedProbe(::UnityEngine::Vector3  position, ::UnityEngine::Renderer*  renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  probe) ;

/// @brief Method GetInterpolatedProbe_Injected, addr 0x182251040, size 0x10, virtual false, abstract: false, final false
static inline void GetInterpolatedProbe_Injected(::by_ref<::UnityEngine::Vector3>  position, ::System::IntPtr  renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  probe) ;

/// @brief Method Internal_CallLightProbesUpdatedFunction, addr 0x182251080, size 0x30, virtual false, abstract: false, final false
static inline void Internal_CallLightProbesUpdatedFunction() ;

/// @brief Method Internal_CallNeedsRetetrahedralizationFunction, addr 0x1822510b0, size 0x30, virtual false, abstract: false, final false
static inline void Internal_CallNeedsRetetrahedralizationFunction() ;

/// @brief Method Internal_CallTetrahedralizationCompletedFunction, addr 0x1822510e0, size 0x30, virtual false, abstract: false, final false
static inline void Internal_CallTetrahedralizationCompletedFunction() ;

/// @brief Method add_lightProbesUpdated, addr 0x182251110, size 0x90, virtual false, abstract: false, final false
static inline void add_lightProbesUpdated(::System::Action*  value) ;

static inline ::System::Action* getStaticF_lightProbesUpdated() ;

static inline ::System::Action* getStaticF_needsRetetrahedralization() ;

static inline ::System::Action* getStaticF_tetrahedralizationCompleted() ;

/// @brief Method remove_lightProbesUpdated, addr 0x1822511a0, size 0x90, virtual false, abstract: false, final false
static inline void remove_lightProbesUpdated(::System::Action*  value) ;

static inline void setStaticF_lightProbesUpdated(::System::Action*  value) ;

static inline void setStaticF_needsRetetrahedralization(::System::Action*  value) ;

static inline void setStaticF_tetrahedralizationCompleted(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightProbes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightProbes(LightProbes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightProbes(LightProbes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightProbes) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
