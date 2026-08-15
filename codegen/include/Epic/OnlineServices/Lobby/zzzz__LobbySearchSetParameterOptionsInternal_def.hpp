#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchSetParameterOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbySearchSetParameterOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetParameterOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetParameterOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal, "Epic.OnlineServices.Lobby", "LobbySearchSetParameterOptionsInternal");
// Dependencies Epic.OnlineServices.ComparisonOp, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbySearchSetParameterOptionsInternal
struct CORDL_TYPE LobbySearchSetParameterOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18050b600, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbySearchSetParameterOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchSetParameterOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Parameter", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ComparisonOp", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: None }]
constexpr LobbySearchSetParameterOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Parameter, ::Epic::OnlineServices::ComparisonOp  m_ComparisonOp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Parameter, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Parameter;

/// @brief Field m_ComparisonOp, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ComparisonOp  m_ComparisonOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal, m_Parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal, m_ComparisonOp) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
