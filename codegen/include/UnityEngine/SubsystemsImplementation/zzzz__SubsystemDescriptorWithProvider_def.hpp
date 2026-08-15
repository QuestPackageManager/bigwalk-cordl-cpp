#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorWithProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SubsystemDescriptorWithProvider)
namespace System {
class Type;
}
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorWithProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorWithProvider");
// Dependencies System.Object
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
class CORDL_TYPE SubsystemDescriptorWithProvider : public ::System::Object {
public:
// Declarations
/// @brief Field <id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) ::StringW  _id_k__BackingField;

/// @brief Field <providerType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__providerType_k__BackingField, put=__cordl_internal_set__providerType_k__BackingField)) ::System::Type*  _providerType_k__BackingField;

/// @brief Field <subsystemTypeOverride>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subsystemTypeOverride_k__BackingField, put=__cordl_internal_set__subsystemTypeOverride_k__BackingField)) ::System::Type*  _subsystemTypeOverride_k__BackingField;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_providerType, put=set_providerType)) ::System::Type*  providerType;

 __declspec(property(get=get_subsystemTypeOverride, put=set_subsystemTypeOverride)) ::System::Type*  subsystemTypeOverride;

/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr operator  ::UnityEngine::ISubsystemDescriptor*() noexcept;

static inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider* New_ctor() ;

/// @brief Method ThrowIfInvalid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ThrowIfInvalid() ;

constexpr ::StringW const& __cordl_internal_get__id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__id_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__providerType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__providerType_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__subsystemTypeOverride_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__subsystemTypeOverride_k__BackingField() ;

constexpr void __cordl_internal_set__id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__providerType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__subsystemTypeOverride_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_id, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_id() ;

/// @brief Method get_providerType, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_providerType() ;

/// @brief Method get_subsystemTypeOverride, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_subsystemTypeOverride() ;

/// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
constexpr ::UnityEngine::ISubsystemDescriptor* i___UnityEngine__ISubsystemDescriptor() noexcept;

/// @brief Method set_id, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_providerType, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_providerType(::System::Type*  value) ;

/// @brief Method set_subsystemTypeOverride, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_subsystemTypeOverride(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubsystemDescriptorWithProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21252};

/// @brief Field <id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id_k__BackingField;

/// @brief Field <providerType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____providerType_k__BackingField;

/// @brief Field <subsystemTypeOverride>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____subsystemTypeOverride_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, ____providerType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, ____subsystemTypeOverride_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::SubsystemsImplementation
