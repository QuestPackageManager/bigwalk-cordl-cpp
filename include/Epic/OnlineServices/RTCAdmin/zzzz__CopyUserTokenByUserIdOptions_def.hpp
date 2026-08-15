#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/CopyUserTokenByUserIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyUserTokenByUserIdOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByUserIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions, "Epic.OnlineServices.RTCAdmin", "CopyUserTokenByUserIdOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.CopyUserTokenByUserIdOptions
struct CORDL_TYPE CopyUserTokenByUserIdOptions {
public:
// Declarations
 __declspec(property(get=get_QueryId, put=set_QueryId)) uint32_t  QueryId;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_QueryId, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_QueryId() ;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_QueryId, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_QueryId(uint32_t  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyUserTokenByUserIdOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_QueryId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyUserTokenByUserIdOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _QueryId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <QueryId>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _QueryId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions, _QueryId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
