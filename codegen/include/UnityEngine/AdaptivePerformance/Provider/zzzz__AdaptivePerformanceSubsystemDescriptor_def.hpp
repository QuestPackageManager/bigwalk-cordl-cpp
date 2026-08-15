#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystemDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AdaptivePerformanceSubsystemDescriptor)
namespace System {
class Type;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct AdaptivePerformanceSubsystemDescriptor_Cinfo;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystem_APProvider;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystem;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystemDescriptor;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct AdaptivePerformanceSubsystemDescriptor_Cinfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*);
MARK_VAL_T(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemDescriptor");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemDescriptor/Cinfo");
// Dependencies 
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor/Cinfo
struct CORDL_TYPE AdaptivePerformanceSubsystemDescriptor_Cinfo {
public:
// Declarations
 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_providerType, put=set_providerType)) ::System::Type*  providerType;

 __declspec(property(get=get_subsystemTypeOverride, put=set_subsystemTypeOverride)) ::System::Type*  subsystemTypeOverride;

/// @brief Method get_id, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_providerType, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_providerType() ;

/// @brief Method get_subsystemTypeOverride, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_subsystemTypeOverride() ;

/// @brief Method set_id, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_providerType, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_providerType(::System::Type*  value) ;

/// @brief Method set_subsystemTypeOverride, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_subsystemTypeOverride(::System::Type*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystemDescriptor_Cinfo() ;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_providerType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_subsystemTypeOverride_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_subsystemImplementationType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr AdaptivePerformanceSubsystemDescriptor_Cinfo(::StringW  _id_k__BackingField, ::System::Type*  _providerType_k__BackingField, ::System::Type*  _subsystemTypeOverride_k__BackingField, ::System::Type*  _subsystemImplementationType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <id>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _id_k__BackingField;

/// @brief Field <providerType>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  _providerType_k__BackingField;

/// @brief Field <subsystemTypeOverride>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  _subsystemTypeOverride_k__BackingField;

/// @brief Field <subsystemImplementationType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _subsystemImplementationType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo, _providerType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo, _subsystemTypeOverride_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo, _subsystemImplementationType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<TSubsystem, TProvider>
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
class CORDL_TYPE AdaptivePerformanceSubsystemDescriptor : public ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*,::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider*> {
public:
// Declarations
using Cinfo = ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo;

static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* New_ctor(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo  cinfo) ;

/// @brief Method RegisterDescriptor, addr 0x182223060, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor* RegisterDescriptor(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo  cinfo) ;

/// @brief Method .ctor, addr 0x182223190, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor_Cinfo  cinfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystemDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceSubsystemDescriptor(AdaptivePerformanceSubsystemDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceSubsystemDescriptor(AdaptivePerformanceSubsystemDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
