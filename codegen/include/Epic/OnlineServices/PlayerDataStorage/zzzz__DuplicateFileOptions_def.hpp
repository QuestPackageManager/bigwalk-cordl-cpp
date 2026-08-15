#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/DuplicateFileOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DuplicateFileOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct DuplicateFileOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions, "Epic.OnlineServices.PlayerDataStorage", "DuplicateFileOptions");
// Dependencies 
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.DuplicateFileOptions
struct CORDL_TYPE DuplicateFileOptions {
public:
// Declarations
 __declspec(property(get=get_DestinationFilename, put=set_DestinationFilename)) ::Epic::OnlineServices::Utf8String*  DestinationFilename;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_SourceFilename, put=set_SourceFilename)) ::Epic::OnlineServices::Utf8String*  SourceFilename;

/// @brief Method get_DestinationFilename, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DestinationFilename() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_SourceFilename, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SourceFilename() ;

/// @brief Method set_DestinationFilename, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_DestinationFilename(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SourceFilename, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_SourceFilename(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DuplicateFileOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_SourceFilename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DestinationFilename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr DuplicateFileOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SourceFilename_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DestinationFilename_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <SourceFilename>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SourceFilename_k__BackingField;

/// @brief Field <DestinationFilename>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DestinationFilename_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions, _SourceFilename_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions, _DestinationFilename_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
