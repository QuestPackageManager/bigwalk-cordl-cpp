#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/DeletePersistentAuthOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeletePersistentAuthOptionsInternal)
namespace Epic::OnlineServices::Auth {
struct DeletePersistentAuthOptions;
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
struct DeletePersistentAuthOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal, "Epic.OnlineServices.Auth", "DeletePersistentAuthOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.DeletePersistentAuthOptionsInternal
struct CORDL_TYPE DeletePersistentAuthOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524540, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__DeletePersistentAuthOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeletePersistentAuthOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RefreshToken", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DeletePersistentAuthOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_RefreshToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9239};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_RefreshToken, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_RefreshToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal, m_RefreshToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
