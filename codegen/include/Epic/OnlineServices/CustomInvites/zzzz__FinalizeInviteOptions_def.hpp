#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/FinalizeInviteOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FinalizeInviteOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct FinalizeInviteOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions, "Epic.OnlineServices.CustomInvites", "FinalizeInviteOptions");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.FinalizeInviteOptions
struct CORDL_TYPE FinalizeInviteOptions {
public:
// Declarations
 __declspec(property(get=get_CustomInviteId, put=set_CustomInviteId)) ::Epic::OnlineServices::Utf8String*  CustomInviteId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ProcessingResult, put=set_ProcessingResult)) ::Epic::OnlineServices::Result  ProcessingResult;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_CustomInviteId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CustomInviteId() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ProcessingResult, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ProcessingResult() ;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_CustomInviteId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_CustomInviteId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ProcessingResult, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_ProcessingResult(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FinalizeInviteOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_CustomInviteId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ProcessingResult_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }]
constexpr FinalizeInviteOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CustomInviteId_k__BackingField, ::Epic::OnlineServices::Result  _ProcessingResult_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <CustomInviteId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CustomInviteId_k__BackingField;

/// @brief Field <ProcessingResult>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ProcessingResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions, _CustomInviteId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions, _ProcessingResult_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
