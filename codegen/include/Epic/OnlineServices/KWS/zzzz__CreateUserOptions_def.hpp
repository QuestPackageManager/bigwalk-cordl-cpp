#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/CreateUserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CreateUserOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct CreateUserOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::CreateUserOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::CreateUserOptions, "Epic.OnlineServices.KWS", "CreateUserOptions");
// Dependencies 
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.CreateUserOptions
struct CORDL_TYPE CreateUserOptions {
public:
// Declarations
 __declspec(property(get=get_DateOfBirth, put=set_DateOfBirth)) ::Epic::OnlineServices::Utf8String*  DateOfBirth;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParentEmail, put=set_ParentEmail)) ::Epic::OnlineServices::Utf8String*  ParentEmail;

/// @brief Method get_DateOfBirth, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DateOfBirth() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParentEmail, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ParentEmail() ;

/// @brief Method set_DateOfBirth, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DateOfBirth(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParentEmail, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ParentEmail(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateUserOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_DateOfBirth_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParentEmail_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CreateUserOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DateOfBirth_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ParentEmail_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <DateOfBirth>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DateOfBirth_k__BackingField;

/// @brief Field <ParentEmail>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ParentEmail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptions, _DateOfBirth_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptions, _ParentEmail_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::CreateUserOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
