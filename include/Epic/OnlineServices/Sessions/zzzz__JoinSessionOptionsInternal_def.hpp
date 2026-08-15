#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/JoinSessionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinSessionOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct JoinSessionOptions;
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
struct JoinSessionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, "Epic.OnlineServices.Sessions", "JoinSessionOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.JoinSessionOptionsInternal
struct CORDL_TYPE JoinSessionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::JoinSessionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::JoinSessionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7640, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804dc240, size 0x1b0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::JoinSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::JoinSessionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__JoinSessionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinSessionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SessionHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JoinSessionOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_SessionHandle, ::System::IntPtr  m_LocalUserId, int32_t  m_PresenceEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

/// @brief Field m_SessionHandle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_SessionHandle;

/// @brief Field m_LocalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PresenceEnabled, offset: 0x20, size: 0x4, def value: None
 int32_t  m_PresenceEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, m_SessionHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, m_LocalUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal, m_PresenceEnabled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
