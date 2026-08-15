#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/Stat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stat)
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct Stat;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::Stat);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::Stat, "Epic.OnlineServices.Stats", "Stat");
// Dependencies System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.Stat
struct CORDL_TYPE Stat {
public:
// Declarations
 __declspec(property(get=get_EndTime, put=set_EndTime)) ::System::Nullable_1<::System::DateTimeOffset>  EndTime;

 __declspec(property(get=get_Name, put=set_Name)) ::Epic::OnlineServices::Utf8String*  Name;

 __declspec(property(get=get_StartTime, put=set_StartTime)) ::System::Nullable_1<::System::DateTimeOffset>  StartTime;

 __declspec(property(get=get_Value, put=set_Value)) int32_t  Value;

/// @brief Method get_EndTime, addr 0x1804bda70, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_EndTime() ;

/// @brief Method get_Name, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Name() ;

/// @brief Method get_StartTime, addr 0x1804bda90, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_StartTime() ;

/// @brief Method get_Value, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Method set_EndTime, addr 0x1804bdab0, size 0x20, virtual false, abstract: false, final false
inline void set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_Name, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_StartTime, addr 0x1804bdad0, size 0x20, virtual false, abstract: false, final false
inline void set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_Value, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_Value(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Stat() ;

// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Stat(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, int32_t  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField;

/// @brief Field <StartTime>k__BackingField, offset: 0x8, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField;

/// @brief Field <EndTime>k__BackingField, offset: 0x20, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::Stat, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::Stat, _StartTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::Stat, _EndTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::Stat, _Value_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::Stat) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
