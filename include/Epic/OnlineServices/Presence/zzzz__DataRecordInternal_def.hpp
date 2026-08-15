#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/DataRecordInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataRecordInternal)
namespace Epic::OnlineServices::Presence {
struct DataRecord;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct DataRecordInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::DataRecordInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::DataRecordInternal, "Epic.OnlineServices.Presence", "DataRecordInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.DataRecordInternal
struct CORDL_TYPE DataRecordInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x1804f6fa0, size 0x80, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Presence::DataRecord>  other) ;

/// @brief Method Set, addr 0x1804f7020, size 0x2c0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::DataRecord>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__DataRecord_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__DataRecord_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataRecordInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DataRecordInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8212};

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
static_assert(offsetof(::Epic::OnlineServices::Presence::DataRecordInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::DataRecordInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::DataRecordInternal, m_Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::DataRecordInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
