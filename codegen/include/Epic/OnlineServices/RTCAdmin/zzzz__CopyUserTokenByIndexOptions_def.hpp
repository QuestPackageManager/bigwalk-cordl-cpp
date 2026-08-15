#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/CopyUserTokenByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyUserTokenByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions, "Epic.OnlineServices.RTCAdmin", "CopyUserTokenByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.CopyUserTokenByIndexOptions
struct CORDL_TYPE CopyUserTokenByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_QueryId, put=set_QueryId)) uint32_t  QueryId;

 __declspec(property(get=get_UserTokenIndex, put=set_UserTokenIndex)) uint32_t  UserTokenIndex;

/// @brief Method get_QueryId, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_QueryId() ;

/// @brief Method get_UserTokenIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_UserTokenIndex() ;

/// @brief Method set_QueryId, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_QueryId(uint32_t  value) ;

/// @brief Method set_UserTokenIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_UserTokenIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyUserTokenByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_UserTokenIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_QueryId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyUserTokenByIndexOptions(uint32_t  _UserTokenIndex_k__BackingField, uint32_t  _QueryId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <UserTokenIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _UserTokenIndex_k__BackingField;

/// @brief Field <QueryId>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _QueryId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions, _UserTokenIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions, _QueryId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
