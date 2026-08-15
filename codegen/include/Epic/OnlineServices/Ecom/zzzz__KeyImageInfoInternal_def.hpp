#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/KeyImageInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyImageInfoInternal)
namespace Epic::OnlineServices::Ecom {
struct KeyImageInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct KeyImageInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::KeyImageInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, "Epic.OnlineServices.Ecom", "KeyImageInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.KeyImageInfoInternal
struct CORDL_TYPE KeyImageInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>*() ;

/// @brief Method Get, addr 0x180518820, size 0xc0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::KeyImageInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__KeyImageInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyImageInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Url", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KeyImageInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Type, ::System::IntPtr  m_Url, uint32_t  m_Width, uint32_t  m_Height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Type, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Type;

/// @brief Field m_Url, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Url;

/// @brief Field m_Width, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_Width;

/// @brief Field m_Height, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_Height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, m_Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, m_Url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, m_Width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal, m_Height) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::KeyImageInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
