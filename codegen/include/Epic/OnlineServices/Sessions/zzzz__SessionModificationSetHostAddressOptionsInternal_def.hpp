#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetHostAddressOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionModificationSetHostAddressOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetHostAddressOptions;
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
struct SessionModificationSetHostAddressOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal, "Epic.OnlineServices.Sessions", "SessionModificationSetHostAddressOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetHostAddressOptionsInternal
struct CORDL_TYPE SessionModificationSetHostAddressOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f0f90, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationSetHostAddressOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetHostAddressOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HostAddress", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SessionModificationSetHostAddressOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_HostAddress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_HostAddress, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_HostAddress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal, m_HostAddress) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
