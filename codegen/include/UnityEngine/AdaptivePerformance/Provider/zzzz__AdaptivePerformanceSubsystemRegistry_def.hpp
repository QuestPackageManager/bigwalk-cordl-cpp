#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystemRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceSubsystemRegistry)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct AdaptivePerformanceSubsystemDescriptor_Cinfo;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystemRegistry;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry*, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemRegistry");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemRegistry
class CORDL_TYPE AdaptivePerformanceSubsystemRegistry : public ::System::Object {
public:
// Declarations
/// @brief Method GetRegisteredDescriptors, addr 0x1822231e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*>* GetRegisteredDescriptors() ;

/// @brief Method RegisterDescriptor, addr 0x182223240, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* RegisterDescriptor(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo  cinfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystemRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceSubsystemRegistry(AdaptivePerformanceSubsystemRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceSubsystemRegistry(AdaptivePerformanceSubsystemRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemRegistry) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
