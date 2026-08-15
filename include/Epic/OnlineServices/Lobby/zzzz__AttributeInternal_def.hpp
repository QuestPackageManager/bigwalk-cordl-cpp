#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeInternal)
namespace Epic::OnlineServices::Lobby {
struct Attribute;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AttributeInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AttributeInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AttributeInternal, "Epic.OnlineServices.Lobby", "AttributeInternal");
// Dependencies Epic.OnlineServices.Lobby.LobbyAttributeVisibility, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AttributeInternal
struct CORDL_TYPE AttributeInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>*() ;

/// @brief Method Get, addr 0x1805041c0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::Attribute>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::Attribute>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__Attribute_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AttributeInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Visibility", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: None }]
constexpr AttributeInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Data, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  m_Visibility) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Data;

/// @brief Field m_Visibility, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  m_Visibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeInternal, m_Data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeInternal, m_Visibility) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::AttributeInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
