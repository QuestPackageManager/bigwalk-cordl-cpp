#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/ParticipantMetadataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticipantMetadataInternal)
namespace Epic::OnlineServices::RTC {
struct ParticipantMetadata;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct ParticipantMetadataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::ParticipantMetadataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::ParticipantMetadataInternal, "Epic.OnlineServices.RTC", "ParticipantMetadataInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.ParticipantMetadataInternal
struct CORDL_TYPE ParticipantMetadataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>*() ;

/// @brief Method Get, addr 0x1804f6fa0, size 0x80, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTC::ParticipantMetadata>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantMetadata>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__ParticipantMetadata_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticipantMetadataInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ParticipantMetadataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Key;

/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantMetadataInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantMetadataInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantMetadataInternal, m_Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::ParticipantMetadataInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
