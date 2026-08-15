#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopyActiveSessionHandleOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyActiveSessionHandleOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct CopyActiveSessionHandleOptions;
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
struct CopyActiveSessionHandleOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal, "Epic.OnlineServices.Sessions", "CopyActiveSessionHandleOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CopyActiveSessionHandleOptionsInternal
struct CORDL_TYPE CopyActiveSessionHandleOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7300, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7340, size 0x100, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CopyActiveSessionHandleOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyActiveSessionHandleOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyActiveSessionHandleOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7691};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
