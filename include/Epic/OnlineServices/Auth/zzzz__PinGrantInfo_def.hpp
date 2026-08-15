#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/PinGrantInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PinGrantInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct PinGrantInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::PinGrantInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::PinGrantInfo, "Epic.OnlineServices.Auth", "PinGrantInfo");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.PinGrantInfo
struct CORDL_TYPE PinGrantInfo {
public:
// Declarations
 __declspec(property(get=get_ExpiresIn, put=set_ExpiresIn)) int32_t  ExpiresIn;

 __declspec(property(get=get_UserCode, put=set_UserCode)) ::Epic::OnlineServices::Utf8String*  UserCode;

 __declspec(property(get=get_VerificationURI, put=set_VerificationURI)) ::Epic::OnlineServices::Utf8String*  VerificationURI;

 __declspec(property(get=get_VerificationURIComplete, put=set_VerificationURIComplete)) ::Epic::OnlineServices::Utf8String*  VerificationURIComplete;

/// @brief Method get_ExpiresIn, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ExpiresIn() ;

/// @brief Method get_UserCode, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UserCode() ;

/// @brief Method get_VerificationURI, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_VerificationURI() ;

/// @brief Method get_VerificationURIComplete, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_VerificationURIComplete() ;

/// @brief Method set_ExpiresIn, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ExpiresIn(int32_t  value) ;

/// @brief Method set_UserCode, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserCode(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_VerificationURI, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_VerificationURI(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_VerificationURIComplete, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_VerificationURIComplete(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PinGrantInfo() ;

// Ctor Parameters [CppParam { name: "_UserCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_VerificationURI_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ExpiresIn_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_VerificationURIComplete_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PinGrantInfo(::Epic::OnlineServices::Utf8String*  _UserCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _VerificationURI_k__BackingField, int32_t  _ExpiresIn_k__BackingField, ::Epic::OnlineServices::Utf8String*  _VerificationURIComplete_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <UserCode>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UserCode_k__BackingField;

/// @brief Field <VerificationURI>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _VerificationURI_k__BackingField;

/// @brief Field <ExpiresIn>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _ExpiresIn_k__BackingField;

/// @brief Field <VerificationURIComplete>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _VerificationURIComplete_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfo, _UserCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfo, _VerificationURI_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfo, _ExpiresIn_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfo, _VerificationURIComplete_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::PinGrantInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
