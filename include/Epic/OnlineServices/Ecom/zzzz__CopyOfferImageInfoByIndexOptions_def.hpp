#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyOfferImageInfoByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyOfferImageInfoByIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyOfferImageInfoByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions, "Epic.OnlineServices.Ecom", "CopyOfferImageInfoByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyOfferImageInfoByIndexOptions
struct CORDL_TYPE CopyOfferImageInfoByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_ImageInfoIndex, put=set_ImageInfoIndex)) uint32_t  ImageInfoIndex;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_OfferId, put=set_OfferId)) ::Epic::OnlineServices::Utf8String*  OfferId;

/// @brief Method get_ImageInfoIndex, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ImageInfoIndex() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_OfferId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OfferId() ;

/// @brief Method set_ImageInfoIndex, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ImageInfoIndex(uint32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_OfferId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_OfferId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyOfferImageInfoByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_OfferId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ImageInfoIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyOfferImageInfoByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OfferId_k__BackingField, uint32_t  _ImageInfoIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <OfferId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OfferId_k__BackingField;

/// @brief Field <ImageInfoIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _ImageInfoIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions, _OfferId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions, _ImageInfoIndex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
