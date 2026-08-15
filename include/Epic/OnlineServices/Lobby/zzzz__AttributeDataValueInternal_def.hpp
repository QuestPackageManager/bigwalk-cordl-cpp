#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeDataValueInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeDataValueInternal)
namespace Epic::OnlineServices::Lobby {
struct AttributeDataValue;
}
namespace Epic::OnlineServices {
struct AttributeType;
}
namespace Epic::OnlineServices {
template<typename T,typename TEnum>
class IGettable_2;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AttributeDataValueInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AttributeDataValueInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AttributeDataValueInternal, "Epic.OnlineServices.Lobby", "AttributeDataValueInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AttributeDataValueInternal
struct CORDL_TYPE AttributeDataValueInternal {
public:
// Declarations
/// @brief Field m_AsBool, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AsBool, put=__cordl_internal_set_m_AsBool)) int32_t  m_AsBool;

/// @brief Field m_AsDouble, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsDouble, put=__cordl_internal_set_m_AsDouble)) double_t  m_AsDouble;

/// @brief Field m_AsInt64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsInt64, put=__cordl_internal_set_m_AsInt64)) int64_t  m_AsInt64;

/// @brief Field m_AsUtf8, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsUtf8, put=__cordl_internal_set_m_AsUtf8)) ::System::IntPtr  m_AsUtf8;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>"
constexpr operator  ::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804ff400, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x180503fa0, size 0x120, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>  other, ::Epic::OnlineServices::AttributeType  enumValue, ::System::Nullable_1<int32_t>  arrayLength) ;

/// @brief Method Set, addr 0x1805040c0, size 0x100, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>  other) ;

constexpr int32_t const& __cordl_internal_get_m_AsBool() const;

constexpr int32_t& __cordl_internal_get_m_AsBool() ;

constexpr double_t const& __cordl_internal_get_m_AsDouble() const;

constexpr double_t& __cordl_internal_get_m_AsDouble() ;

constexpr int64_t const& __cordl_internal_get_m_AsInt64() const;

constexpr int64_t& __cordl_internal_get_m_AsInt64() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_AsUtf8() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_AsUtf8() ;

constexpr void __cordl_internal_set_m_AsBool(int32_t  value) ;

constexpr void __cordl_internal_set_m_AsDouble(double_t  value) ;

constexpr void __cordl_internal_set_m_AsInt64(int64_t  value) ;

constexpr void __cordl_internal_set_m_AsUtf8(::System::IntPtr  value) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>"
constexpr ::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>* i___Epic__OnlineServices__IGettable_2___Epic__OnlineServices__Lobby__AttributeDataValue___Epic__OnlineServices__AttributeType_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AttributeDataValue_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AttributeDataValueInternal() ;

// Ctor Parameters [CppParam { name: "m_AsInt64", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_AsDouble", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_AsBool", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AsUtf8", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AttributeDataValueInternal(int64_t  m_AsInt64, double_t  m_AsDouble, int32_t  m_AsBool, ::System::IntPtr  m_AsUtf8) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsInt64_padding[0x0];
/// @brief Field m_AsInt64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_AsInt64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsInt64_padding_forAlignment[0x0];
/// @brief Field m_AsInt64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_AsInt64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsDouble_padding[0x0];
/// @brief Field m_AsDouble, offset: 0x0, size: 0x8, def value: None
 double_t  ___m_AsDouble;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsDouble_padding_forAlignment[0x0];
/// @brief Field m_AsDouble, offset: 0x0, size: 0x8, def value: None
 double_t  ___m_AsDouble_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsBool_padding[0x0];
/// @brief Field m_AsBool, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_AsBool;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsBool_padding_forAlignment[0x0];
/// @brief Field m_AsBool, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_AsBool_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsUtf8_padding[0x0];
/// @brief Field m_AsUtf8, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_AsUtf8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsUtf8_padding_forAlignment[0x0];
/// @brief Field m_AsUtf8, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_AsUtf8_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::AttributeDataValueInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
