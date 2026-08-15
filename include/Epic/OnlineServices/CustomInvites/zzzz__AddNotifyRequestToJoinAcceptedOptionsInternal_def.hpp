#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/AddNotifyRequestToJoinAcceptedOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyRequestToJoinAcceptedOptionsInternal)
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinAcceptedOptions;
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
struct AddNotifyRequestToJoinAcceptedOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptionsInternal, "Epic.OnlineServices.CustomInvites", "AddNotifyRequestToJoinAcceptedOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.AddNotifyRequestToJoinAcceptedOptionsInternal
struct CORDL_TYPE AddNotifyRequestToJoinAcceptedOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__AddNotifyRequestToJoinAcceptedOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyRequestToJoinAcceptedOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddNotifyRequestToJoinAcceptedOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
