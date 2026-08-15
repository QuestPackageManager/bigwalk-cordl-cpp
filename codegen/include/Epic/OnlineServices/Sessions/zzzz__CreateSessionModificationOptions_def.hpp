#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CreateSessionModificationOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateSessionModificationOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CreateSessionModificationOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, "Epic.OnlineServices.Sessions", "CreateSessionModificationOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CreateSessionModificationOptions
struct CORDL_TYPE CreateSessionModificationOptions {
public:
// Declarations
 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

 __declspec(property(get=get_BucketId, put=set_BucketId)) ::Epic::OnlineServices::Utf8String*  BucketId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_MaxPlayers, put=set_MaxPlayers)) uint32_t  MaxPlayers;

 __declspec(property(get=get_PresenceEnabled, put=set_PresenceEnabled)) bool  PresenceEnabled;

 __declspec(property(get=get_SanctionsEnabled, put=set_SanctionsEnabled)) bool  SanctionsEnabled;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::Epic::OnlineServices::Utf8String*  SessionId;

 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

/// @brief Method get_AllowedPlatformIds, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method get_BucketId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_BucketId() ;

/// @brief Method get_LocalUserId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_MaxPlayers, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxPlayers() ;

/// @brief Method get_PresenceEnabled, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_PresenceEnabled() ;

/// @brief Method get_SanctionsEnabled, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_SanctionsEnabled() ;

/// @brief Method get_SessionId, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionId() ;

/// @brief Method get_SessionName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Method set_AllowedPlatformIds, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

/// @brief Method set_BucketId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_BucketId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_MaxPlayers, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_MaxPlayers(uint32_t  value) ;

/// @brief Method set_PresenceEnabled, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceEnabled(bool  value) ;

/// @brief Method set_SanctionsEnabled, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_SanctionsEnabled(bool  value) ;

/// @brief Method set_SessionId, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_SessionId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SessionName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateSessionModificationOptions() ;

// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_MaxPlayers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_SessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SanctionsEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr CreateSessionModificationOptions(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, uint32_t  _MaxPlayers_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, bool  _PresenceEnabled_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField, bool  _SanctionsEnabled_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <SessionName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

/// @brief Field <BucketId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField;

/// @brief Field <MaxPlayers>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _MaxPlayers_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <PresenceEnabled>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  _PresenceEnabled_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField;

/// @brief Field <SanctionsEnabled>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  _SanctionsEnabled_k__BackingField;

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _SessionName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _BucketId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _MaxPlayers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _LocalUserId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _PresenceEnabled_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _SessionId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _SanctionsEnabled_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions, _AllowedPlatformIds_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
