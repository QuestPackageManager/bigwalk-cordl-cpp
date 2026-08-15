#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ClientCredentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ClientCredentials)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct ClientCredentials;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::ClientCredentials);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::ClientCredentials, "Epic.OnlineServices.Platform", "ClientCredentials");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.ClientCredentials
struct CORDL_TYPE ClientCredentials {
public:
// Declarations
 __declspec(property(get=get_ClientId, put=set_ClientId)) ::Epic::OnlineServices::Utf8String*  ClientId;

 __declspec(property(get=get_ClientSecret, put=set_ClientSecret)) ::Epic::OnlineServices::Utf8String*  ClientSecret;

/// @brief Method get_ClientId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientId() ;

/// @brief Method get_ClientSecret, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientSecret() ;

/// @brief Method set_ClientId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientSecret, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientSecret(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ClientCredentials() ;

// Ctor Parameters [CppParam { name: "_ClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientSecret_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr ClientCredentials(::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientSecret_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ClientId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField;

/// @brief Field <ClientSecret>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientSecret_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::ClientCredentials, _ClientId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::ClientCredentials, _ClientSecret_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::ClientCredentials) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
