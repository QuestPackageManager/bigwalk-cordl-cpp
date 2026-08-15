#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyIdTokenOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyIdTokenOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct CopyIdTokenOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct CopyIdTokenOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal, "Epic.OnlineServices.Connect", "CopyIdTokenOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CopyIdTokenOptionsInternal
struct CORDL_TYPE CopyIdTokenOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyIdTokenOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyIdTokenOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7b40, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyIdTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyIdTokenOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CopyIdTokenOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyIdTokenOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyIdTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
