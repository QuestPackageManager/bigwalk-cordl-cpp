#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CreateUserOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateUserOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct CreateUserOptions;
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
struct CreateUserOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CreateUserOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CreateUserOptionsInternal, "Epic.OnlineServices.Connect", "CreateUserOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CreateUserOptionsInternal
struct CORDL_TYPE CreateUserOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7b40, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CreateUserOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateUserOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContinuanceToken", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CreateUserOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ContinuanceToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ContinuanceToken, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ContinuanceToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CreateUserOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CreateUserOptionsInternal, m_ContinuanceToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CreateUserOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
