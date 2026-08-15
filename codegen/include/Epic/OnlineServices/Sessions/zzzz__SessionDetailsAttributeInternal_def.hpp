#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsAttributeInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsAttributeInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsAttribute;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsAttributeInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal, "Epic.OnlineServices.Sessions", "SessionDetailsAttributeInternal");
// Dependencies Epic.OnlineServices.Sessions.SessionAttributeAdvertisementType, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsAttributeInternal
struct CORDL_TYPE SessionDetailsAttributeInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>*() ;

/// @brief Method Get, addr 0x1804f1ec0, size 0x1c0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsAttribute_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsAttributeInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AdvertisementType", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: None }]
constexpr SessionDetailsAttributeInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Data, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Data;

/// @brief Field m_AdvertisementType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  m_AdvertisementType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal, m_Data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal, m_AdvertisementType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsAttributeInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
