#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemWithProvider_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_def.hpp"
CORDL_MODULE_EXPORT(SubsystemWithProvider_3)
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
class SubsystemWithProvider_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3, "UnityEngine.SubsystemsImplementation", "SubsystemWithProvider`3");
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemWithProvider
namespace UnityEngine::SubsystemsImplementation {
// cpp template
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
// Is value type: false
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<TSubsystem,TSubsystemDescriptor,TProvider>
class CORDL_TYPE SubsystemWithProvider_3 : public ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider {
public:
// Declarations
/// @brief Field <provider>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__provider_k__BackingField, put=__cordl_internal_set__provider_k__BackingField)) TProvider  _provider_k__BackingField;

/// @brief Field <subsystemDescriptor>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subsystemDescriptor_k__BackingField, put=__cordl_internal_set__subsystemDescriptor_k__BackingField)) TSubsystemDescriptor  _subsystemDescriptor_k__BackingField;

 __declspec(property(get=get_provider)) TProvider  provider;

static inline ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnStop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStop() ;

constexpr TProvider const& __cordl_internal_get__provider_k__BackingField() const;

constexpr TProvider& __cordl_internal_get__provider_k__BackingField() ;

constexpr TSubsystemDescriptor const& __cordl_internal_get__subsystemDescriptor_k__BackingField() const;

constexpr TSubsystemDescriptor& __cordl_internal_get__subsystemDescriptor_k__BackingField() ;

constexpr void __cordl_internal_set__provider_k__BackingField(TProvider  value) ;

constexpr void __cordl_internal_set__subsystemDescriptor_k__BackingField(TSubsystemDescriptor  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_provider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TProvider get_provider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubsystemWithProvider_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemWithProvider_3(SubsystemWithProvider_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemWithProvider_3(SubsystemWithProvider_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21257};

/// @brief Field <subsystemDescriptor>k__BackingField, offset: 0x20, size: 0x8, def value: None
 TSubsystemDescriptor  ____subsystemDescriptor_k__BackingField;

/// @brief Field <provider>k__BackingField, offset: 0x28, size: 0x8, def value: None
 TProvider  ____provider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
