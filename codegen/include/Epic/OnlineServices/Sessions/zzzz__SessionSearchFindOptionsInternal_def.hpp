#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchFindOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearchFindOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionSearchFindOptions;
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
struct SessionSearchFindOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal, "Epic.OnlineServices.Sessions", "SessionSearchFindOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchFindOptionsInternal
struct CORDL_TYPE SessionSearchFindOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f2e90, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionSearchFindOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchFindOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SessionSearchFindOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
