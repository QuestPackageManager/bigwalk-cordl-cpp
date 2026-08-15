#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/KeyImageInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyImageInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct KeyImageInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::KeyImageInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::KeyImageInfo, "Epic.OnlineServices.Ecom", "KeyImageInfo");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.KeyImageInfo
struct CORDL_TYPE KeyImageInfo {
public:
// Declarations
 __declspec(property(get=get_Height, put=set_Height)) uint32_t  Height;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::Utf8String*  Type;

 __declspec(property(get=get_Url, put=set_Url)) ::Epic::OnlineServices::Utf8String*  Url;

 __declspec(property(get=get_Width, put=set_Width)) uint32_t  Width;

/// @brief Method get_Height, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Height() ;

/// @brief Method get_Type, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Type() ;

/// @brief Method get_Url, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Url() ;

/// @brief Method get_Width, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Width() ;

/// @brief Method set_Height, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_Height(uint32_t  value) ;

/// @brief Method set_Type, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Url, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Url(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Width, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Width(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyImageInfo() ;

// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Url_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Width_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Height_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KeyImageInfo(::Epic::OnlineServices::Utf8String*  _Type_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Url_k__BackingField, uint32_t  _Width_k__BackingField, uint32_t  _Height_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Type>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Type_k__BackingField;

/// @brief Field <Url>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Url_k__BackingField;

/// @brief Field <Width>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _Width_k__BackingField;

/// @brief Field <Height>k__BackingField, offset: 0x14, size: 0x4, def value: None
 uint32_t  _Height_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfo, _Type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfo, _Url_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfo, _Width_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfo, _Height_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::KeyImageInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
