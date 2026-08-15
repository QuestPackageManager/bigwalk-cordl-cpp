#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValueInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__QuatInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3fInternal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventParamPairParamValueInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPairParamValue;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPairParamValueInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal, "Epic.OnlineServices.AntiCheatCommon", "LogEventParamPairParamValueInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.QuatInternal, Epic.OnlineServices.AntiCheatCommon.Vec3fInternal, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventParamPairParamValueInternal
struct CORDL_TYPE LogEventParamPairParamValueInternal {
public:
// Declarations
/// @brief Field m_ClientHandle, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClientHandle, put=__cordl_internal_set_m_ClientHandle)) ::System::IntPtr  m_ClientHandle;

/// @brief Field m_Float, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Float, put=__cordl_internal_set_m_Float)) float_t  m_Float;

/// @brief Field m_Int32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Int32, put=__cordl_internal_set_m_Int32)) int32_t  m_Int32;

/// @brief Field m_Int64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Int64, put=__cordl_internal_set_m_Int64)) int64_t  m_Int64;

/// @brief Field m_Quat, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Quat, put=__cordl_internal_set_m_Quat)) ::Epic::OnlineServices::AntiCheatCommon::QuatInternal  m_Quat;

/// @brief Field m_String, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_String, put=__cordl_internal_set_m_String)) ::System::IntPtr  m_String;

/// @brief Field m_UInt32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UInt32, put=__cordl_internal_set_m_UInt32)) uint32_t  m_UInt32;

/// @brief Field m_UInt64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UInt64, put=__cordl_internal_set_m_UInt64)) uint64_t  m_UInt64;

/// @brief Field m_Vec3f, offset 0x0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Vec3f, put=__cordl_internal_set_m_Vec3f)) ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  m_Vec3f;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180524d10, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524d50, size 0x140, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>  other) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_ClientHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_ClientHandle() ;

constexpr float_t const& __cordl_internal_get_m_Float() const;

constexpr float_t& __cordl_internal_get_m_Float() ;

constexpr int32_t const& __cordl_internal_get_m_Int32() const;

constexpr int32_t& __cordl_internal_get_m_Int32() ;

constexpr int64_t const& __cordl_internal_get_m_Int64() const;

constexpr int64_t& __cordl_internal_get_m_Int64() ;

constexpr ::Epic::OnlineServices::AntiCheatCommon::QuatInternal const& __cordl_internal_get_m_Quat() const;

constexpr ::Epic::OnlineServices::AntiCheatCommon::QuatInternal& __cordl_internal_get_m_Quat() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_String() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_String() ;

constexpr uint32_t const& __cordl_internal_get_m_UInt32() const;

constexpr uint32_t& __cordl_internal_get_m_UInt32() ;

constexpr uint64_t const& __cordl_internal_get_m_UInt64() const;

constexpr uint64_t& __cordl_internal_get_m_UInt64() ;

constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal const& __cordl_internal_get_m_Vec3f() const;

constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal& __cordl_internal_get_m_Vec3f() ;

constexpr void __cordl_internal_set_m_ClientHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_Float(float_t  value) ;

constexpr void __cordl_internal_set_m_Int32(int32_t  value) ;

constexpr void __cordl_internal_set_m_Int64(int64_t  value) ;

constexpr void __cordl_internal_set_m_Quat(::Epic::OnlineServices::AntiCheatCommon::QuatInternal  value) ;

constexpr void __cordl_internal_set_m_String(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_UInt32(uint32_t  value) ;

constexpr void __cordl_internal_set_m_UInt64(uint64_t  value) ;

constexpr void __cordl_internal_set_m_Vec3f(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  value) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventParamPairParamValueInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_String", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UInt32", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UInt64", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Int64", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_Vec3f", ty: "::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal", modifiers: "", def_value: None }, CppParam { name: "m_Quat", ty: "::Epic::OnlineServices::AntiCheatCommon::QuatInternal", modifiers: "", def_value: None }, CppParam { name: "m_Float", ty: "float_t", modifiers: "", def_value: None }]
constexpr LogEventParamPairParamValueInternal(::System::IntPtr  m_ClientHandle, ::System::IntPtr  m_String, uint32_t  m_UInt32, int32_t  m_Int32, uint64_t  m_UInt64, int64_t  m_Int64, ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  m_Vec3f, ::Epic::OnlineServices::AntiCheatCommon::QuatInternal  m_Quat, float_t  m_Float) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_ClientHandle_padding[0x0];
/// @brief Field m_ClientHandle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_ClientHandle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_ClientHandle_padding_forAlignment[0x0];
/// @brief Field m_ClientHandle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_ClientHandle_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_String_padding[0x0];
/// @brief Field m_String, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_String;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_String_padding_forAlignment[0x0];
/// @brief Field m_String, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_String_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_UInt32_padding[0x0];
/// @brief Field m_UInt32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___m_UInt32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_UInt32_padding_forAlignment[0x0];
/// @brief Field m_UInt32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___m_UInt32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Int32_padding[0x0];
/// @brief Field m_Int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_Int32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Int32_padding_forAlignment[0x0];
/// @brief Field m_Int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_Int32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_UInt64_padding[0x0];
/// @brief Field m_UInt64, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_UInt64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_UInt64_padding_forAlignment[0x0];
/// @brief Field m_UInt64, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_UInt64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Int64_padding[0x0];
/// @brief Field m_Int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_Int64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Int64_padding_forAlignment[0x0];
/// @brief Field m_Int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_Int64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Vec3f_padding[0x0];
/// @brief Field m_Vec3f, offset: 0x0, size: 0xc, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  ___m_Vec3f;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Vec3f_padding_forAlignment[0x0];
/// @brief Field m_Vec3f, offset: 0x0, size: 0xc, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  ___m_Vec3f_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Quat_padding[0x0];
/// @brief Field m_Quat, offset: 0x0, size: 0x10, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::QuatInternal  ___m_Quat;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Quat_padding_forAlignment[0x0];
/// @brief Field m_Quat, offset: 0x0, size: 0x10, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::QuatInternal  ___m_Quat_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Float_padding[0x0];
/// @brief Field m_Float, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_Float;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Float_padding_forAlignment[0x0];
/// @brief Field m_Float, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_Float_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
