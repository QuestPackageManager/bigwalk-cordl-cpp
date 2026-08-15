#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/AddNotifyRequestToJoinReceivedOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyRequestToJoinReceivedOptionsInternal)
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinReceivedOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinReceivedOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptionsInternal, "Epic.OnlineServices.CustomInvites", "AddNotifyRequestToJoinReceivedOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.AddNotifyRequestToJoinReceivedOptionsInternal
struct CORDL_TYPE AddNotifyRequestToJoinReceivedOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__AddNotifyRequestToJoinReceivedOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyRequestToJoinReceivedOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddNotifyRequestToJoinReceivedOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9030};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
