#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AddExternalIntegrityCatalogOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddExternalIntegrityCatalogOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct AddExternalIntegrityCatalogOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions, "Epic.OnlineServices.AntiCheatClient", "AddExternalIntegrityCatalogOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.AddExternalIntegrityCatalogOptions
struct CORDL_TYPE AddExternalIntegrityCatalogOptions {
public:
// Declarations
 __declspec(property(get=get_PathToBinFile, put=set_PathToBinFile)) ::Epic::OnlineServices::Utf8String*  PathToBinFile;

/// @brief Method get_PathToBinFile, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_PathToBinFile() ;

/// @brief Method set_PathToBinFile, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_PathToBinFile(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddExternalIntegrityCatalogOptions() ;

// Ctor Parameters [CppParam { name: "_PathToBinFile_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr AddExternalIntegrityCatalogOptions(::Epic::OnlineServices::Utf8String*  _PathToBinFile_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <PathToBinFile>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _PathToBinFile_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions, _PathToBinFile_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
