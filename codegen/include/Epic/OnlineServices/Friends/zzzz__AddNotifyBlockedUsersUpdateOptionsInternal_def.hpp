#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/AddNotifyBlockedUsersUpdateOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyBlockedUsersUpdateOptionsInternal)
namespace Epic::OnlineServices::Friends {
struct AddNotifyBlockedUsersUpdateOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct AddNotifyBlockedUsersUpdateOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptionsInternal, "Epic.OnlineServices.Friends", "AddNotifyBlockedUsersUpdateOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.AddNotifyBlockedUsersUpdateOptionsInternal
struct CORDL_TYPE AddNotifyBlockedUsersUpdateOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Friends__AddNotifyBlockedUsersUpdateOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyBlockedUsersUpdateOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddNotifyBlockedUsersUpdateOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
