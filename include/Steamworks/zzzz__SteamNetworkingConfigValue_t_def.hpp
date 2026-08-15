#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingConfigValue_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingConfigDataType_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigValue_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingConfigValue_t)
namespace Steamworks {
struct SteamNetworkingConfigValue_t_OptionValue;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingConfigValue_t;
}
namespace Steamworks {
struct SteamNetworkingConfigValue_t_OptionValue;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingConfigValue_t);
MARK_VAL_T(::Steamworks::SteamNetworkingConfigValue_t_OptionValue);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingConfigValue_t, "Steamworks", "SteamNetworkingConfigValue_t");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingConfigValue_t_OptionValue, "Steamworks", "SteamNetworkingConfigValue_t/OptionValue");
// Dependencies System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingConfigValue_t/OptionValue
struct CORDL_TYPE SteamNetworkingConfigValue_t_OptionValue {
public:
// Declarations
/// @brief Field m_float, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_float, put=__cordl_internal_set_m_float)) float_t  m_float;

/// @brief Field m_functionPtr, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_functionPtr, put=__cordl_internal_set_m_functionPtr)) ::System::IntPtr  m_functionPtr;

/// @brief Field m_int32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_int32, put=__cordl_internal_set_m_int32)) int32_t  m_int32;

/// @brief Field m_int64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_int64, put=__cordl_internal_set_m_int64)) int64_t  m_int64;

/// @brief Field m_string, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_string, put=__cordl_internal_set_m_string)) ::System::IntPtr  m_string;

constexpr float_t const& __cordl_internal_get_m_float() const;

constexpr float_t& __cordl_internal_get_m_float() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_functionPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_functionPtr() ;

constexpr int32_t const& __cordl_internal_get_m_int32() const;

constexpr int32_t& __cordl_internal_get_m_int32() ;

constexpr int64_t const& __cordl_internal_get_m_int64() const;

constexpr int64_t& __cordl_internal_get_m_int64() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_string() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_string() ;

constexpr void __cordl_internal_set_m_float(float_t  value) ;

constexpr void __cordl_internal_set_m_functionPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_int32(int32_t  value) ;

constexpr void __cordl_internal_set_m_int64(int64_t  value) ;

constexpr void __cordl_internal_set_m_string(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingConfigValue_t_OptionValue() ;

// Ctor Parameters [CppParam { name: "m_int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_int64", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_float", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_string", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_functionPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SteamNetworkingConfigValue_t_OptionValue(int32_t  m_int32, int64_t  m_int64, float_t  m_float, ::System::IntPtr  m_string, ::System::IntPtr  m_functionPtr) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_int32_padding[0x0];
/// @brief Field m_int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_int32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_int32_padding_forAlignment[0x0];
/// @brief Field m_int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_int32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_int64_padding[0x0];
/// @brief Field m_int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_int64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_int64_padding_forAlignment[0x0];
/// @brief Field m_int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_int64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_float_padding[0x0];
/// @brief Field m_float, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_float;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_float_padding_forAlignment[0x0];
/// @brief Field m_float, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_float_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_string_padding[0x0];
/// @brief Field m_string, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_string;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_string_padding_forAlignment[0x0];
/// @brief Field m_string, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_string_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_functionPtr_padding[0x0];
/// @brief Field m_functionPtr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_functionPtr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_functionPtr_padding_forAlignment[0x0];
/// @brief Field m_functionPtr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_functionPtr_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamNetworkingConfigValue_t_OptionValue) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.ESteamNetworkingConfigDataType, Steamworks.ESteamNetworkingConfigValue, Steamworks.SteamNetworkingConfigValue_t::OptionValue
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingConfigValue_t
struct CORDL_TYPE SteamNetworkingConfigValue_t {
public:
// Declarations
using OptionValue = ::Steamworks::SteamNetworkingConfigValue_t_OptionValue;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingConfigValue_t() ;

// Ctor Parameters [CppParam { name: "m_eValue", ty: "::Steamworks::ESteamNetworkingConfigValue", modifiers: "", def_value: None }, CppParam { name: "m_eDataType", ty: "::Steamworks::ESteamNetworkingConfigDataType", modifiers: "", def_value: None }, CppParam { name: "m_val", ty: "::Steamworks::SteamNetworkingConfigValue_t_OptionValue", modifiers: "", def_value: None }]
constexpr SteamNetworkingConfigValue_t(::Steamworks::ESteamNetworkingConfigValue  m_eValue, ::Steamworks::ESteamNetworkingConfigDataType  m_eDataType, ::Steamworks::SteamNetworkingConfigValue_t_OptionValue  m_val) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_eValue, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingConfigValue  m_eValue;

/// @brief Field m_eDataType, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingConfigDataType  m_eDataType;

/// @brief Field m_val, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::SteamNetworkingConfigValue_t_OptionValue  m_val;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingConfigValue_t, m_eValue) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingConfigValue_t, m_eDataType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingConfigValue_t, m_val) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingConfigValue_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
