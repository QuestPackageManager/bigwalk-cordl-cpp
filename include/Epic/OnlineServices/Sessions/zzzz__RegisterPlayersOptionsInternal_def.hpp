#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RegisterPlayersOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterPlayersOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal, "Epic.OnlineServices.Sessions", "RegisterPlayersOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.RegisterPlayersOptionsInternal
struct CORDL_TYPE RegisterPlayersOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f1130, size 0xe0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__RegisterPlayersOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlayersOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayersToRegister", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayersToRegisterCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RegisterPlayersOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_PlayersToRegister, uint32_t  m_PlayersToRegisterCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

/// @brief Field m_PlayersToRegister, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_PlayersToRegister;

/// @brief Field m_PlayersToRegisterCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_PlayersToRegisterCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal, m_PlayersToRegister) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal, m_PlayersToRegisterCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
