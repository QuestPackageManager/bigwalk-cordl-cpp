#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationAddAttributeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionModificationAddAttributeOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionModificationAddAttributeOptions;
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
struct SessionModificationAddAttributeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal, "Epic.OnlineServices.Sessions", "SessionModificationAddAttributeOptionsInternal");
// Dependencies Epic.OnlineServices.Sessions.SessionAttributeAdvertisementType, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationAddAttributeOptionsInternal
struct CORDL_TYPE SessionModificationAddAttributeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f2860, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationAddAttributeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationAddAttributeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionAttribute", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AdvertisementType", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: None }]
constexpr SessionModificationAddAttributeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionAttribute, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionAttribute, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionAttribute;

/// @brief Field m_AdvertisementType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal, m_SessionAttribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal, m_AdvertisementType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
