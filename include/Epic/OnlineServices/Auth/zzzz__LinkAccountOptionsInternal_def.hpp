#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkAccountOptionsInternal)
namespace Epic::OnlineServices::Auth {
struct LinkAccountOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LinkAccountOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal, "Epic.OnlineServices.Auth", "LinkAccountOptionsInternal");
// Dependencies Epic.OnlineServices.Auth.LinkAccountFlags, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LinkAccountOptionsInternal
struct CORDL_TYPE LinkAccountOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LinkAccountOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LinkAccountOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524a50, size 0xd0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LinkAccountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LinkAccountOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__LinkAccountOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LinkAccountOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LinkAccountFlags", ty: "::Epic::OnlineServices::Auth::LinkAccountFlags", modifiers: "", def_value: None }, CppParam { name: "m_ContinuanceToken", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LinkAccountOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Auth::LinkAccountFlags  m_LinkAccountFlags, ::System::IntPtr  m_ContinuanceToken, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LinkAccountFlags, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::LinkAccountFlags  m_LinkAccountFlags;

/// @brief Field m_ContinuanceToken, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ContinuanceToken;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal, m_LinkAccountFlags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal, m_ContinuanceToken) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LinkAccountOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
