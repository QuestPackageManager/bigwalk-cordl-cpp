#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyProductUserExternalAccountByIndexOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByIndexOptions;
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
struct CopyProductUserExternalAccountByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal, "Epic.OnlineServices.Connect", "CopyProductUserExternalAccountByIndexOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CopyProductUserExternalAccountByIndexOptionsInternal
struct CORDL_TYPE CopyProductUserExternalAccountByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e72b0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CopyProductUserExternalAccountByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyProductUserExternalAccountByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountInfoIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyProductUserExternalAccountByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, uint32_t  m_ExternalAccountInfoIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_ExternalAccountInfoIndex, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_ExternalAccountInfoIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal, m_ExternalAccountInfoIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
