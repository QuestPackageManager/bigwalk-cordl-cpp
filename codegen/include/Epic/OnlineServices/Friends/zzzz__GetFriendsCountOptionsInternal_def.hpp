#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/GetFriendsCountOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetFriendsCountOptionsInternal)
namespace Epic::OnlineServices::Friends {
struct GetFriendsCountOptions;
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
struct GetFriendsCountOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal, "Epic.OnlineServices.Friends", "GetFriendsCountOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.GetFriendsCountOptionsInternal
struct CORDL_TYPE GetFriendsCountOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::GetFriendsCountOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::GetFriendsCountOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7b40, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::GetFriendsCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Friends::GetFriendsCountOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Friends__GetFriendsCountOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetFriendsCountOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr GetFriendsCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
