#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsMemberInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetailsMemberInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsMemberInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsMemberInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal, "Epic.OnlineServices.Lobby", "LobbyDetailsMemberInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsMemberInfoInternal
struct CORDL_TYPE LobbyDetailsMemberInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>*() ;

/// @brief Method Get, addr 0x1805066c0, size 0xb0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyDetailsMemberInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsMemberInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Platform", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowsCrossplay", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyDetailsMemberInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, uint32_t  m_Platform, int32_t  m_AllowsCrossplay) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_Platform, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_Platform;

/// @brief Field m_AllowsCrossplay, offset: 0x14, size: 0x4, def value: None
 int32_t  m_AllowsCrossplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal, m_Platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal, m_AllowsCrossplay) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
